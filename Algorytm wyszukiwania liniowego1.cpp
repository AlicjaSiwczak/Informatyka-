#include <iostream>
using namespace std;

int main()
{
	int tablica[26] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
	int szukane;
    cout << "Podaj liczbe szukana: ";
	cin >> szukane;
	cout << "Poszukiwana liczba znajduje sie na pozycji: ";
	for(int i; i <= 26; i++){
		if(tablica[i] == szukane){
	   cout << i << ", ";	
		}	
	}
}