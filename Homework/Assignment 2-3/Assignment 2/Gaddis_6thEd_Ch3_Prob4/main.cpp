//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch3_Prob4
#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

//Header Information

//Declare Variables

float june1, july1, aug1, sumRAIN, avgRAIN;

cout<<"Enter the amount of rainfall (inches) for the following three months"<<endl;
cout<<"Enter month of June rainfall (inches)"<<endl;
cin>>june1;

cout<<"Enter month of July rainfall (inches)"<<endl;
cin>>july1;

cout<<"Enter month of August rainfall (inches)"<<endl;
cin>>aug1;

//Calculate sum of scores

sumRAIN = june1+july1+aug1;

//Calculate average of rainfall

avgRAIN = sumRAIN/3;

//Average rainfall throughout three months 

cout<<"The average rainfall for June, July, and August is:"<< setprecision(2)<<avgRAIN<<endl;

	return 0;
}
	