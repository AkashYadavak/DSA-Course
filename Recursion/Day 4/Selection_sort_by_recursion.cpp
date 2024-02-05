#include<iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for(int i = 0; i <= size-1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}


// By loop
// T.C: - O(n*n)
// S.C: - O(1)
/*
void SelectionSort(int arr[], int size)
{
    for(int i = 1; i <= size-1; i++)
    {
        int max = INT32_MIN;
        int index = 0;
        for(int j = 0; j <= size-i; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
                index = j;
            }
        }

        swap(arr[index], arr[size-i]);
    }
}
*/

// by Recursion

void SelectionSort(int arr[], int size)
{
    // Base Case
    if(size == 1)
    {
        return;
    }

    int max = INT32_MIN;
    int index = 0;
    for(int i = 0; i <= size-1; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }

    swap(arr[index], arr[size-1]);

    return SelectionSort(arr, size-1);
}


int main()
{
    // int arr[] = {16, 54, 87, 2, 93, 100, 48};
    int arr[] = {5, 3, 4, 2, 1};
    int size = 5;

    cout << "Before selection sort, array is: ";
    printArray(arr, size);

    SelectionSort(arr, size);

    cout << "After selection sort, array is: ";
    printArray(arr, size);


    return 0;
}