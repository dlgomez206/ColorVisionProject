# Color Clash Checker

## Description

**version 1.0**

This program asks the user to input numbers that are tied to a color.
There are 9 colors to choose from and between those colors are the
most common types of color clashes. With the users input it goes through
and checks to see if it matches with any of the common ones. If it does then
it ouputs what the colors they chose were and what alternate colors they can use.
If it doesn't find any, then the prorgram says so and ends.


## Developer

Donny Gomez

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Inputs:

Donny Martinez
1
2
4
6
7

Output:

Welcome to the Color Clash Checker(CCC).
We get input on colors you have difficulty seeing and then compute if the colors clash.
Then recommened different colors based on your specific clash.
To get started please enter your name:
Donny Martinez

Hello Donny Martinez. What colors do you struggle to see, choose 5.
Red(1) Orange(2) Yellow(3) Green(4) Blue(5)
Purple(6) Black(7) White(8) Grey(9) NA(10)
If it's less than 5, type in '10'
1

Red(1) Orange(2) Yellow(3) Green(4) Blue(5)
Purple(6) Black(7) White(8) Grey(9) NA(10)
If it's less than 5, type in '10'
2

Red(1) Orange(2) Yellow(3) Green(4) Blue(5)
Purple(6) Black(7) White(8) Grey(9) NA(10)
If it's less than 5, type in '10'
4

Red(1) Orange(2) Yellow(3) Green(4) Blue(5)
Purple(6) Black(7) White(8) Grey(9) NA(10)
If it's less than 5, type in '10'
6

Red(1) Orange(2) Yellow(3) Green(4) Blue(5)
Purple(6) Black(7) White(8) Grey(9) NA(10)
If it's less than 5, type in '10'
7

Red and Green clash, you could use a Blue and Yellow or Orange and Navy Blue.
Purple and Black clash, you could use a Lavender and Black or Deep Purple and White.

Thank you for using CCC. Try your new alternative colors next time you need to.
```