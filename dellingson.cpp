#include <iostream>
#include <string>
#include "group01.h"

using namespace std;

Hero dellingson(Hero hero){
  cout << "The sky's looking a bit gray. You might want to find or build shelter.\n";
  int shelteroption=0;
  bool aa = false;
  while(true){
    cout << "1) Find shelter\n2) Build shelter" << endl;
    cin >> shelteroption;
    bool donehere = false;
    switch(shelteroption){
      case 1:
        cout << "There's a cave nearby. You hide in it. The rain starts to pour.\n";
        cout << "Your hunger grows.\n";
        hero.hunger--;
        cout << "Hunger: " << hero.hunger << endl;
        donehere = true;
        break;
      case 2:
        cout << "There doesn't seem to be any kind of\nmaterial to build a shelter nearby."<<endl;
        if (!aa){
          cout << "You start to feel little droplets of rain fall on your face." << endl;
          aa = true;
        }
        else {
          cout << "You feel rain fall on your face." << endl;
        }
    }
    if (donehere) break;
  }
  cout << "It's dark here.\n";
  cout << "1) Build fire\n2) Hunt for food\n";
  int darkoption = 0;
  bool firebuilt = false;
  cin >> darkoption;
  switch(darkoption){
    case 1:
      firebuilt = true;
      cout << "You find some loose sticks and some tinder.\nIt takes a minute or two of hard labor,\n";
      cout << "but you manage to create some flame.\n";
    case 2:
      cout << "You spot a berry bush nearby. The fruit looks pretty edible.\nTry it? (y/n)";
      char response = 'q';
      cin >> response;
      if (response == 'y'){
        cout << "It tastes pretty good. You pick all that you can find,\neat some and save some for later.\n"; 
        hero.hunger=10;
        cout << "Hunger: " << hero.hunger << endl;
        cout << "Item added to inventory: Berries" << endl;
      }
      else {

      }
  }
  if (firebuilt == false){
    cout << "You start to feel cold. Perhaps making a fire would help.\n";
    cout << "1) Build fire\n";
    int q = 0;
    cin >> q;
    cout << "You find some loose sticks and some tinder.\nIt takes a minute or two of hard labor,\n";
    cout << "but you manage to create some flame.\n";
    firebuilt = true;
    cout << "\nYou sit down next to the fire, and think about what you'll do next.\n"; 
  }
  else {
    cout << "\nYou sit down next to the fire, and think about what you'll do next.\n"; 
  }
  return hero;
}
