// default class imports
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

class Animal{
	// private fields
	private:
		std::string name;
		double weight;
		double height;
		static int numOfAnimals;
	
	// public fields/methods
	public:
		//Getters
		std::string GetName(){ return this->name;}
		double GetWeight(){ return this->weight;}
		double GetHeight(){ return this->height; }
		
		//Setters
		void setName(std::string name){ this->name = name;}
		void setWeight(double weight){ this->weight = weight;}
		void setHeight(double height){ this->height = height;}
		
		// Set All
		void setAll(std::string, double, double);
};

// Constructor
void Animal::setAll(std::string name, double height, double weight){
	this->name = name;
	this->height = height;
	this->weight = weight;
}

class Dog:: public Animal{
	private:
		double size;
		double age;
	public:
		void getSize(){}
		void getAge(){}
};


int main(){
	Animal tiger;
	tiger.setAll("Name", 1.0, 2.0);
	//std::cout <<"running ";
	std::cout << "Tiger: "<<tiger.GetName() << std::endl;
	std::cout << "Tiger weight: "<<tiger.GetWeight() << std::endl;
	std::cout << "Tiger height: "<<tiger.GetHeight() << std::endl;
	
	
	return 0;
}