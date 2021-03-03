#include <iostream>

using namespace std;
int main () {	
	int sommaP=0;                            //somma aritmeica dei numeri positivi
	int somma=0;                             //somma dei numeri positivi inseriti    
	int sommaN=0;                            //somma aritmetica dei numeri negativi
	int n;                                   //numero inserito
	int numeri;                              //numeri totali che si vogliono inserire 
	int mediaP;                              //media dei numeri positivi 
 	int conta=0;                             // quanti numeri sono stati inseriti
 	
 cout<<"Quanti numeri si vuole inserire?";    //inserimento di quanti numeri si vuole immettere
 	cin>>numeri;

while(conta<numeri)	{                                  //inizio ciclo whyle
				 	
    cout<<"inserire numero";
 	cin>>n;
 	
	if(n>=0) {                                            //per i numeri positivi
		sommaP= sommaP+n;
	
	
	somma=somma+1;
	}
	if(n<0) {                                            // per i numeri negativi
		sommaN= sommaN+n;	
	}
	
	
	conta=conta+1;
}	
mediaP=sommaP/somma;
cout<<"la somma dei numeri negativi e':"<<sommaN<<endl;           //dichiarazioni delle variabili
cout<<"la media dei numeri positivi e':"<<mediaP<<endl;	
	
	
	
	
	
	
	
	
}
