import os
import shutil
import subprocess
import sys

# Пути к папкам (относительные пути)
project_dir = os.path.dirname(os.path.abspath(__file__))  # Корневая директория проекта
build_dir = os.path.join(project_dir, "build")            # Папка для сборки
bin_dir = os.path.join(project_dir, "bin")                # Папка для исполняемого файла
raylib_dll_path = os.path.join(project_dir, "lib", "raylib-5.5_win64_mingw-w64", "lib", "raylib.dll")  # Путь к raylib.dll
mingw_dll_path = os.path.join(project_dir, "lib", "mingw64", "bin")  # Путь к DLL файлам MinGW
mingw_make_path = os.path.join(project_dir, "lib", "mingw64", "bin", "mingw32-make.exe")  # Путь к mingw32-make.exe

# Проверка существования необходимых DLL файлов
required_dlls = [
    (raylib_dll_path, "raylib.dll"),
    (os.path.join(mingw_dll_path, "libgcc_s_seh-1.dll"), "libgcc_s_seh-1.dll"),
    (os.path.join(mingw_dll_path, "libstdc++-6.dll"), "libstdc++-6.dll"),
    (os.path.join(mingw_dll_path, "libwinpthread-1.dll"), "libwinpthread-1.dll"),
]

missing_dlls = [dll_name for dll_path, dll_name in required_dlls if not os.path.exists(dll_path)]
if missing_dlls:
    print(f"Ошибка: следующие DLL файлы не найдены: {', '.join(missing_dlls)}")
    sys.exit(1)

# Создаем папку build, если её нет
if not os.path.exists(build_dir):
    os.makedirs(build_dir)

# Переходим в папку build
os.chdir(build_dir)

# Запускаем CMake с указанием генератора и пути к mingw32-make.exe
cmake_command = [
    "cmake",
    "-G", "MinGW Makefiles",  # Указываем генератор
    "-DCMAKE_MAKE_PROGRAM=" + mingw_make_path,  # Указываем путь к mingw32-make.exe
    ".."
]
try:
    subprocess.run(cmake_command, check=True)
except subprocess.CalledProcessError as e:
    print(f"Ошибка при запуске CMake: {e}")
    sys.exit(1)

# Собираем проект
try:
    subprocess.run(["cmake", "--build", "."], check=True)
except subprocess.CalledProcessError as e:
    print(f"Ошибка при сборке проекта: {e}")
    sys.exit(1)

# Создаем папку bin, если её нет
if not os.path.exists(bin_dir):
    os.makedirs(bin_dir)

# Копируем необходимые DLL файлы в папку bin
for dll_path, dll_name in required_dlls:
    shutil.copy(dll_path, bin_dir)
    print(f"Скопирован файл: {dll_name} в папку bin.")

print("Сборка завершена. Исполняемый файл и DLL находятся в папке bin.")