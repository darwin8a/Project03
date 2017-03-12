#include <iostream>
#include <string>
#include "group01.h"

using namespace std;

int main() {
  cout << "Adventure Game\n";
  cout << "By Dan Ellingson, Darwin Ochoa,\nConnor Kurland and Colleen Luibel\n";

  Hero h = {10, 10, false};
  string stats = "";

  h = dellingson(h);
  h = ckurland(h);
  h = dochoa(h);
  h = cluibel(h);
  cout << "Let's see how you did:\n";
  cout << "Health: " << h.health << endl;
  if (h.health >= 6){
    cout << "Looks like you made it out okay.";
  }
  else if (h.health == 5){
    cout << "Pretty damaged, but you'll recover within a few days." << endl;
  }
  else {
    cout << "Your wounds are deep and you appear badly injured.\nThis did not go well for you." << endl;
  }
  cout << "Your adventure concludes here, but can you do better? If you made it out okay," << endl;
  cout << "you did very well. Otherwise, see how little health you can lose." << endl;
  return 0;
}
