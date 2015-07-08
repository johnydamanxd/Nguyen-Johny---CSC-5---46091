//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch4_Prob6

#include <iostream>
using namespace std;

int main() {

//Main Function

float mass, weight;

//Variable Declaration 

//Input Variables Mass

cout<<"Enter an object mass"<<endl;
cin>>mass;

//Calculating weight
weight = (mass*9.8);

//Display weight of object

cout<<"The object weight is"<<weight<<"newtons"<<endl;

//Condition check > 1000 Newtons
if (weight>1000)
cout<<"It is too heavy"<<endl;

//Condition check < 10 Newtons
else if (weight<10)
cout<<"It is too light"<<endl;


	return 0;
}