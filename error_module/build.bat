@echo off
setlocal enabledelayedexpansion

echo Current directory: %cd%

set "INC_FILE="
for %%f in (.inc .INC) do if exist "%%f" set "INC_FILE=%%f"

set "inc="

if defined INC_FILE (
    echo Found %INC_FILE%
    for /F "usebackq tokens=* delims=" %%a in ("%INC_FILE%") do (
        echo Adding dependency: %%a
        set "inc=!inc! ..\%%a_module\build_windows\l%%a.o"
    )
) else (
    echo No .inc file found
)

echo Running build scripts for %1
echo Link flags: !inc!

gcc -c -o .\build_windows\l%1.o .\%1.c -DCALCDLL_EXPORTS -I..\includes -I..\error_module
gcc -o .\build_windows\l%1.dll .\build_windows\l%1.o !inc! -s -shared

echo Build finished
endlocal