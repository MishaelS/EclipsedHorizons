# Минимальная требуемая версия CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта
project(EclipsedHorizons)

include(toolchain.cmake)

# Указываем путь к заголовочным файлам
include_directories(${PROJECT_SOURCE_DIR}/include)  # Папка include
include_directories(${PROJECT_SOURCE_DIR}/src)      # Включаем src для доступа к src/core


# Указываем путь к заголовочным файлам FastNoiseLite
include_directories(${PROJECT_SOURCE_DIR}/lib/FastNoiseLite/Cpp)
# Указываем путь к заголовочным файлам nlohmann/json
include_directories(${PROJECT_SOURCE_DIR}/lib/json)


# Указываем путь к Raylib
include_directories(${RAYLIB_PATH}/include)
link_directories(${RAYLIB_PATH}/lib)

# Добавляем все исходные файлы из папки src
file(GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

# Собираю raylib
add_subdirectory(${RAYLIB_PATH})

# Добавляем исполняемый файл
add_executable(EclipsedHorizons ${SOURCES})


# Подключаем Raylib и её зависимости
if(MSYS)
    target_link_libraries(EclipsedHorizons raylib opengl32 gdi32 winmm)
else()
    target_link_libraries(EclipsedHorizons raylib)
endif()
