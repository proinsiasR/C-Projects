// C++ program to implement Luhn algorithm
#include <bits/stdc++.h>
using namespace std;

// Returns true if given card number is valid
bool checkLuhn(const string& cardNo)
{
  int len = cardNo.length();

  int nSum = 0, isSecond = false;
  for (int i = len - 1; i >= 0; i--) {

    int d = cardNo[i] - '0';

    if (isSecond == true)
      d = d * 2;

    
    nSum += d / 10;
    nSum += d % 10;

    isSecond = !isSecond;
  }
  return (nSum % 10 == 0);
}


int main()
{
  string cardNo;
  cout << "This will use the Luhn Algorithm to check a credit card number. \nEnter card number or type 'exit' to quit: " << endl;
  cin >> cardNo;
  if(cardNo == "exit");
  else if (checkLuhn(cardNo))
    printf("This is a valid card");
  else
    printf("This is not a valid card");
  return 0;
}
