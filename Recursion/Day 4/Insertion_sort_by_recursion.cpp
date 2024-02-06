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
void InsertionSort(int arr[], int size)
{
    int i = 1;
    while(i < size)
    {
        int j = i-1;
        int temp = arr[i];

        while(j >= 0)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
                j--;
            }
            else
            {
                arr[j+1] = temp;
                break;
            }
        }
    arr[j+1] = temp;

    i++;
    }
}
*/

// By Recursion

void InsertionSort(int *arr, int size, int i = 1)
{
    // Base Case
    if(i >= size)
    {
        return;
    }

    //Recursive Case

    int j = i-1;
    int temp = arr[i];

    while(j >= 0)
    {
        if(arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        else
        {
            arr[j+1] = temp;
            break; 
        }

    arr[j+1] = temp;
    }

    return InsertionSort(arr, size, i+1);    // OR -> Insertionsort(arr, size, i+1);
}

int main()
{
    // int arr[] = {8, 9, 2, 4, 0, -1, 2, 85, -40, 54};
    int arr[] = {45, 32, -12, 58, 97, -100, 100};
    int size = 7;

    cout << "Before Insertion sort, array is: ";
    printArray(arr, size);

    InsertionSort(arr, size);

    cout << "After Insertion sort, array is: ";
    printArray(arr, size);
    return 0;
}