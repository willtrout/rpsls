#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

int main(int argc, char *argv[]){
  string guess;
  cout << "Rock, Paper, Scissors, Lizard, spocK? ";
  cin >> guess;
  cout << "You chose : " << guess << endl;
  // my turn
  int dice; string choice;
  srand ( time(NULL) );
  dice = rand () % 5 + 1;
  switch (dice){
    case 1:
      choice= "Rock";
      break;
    case 2:
      choice= "Paper";
      break;
    case 3:
      choice= "Scissors";
      break;
    case 4:
      choice= "Lizard";
      break;
    case 5:
      choice= "spocK";
      break;
  }
  cout << "I choose : " << choice << endl;
  
  return 0;
}