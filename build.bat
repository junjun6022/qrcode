@echo off
set SRC_DIR=release
set DST_DIR=win32

make -f Makefile.win32 && for /F %%i in (list.txt) do (copy %SRC_DIR%\%%i %DST_DIR%\lib\ /y) && for /F %%i in (incluelist.txt) do (copy %%i %DST_DIR%\include\ /y)
