# Credit-Card-Checker

This is a program to validate credit card numbers for Visa, American Express or Mastercard credit cards.
It checks the length by running a loop that repeatedly divides it by 10 until we have 0.
It is an implementation of the Luhn algorithm which involves multiplying every other digit by 2 starting from the second to last digit, getting the sum of these numbers, then adding the sum of the non-multiplied numbers. 
If the result is able to be divided by 10 (i.e mod10 == 0), then the check is valid.

The program will first apply the length check, if that is valid then it will check if the first two digits align with the type of card with the specified length, then proceed with Luhn's Algorithm to check if the number satisfies the conditions.
