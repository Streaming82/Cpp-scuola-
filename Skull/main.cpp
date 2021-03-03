//Realizzare un algoritmo che, stampi i numeri interi dispari minori o uguali a N letto da tastiera
#include <iostream>

using namespace std;

int main() {
    while(true) {

        int n = 0;
        int numero = 1;

        cout << "inserisci numero: ";
        cin >> n;
        
		
		if(n==410)
		                        
            {
			cout<<"per il vhalalla"<<endl;
			system("Pause");
            }
            
        while(numero < n) {      // inizio ciclo while  	
                
        if(numero % 2 == 1)    {       
                cout << numero << endl;
            }

    	        
			numero = numero + 1;
			
        }

    }
 
	
}

