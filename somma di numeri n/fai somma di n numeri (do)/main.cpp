#include <iostream>
using namespace std;

int main(){
	int n, num, somma=0;

cout<<"quanti numeri si vogliono sommare?";
	cin>>n;
do{
		cout<<"inserire numero";	
		cin>>num;
		somma=somma+num;
		n=n-1;	
  }	
while(n>0);	
cout<<"la somma e' "<<somma;	
		
	
	
	
	
	
}
