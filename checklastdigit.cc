
// C++ program to find check digit using Lunn Algorithm
#include <bits/stdc++.h>
using namespace std;

int checkDigit(const string& cardNo)
{
  int len = cardNo.length();

  int nSum = 0, isSecond = true;
  for (int i = len - 1; i >= 0; i--) {

    int d = cardNo[i] - '0';

    if (isSecond == true)
      d = d * 2;

    nSum += d / 10;
    nSum += d % 10;

    isSecond = !isSecond;
  }
  int lastDigit = ((int)10 -(nSum%10));
  return lastDigit;
}

// Take input and run it through checkDigit
int main()
{
  string cardNo;
  cout << "This will use the Luhn Algorithm to check the last digit of a credit card number. \nEnter card number or type 'exit' to quit: " << endl;
  cin >> cardNo;
  if(cardNo == "exit");
  else
    cout << checkDigit(cardNo) << endl;
  return 0;
}
