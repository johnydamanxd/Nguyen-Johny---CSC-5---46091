//Nguyen, Johny - 46091 - CSC 5
//Gaddis_6thEd_Ch3_Prob11

#include<iostream>
#include<iomanip>

using namespace std;

int main () {

//Variable Declaration

float Dollars, Yen, Euros;

cout<<"Enter U.S. dollars:";

cin>>Dollars;

//Input variables

Yen = 122.65*Dollars;
Euros = 1.10*Dollars;

//Output variables

cout<<"Amount in Yen is:"<<setprecision(2)<<Yen<<endl;

cout<<"Amount in Euros is:"<<setprecision(2)<<Euros<<endl;

return 0;

}