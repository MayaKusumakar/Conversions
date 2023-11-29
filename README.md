# Conversions
# Problem
In this program you will be converting measurements from one unit to another.

## Temperature:
From Fahrenheit, Celsius, or Kelvin
To: Farenheit, Celsius, or Kelvin

## Distance: 
From: Inches, Feet, Yards, or Miles
To: Inches, Feet, Yards, or Miles

## Requirements
Users should be able to enter both upper and lower case letters for units
Any amount of white space should be allowed before or between inputs on a line. A newline must come immediately after desired input on a line.
Your program must have at least FOUR other functions besides main
General
There must be a comment at the top of your program describing what it does
Each function in your program must have a comment
Describing what the function does
Describing the meaning of each parameter
Describing what the function returns
Print all floats to 2 decimal points unless stated otherwise
## Restrictions
No global variables may be used
Assumptions
Input will NOT always be valid
If invalid input is received, your program should report it and terminate
## Input Errors
There are 3 main categories of errors: format, unknown conversion type, invalid unit.

Format errors occur when the format of the input is correct. For example if asked the user for a temperature and they input "frogs" or "25 Cats", then a format error would occur. When a format error occurs you should print Invalid formatting. Ending program. and end the program.

An unknown conversion type occurs when asking the user if they want to convert either temperatures or distance and they enter a single character that is something other than 't', 'T', 'd', or 'D'. In these cases you should print Unknown conversion type user_input chosen. Ending program. where user_input is the letter the user entered and quit end the program.

Invalid unit errors occur when asking the user what temperature/distance they want to convert from/to and they enter an unit aside from the ones specified. In these cases you should print user_input is not a valid t_d type. Ending program. and end the program. user_input is what the user entered and t_d is either temperature or distance depending on the type of conversion that was entered. For example, if we were converting temperatures and the user entered "42G" you would print G is not a valid temperature type. Ending program.

# Examples

## Example 1
Pick the type of conversion that you would like to do.

T or t for temperature

D or d for distance

Enter your choice: t

Enter the temperature followed by its suffix (F, C, or K): 0K

Enter the new unit type (F, C, or K): C

0.00K is -273.15C

## Example 2
Pick the type of conversion that you would like to do.

T or t for temperature

D or d for distance

Enter your choice: d

Enter the distance followed by its suffix (I,F,Y,M): 5 y

Enter the new unit type (I,F,Y,M): i

5.00Y is 180.00I

## Example 3
Pick the type of conversion that you would like to do.

T or t for temperature

D or d for distance

Enter your choice: J

Unknown conversion type J chosen. Ending program.

## Example 4
Pick the type of conversion that you would like to do.

T or t for temperature

D or d for distance

Enter your choice: 10

Invalid formatting. Ending program.

## Example 5
Pick the type of conversion that you would like to do.

T or t for temperature

D or d for distance

Enter your choice: t

Enter the temperature followed by its suffix (F, C, or K): 42 G

G is not a valid temperature type. Ending program.

## Example 6
Pick the type of conversion that you would like to do.

T or t for temperature

D or d for distance

Enter your choice: t

Enter the temperature followed by its suffix (F, C, or K): 420 Blaze It

Invalid formatting. Ending program.
