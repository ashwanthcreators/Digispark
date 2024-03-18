# Define paths
$sourcePath = "$env:Temp\startup.bat"
$destinationPath = "$env:APPDATA\Microsoft\Windows\Start Menu\Programs\Startup\startup.bat"

# Check if the source file exists
if (Test-Path $sourcePath) {
    # Check if the destination file already exists, if so, remove it
    if (Test-Path $destinationPath) {
        Remove-Item $destinationPath -Force
    }
    # Move the source file to the destination folder
    Move-Item -Path $sourcePath -Destination $destinationPath
    Write-Host "startup.bat moved successfully to startup folder."
} else {
    Write-Host "startup.bat not found in temp directory."
}
