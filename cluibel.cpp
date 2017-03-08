#include <iostream>
#include "group01.h"

using namespace std;

Hero cluibel(Hero hero){
  cout << "You can hear the propellers of a helicopter./n";
  cout << "It is starting to get dark, so you must get to the top fast." << endl;
  cout << "You come upon a small path, could this be a shortcut?./n";
  cout << "1) Stay on current path\n2) Change to new path" << endl;
  int pathoption=0;
  bool aa = false;
  while(true){
    cin >> pathoption;
    switch(pathoption){
      case 1:
        cout << "You contine on your current path. \n";
        cout << "Your health is declining as the mountain gets steeper and the path becomes more streneous. \n";
        hero.health--;
        cout << "Health: " << hero.health << endl;
        break;
      case 2:
        cout << "You start down the new path. \n";
        cout << "This path seems much easier and you can hear a stream just a few yards away." << endl;
        if (!aa){
          cout << "You run and gulp some stream water to rehydrate." << endl;
          aa = true;
    hero.health++;
    cout << "Health: " << hero.health << endl;
        }
    }
  }
  cout << "The helicopter is now in sight. You are almost there. \n";

