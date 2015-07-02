/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 *
 * Created on June 28, 2015, 4:40 PM
 */
//Nguyen, Johny - Assignment 1 - Gaddis_6thEd_Ch2_Problem 2- 46091
#include <iostream>
using namespace std;

//Start Main

int main() {


//Declare Variable
float totalSales = 4.6e6f; //4.6million in total sales
float salesPercent= 0.62; //62percent in total sales
float result;

//Calculate Result

result = (totalSales*salesPercent);

//Display Result

cout<<"When the company generates $"<<totalSales<<" million"<<endl;
cout<<"in sales this year, the East Coast"<<endl;
cout<<"division will generate $"<<result<< " million"<<endl;

	return 0;
}