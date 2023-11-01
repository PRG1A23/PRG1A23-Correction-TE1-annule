#include <iostream>

using namespace std;

// Ecrivez les deux fonctions nécessaires pour que le code suivant
//
// affiche
// 11! = 39916800 <= 100000000 < 479001600 = 12!

int factorielle(int n) {
   if (n <= 1 )
      return 1;
   return n * factorielle(n-1);
}

int factorielle2(int n) {
   int f = 1;
   for(int i = 2; i <= n; ++i)
      f *= i;
   return f;
}

int plus_petit_n_pour_factorielle_de_n_plus_grande_que(int m) {
   int n = 0;
   while(factorielle(n) < m)
      ++n;
   return n;
}

int plus_petit_n_pour_factorielle_de_n_plus_grande_que2(int m) {
   int f = 1;
   int i = 1;
   while(f < m) {
      f *= i;
      ++i;
   }
   return i;
}

int main() {
   const int m = 100'000'000;
   int n = plus_petit_n_pour_factorielle_de_n_plus_grande_que(m);
   cout << n - 1 << "! = " << factorielle(n - 1) << " <= " << m << " < " << factorielle(n) << " = " << n << "!";
}

