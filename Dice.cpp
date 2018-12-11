#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int roll1;
  int roll2;
  int roll3;
  int die;

  for (int i = 0; i <1000000; i++)
  {
    // get a number between 1-6 (die)
    die = (rand() % 6) + 1;
    switch(die){
      case 1:
        //cout << "1";
        roll1++;
        break;
      case 2:
        //cout << "2";
        roll2++;
        break;
      case 3:
        //cout << "3";
        roll3++;
        break;
    }
  }

  cout << "1's Rolled: "<< roll1 << endl;
  cout << "2's Rolled: "<< roll2 << endl;
  cout << "3's Rolled: "<< roll3 << endl;
}
