cmake_minimum_required(VERSION 3.10)

project(EclipsedHorizons)
include(toolchain.cmake)

# Указываем выходные директории
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Указываем путь к заголовочным файлам
include_directories(${PROJECT_SOURCE_DIR}/source)
include_directories(${PROJECT_SOURCE_DIR}/lib/FastNoiseLite/Cpp)
include_directories(${PROJECT_SOURCE_DIR}/lib)

# Проверка наличия Raylib
if(NOT EXISTS ${RAYLIB_PATH})
	message(FATAL_ERROR "Raylib path is not set correctly: ${RAYLIB_PATH}")
endif()

# Проверка наличия FastNoiseLite и nlohmann/json
if(NOT EXISTS ${PROJECT_SOURCE_DIR}/lib/FastNoiseLite/Cpp)
	message(FATAL_ERROR "FastNoiseLite path is not set correctly: ${PROJECT_SOURCE_DIR}/lib/FastNoiseLite/Cpp")
endif()

if(NOT EXISTS ${PROJECT_SOURCE_DIR}/lib/nlohmann/json.hpp)
	message(FATAL_ERROR "nlohmann/json path is not set correctly: ${PROJECT_SOURCE_DIR}/lib/nlohmann/json.hpp")
endif()

# Собираем исходные файлы
file(GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/source/*.cpp")

# Собираем Raylib
add_subdirectory(${RAYLIB_PATH})

# Добавляем исполняемый файл
add_executable(EclipsedHorizons ${SOURCES})

# Линковка библиотек
if(WIN32)
	target_link_libraries(EclipsedHorizons raylib opengl32 gdi32 winmm)
else if(MSYS)
	target_link_libraries(EclipsedHorizons raylib opengl32 gdi32 winmm)
else()
	target_link_libraries(EclipsedHorizons raylib)
endif()