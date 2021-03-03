// creare un programma che faccia la somma di n numeri inseriti da tastiera
#include <iostream>
using namespace std;

int main(){
	int n;
	int numero;
	int somma=0;	
	int conta;
cout<<"quanti numeri si vuole inserire?";
	cin>>n;
while(conta<=n){
	cout<<"inserire numero";
		cin>>numero;
			
	somma= somma + numero;
	conta++;
	
	
	
	
}	
cout<<"la somma dei numeri dati e':"<<somma;	
	
	
	
}
