# MultiCalculator++

This is a command line calculator for Windows 10. I made it for my personal use for easy and fast accessible calculations during my own software projects and practises.

## Getting started

1. Open Windows PowerShell:
	* Press __Shift + Right Mouse Button__ in the folder and then __Open PowerShell Here__
	* Press __Windows + R__ and enter __powershell__
2. Go to the directory with the binary (Easy with the first method)
3. Enter __.\MultiCalculator++.exe command argument1 argument2__ or __.\MultiCalculator++ command argument1 argument2__

## Listing of all commands

- Addition:                   -add number1 number2
- Calculate n days to a date: -addDTD day month year daysToAdd

## General command format

MultiCalculator++ <Command> <Argument1> <Argument2> <Argument3> <Argument4>

argv[0]: MultiCalculator++
argv[1]: <Command>
argv[2]: <Argument1>
argv[3]: <Argument2>
argv[4]: <Argument3>
argv[5]: <Argument4>
