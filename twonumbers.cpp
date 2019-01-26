#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // integers
    int n, b;

    //counters
    int counter1, counter2;

    //inputs (two numbers)
    cin >> n;
    cin >> b;

    //counter for first number
    for(int i = 0; i < n;  i++){
       counter1++;
    }

    //counter for second nubmer
    for(int j = 0; j < b; j++){
        counter2++;
    }

    // 1 <= n <= 9    
    if(counter1 >= 1 && counter1 <= 9){
      switch(counter1){
          case 1:
            cout << "one" << endl;
            break;
          case 2:
            cout << "two" << endl;
            break;
          case 3:
            cout << "three" << endl;
            break;
          case 4:
            cout << "four" << endl;
            break;
          case 5:
            cout << "five" << endl;
            break;
          case 6:
            cout << "six" << endl;
            break;
          case 7:
            cout << "seven" << endl;
            break;
          case 8:
            cout << "eight" << endl;
            break;
          case 9:
            cout << "nine" << endl;
            break;
      }
    } else if (counter1 > 9) {
      if (counter1 % 2 == 0) {
        cout << "even" << endl;
      } else {
        cout << "odd" << endl;
      }
    }

    // 1 <= b <= 9
    if (counter2 >= 1 && counter2 <= 9) {
      switch (counter2) {
      case 1:
        cout << "one" << endl;
        break;
      case 2:
        cout << "two" << endl;
        break;
      case 3:
        cout << "three" << endl;
        break;
      case 4:
        cout << "four" << endl;
        break;
      case 5:
        cout << "five" << endl;
        break;
      case 6:
        cout << "six" << endl;
        break;
      case 7:
        cout << "seven" << endl;
        break;
      case 8:
        cout << "eight" << endl;
        break;
      case 9:
        cout << "nine" << endl;
        break;
      }
    }else if (counter2 > 9){    
        if(counter2 % 2 == 0){ 
            cout << "even" << endl;
        }else{
            cout << "odd" << endl;
        }
    }
    
    return 0;
}

