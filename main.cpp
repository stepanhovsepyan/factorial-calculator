#include <iostream>
using namespace std;
int main() {
  cout << "This program calculates the factorial of a given number.\n\n";
  char choice = 'y';
  do {
    int num, total = 1;
    cout << "Please enter a positive number: \n";
    cin >> num;
    if(!(isdigit(num))){
      cout << "\nNot a number\n";
      return 0;
    }
    if (num < 0){
      cout << "Invalid Input(Number must be positive)" << endl;
      continue;
    } 
    for (int i = 1; i <= num; i++){
      total = total * i;
    }
    cout << "Your total for " << num << "! is: " << total << endl;
    cout << "Would you like to try again(y/Y for Yes, any other key for no)" << endl;
    cin >> choice;
  }while(tolower(choice) == 'y');
}
