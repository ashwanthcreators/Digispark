# Set the paths for the source and destination files
$SourceFile = Join-Path $env:TEMP 'startup.bat'
$DestinationFolder = [System.IO.Path]::Combine($env:APPDATA, 'Microsoft\Windows\Start Menu\Programs\Startup')
$DestinationFile = Join-Path $DestinationFolder 'startup.bat'

# Check if the destination folder exists, and create it if not
if (-not (Test-Path -Path $DestinationFolder -PathType Container)) {
    New-Item -ItemType Directory -Force -Path $DestinationFolder
}

# Copy the file to the startup folder
Copy-Item -Path $SourceFile -Destination $DestinationFile -Force

# Display a confirmation message
Write-Host "startup.bat copied to the Startup folder successfully."
