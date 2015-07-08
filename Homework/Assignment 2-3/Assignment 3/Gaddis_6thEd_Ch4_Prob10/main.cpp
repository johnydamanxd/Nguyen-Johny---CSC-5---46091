//Nguyen, Johny - CSC 5 - 46091
//Gaddis_6thEd_Ch4_Prob10

#include <iostream>
using namespace std;

int main() {

//Variable Declarations

int purchased;

//Input Book Purchase

cout<<"Enter the number of books in this month"<<endl;

cin>>purchased;

//Customer buys no Book

if(purchased<=0)
cout<<"You Earn 0 Points"<<endl;

//Customer buys ONE Books

else if (purchased == 1)
cout<<"You Earn 5 Points"<<endl;

//Customer buys TWO Books

else if (purchased == 2)
cout<<"You Earn 15 Points"<<endl;

//Customer buys THREE Books

else if (purchased == 3)
cout<<"You Earn 30 Points"<<endl;

else
cout<<"You Earns 60 Points"<<endl;

	return 0;
}