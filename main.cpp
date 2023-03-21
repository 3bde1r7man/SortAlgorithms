#include"sort.h"
#include "Sort.cpp"
#include <chrono>
using namespace sortlib;


int main() {
	/*int x[10] = { 5,3,21,3,2,1,3,5,6,7 };
	char c[10] = { 'z','e','a', 'y', 'o','b','l','p','r','w' };
	string s[6] = {  "youssef", "sohaila", "ahmed","bassmal", "sara", "abdelrhman" };
	countSort(x, 10, 21);

	for (int i = 0; i < 10; i++)
	{
		cout << x[i] << ' ';
	}
	cout << '\n';

	quickSort(c, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		cout << c[i] << ' ';
	}
	cout << '\n';

	quickSort(s, 0, 5);
	for (int i = 0; i < 6; i++)
	{
		cout << s[i] << ' ';
	}*/
	int arr50000[50000];
	srand(time(0));
	for (int i = 0; i < 50000; i++) {
		arr50000[i] = rand();
	}
	int quick[50000]; 
	for (int i = 0; i < 50000; i++) {

		
		
		
		
		quick[i] = arr50000[i];
	}
	
	
	
	
	
	auto startquick = chrono::high_resolution_clock::now();
	quickSort(quick, 0, 49999);
	auto endquick= chrono::high_resolution_clock::now();
	auto durationquick = duration_cast<chrono::milliseconds>(endquick - startquick);
	cout << "the quick sort takes: " << durationquick.count() << '\n';
	
}

