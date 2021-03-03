// Realizzare un algoritmo che, data in input una sequenza di N numeri, determini il massimo tra essi 
#include <iostream>
using namespace std;

int main (){

int n, num, max=0, conta=0;

cout<<"quanti numeri si vuole inserire?";
	cin>>n;

while(conta<n){
	cout<<"inserire numero";
		cin>>num;
		if(max==0)
			max=num;
			else 
				if(num>max){
				max=num;	}
	conta=conta + 1;	
}	
cout<<"il numero maggiore e': "<<max;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}


