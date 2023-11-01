#include <iostream>

using namespace std;

int main() {

   // Ré-écrire le code suivant avec do ... while
   {
      int n = 10;
      for(int i = 0; i < n; ++i) {
         cout << i << endl;
      }
      int i = 2;
   }

   {
      int n = 10;
      if(int i = 0; i < n)
         do {
            cout << i << endl;
         } while (++i < n);
   }

   // Ré-écrire le code suivant avec switch

   int n = 2;

   {
      if(n < 2 or n >= 6)
         cout << "C";
      else if(n <= 3)
         cout << "A";
      else
         cout << "B";
   }

   {
      switch(n) {
         default: cout << "C"; break;

         case 2:
         case 3: cout << "A"; break;

         case 4:
         case 5: cout << "B"; break;
      }
   }
}