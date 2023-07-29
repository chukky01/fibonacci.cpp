#include <iostream>
using namespace std;

int main()
{
    //begin by the setting first value a to zero, the second value b to 1. Initialize the n and the result without giving them any values
  int a = 0;
  int b = 1;
  int n, result;

  //We need to loop through, from i to n i.e the value you just entered. i should not exceed n
  cout << "Enter a number: ";
  cin >> n;

    //Print the result of the number entered, where result is the sum of the first 2 numbers and a is set to be
    //The process is repeated till n is reached
  for (int i = 1; i <=n; i++)
  {
      cout << a << endl;
      result = a + b;
      a = b;
      b= result;
  }
}
