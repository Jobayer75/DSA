#include<iostream>
#include<conio.h>

using namespace std;

   int main()
    {
     int set[5],n;
     int *p=set;
     cout<<"Enter five numbers separated by space:";
     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     cout<<"Your numbers are:\n";
     for(n=0;n<5;n++)
        cout<<set[n]<<endl;
   
     getch();
     return 0;

    }

