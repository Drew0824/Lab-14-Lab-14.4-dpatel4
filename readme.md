# Number Guessing Game
For this assignment you will write a program that asks the user to guess a secret number. The program will compare the user's guess to the named constant SECRET_NUMBER defined towards the top of the program and provide hints if the user guesses wrong.
## Step 1
Add statements to output the following welcome message to the console:
```
Try to guess the secret number.
Enter a number between 0 and 100.
```
## Step 2
Add statements allowing the user to input a number from the keyboard.
 
## Step 3
Add statements to generate different console outputs depending on the number inputted. The goal of the game is to guess the named constant SECRET_NUMBER defined towards the top of the program and provide hints if the user guesses wrong. Do not use the numerical value SECRET_NUMBER is initialized to in your conditional statements.

- If the number inputted is less than 0 the output should be:
  `Error: number must be between 0 and 100.`
- If the number inputted is less than the named constant SECRET_NUMBER the output should be:
  `The number inputted is less than the secret number.`
- If the number inputted is equal to the named constant SECRET_NUMBER the output should be:
  `You guessed it, you picked the secret number!`
- If the number inputted is greater than the named constant SECRET_NUMBER the output should be:
  `The number inputted is greater than the secret number.`
- If the number inputted is greater than 100 the output should be:
  `Error: number must be between 0 and 100.`
## Step 4
Add a loop to the program so that it repeats until the user correctly guesses the secret number.
## Step 5
Add a counter to the program so that the program keeps a count of the number of guesses that the user makes. After the user correctly guesses the random number, the program should display the number of guesses.

