/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 *
 * Created on June 28, 2015, 5:13 PM
 */
//Nguyen, Johny - Assignment 1 - Gaddis_6thEd_Ch2_Problem 4- 46091
#include <iostream>
using namespace std;

//Start Main

int main() {

//Declare Variable
float itemPrice, mealTax, mealTip, totalMealBill, totalMealTip, totalMealTax, totalMBT;

//Input Values Here

itemPrice = 44.50; //$44.50 price item
mealTax = 0.0675; //6.75 percent meal tax
mealTip = 0.15; // 15 percent meal tip

//Process Input Here
totalMealTax = (mealTax*itemPrice);
totalMealBill = (mealTax*itemPrice+itemPrice);
totalMealTip = (totalMealBill*mealTip);
totalMBT = (totalMealBill+totalMealTip);

//Display Result
cout<<"The meal cost is: $ "<<itemPrice<<endl;
cout<<"The meal tax amount is: $ "<<totalMealTax<<endl;
cout<<"The total meal tip is: $"<<totalMealTip<<endl;
cout<<"The total meal bill with tip is: $ "<<totalMBT<<endl;
	return 0;
}