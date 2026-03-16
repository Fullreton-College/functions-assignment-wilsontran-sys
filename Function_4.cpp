#include <iostream>
using namespace std;

//define necessary functions
bool getInput(int& amount);
void computeCoins(int coinValue, int& num, int& amountLeft);
void output(int amount);


int main()
{
  int amount;
  bool keepLooping;

  cout << "---------- Coin Change Calculator ----------" << endl;

  keepLooping = getInput(amount);

  while(keepLooping)
  {
    if(amount >= 1 && amount <= 99)
      output(amount);
    
    keepLooping = getInput(amount);
  }

  cout << "Stopped." << endl;

  return 0;
}

//implement functions
bool getInput(int& amount)
{
  cout << "Enter an amount in cents (1-99), or -1 to quit): ";
  cin >> amount;

  if(amount == -1)
    return false;

  if(amount < -1 || amount > 99)
  {
    cout << "Invalid input. Please enter an integer between 1-99, or -1 to quit: ";
    return true;
  }

  return true;
}

void computeCoins(int coinValue, int& num, int& amountLeft)
{
  num = amountLeft / coinValue;
  amountLeft = amountLeft % coinValue;
}


void output(int amount)
{
  int quarters, dimes, pennies;
  int amountLeft = amount;

  computeCoins(25, quarters, amountLeft);
  computeCoins(10, dimes, amountLeft);
  computeCoins(1, pennies, amountLeft);

  cout << amount << " cents can be given as: ";

  if(quarters > 0)
    cout << quarters << " quarter(s) ";
  if(dimes > 0)
    cout << dimes << " dime(s) ";
  if(pennies > 0)
    cout << pennies << " penny(pennies)";

  cout << endl << endl;
}