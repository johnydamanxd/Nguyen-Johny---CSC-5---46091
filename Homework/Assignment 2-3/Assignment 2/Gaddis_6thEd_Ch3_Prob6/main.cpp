//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch3_Prob6
#include <iostream>
using namespace std;

int main() {

//Declare Variables

const float Widgets = 9.2;
float pallet, stackedN;

//Prompt will ask user to input pallet weight by itself
cout<<"Enter the weight of the pallet: ";
cin>>pallet;

//Calculations
stackedN = pallet/Widgets;

//Display output
cout<<"The total"<<stackedN<<"widgets stacked on the pallet."<<endl;

	return 0;
}