/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 *
 * Created on June 28, 2015, 5:52 PM
 */
//Nguyen, Johny - Assignment 1 - Gaddis_6thEd_Ch2_Problem 8 - 46091
#include <iostream>
using namespace std;

//Start Main

int main() {

//Declare Variable
float price1, price2, price3, price4, price5, subtotalSum, totalSTax, totalCost, salesTax;

//Input Values Here

price1 = 12.95; 
price2 = 24.95; 
price3 = 6.95;
price4 = 14.95; 
price5 = 3.95; 
salesTax = 0.06;//6percent

//Process Input Here
subtotalSum = (price1+price2+price3+price4+price5);
totalSTax = ((price1+price2+price3+price4+price5)*salesTax);
totalCost = (totalSTax+subtotalSum);

//Display Result

cout<<"Item 1: $"<<price1<<endl;
cout<<"Item 2: $"<<price2<<endl;
cout<<"Item 3: $"<<price3<<endl;
cout<<"Item 4: $"<<price4<<endl;
cout<<"Item 5: $"<<price5<<endl;
cout<<"Subtotal: "<<subtotalSum<<endl;	
cout<<"Sales tax: "<<totalSTax<<endl;
cout<<"Total cost: "<<totalCost<<endl;


	return 0;
}