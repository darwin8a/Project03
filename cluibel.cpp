#include <iostream>
#include "group01.h"

using namespace std;

Hero cluibel(Hero hero){
  cout << "You can hear the propellers of a helicopter./n";
  cout << "It is starting to get dark, so you must get to the top fast." << endl;
  cout << "You come upon a small path, could this be a shortcut?./n";
  cout << "1) Stay on current path\n2) Change to new path" << endl;
  int pathoption=0;
  //bool aa = false;
  //while(true){
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
   //     if (!aa){
          cout << "You run and gulp some stream water to rehydrate." << endl;
    //      aa = false;//change true to false
    hero.health++;
    cout << "Health: " << hero.health << endl;
     //   }
    }
 // }
  cout << "The helicopter is now in sight. You are almost there. \n";
cout << "1) Break into a sprint\n2) Conserve energy, but risk not making it in time";
int sprintoption; //= 0;
bool sprint = false;
cin >> sprintoption;
switch(sprintoption){ // change drk option to sprint option
  case 1:
    sprint = true;
    cout << "You sprint with the little life left in you, \n";
    cout << "but you make it to the helicopter and are saved.\n";
  case 2:
    cout << "You continue at your normal pace, but it is getting \n";
    cout << "dark quickly. You better hurry! \n";
    cout << "Should you run? (y/n)";
    char response = 'q';
    cin >> response;
    if (response == 'y'){
      cout << "It takes all your strength, but you made it! \n";
      cout << "You are saved! \n";
    }
    else {
    }
}
if (sprint == false){
  cout << "The sun is completely gone. Perhaps trying to run will ensure your safety. \n";
  cout << "1) Break into sprint\n";
  int q = 0;
  cin >> q;
  cout << "You run until you can't anymore. Luckily, you have run\n";
  cout << "far enough and the helicopter can see you. \n";
  sprint = true;
  cout << "You are saved. \n";
}
else {
  cout << "\n You are saved.\n";
}
  cout << "Health: " << hero.health << endl;
return hero;
}
