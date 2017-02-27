#include "group01.h"

using namespace std;

Hero dellingson(Hero hero){
  cout << "The sky's looking a bit gray. You might want to find or build shelter.\n";
  cout << "1) Find shelter\n2) Build shelter" << endl;
  int shelteroption=0;
  while(true){
    cin >> shelteroption;
    switch(shelteroption){
      case 1:
        cout << "There's a cave nearby. You hide in it. The rain starts to pour.\n";
        cout << "Your hunger grows.\n";
        cout << "Hunger: " << hero.hunger << endl;
        break;
      case 2:
        cout << "There doesn't seem to be any kind of\nmaterial to build a shelter nearby."<<endl;
    }
  }
  return hero;
}
