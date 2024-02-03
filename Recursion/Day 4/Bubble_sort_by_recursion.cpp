#include<iostream>

using namespace std;


void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

// By loop
// T.C: - O(n*n)
// S.C: - O(1)
/*
void BubbleSort(int arr[], int size)
{
    int i = 1;
    while(i < size)
    {
        int j = 0;
        int k = 1;
        int swapCount = 0;

        while(k <= size-i)
        {
            if(arr[j] < arr[k])
            {
                j++;
                k++;
                continue;
            }

            swap(arr[j], arr[k]);
            j++;
            k++;
            swapCount++;
        }

    if(swapCount == 0)
    {
        break;
    }

    i++;

    }
}
*/

// By Recursion written by Akash Yadav
/*
void BubbleSort(int arr[], int size, int i = 1, int j = 0)
{
    // Base Case
    if(i >= size)
    {
        return;
    }

    if(j + 1 > size - i)
    {
        j = 0;
       return BubbleSort(arr, size, i+1, j);
    }

    if(arr[j] <= arr[j+1])
    {
       return BubbleSort(arr, size, i, j+1);
    }

    swap(arr[j], arr[j+1]);

    return BubbleSort(arr, size, i, j+1);

}
*/

// by Recursion written by Love Babbar 

void BubbleSort(int *arr, int size)
{
    // Base Case : already sorted
    if(size == 0 || size == 1)
    {
        return;
    }

    for(int i = 0; i < size-1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i+1]);
        }
    }

    BubbleSort(arr, size-1);
}



int main()
{
    int arr[] = {10, 45, 87, 96, 35, 45, 12, 47, 12};
    // int arr[] = {4, 3, 5, 1, 2};
    int size = 9;
    cout << "Before function call, array is: ";
    printArray(arr, size);

    BubbleSort(arr, size);

    cout << "After function call, array is: ";
    printArray(arr, size);

    return 0;
}