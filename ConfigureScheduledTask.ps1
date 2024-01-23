# PowerShell script to create a scheduled task to run defender.py at system startup

$ScriptPath = Join-Path $env:TEMP "defender.py"
$TaskName = "RunDefenderScriptAtStartup"

# Create a scheduled task action
$Action = New-ScheduledTaskAction -Execute "pythonw.exe" -Argument "`"$ScriptPath`""

# Create a trigger to run the task at system startup
$Trigger = New-ScheduledTaskTrigger -AtStartup

# Register the scheduled task
Register-ScheduledTask -Action $Action -Trigger $Trigger -TaskName $TaskName -User "NT AUTHORITY\SYSTEM" -Force
