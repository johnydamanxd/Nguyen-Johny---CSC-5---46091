//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch3_Prob2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

//Function  Begins

float seatA, seatB, seatC, costA, costB, costC, amount;
cout<<fixed<<setprecision(2)<< endl;

//Declare Variables

costA = 15.0;
costB = 12.0;
costC = 9.0;

cout<<"Stadium Seating"<<endl;

//Welcome User

cout<<"Howmany tickets were sold for each class A?"<<endl;

cin>>seatA;

cout<<"Howmany tickets were sold for each class B?"<<endl;

cin>>seatB;

cout<<"Howmany tickets were sold for each class C?"<<endl;

cin>>seatC;

//Calculations

amount = (costA*seatA+costB*seatB+costC*seatC);

cout<<"Total amount on ticket sales: $"<<endl;

return 0;
}