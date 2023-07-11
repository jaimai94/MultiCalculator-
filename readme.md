# MultiCalculator++
This is a command line calculator for Windows 10. I made it for my personal use 
for easy and fast accessible calculations during my own software projects and 
practises.


## Getting started
1. Open Windows PowerShell:
	* Press __Shift + Right Mouse Button__ in the folder and then __Open PowerShell Here__
	* Press __Windows + R__ and enter __powershell__
2. Go to the directory with the binary (Easy with the first method)
3. Enter __.\MultiCalculator++.exe command argument1 argument2__ or __.\MultiCalculator++ command argument1 argument2__


## List of all commands
### Listing of all fast commands:
- Addition:				-p n_1 n_2
- Add n days to a date:	-adtd day month year daystoadd

### General command format:
- Addition:				plus n_1> <n_2

### Command type differents:
You can run fast commands only one time per runtime, while you can run normal 
commands several times per runtime.


## Program command structure
MultiCalculator++ Command Argument1 Argument2 Argument3 Argument4

argv[0]: MultiCalculator++
argv[1]: Command
argv[2]: Argument1
argv[3]: Argument2
argv[4]: Argument3
argv[5]: Argument4
