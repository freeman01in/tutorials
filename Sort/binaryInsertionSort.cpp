#include <iostream>
#include <stdio.h>

int binarySearch(int a[], int low, int high, int key)
{
    if(low == high)
    {
        return low;
    }

    int mid = low + (high - low) / 2;
    // std::cout << "mid: " << mid << " low: " << low << " high: " << high << std::endl;

    if(key > a[mid])
    {
        return binarySearch(a, mid+1, high, key);
    }

    if(key < a[mid])
    {
        return binarySearch(a, low, mid, key);
    }

    return mid;


}

void insertionSort(int a[], int n)
{
    for(int ii = 1; ii < n; ++ii)
    {
        int ins = a[ii];
        int index = binarySearch(a, 0, ii, ins);

        int j = ii - 1;
        while(j >= index)
        {
            a[j+1] = a[j];
            j--;
        }
        a[index] = ins;
    }

}

int main()
{
    int arr[] = {10, 12, 3, 41, 5, 17, 9};

    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << "Size of array: " << n << std::endl;
    std::cout << "Binary search test: " << binarySearch(arr, 0, n, 3) << std::endl;


    insertionSort(arr, n);

    for (int ii = 0; ii < n; ++ii)
    {
        std::cout << arr[ii] << " " ;
    }
    std::cout << std::endl;



    return 0;
}
