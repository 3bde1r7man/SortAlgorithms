#include"sort.h"
#include <vector>

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
		bool flag{ 0 };
		for (int j = 0; j < n - i - 1; j++)
		{
			if (data[j] > data[j + 1]) {
				flag = true;
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
void sortlib::merge(T data[], int right, int mid, int left)
{
    int n1 = mid - left + 1, n2 = right - mid;
    vector<int> l(n1), r(n2);

    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        r[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (l[i] < r[j]) {
            arr[k++] = l[i++];
        }
        else
        {
            arr[k++] = r[j++];

        }
    }
    while (i < n1) {
        arr[k++] = l[i++];
    }
    while (j < n2) {
        arr[k++] = r[j++];
    }
}


template<class T>
void sortlib::mergeSort(T data[], int right, int left)
{
    if (left >= right) {
        return;
    }

    else
    {
        int mid = (left + right) / 2;
        mergeSort(data, left, mid);
        mergeSort(data, mid + 1, r);
        merge(data, left, mid, right);
    }
}

template<class T>
void sortlib::quickSort(T data[], int n)
{

}





