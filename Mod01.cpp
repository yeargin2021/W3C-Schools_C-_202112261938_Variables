// https://www.w3schools.com/cpp/cpp_variables.asp

/*
Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

-- int - stores integers (whole numbers), without decimals, such as 123 or -123
-- double - stores floating point numbers, with decimals, such as 19.99 or -19.99
-- char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
-- string - stores text, such as "Hello World". String values are surrounded by double quotes
-- bool - stores values with two states: true or false
*/

#include <iostream>

using namespace std;

int main(){
  int myNum = 51;
  cout << myNum;
  cout << "\n";
  int myNum01;
  myNum01 = 1970;
  cout << myNum01;
  cout << "\n";

// ...if you assign a new value to an existing variable, it will overwrite the previous value...

  int myNum02 = 2021;
  myNum02 = 2022;
  cout << myNum02;
  cout << "\n";

  cout << "My age is " << myNum << ".\n";

  int Num5 = 5, Num6 = 6;
  cout << "5 + 6 = " << Num5 + Num6 << "\n";

  return 0;
}
