//Nguyen, Johny - 46091 - CSC 5
//Gaddis_6thEd_Ch4_Prob4

# include<iostream>
using namespace std;

int main() {

//Main function begins

float l1, l2, w1, w2, area1, area2;

//Rectangle 1

cout<<"Enter a length of first rectangle"<<endl;
cin>>l1;

cout<<"Enter a width of first rectangle"<<endl;
cin>>w1;

//Calculate first rectangle

area1 = w1*l1;

cout<<"Area of first triangle is:"<<area1<<endl;

//Rectangle 2

cout<<"Enter a length of second rectangle"<<endl;
cin>>l2;

cout<<"Enter a width of second rectangle"<<endl;
cin>>w2;

//Calculate second rectangle

area1 = w2*l2;

cout<<"Area of second triangle is:"<<area2<<endl;

//Check for equality of two rectangles

if(area1 == area2)

{
cout<<"Two areas are equal"<<endl;
}

//End if

else

{

//Check for conditions of two rectangle
if (area1>area2)

{
cout<<"first rectangle area is larger"<<endl;

}

{
cout<<"Second rectangle area is large"<<endl;

}

}

	return 0;
}