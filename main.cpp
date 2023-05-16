#include <iostream>
#include <iomanip>
#include <string.h>
#define SIZE 10
using namespace std;

int main(){
/*
  int a;
  double d;
  cout<<&a<<" size "<<sizeof(a) <<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl; 
*/
/*
int x,*p;
    p=&x;
    x=5;

    cout<< x  <<" "<< *p <<endl;
    cout<< &x <<" "<<  p <<endl;
    cout<< &p <<endl;
*/
/*Example Array*/
/*
int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;			
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; 
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; 
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl; 	// print 
*/
 /*the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) */
char *pa, *pb, temp, Test;
  int i;
char a[100000000000] = {};
cout<<"Input String here: ";
cin>>a;
pa = &a[0];
cout<<"Original: ";
  for (i=0; i<strlen(a); i++, pa++)
  {
    cout<<setw(3)<<*pa ;
  }
  cout<<setw(3)<<*pa<<endl;
pa = &a[0]; pb = &a[strlen(a) - 1];
cout<<"In between: ";
for (i = 0; i < strlen(a) / 2; i++, pa++, pb--) {
    temp = *pa; 
    *pa = *pb; 
    *pb = temp;
    cout<<setw(3)<<*pa<<"&"<<*pb;
}
  cout<<endl;
cout<<"Reverse: ";
pa = &a[0];
for (i = 0; i < strlen(a) - 1; i++,pa++)
cout<<*pa<<" ";
  
cout<<*pa<<endl;
}
