//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch3_Prob10

#include <iostream>

using namespace std;

int main() {

//Function  Begins
//Declare Variables

float cent, fahr;
cout<<"What is the Celsius temperature?"<<endl;

//Input Celsius Temperature
cin>>cent;

fahr = 9/5.0 * cent + 32;

//Stores the value in fahr

cout<<cent<<"degrees Celsius equals"<<fahr;
cout<<"degrees Fahrenheit."<<endl;

return 0;
}