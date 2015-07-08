//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch3_Prob9


#include <iostream>
using namespace std;

int main() {

//Declare Variables for Automobile Costs

float loanP, insuranceP, gasP, oilP, tiresP, mainteP, totCost, totAnn;

//Input values


//Input cookies value

cout<<"Please enter the monthly cost of car loan:"<<endl;
cin>>loanP;

cout<<"Please enter the monthly cost of car insurance:"<<endl;
cin>>insuranceP;

cout<<"Please enter the monthly cost of gas:"<<endl;
cin>>gasP;

cout<<"Please enter the cost of oil change:"<<endl;
cin>>oilP;

cout<<"Please enter the cost of car tires:"<<endl;
cin>>tiresP;

cout<<"Please enter the monthly maintenance cost:"<<endl;
cin>>mainteP;


//Calculate Total Cost

totCost = loanP+insuranceP+gasP+oilP+oilP+tiresP+mainteP;
totAnn = totCost*12;

//Display Output

cout<<"Total monthly cost: "<<totCost<<" dollars"<<endl;


cout<<"Total annual cost: "<<totAnn<<" dollars"<<endl;
	return 0;
}