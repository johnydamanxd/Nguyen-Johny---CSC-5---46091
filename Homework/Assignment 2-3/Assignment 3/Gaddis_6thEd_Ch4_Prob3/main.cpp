//Nguyen, Johny - 46091 - CSC 5
//Gaddis_6thEd_Ch4_Prob3

#include <iostream>
using namespace std;

int main() {

//Function main starts

//Declare variables
int month, day, year, I;

cout<<"Enter a month:"<<endl;
cin>>month;

cout<<"Enter a date:"<<endl;
cin>>day;

cout<<"Enter a year with two digits:"<<endl;
cin>>year;

//Calculations

I = month*day;

//Conditions

if(I==year)

{
cout<<"Date is Magic"<<endl;

}
else

cout<<"Date is not Magic number"<<endl;
 

	return 0;
}