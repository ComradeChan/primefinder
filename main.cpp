#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int currentNum) {
  for (int increment = 2; increment < currentNum; increment++) {
    if (currentNum % increment == 0) {
      return false;
    };
    if (increment * 2 >= currentNum) {
      return true;
    };
  };
  return true;
};

int main() {
  int currentNum;
  currentNum = 3;
  while (currentNum <= 1000000) {
    if (currentNum % 2 != 0) {
      if (isPrime(currentNum)) {
        cout << currentNum << " is prime \n"; // SHOULD print out whatever prime
                                              // number is found
      } else {
        cout << currentNum << " is nonprime \n";
      };
    } else {
      cout << currentNum << " is even \n";
    };            // prints if current number is even
    currentNum++; // increments the number when prime testing statement ends
  };
};
