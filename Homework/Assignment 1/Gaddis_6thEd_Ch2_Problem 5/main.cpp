/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 *
 * Created on June 28, 2015, 5:25 PM
 */
//Nguyen, Johny - Assignment 1 - Gaddis_6thEd_Ch2_Problem 5- 46091
#include <iostream>
using namespace std;

//Start Main

int main() {

//Declare Variable
float var1, var2, var3, var4, var5, totalSum, totalAverage;

//Input Values Here

var1 = 28; 
var2 = 32; 
var3 = 37;
var4 = 24; 
var5 = 33; 

//Process Input Here
totalSum = (var1+var2+var3+var4+var5);
totalAverage = (totalSum/5);

//Display Result

cout<<"The total average value is: "<<totalAverage<<endl;
	return 0;
}