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
	T temp;
	for (int gap = n/2; gap > 0; gap/=2)
	{
		for (int i = gap; i < n; i++)
		{
			temp = data[i];
			int j;
			for (j = i; j >= gap && data[j - gap] > temp; j -= gap) {
				data[j] = data[j - gap];
			}
			data[j] = temp;
		}
	}
}

template<class T>
void sortlib::countSort(T data[], int n)
{
}

template<class T>
void sortlib::merge(T data[], int left, int mid, int right)
{
    int n1 = mid - left + 1, n2 = right - mid;
    vector<T> r(n2), l(n1);

    for (int i = 0; i < n1; i++)
    {
        l[i] = data[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        r[j] = data[mid + j + 1];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (l[i] < r[j]) {
            data[k++] = l[i++];
        }
        else
        {
            data[k++] = r[j++];

        }
    }
    while (i < n1) {
        data[k++] = l[i++];
    }
    while (j < n2) {
        data[k++] = r[j++];
    }
}


template<class T>
void sortlib::mergeSort(T data[], int left, int right)
{
    if (left >= right) {
        return;
    }
    else
    {
        int mid = (left + right) / 2;
        mergeSort(data, left, mid);
        mergeSort(data, mid + 1, right);
        merge(data, left, mid, right);
    }
}

template<class T>
int sortlib::partition(T data[], int left, int right)
{
	T x = data[left];
	int  i = left;
	for (int j = left + 1; j <= right; j++)
	{
		if (data[j] < x) {
			i++;
			swap(data[i], data[j]);
		}
	}
	swap(data[i], data[left]);
	return i;
	
}

template<class T>
void sortlib::quickSort(T data[], int left, int right)
{
	if (left >= right) {
		return;
	}
	else
	{
		int mid = partition(data, left, right);
		quickSort(data, left, mid - 1);
		quickSort(data, mid + 1, right);
	}
}





