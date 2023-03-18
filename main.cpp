#include"sort.h"
#include "Sort.cpp"

using namespace sortlib;


int main() {
	int x[10] = { 5,3,21,3,2,1,3,5,6,7 };
	char c[10] = { 'z','e','a', 'y', 'o','b','l','p','r','w' };
	string s[6] = {  "youssef", "sohaila", "ahmed","bassmal", "sara", "abdelrhman" };
	quickSort(x, 0, 9);

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
	}
}

