#include <iostream>
using namespace std;
//fare la somma dei numeri n inseriti da tastiera
int main() {
	int n;
	int numero;
	int numeri=0;
	int somma=0;
cout<< "quanti numeri vuoi inserire?" <<endl;
cin >> n;
	
while (numeri<n)	{

	cout<<"inserire numero"<< endl;
	cin>>numero;
	
	somma= somma + numero;
	numeri= numeri + 1;
	
	}	
	
cout<<"somma:"<<somma<<endl;
	
}

