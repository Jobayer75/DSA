//JOYADDAR MD JOBAYER
//1731833


#include <iostream>                            // library for standard i/o
using namespace std;                    // allows to name objects
// main method
int main () {
                                // declaring actual variables
   int  inta, intb;
                          // declaring pointer variables
   cin>>inta>>intb;
   int  *pointerA, *pointerB;     
                           // store address of inta and intb in pointer variables
   pointerA = &inta; 
   pointerB = &intb;  
   cout << "Value of pointerA is "<<*pointerA<<" stored in address "<<pointerA<<endl;
   cout << "Value of pointerB is "<<*pointerB<<" stored in address "<<pointerB<<endl;

}
