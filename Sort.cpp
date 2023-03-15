#include"sort.h"

template<class T>
void sortlib::insertionSort(T data[], int n)
{
	
	for (int i = 1; i < n; i++)
	{
		T temp = data[i];
		int j;
		for (j = i; j > 0 && temp < data[j - 1]; j--)
		{
			data[j] = data[j - 1];
		}
		data[j] = temp;
	}
}



template<class T>
void sortlib::selectionSort(T data[], int n)
{
	
	for (int i = 0; i < n - 1; i++)
	{
		int small = i;
		
		for (int j = i+1; j < n ; j++)
		{
			if (data[j] < data[small]) {
				small = j;
				
			}
		}
		swap(data[small], data[i]);
	}

}

template<class T>
void sortlib::bubbleSort(T data[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag{ 0 };
		for (int j = 0; j < n - i - 1; j++)
		{
			if (data[j] > data[j + 1]) {
				flag++;
				swap(data[j], data[j + 1]);
			}
		}
		if (!flag) {
			break;
		}
	}
}

template<class T>
void sortlib::shellSort(T data[], int n)
{
}

template<class T>
void sortlib::countSort(T data[], int n)
{
}

template<class T>
void sortlib::mergeSort(T data[], int n)
{
}

template<class T>
void sortlib::quickSort(T data[], int n)
{

}





