#include <iostream>
#include <string>
#include "group01.h"

using namespace std;

int main() {
  cout << "Adventure Game\n";
  cout << "By Dan Ellingson, Darwin Ruiz,\nConnor Kurland and Colleen\n";

  Hero h = {10, 10, false};
  string stats = "";

  h = dellingson(h);
  h = ckurland(h);
  
  h = cluibel(h);
  return 0;
}
