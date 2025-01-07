# Минимальная требуемая версия CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта
project(EclipsedHorizons)

# Указываем путь к компилятору Mingw64
set(CMAKE_C_COMPILER "C:/Dev/projectsCpp/EclipsedHorizons/lib/mingw64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/Dev/projectsCpp/EclipsedHorizons/lib/mingw64/bin/g++.exe")

# Указываем стандарт языка C++ (например, C++17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Указываем путь к заголовочным файлам
include_directories(include)

# Указываем путь к Raylib
set(RAYLIB_PATH "C:/Dev/projectsCpp/EclipsedHorizons/lib/raylib-5.5_win64_mingw-w64")
include_directories(${RAYLIB_PATH}/include)
link_directories(${RAYLIB_PATH}/lib)

# Добавляем все исходные файлы из папки src
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Добавляем исполняемый файл
add_executable(EclipsedHorizons ${SOURCES})

# Подключаем Raylib и её зависимости
target_link_libraries(EclipsedHorizons raylib opengl32 gdi32 winmm)