#include<iostream>

int main() {

  double earthWeight, otherWeight;
  int planetNum;

  std::cout << "What is your earth Weight in kgs?: ";
  std::cin >> earthWeight;

  std::cout << "Enter the number of Planet you want to fight on: ";
  std::cin >> planetNum;

  switch (planetNum) {
  case 1:
    //Mercury, relative gravity 0.38
    otherWeight = earthWeight * 0.38;
    std::cout << "Weight on Mercury in kgs : " << otherWeight << "\n";
    break;
  case 2:
    //Venus, relative gravity 0.91
    otherWeight = earthWeight * 0.91;
    std::cout << "Weight on Venus in kgs: " << otherWeight << "\n";
    break;
  case 3:
    //Mars, relative gravity  0.38
    otherWeight = earthWeight * 0.38;
     std::cout << "Weight on Mars in kgs: " << otherWeight << "\n";
    break;
  case 4:
    //Jupiter, relative gravity 2.34
    otherWeight = earthWeight * 2.34;
    std::cout << "Weight on Jupiter in kgs: " << otherWeight << "\n";
    break;
  case 5:
    //Saturn, relative gravity  1.06
    otherWeight = earthWeight * 1.06;
    std::cout << "Weight on Saturn in kgs: " << otherWeight << "\n";
    break;
  case 6:
    //Uranus, relative gravity  0.92
     otherWeight = earthWeight * 0.92;
    std::cout << "Weight on Uranus in kgs: " << otherWeight << "\n";
    break;
  case 7:
    //Neptune, relative gravity 1.19
    otherWeight = earthWeight * 1.19;
    std::cout << "Weight on Neptune in kgs: " << otherWeight << "\n";
    break;

  }

  return 0;

}
