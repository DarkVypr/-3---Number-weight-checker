#include <iostream>

using namespace std;

int main() {
  int loop = 0;
  while(loop == 0) {
    int num1, num2;
    
    // Ask the user to enter two numbers.
      
    cout << "Please enter the first number: \n";
    cin >> num1;
      
    cout << "Please enter the second number: \n";
    cin >> num2;
      
    // Check the numbers, and respond to the user appropriately.
    if(num1 > num2) {
      cout << "The number " << num1 << " is bigger than " << num2 << ".\n";
    }
    else if(num2 > num1) {
      cout << "The number " << num2 << " is bigger than " << num1 << ".\n";
    }
    else {
      cout << "The numbers " << num1 << " and " << num2 << " are equal.\n";
    }
  }
} 