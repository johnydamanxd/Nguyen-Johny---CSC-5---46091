//Nguyen, Johny - 46091 - CSC 5
//Gaddis_6thEd_Ch4_Prob1

#include<iostream>

using namespace std;

//Main function

int main () {

//Variable Declaration

float num1, num2;

//Read first number


cout<<"Enter first number:"<<endl;

cin>>num1;

//Read second number

cout<<"Enter second number:"<<endl;
cin>>num2;

//Conditioner operator

num1>num2? cout<<"First number is a larger and second number is smaller":cout<<"First number is a smaller and second number is larger.";

return 0;

}