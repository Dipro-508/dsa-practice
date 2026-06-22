# build.ps1 - compile all programs (Windows)
# Run: .\build.ps1

gcc .\factorial\factorial.c -o .\factorial\factorial.exe
gcc .\sum_ap\sum_ap.c -o .\sum_ap\sum_ap.exe
gcc .\fibonacci\fibonacci_recursive.c -o .\fibonacci\fibonacci_recursive.exe

Write-Host "Build finished."
