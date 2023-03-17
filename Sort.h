#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

namespace sortlib {

    template<class T>
    void insertionSort(T[], int);

    template<class T>
    void selectionSort(T[], int);

    template<class T>
    void bubbleSort(T data[], int n);

    template<class T>
    void shellSort(T data[], int n);

    template<class T>
    void countSort(T data[], int n);

    template<class T>
    void merge(T data[], int left, int mid, int right);

    template<class T>
    void mergeSort(T data[], int left , int right);

    template<class T>
    void quickSort(T data[], int n);

    

}



