//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch4_Prob7

#include <iostream>
using namespace std;

//Global Variables
const int HID = 24;
const int MIH = 60;
const int SIM = 60;

int main() {

int seconds;
int minutes;
int hours;
int days;

long IMinutes, IHours, ISeconds;

//Inputting seconds

cout<<"Enter the amount of seconds:";
cin>>ISeconds;

//Compute Values

seconds = ISeconds % SIM;

IMinutes = ISeconds/SIM;

minutes = IMinutes % MIH;

IHours = IMinutes / MIH;

hours = IHours % HID;

days = IHours / HID;

//Outputting Converted Time

cout<<"Converted input seconds is:"<<endl;

if(days>0)
cout<<days<<"days";
if(hours>0)
cout<<hours<<"hours";
if(minutes>0)
cout<<minutes<<"minutes";
if(seconds>0)
cout<<seconds<<"seconds";
cout<<endl;

	return 0;
}