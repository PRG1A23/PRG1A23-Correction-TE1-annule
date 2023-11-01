#include <iostream>

using namespace std;

void f1(int a) {
   cout << a;
   if (a == 0)
      return;
   f1(a/2);
}

void f2(int a) {
   if (a == 0)
      return;
   f2(a-1);
   cout << a;
}

void f3(int a, int& b) {
   int t = a; a = b; b = t;
}

int main() {

   {
      int cnt = 0;
      for (int i = 0; i <= 10; ++i)
         ++cnt;
      cout << cnt;
   }

   {
      int cnt = 0;
      for (int i = 600; i > 0; i /= 2)
         ++cnt;
      cout << cnt;
   }

   {
      for(int i = 0; i <= 5; ++i) {
         switch(i) {
            case 1 : cout << "A";
            case 2 : cout << "B"; break;
            case 3 : cout << "C"; continue;
            case 4 : cout << "D";
            default : cout << "E";
         }
         cout << "F" << endl;
      }
   }

   {
      f1(8);
   }

   {
      f2(5);
   }

   {
      int i = 3, j = 4;
      f3(i,j);
      cout << i << j;
   }

   {
      int i = 1;
      cout << (--i or ++i ? ++i : --i ) ;

      if(--i) {
         if (++i)
            return ++i;
         else
            return --i;
      }
      else return --i;


   }

   {
      cout << ( "Hello, " , "World" );
   }

   {
      int cnt = 0;
      for(int i = 0; i <= 5; ++i)
         for(int j = 0; j < 7; ++j)
            for(int k = 0; k < 10; k+=2)
               cnt++;
      cout << cnt;
   }

   {
      for(int i = 0; i < 10; ++i) {
         if(i % 3 == 0)
            continue;
         cout << i << " ";
         ++i;
      }
   }
}