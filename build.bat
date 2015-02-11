@echo off
cls

set DRIVE_LETTER=%1:
<<<<<<< HEAD
set PATH=%DRIVE_LETTER%\MinGW\bin;%DRIVE_LETTER%\MinGW\msys\1.0\bin;c:\Windows;c:\Windows\system32

g++ -I.\CSC2110 -c Password.cpp
g++ -I.\CSC2110 -c PasswordDriver.cpp

g++ -L.\CSC2110 -o  Password.exe PasswordDriver.o Password.o -lCSC2110
Password <input.txt








=======
set PATH=%DRIVE_LETTER%\MinGW\bin;%DRIVE_LETTER%\MinGW\msys\1.0\bin;%DRIVE_LETTER%\MinGW\gtkmm3\bin;%DRIVE_LETTER%\MinGW\gtk\bin;c:\Windows;c:\Windows\system32
set PROJECT_PATH=.

make DRIVE_LETTER="%DRIVE_LETTER%" PROJECT_DIR="%PROJECT_PATH%"
>>>>>>> e81b7bd5c28a292b5d91b1f987741b6cb0b8e4cf
