@echo off

@if not "%MINGW_ROOT%" == "" (@set "PATH=%PATH%;%MINGW_ROOT%")

cd .

if "%1"=="" ("D:\software\MATLAB~2\bin\win64\gmake"  -f FeatureData_FeatureIdentify_rtw.mk all) else ("D:\software\MATLAB~2\bin\win64\gmake"  -f FeatureData_FeatureIdentify_rtw.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
