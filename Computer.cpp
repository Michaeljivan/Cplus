#include <iostream>

using namespace std;

//Base class
class Computer{
    public:
        void setProcessor(string s){
            processor = s;
        }
        void setSize(int n){
            if(n > 0){
                size = n;
            }
        }
        
    protected: 
        int size;
        string processor;
};

//Derived class
class Dell: public Computer{
    public:
        string getInfo(){
             cout << "Processor " << processor << " Size "<< size << endl;
        }
};

int main(void){
    Dell dellComputer1;
    
    dellComputer1.setProcessor("intel i7");
    dellComputer1.setSize(100);
    
    cout << dellComputer1.getInfo() << endl;


	
    return 0;
}
