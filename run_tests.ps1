# run_tests.ps1 - run programs using the sample inputs and save outputs
# Run this from project root: .\run_tests.ps1

# create outputs dir if missing
New-Item -ItemType Directory -Path .\tests\outputs -Force | Out-Null

Write-Host "Running factorial..."
.\factorial\factorial.exe < .\tests\inputs\factorial_input.txt > .\tests\outputs\factorial_output.txt
Write-Host "Running sum_ap..."
.\sum_ap\sum_ap.exe < .\tests\inputs\sum_ap_input.txt > .\tests\outputs\sum_ap_output.txt
Write-Host "Running fibonacci..."
.\fibonacci\fibonacci_recursive.exe < .\tests\inputs\fib_input.txt > .\tests\outputs\fib_output.txt

Write-Host "All tests finished. Outputs are in tests\outputs"
