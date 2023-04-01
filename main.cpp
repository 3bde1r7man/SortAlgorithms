#include "Sort.h"
#include "Sort.cpp"




using namespace sortlib;


int main() {

	int arr[200];
	srand(time(0));
	for (int i = 0; i < 200; i++) {
		arr[i] = rand();
	}
	int insert[200], select[200], bubble[200], count[200], shell[200], merge[200], quick[200];
	for (int i = 0; i < 200; i++) {
		insert[i] = arr[i];
		select[i] = arr[i];
		bubble[i] = arr[i];
		count[i] = arr[i];
		shell[i] = arr[i];
		merge[i] = arr[i];
		quick[i] = arr[i];
	}



	insertionSort(insert, 200);
	for (int i = 0; i < 200; i++)
	{
		cout << insert[i] << ' ';
	}
	cout << "\n------------------------------------------------------------\n";

	selectionSort(select, 200);
	for (int i = 0; i < 200; i++)
	{
		cout << select[i] << ' ';
	}
	cout << "\n------------------------------------------------------------\n";
	bubbleSort(bubble, 200);
	for (int i = 0; i < 200; i++)
	{
		cout << bubble[i] << ' ';
	}
	cout << "\n------------------------------------------------------------\n";
	countSort(count, 200, *max_element(count, count + 200));
	for (int i = 0; i < 200; i++)
	{
		cout << count[i] << ' ';
	}
	cout << "\n------------------------------------------------------------\n";
	shellSort(shell, 200);
	for (int i = 0; i < 200; i++)
	{
		cout << shell[i] << ' ';
	}
	cout << "\n------------------------------------------------------------\n";
	mergeSort(merge, 0, 199);
	for (int i = 0; i < 200; i++)
	{
		cout << merge[i] << ' ';
	}
	cout << "\n------------------------------------------------------------\n";
	quickSort(quick, 0, 199);
	for (int i = 0; i < 200; i++)
	{
		cout << quick[i] << ' ';
	}
	cout << "\n------------------------------------------------------------\n";



}
