#include <iostream>
using namespace std;

int main () {
	int szerokosc, wysokosc;
	cout << "Podaj szerokosc: "<< endl;
	cin >> szerokosc;
	cout << "Podaj wysokosc: " << endl;
	cin >> wysokosc;
	
	for(int i=0; i < wysokosc; i++){
			for(int j=0; j < szerokosc; j++){
				if(i == 0 || i == wysokosc-l)
					cout <<"*";
				else if(j == 0 || j == szerokosc-l)
					cout <<"*";
				else 
					cout <<" ";
		}
		cout << endl;
				
	}
	
}