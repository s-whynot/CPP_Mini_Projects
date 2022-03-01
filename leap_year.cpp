#include <iostream>

int main() {
  int year = 0, q100, q400;

  std::cout << "What is the year? ";
  std::cin >> year;
  
  if (year >= 1000 && year <= 9999) {
    if ((year % 4) == 0) {
      std::cout << year << " is a leap year\n";
      q100 = year % 100;
      q400 = year % 400;
       
      if (q100 == 0 && q400 != 0) {
        std::cout <<"Unless...";
        std::cout << year << " is NOT a leap year\n";
      }
      else if (q400 == 0){
        std::cout << year << " is a leap year\n";
      }
    }

  }
else {
  std::cout << "Try again with a 4 digit number\n";
}

}
