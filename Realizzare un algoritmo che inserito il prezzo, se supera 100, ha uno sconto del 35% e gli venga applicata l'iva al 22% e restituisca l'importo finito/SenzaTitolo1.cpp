//Realizzare un algoritmo che inserito il prezzo, se supera 100, ha uno sconto del 35% e gli venga applicata l'iva al 22% e restituisca l'importo finito
#include <iostream>
using namespace std;

int main() {
	int prezzoi;
	int prezzo=0;
	int prezzoS=0;
	int prezzoF=0; 
cout<<"quanto costa codesto aggetto? :";
	cin>>prezzo;	
	
if(prezzo<=100){
	prezzo= prezzo*122;
	prezzo= prezzo/100;
	cout<<"il prezzo e' di :"<<prezzo<<" euro";
}	
else {
		prezzoi=prezzo;
		prezzo = prezzo * 35;
        prezzoS = prezzo / 100;
        prezzoS = prezzoi-prezzoS;
        prezzoS = prezzoS * 122;
        prezzoF = prezzoS / 100;		
		cout<<"il prezzo e' di :"<<prezzoF<<" euro";
}
	
}
