#include <iostream>
using namespace std;

int main() {
  double plgrade, mtgrade, tfingrade;
  float finGrade;

  plgrade = 87.5;
  mtgrade = 90.3;
  tfingrade = 89.15;

  cout << "Enter Prelim Grade:";
  cin >> plgrade;
  cout << "Enter Midterm Grade:";
  cin >> mtgrade;
  cout << "Enter Tentative Final Grade:";
  cin >> tfingrade;

  finGrade = (plgrade + mtgrade + tfingrade) / 3;
  cout << "Your Final Grade is: \n";
  cout << "\n" << finGrade;

  return 0;
}
