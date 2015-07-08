//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch3_Prob3

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {

//Header Information

//Declare Variables

float testS1, testS2, testS3, testS4, testS5, sumTEST, avgTEST;

cout<<"Enter five test scores"<<endl;
cout<<"Enter score 1"<<endl;
cin>>testS1;

cout<<"Enter score 2"<<endl;
cin>>testS2;

cout<<"Enter score 3"<<endl;
cin>>testS3;

cout<<"Enter score 4"<<endl;
cin>>testS4;

cout<<"Enter score 5"<<endl;
cin>>testS5;

//Calculate sum of scores

sumTEST = testS1+testS2+testS3+testS4+testS5;

//Calculate average of scores

avgTEST = sumTEST/5;

//Display of average scores of five tests

cout<<"The average of five test scores is:"<< setprecision(1)<<avgTEST<<endl;

	return 0;
}