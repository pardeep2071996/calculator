#include <iostream>
using namespace std;

int main() {
  int choice;
  cin >> choice;
  switch (choice) {
    case 1: 
      cout << "Addition\n";
      break;
    case 2:
      cout << "Subtraction\n";
      break;
    case 3:
      cout << "Division\n";
      break;
    default:
      cout << "Multiplication\n";
      break;
  }
  return 0;
}