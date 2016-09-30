#include <iostream>

using namespace std;

int main(){

  int factorial = 1; // factorial variable
  
  // loops through values from 1 to 10 and multiples them together
  for(int i = 10; i>0; i--){
    factorial *= i;
  }

  // prints out factorial and ends line
  cout << factorial << endl;
  return 0; // exit program

}
