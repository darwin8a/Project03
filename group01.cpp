#include <iostream>
#include <fstream>
#include <string>
#include "group01.h"

using namespace std;

int main() {
  fstream file;
  cout << "Adventure Game\n";
  cout << "By Dan Ellingson, Darwin Ruiz,\nConnor Kurland and Colleen\n";
  cout << "\nDo you have a save file to load? (y/n)\n";
  //Initialize empty character
  char response = '\0';
  bool file_exists = false;
  cin >> reponse;
  string file
  if (response == 'y' || response == 'Y'){
    cout << "Please provide the name of your file with the filetype at the end.";
    cin >> file;
    file_exists = true;
  }
  else {
    cout << "Please enter the name of the file you would like to save to\n";
    cout << "(Keep in mind that you don't have to have previously created the file)\n";
    cin >> file;
  }
  file.open(file);
  if (response == 'y' || response == 'Y'){
    cout << "\n\nYour adventures continue!\n\n"'
  }
  else {
    cout << "\n\nYour adventures begin!\n\n"; 
  }
  cout << "==================================\n\n";
  Hero h = {10, 10};
  string stats = "";
  if (file_exists){
    while(stats != "<health>"){
      stats = file.getline();
    }
    h.health = file.getline();
  }
  else {
    file << "<health>" << endl;
    file << h.health << endl;
    file << "<hunger>" << endl;
    file << h.hunger << endl;
    file << "<checkpoint>" << endl;
    file << "none" << endl;
  }
  h = dellingson(h);
  return 0;
}
