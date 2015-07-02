/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 *
 * Created on June 28, 2015, 9:24 PM
 */
//Nguyen, Johny - Assignment 1 - Gaddis_6thEd_Ch2_Problem 17 - 46091
#include <iostream>
using namespace std;

//Start Main

int main() {

//Declare Variable
float sharesBGHT, priceShares, paidAMT,pctComis, amtComis, totalCost;

//Input Values Here

sharesBGHT = 600; 
priceShares = 21.77;//$21.77 per share
pctComis = 0.02;//2 percent commission

//Process Input Here

paidAMT = (sharesBGHT*priceShares);
amtComis = ((paidAMT)*pctComis);
totalCost = (amtComis+paidAMT);

//Display Result

cout<<"Amount paid for the stock alone: $"<<paidAMT<<endl;	
cout<<"Amount of the commission: $"<<amtComis<<endl;
cout<<"Total amount paid: $"<<totalCost<<endl;


	return 0;
}