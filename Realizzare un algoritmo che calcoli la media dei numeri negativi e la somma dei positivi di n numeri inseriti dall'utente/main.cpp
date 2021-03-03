//realizzare un algoritmo che calcoli la media dei numeri negativi e la somma dei positivi di n numeri inseriti dall'utente
#include <iostream>
using namespace std;

int main(){
	int n;
	int num;
	int conta=0;
	int contaN=0;
	int somma=0;
	int sommaN=0;
	int media;

cout<<"quanti numeri si vuole inserire? :";
	cin>>n;

while(conta<n){
	
cout<<"inserire numero: ";
	cin>>num;
	
	if(num>0) {
		somma=somma+num;
		conta++;
		}
	else if(num<0){
		contaN++;
		sommaN=sommaN+num;
		conta++;
	}
	
			
	}
media=sommaN / contaN;
cout<<"la somma dei numeri positivi e': "<<somma<<endl;
cout<<"la media dei numeri negativi e': "<<media; 
	
}



