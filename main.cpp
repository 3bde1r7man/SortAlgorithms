#include"sort.h"
#include "Sort.cpp"

using namespace sortlib;


int main() {
	int x[10] = { 5,3,21,3,2,1,3,5,6,7 };
	bubbleSort(x, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << x[i] << ' ';
	}
}

