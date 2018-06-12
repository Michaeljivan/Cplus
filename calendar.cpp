// calendar program

// #include <stdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int year, firstDayInCurrentMonth;
	int currentMonth = 1;
	int numDays;

	cout << "Calendar Year: ";
	cin >> year;

	cout << endl;

	// formula for first day of a year
	int x1, x2, x3;
	x1 = (year - 1)/4;
	x2 = (year - 1)/100;
	x3 = (year - 1)/400;

	// first day of the year
	firstDayInCurrentMonth = (year + x1 - x2 + x3) % 7;

	cout << year << endl;

	//loop over all months in a year
	while(currentMonth <= 12) {
		if(currentMonth == 1){
			numDays = 31;
			cout << "January" << endl;
		}else if(currentMonth == 2){
			numDays = 31;
			cout << "February" << endl;
		}else if(currentMonth == 3){
			numDays = 28;
			cout << "March" << endl;
		}else if(currentMonth == 4){
			numDays = 31;
			cout << "April" << endl;
		}else if(currentMonth == 5){
			numDays = 31;
			cout << "May" << endl;
		}else if(currentMonth == 6){
			numDays = 31;
			cout << "June" << endl;
		}else if(currentMonth == 7){
			numDays = 31;
			cout << "July" << endl;
		}else if(currentMonth == 8){
			numDays = 31;
			cout << "August" << endl;
		}else if(currentMonth == 9){
			numDays = 31;
			cout << "September" << endl;
		}else if(currentMonth == 10){
			numDays = 31;
			cout << "October" << endl;
		}else if(currentMonth == 11){
			numDays = 31;
			cout << "November" << endl;
		}else if(currentMonth == 12){
			numDays = 31;
			cout << "December" << endl;
		}
		
		cout << " S  M  T  W  T  F  S" << endl;
		cout << "____________________" << endl;

		int day =1 ;
		int i = firstDayInCurrentMonth;
		while( i > 0 ){
			cout << "   ";
			i = i - 1;
		}

		//start creating calendar
		while(day <= numDays)
		{
			cout << setw(2) << day << " ";

			if(firstDayInCurrentMonth == 6){
				cout << endl;
				firstDayInCurrentMonth = 0;
			}else {
				firstDayInCurrentMonth = firstDayInCurrentMonth + 1;
			}
			day = day + 1;
		}

		cout << endl << endl << endl;
		currentMonth = currentMonth + 1;
	}

	cout << endl;


	return 0;
}
