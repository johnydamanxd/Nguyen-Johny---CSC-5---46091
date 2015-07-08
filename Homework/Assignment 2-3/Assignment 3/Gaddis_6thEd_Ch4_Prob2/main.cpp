//Nguyen, Johny - 46091 - CSC 5
//Gaddis_6thEd_Ch4_Prob2

#include<iostream>

using namespace std;

int main () {

//Variable Declaration

int R;

//Run and read number from user

cout<<"Enter a number within the range of 1 through 10:"<<endl;

cin>>R;

if(R<1 || R>10)

{
cout<<"Input value out of range"<<endl;
cout<<"Enter a number"<<endl;
cin>>R;
}

switch (R)
{
case 1: cout<<"I"<<endl;
break;

case 2: cout<<"II"<<endl;
break;

case 3: cout<<"III"<<endl;
break;

case 4: cout<<"IV"<<endl;
break;

case 5: cout<<"V"<<endl;
break;

case 6: cout<<"VI"<<endl;
break;

case 7: cout<<"VII"<<endl;
break;

case 8: cout<<"VIII"<<endl;
break;

case 9: cout<<"IX"<<endl;
break;

case 10: cout<<"X"<<endl;
break;
}

//end switch

return 0;

}