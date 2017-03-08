
#include "group10.h"

using namespace std;

// cave to tree, choice to fight off bear, if you kill the bear, you skin him and use fur as warmth

Hero ckurland( Hero bear)
{
cout << "During your stay in the cave, you start to notice a faint growling sound." << endl;
cout << "As you travel further into the cave, you notice there is a hungry bear mad that you ate its berries." << endl;
cout << "You have 2 choices, 1) Try and kill the bear with the materials in the cave or 2) Try and outrun the bear" << endl;
int bear_choice;
cin >> bear_choice;
if (bear_choice == 1)
{
cout << "You look around for materials to use as a weapon and notice a sharp spear looking branch and a sharp rock." << endl;
cout << "Which one do you want to use? 1) a sharp branch or 2) a sharp rock" <<endl;
int weapon:
cin >> weapon;
switch (weapon)
case 1:
cout << "You pick up the spear and charge the bear." << endl;
cout << "As you try and impale the bear, the bear swipes down and snaps your spear in half, hitting you in the process" <<endl;
bear.health-=4;
cout << "After the blow, you run out of the cave in fear." << endl;
cout << "Your Health: " << bear.health << endl;
  break;
  case 2:
  cout << "You pick up the sharp rock and charge the bear." << endl;
  cout << "After dodging most of the bear's swipes, you make it to striking range and hit the bear repeatedly with the rock." << endl;
  cout << "After a brief fight, the bear collapses in defeat after being slain by you." << endl;
  cout << "With the bear just lying there, you decide to skin it and use the fur as a jacket." << endl;
  bear.fur = true;
  cout << "After skinning the bear, you take the fur and leave the cave with minimal health loss." << endl;
  bear.health-=2;
  cout << "Your health: " << bear.health << endl;
  break;
}
if (bear_choice == 2)
{
cout << "As you turn around and run, the bear hits you from behind, dealing some damage, but you make it out alive." << endl;
bear.health-=4;
cout << "Your Health: " << bear.health << endl;
}
cout << "Once leaving the cave, you realize it is getting dark and you don't have a place to sleep." << endl;
cout << "Still scared taht the bear might come after you, you have to decide whether to try and make a fire or just climb into a tree and sleep there." << endl;
  cout<< "Would you like to 1) Try and make a fire or 2) Climb into the tree?" << endl;
  int shelter;
  cin >> shelter;
  if (shelter == 1)
  {
   cout << "After looking for materials, you find that there isn't anything to make fire with." << endl;
    cout << "This leaves you with one option, climb into the tree." << endl;
  }
cout << "Once making the climb into the tree, you find a nice place to rest," << endl;
  cout << "and with the warmth of the bear skin, you fall asleep, hoping the bear stays away." << endl;
return bear;
}
