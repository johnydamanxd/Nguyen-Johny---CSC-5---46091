//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch3_Prob1

#include <iostream>
using namespace std;

int main() {

double gallons, miles, mpg;

cout<<"Welcome to Miles per Gallon"<<endl;
cout<<"Please enter the number of gallons your car can hold."<<endl;
cin>>gallons;
cout<<"Please enter the number of mile(s) you can drive on a full tank."<<endl;
cin>>miles;
mpg = miles/gallons;
cout<<"Your car gets"<<mpg<<"miles to the gallon"<<endl;

return 0;
}
