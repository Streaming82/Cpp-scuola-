#include <iostream>
using namespace std;

int main(){
	
int n, num, somma=0, conta=0;

cout<<"quanti numeri si vogliono inserire?";
	cin>>n;	

while(conta<n){
cout<<"inserire il numero";
	cin>>num;	
if(num<50){
	somma=somma + num;
	conta= conta + 1;
		}	
else
	if(num>=50){
		conta=conta+1;
		somma=somma+0;
	}
	
			}
cout<<"la somma e' "<<somma;	
	

	
	
}

