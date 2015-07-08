//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch4_Prob5

//Body Mass Index (BMI)

//Header file section

#include <iostream>

using namespace std;

int main() {

float w, h, BMI;

//Main function begins

cout<<"Enter a weight of body in pounds"<<endl;
cin>>w;

cout<<"Enter a height of body in inches"<<endl;
cin>>h;

BMI = (w*703)/(h*h);

//Body Mass Index

cout<<"The person Body Mass Index is:"<<BMI<<endl;

if(BMI>=18.5&&BMI<=25)
cout<<"Optimal weight"<<endl;

else if (BMI<18.5)
cout<<"Under weight"<<endl;

else
cout<<"Over weight"<<endl;

	
	return 0;
}