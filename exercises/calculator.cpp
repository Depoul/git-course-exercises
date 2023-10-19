/*
  Write a program that given two numbers as input make the main operations.

  Output:
  Insert first number: 4
  Insert second number: 2

  SUM: 6
  Difference: 2
  Multiplication: 8
  Division: 2
*/

#include <iostream>
using namespace std;

float operations(){

  float a,b;
  cout << "Insert the first number: ";
  cin >> a;
  cout << endl << "Insert second number: ";
  cin >> b;

  int op;
  float result;
  while(true){
    cout << endl << "Select the operation: " << endl << "1) SUM" << endl << "2)Difference" << endl << "3)Multiplication" << endl << "4)Division" << endl;
    cin >> op;
    if(op <1 || op >4)
      cerr << "Wrong choice, please select a valid operation number [1-4]" << endl;
    else if(op == 4 && b == 0)
      cerr << "Can't divide a number for 0, please select another operation" << endl;
    else
      break;
  }

  switch(op){
    case 1:
      cout << endl << "SUM = ";
      result = a + b;
      break;
    case 2:
      cout << endl << "Difference = ";
      result = a - b;
      break;
    case 3:
      cout << endl << "Multiplication = ";
      result = a * b;
      break;
    case 4:
      cout << endl << "Division = ";
      result = a / b;
      break;
  }
  return result;
}

int main(){

  cout << operations() << endl << endl;

}