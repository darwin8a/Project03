#include<iostream> 
#include "group01.h"

using namespace std;

Hero dochoa(Hero hero) {
    cout<<"As the sun rises, you hear something rattle."<<endl;
    cout<<"Quickly, with a fast response you notice a snake, looking right back at you."<<endl;
    cout<<"With adrenaline pumping through your body, and a desire to not die today/n";
    cout<<"you find yourself with two options: 1)Kill the snake or 2) fearlessly grab\n";
    cout<<"the snake with your bear arms and throw him off the tree?"<<endl;

    int hero_choice;
    cin >> hero_choice;

if(hero_choice ==1)
{
    
    cout << "Luckily in your backpocket you still have the same rock you used to kill the bear.\n";
    cout << "Do you want to 1) Use the same rock or 2) quickly try to cut off a sharp branch\n";
    cout << "and stab the snake before it bites you?"<<endl;
    int something_to_kill_the_snake;
    cin >> something_to_kill_the_snake;
    switch(something_to_kill_the_snake) {
        case 1:
            cout <<"You reach into your backpocket, but you now realize the rock you had used\n";
            cout <<"to kill the bear is still covered in blood. Because it doesn't have much grip\n";
            cout <<"it slips from your hand, and the snake bites your arm, falling from the tree to it's\n";
            cout<<"death in the process."<<endl;
            hero.health-=2;
            cout <<"Your health: "<<hero.health<<endl;
            break;
                                        }
}
    if(hero_choice==2)
{
    cout << "As fast as your instinct allows you to, you stick your hand out to the nearest branch before you,\n";
    cout << "break it off, and strike the snek. Somehow, with it's quick reflexes, it manages to dodge the blow\n";
    cout << "and bites your left arm stealthily. Turns out this snake was friendly, however, scared.\n";
    cout << "It slithers down the tree, and makes a smooth getaway, but you're still hurt."<<endl;
    hero.health-=2;
    cout<<"Your health: " << hero.health <<endl;
    }
    
    cout << "With a wounded arm, and low on health, you try your best to climb down the tree\n";
    cout << "Unfortunately, you fall, unable to maintain your grip. Luckily, no health was lost.\n";
    cout << "The sun has officially risen, it's bright outside and you see a mountain. You stop,\n";
    cout << "and think about your next move: 1) Climb the mountain with your damaged arm, and try\n";
    cout << "to make it before sundown or 2) Wait a few hours collect food, and then climb the mountain?"<<endl;
    
    int mountain;
    cin >> mountain;
    
    if(mountain ==1) {
        cout << "Knowing it will forsure be dark out soon, you promptly begin your climb of the mountain.\n";
    }
    else {
        cout << "You notice an apple tree, coincidentally in the same path that leads to the top of the mountain.\n";
        cout << "You walk over to it, pick a few, eat them, and continue the quest to the top of the mountain, and\n";
        cout << "being hopefully be saved."<<endl;
        hero.health++;
        cout << "Health: " << hero.health << endl;
    }

    return hero;
}
