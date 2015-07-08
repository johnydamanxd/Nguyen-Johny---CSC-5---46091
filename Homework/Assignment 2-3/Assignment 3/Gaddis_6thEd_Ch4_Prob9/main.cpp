//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch4_Prob9

#include <iostream>
using namespace std;

int main() {

//Variable Declaration

float cost, quantity, totCost;

//Inputting Quantity

cout<<"Enter quantity:";
cin>>quantity;

//Validating Input
if (quantity<=0)

{

cout<<"Invalid input quantity:";
cin>>quantity;
}
cost=99;
if(quantity<10)
totCost=cost;

else if(quantity<=19)
totCost=cost-((cost*20)/100);


else if(quantity<=49)
totCost=cost-((cost*30)/100);


else if(quantity<=99)
totCost=cost-((cost*40)/100);


else 
totCost=cost-((cost*50)/100);

//Outputting Cost
cout<<"Total cost purchase: $"<<quantity*totCost<<endl;

	return 0;
}