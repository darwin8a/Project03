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
}
if (bear_choice == 2)
{
cout << "As you turn around and run, the bear hits you from behind, dealing some damae, but you make it out alive." << endl;
bear.health-=4;
cout << "Your Health: " << bear.health << endl;
}



}
