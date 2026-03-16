#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
string CoinFlip()
{
   if(rand() % 2 == 1)
   {
      return "Heads";
   }
   else
   {
      return "Tails";
   }
}

int main() {
   // Add more variables as needed
   int numFlips;
   
   srand(2);  // Unique seed

   /* Type your code here */
   cout << "Enter the number of times to flip a coin: ";
   cin >> numFlips;

   for(int i = 0; i < numFlips; i++)
   {
      if(i > 0)
      {
         cout << " ";
      }
      cout << CoinFlip();
   }
   cout << endl;

   return 0;
}
