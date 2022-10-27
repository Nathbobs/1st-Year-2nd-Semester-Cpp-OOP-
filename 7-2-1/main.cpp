#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;


int main() {
   while (1) {

      char a[100];
      cin.getline(a,100);
      if (strcmp(a, "quit") == 0) {break;}
      for (int i = 0; i < strlen(a); i++) {

         if (isupper(a[i])) {
            a[i] = (char) tolower(a[i]);
         }
         else if (islower(a[i])) {
            a[i] = (char) toupper(a[i]);
         }
      }

      reverse(a, a + strlen(a));
      cout << a << endl;
   }
   return 0;
}
