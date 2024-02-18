// Inversion Count: - 
// i < j and arr[i] > arr[j]

// In short, array me esse pair banao jisme left element apne right element se bada ho 
// or unhi pairs ko count karne ko inversion count khete he.

// Ex: {2, 4, 1, 3, 5};

// pairs:  (2, 1), (4, 1), (4, 3)

// Remember: (4, 2) is not possible because 2 is on left and 4 is on right. see above: i < j.

#include<iostream>

using namespace std;

// T.C: - O(n*n)
// S.C: - O(1)
/*
int inversionCount(int *arr, int size)
{
    int count = 0;

    for(int i = 0; i < size-1; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                count++;
            }
        }
    }

    return count;
}*/

// Optimized Inversion count by using merge sort
// T.C: - O(n * log n)
// S.C: - O(n)

int global_count = 0;

void merge(int* arr, int s, int e)
{
    int mid = s + (e - s)/2;
    int k = e - s + 1;
    int* sorted_arr = new int[k];

    int i = mid;
    int j = e;
    k = k-1;

    while(i >= s && j >= mid + 1)
    {
        if(arr[i] > arr[j])
        {
            global_count += j - (mid + 1) + 1;              // main line in the code
            sorted_arr[k] = arr[i];
            k--;
            i--;
            continue;
        }

        sorted_arr[k] = arr[j];
        k--;
        j--;

    }

    while(i >= s)
    {
        sorted_arr[k] = arr[i];
        k--;
        i--;
    }

    while(j >= mid + 1)
    {
        sorted_arr[k] = arr[j];
        k--;
        j--;
    }

    k = 0;
    for(int i = s; i <= e; i++)
    {
        arr[i] = sorted_arr[k];
        k++;
    }
}

void mergeSort(int arr[], int s, int e)
{
    // Base Case
    if(s == e)
    {
        return;
    }

    // Recursive Case

    int mid = s + (e - s)/2;

    // left-part
    mergeSort(arr, s, mid);

    // right-part
    mergeSort(arr, mid + 1, e);

    // merging
    merge(arr, s, e);
}

int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    // int arr[] = {5, 4, 3, 2, 1, 48, 87, 24};
    int size = 8;
   
    mergeSort(arr, 0, 4);

    cout << global_count;

    return 0;

}