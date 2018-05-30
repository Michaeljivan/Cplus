#include <iostream>

using namespace std;

/* Functions */
void eat(){
    cout << "Eating" << endl;
}
void sleep(){
    cout << "Sleeping" << endl;
}
void code(){
    cout << "Coding" << endl;
}

/* Main Function */

int main() {
    //7 days a week
    for(int i =0; i < 7; i++){
    	eat();
    	code();
    	sleep();
    }
}
