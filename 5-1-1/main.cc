#include <iostream>
#include <string>
#include "animal.h"

int main() {
  Zebra arr[10];
  for (int i = 0; i < 11; i++) {
    string a;
    int b, c;
    cin >> a;
      if (a == "0") {
      for (int z = 0; z < i; z++) {
        arr[z].printZebra();
      }
      break;
    }
    cin >> b >> c;
    Zebra Zval(a, b, c);
    arr[i] = Zval;
    if (i == 10) {
      for (int z = 0; z < i; z ++) {
        arr[z].printZebra();
      }
    }
  }
    return 0;
}
