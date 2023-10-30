#include<iostream>
using namespace std;

int main()
{
	short a, b;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	
	if(a > b){ // instrukcja warunkowa, jeżeli ...
		cout << "a > b";
	}
	else{ // w przecinnym razie
		cout << "a < b";
	}
}