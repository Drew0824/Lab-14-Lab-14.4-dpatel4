#include <iostream>
using namespace std;

int main() {
  const int SECRET_NUMBER = 81;
  int number;
  int guess = 0;

do
{
cout << "Try to guess the secret number." << endl;
cout << "Enter a number between 0 and 100." << endl;
cin >> number;
guess++;

if 
   (number < 0)
{
   cout << "Error: number must be between 0 and 100." << endl;
}

   if (number < 81) 
{
   cout << "The number inputted is less than the secret number." << endl;
}

   if (number == 81)
{
   cout << "You guessed it, you picked the secret number!" << endl;
}

   if (number > 81)
{  
  cout << "The number inputted is greater than the secret number." << endl;
}

  if (number > 100)
{  
  cout << "Error: number must be between 0 and 100." << endl;
}

}
while ( number != 81 );


cout << "The number of guess it took you " << guess << endl;

}
