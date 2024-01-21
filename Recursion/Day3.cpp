#include<iostream>

using namespace std;

// bool is_sorted(int arr[], int size)
// {
//     // Base case
//     if(size == 2)
//     {
//         return true;
//     }
//     else
//     {
//         if((*(arr + 0) >= *(arr + 1)) && (*(arr + 1) >= *(arr + 2)))
//         {
//             return is_sorted(arr+1, size-1);
//         }
//         else if( (*(arr + 0) <= *(arr + 1) ) && ( *(arr + 1) <= *(arr + 2) ) )
//         {
//             return is_sorted(arr + 1, size - 1);
//         }
//         else
//         {
//             return false;
//         }
//     }
// }

// float Sum(float* arr, int size)
// {
//     if(size == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return arr[0] + Sum(arr+1, size-1);
//     }
// }

// int isFound(int *arr, int size, int key)
// {
//     if(size == 0)
//     {
//          return INT32_MIN;
//     }
//     else
//     {
//         if(key == *arr)
//         {
//             return 0;
//         }
//         else
//         {
//             return isFound(arr+1, size-1, key) + 1;
//         }
//     }
// }

int BinarySearch(int arr[], int size, int key)
{
    int l = 0;
    int r = size - 1;

    if(l > r)
    {
        return INT32_MIN;
    }

    int mid = l + (r-l)/2;

    if(arr[mid] == key)
    {
        return mid;
    }
    else if(arr[mid] > key)
    {
        return BinarySearch(arr, mid, key) + 0;
    }
    else
    {
        return BinarySearch((arr + mid + 1), (size - (mid+1)), key) + (mid + 1);
    }

}

int main(){

    int arr[] = {2, 3, 4, 8, 19, 20, 25, 35, 47, 56, 62, 68, 99};
    int size = 13;
    int key = 2;

    int index = BinarySearch(arr, size, key);

    if(index < 0)
    {
        cout << "Sorry, key does not exist.";
    }
    else
    {
        cout << "Index number is : " << index;
    }


    return 0;
}