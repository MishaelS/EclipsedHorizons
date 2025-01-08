@echo off
REM Set environment variables
set PROJECT_DIR=C:\Dev\projectsCpp\EclipsedHorizons
set BUILD_DIR=%PROJECT_DIR%\build
set BIN_DIR=%PROJECT_DIR%\build\bin
set MINGW_MAKE_PATH=%PROJECT_DIR%\lib\mingw64\bin\mingw32-make.exe

REM Check if the build folder exists, if not — create it
if not exist "%BUILD_DIR%" (
    echo Creating build folder...
    mkdir "%BUILD_DIR%"
)

REM Navigate to the build folder
cd "%BUILD_DIR%"

REM Run CMake to configure the project
echo Running CMake...
cmake -G "MinGW Makefiles" -DCMAKE_MAKE_PROGRAM="C:/Dev/projectsCpp/EclipsedHorizons/lib/mingw64/bin/mingw32-make.exe" ..

REM Check if the configuration was successful
if %errorlevel% neq 0 (
    echo Error during CMake configuration.
    pause
    exit /b 1
)

REM Build the project
echo Building the project...
cmake --build .

REM Check if the build was successful
if %errorlevel% neq 0 (
    echo Error during project build.
    pause
    exit /b 1
)

REM Create the bin folder if it doesn't exist
if not exist "%BIN_DIR%" (
    echo Creating bin folder...
    mkdir "%BIN_DIR%"
)

REM Copy necessary DLL files to the bin folder
echo Copying DLL files...
copy "%PROJECT_DIR%\lib\raylib-5.5_win64_mingw-w64\lib\raylib.dll" "%BIN_DIR%"
copy "%PROJECT_DIR%\lib\mingw64\bin\libgcc_s_seh-1.dll" "%BIN_DIR%"
copy "%PROJECT_DIR%\lib\mingw64\bin\libstdc++-6.dll" "%BIN_DIR%"
copy "%PROJECT_DIR%\lib\mingw64\bin\libwinpthread-1.dll" "%BIN_DIR%"

echo Build completed. The executable and DLL files are in the bin folder.

REM Run the executable
echo Launching the project...
"%BIN_DIR%\EclipsedHorizons.exe"

pause