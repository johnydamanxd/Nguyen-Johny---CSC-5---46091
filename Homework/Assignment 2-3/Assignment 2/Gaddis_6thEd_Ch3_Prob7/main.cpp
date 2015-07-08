//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch3_Prob7


#include <iostream>
using namespace std;

int main() {

//Declare Variables

float CHPBag, SPBag, CalPServing, CPServing, CPCookies, CAte, TCCal;

//Input values

CHPBag = 40;
SPBag = 10;
CalPServing = 300;

//Input cookies value

cout<<"Please enter the cookies eaten:"<<endl;
cin>>CAte;

//Calculate cookies per serving

CPServing = CHPBag/SPBag;
CPCookies = CalPServing/CPServing;

TCCal = CAte*CPCookies;


//Display Output

cout<<"Total consumed: "<<TCCal<<" calories "<<endl;

	return 0;
}