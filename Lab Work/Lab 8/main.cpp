/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 * LAB 8: Arrays 
 * Created on July 21, 2015, 11:03 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Variables
//Function Prototypes
//Execution begins here

int main(int argc, char** argv) {
    
    //Declare/initialize Variables for P-Arrays
    const int SIZE = 10 ;
    int P1[SIZE] = {}, P2[SIZE] = {};
    cout << "Squares:\n";
    
    //Loop Array 1 with incremented numbers and the Array 2 
    for (int i = 1; i <= SIZE; i++)
    {
        P1[i] = i;
        P2[i] = i * i;
        cout << setw(5) << P1[i] << setw(5) << P2[i] << endl;
    }

    //Declare/Variables for multi-table chart
    const int ROW = 12, COL = 12;
    int tmsTbl[ROW][COL];
    cout << "\nMultiplication Table:\n";
    
    //Loop to fill out 2d array
    for (int rows = 0; rows < ROW; rows++)
    {
        for(int cols = 0; cols < COL; cols++)
        {
            //Add 1 to each dimension since index starts at 0 and multiply row by column
            tmsTbl[rows][cols] = (rows + 1) * (cols + 1);
            cout << setw(5) << tmsTbl[rows][cols];
        }
        cout << endl;
    }
    return 0;
}
