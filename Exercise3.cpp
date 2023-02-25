//Jobayer
#include<iostream>
using namespace std;

int main(){
float set[5],n;
float *ptr;
cout<<"Displaying address using arrays:"<<endl;
for (int n = 0; n<5;n++){
cout << "&set[" << n << "] = " << &set[n] << endl;
}

ptr = set;
cout<<endl;
cout<<"Displaying address using pointers: "<<endl;
for (int n = 0; n<5; n++){
	cout << "ptr + " << n << " = "<< ptr + n << endl;
}
return 0;
}
