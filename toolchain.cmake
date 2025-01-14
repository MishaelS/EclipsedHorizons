#[[
    Данный файл будет служить настройкой встроенных переменных cmake
    Установка переменных будет зависеть от системы сборки и системы
]]

if(MSYS)
    set(CMAKE_C_COMPILER "C:/Dev/projectsCpp/EclipsedHorizons/lib/MinGW64/bin/gcc.exe")
    set(CMAKE_CXX_COMPILER "C:/Dev/projectsCpp/EclipsedHorizons/lib/MinGW64/bin/g++.exe")
    # Указание к директории библиотеки
endif()


set(RAYLIB_PATH ${CMAKE_SOURCE_DIR}/lib/raylib)

# Указываем стандарт языка C++ (например, C++17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Указываем директории для выходных файлов
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)  # Исполняемые файлы
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)  # Статические библиотеки
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)  # Динамические библиотеки
