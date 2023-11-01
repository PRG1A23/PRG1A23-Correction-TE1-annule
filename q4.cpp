#include <iostream>

using namespace std;

// Ecrivez la fonction premier_e qui retourne le premier caractère 'e' de la chaine reçue en paramètre ou le dernier caractère de cette chaine si elle ne contient pas de 'e', de sorte que le code suivant
// affiche
//
// HXllo
// abracadabrX

char& premier_e(string& s) {
   for(char& c : s) {
      if (c == 'e')
         return c;
   }
   // ou
   for(size_t i = 0; i = s.size(); ++i)
      if(s[i] == 'e')
         return s[i];

   return s[s.size()-1];
}

int main() {
   string s = "Hello";
   char& c = premier_e(s);
   c = 'X';
   cout << s << endl;
   string s2 = "abracadabra";
   premier_e(s2) = 'X';
   cout << s2 << endl;
}
