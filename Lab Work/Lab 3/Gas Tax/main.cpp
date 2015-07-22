#include <iostream> 
using namespace std; 

//User Libraries
//Global Constants
//Function Prototypes
int main (int argc, char** argv)
{
 
//Declare Variables Here   
    float fedtax; // Federal tax
    float extax;  // California ex tax
    float calstax; // California sales tax
    float fp;      // Price of a gallon of gas $'s with all taxes included
    float base;   // Price of gasoline before tax
    float taxfi;   // Final price of tax
    
//Input Values Here
    fedtax = 0.18;
    extax = 0.36;
    calstax = 0.08;
    fp = 3.69;

  //Process Input Here
    base = fp-fedtax-extax-calstax;
    taxfi = fedtax+extax+calstax;

//Output Unknowns Here
    cout << "The price for gasoline before tax in California is probably " << base << endl;
    cout << "The full amount of tax per gallon is probably " << taxfi << endl;
   
//Exit Stage Right!
 return 0;
}
