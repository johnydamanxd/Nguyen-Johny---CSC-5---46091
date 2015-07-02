/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 *
 * Created on June 28, 2015, 4:57 PM
 */
//Nguyen, Johny - Assignment 1 - Gaddis_6thEd_Ch2_Problem 3- 46091
#include <iostream>
using namespace std;

//Start Main

int main() {

//Declare Variable
float itemPrice;
float stateTax;
float countyTax;
float totalTax;
float totalSTax;

//Input Values Here

itemPrice = 52.00; //$52 price item
stateTax = 0.02; //2 percent state tax
countyTax = 0.04; // 4 percent county tax

//Process Input Here

totalTax = (stateTax+countyTax);
totalSTax = (totalTax*itemPrice);

//Display Result

cout<<"The total sales tax on a $52 purchase is: "<<totalSTax<<endl;

	return 0;
}