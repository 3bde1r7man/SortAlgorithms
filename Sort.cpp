#include"Sort.h"

template<class T>
void sortlib::insertionSort(T data[], int n)
{
    for (int i = 1,j; i < n; i++){
        T tmp = data[i];
        for (j = i; j > 0 && tmp < data[j - 1]; j--)
        {
            data[j] = data[j - 1];
        }
        data[j] = tmp;
    }
}

template<class T>
void sortlib::selectionSort(T data[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int least = i;
        for (int j = i+1; j < n; j++)
        {
            if (data[least] > data[j])
                least = j;
        }
        swap(data[i], data[least]);
        }
    
}

template<class T>
void sortlib::bubbleSort(T data[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; --j)
        {
            if(data[j]<data[j-1])
                swap(data[j], data[j - 1]);
        }
        
    }
    
}

template<class T>
void sortlib::shellSort(T data[], int n)
{
}

template<class T>
void sortlib::mergeSort(T data[], int n) 
{
}

template<class T>
void sortlib::countSort(T data[], int n) 
{
}

template<class T>
void sortlib::quickSort(T data[], int n) 
{
}



