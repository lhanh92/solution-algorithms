#include<iostream> 
using namespace std; 

int ucln(int a,int b) 
{ 
    return b?ucln(b,a%b):a; 
} 
long bcnn(int a,int b) 
{ 
	return long(a)/ucln(a,b)*b; 
} 
int  main() 
{ 
    	cout<<"USCLN"<<ucln(4,6)<<endl;
        cout<<bcnn(4,6); 
        system("pause"); 
} 
