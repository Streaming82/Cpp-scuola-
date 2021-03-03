//Realizzare un algoritmo che inseriti n numeri, calcoli il minore e restituisca la posizione
#include <iostream>
using namespace std;

int main(){
	int n;
	int numero;
	int conta1;
	int conta2=0;
	int ultimo=0;
	
cout<<"quanti numeri si vogliono inserire?";
	cin>>n;

for(conta1=0;conta1<n;conta1++){
	cout<<"inserire un numero: ";
		cin>>numero;
	if(ultimo == 0){
		ultimo=numero;
	}	
	else if(ultimo>numero){
		ultimo = numero;
		conta2 = conta1+1;
	}	
}
cout<<"Il numero piu' basso e' :"<< ultimo<<endl<<"e si trovava alla "<<conta2<<" posizione"; 
	
}

