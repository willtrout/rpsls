#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
  string guess;
  cout << "Rock, Paper, Scissors, Lizard, spocK?";
  cin >> guess;
  cout << "You chose : " << guess << endl;
  return 0;
}