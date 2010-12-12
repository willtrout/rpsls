#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
  char guess[9];
  cout << "Rock, Paper, Scissors, Lizard, spocK?";
  cin >> guess;
  cout << "You chose : ";
  int index=0;
  while(guess[index]!='\0')
  {
    cout << guess[index];
    index++;
  }
  cout << endl;
  return 0;
}