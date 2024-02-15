// Concept of Merge Sort:
// Phele pore array ko half-half karke todte jao or 
// tab tak todo jab tak vo individual element me naa toot jaye, 
// uske baad jese toda tha vese jodte jao per ascending order me(or sorted form me).


// Time Complexity: - O(n * log n)
// Space Complexity: - O(n)  because of temp array that we used to merge two sorted array.

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

void merge(int* arr, int s, int e)
{

    int  sorted_arr[e - s + 1];          //agar arr indx 2 se indx 3 tak aaya he to size ese hi nikle ga 

    int mid = s + (e - s)/2;

    int i = mid;
    int j = e;
    int k = e-s;    //last index of new_sorted array

    while(i >= s && j >= mid+1)
    {
        if(arr[i] > arr[j])
        {
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

    while( j >= mid+1)
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


void mergeSort(int* arr, int s, int e)
{
    // Base Case
    if(s == e)              //ya to arr me ek hi element he jo apne app me hi sorted hota he, to return kardo
    {                       // ya fir humne arr ko itna toda ki vo individual element ki stage pe aa phucha, to ab yanha se return karo or jodna chalu karo
        return;
    }

    // Recursive Case         yanha arr ko toda jaata he

    int mid = s + (e - s)/2;          // arr ke do tukde kiye, half-half   

    // left part
    mergeSort(arr, s, mid);         // arr ka left part humne dubaara todne ke liye bheja kyoki shayad left part ek individual element Na ho, agar hoga bhi to aage pata chal jayege (s == e)...

    // right part                    
    mergeSort(arr, mid + 1, e);      // same here

    // merging
    merge(arr, s, e);           // yanha vese to do array bhejte he, per vo do arr is ek hi array me he 
                             // left part or right part dono part apne me sorted he ab bas milakar sorted karna he    
}                               

int main()
{
    // int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr[] = {2, 87, 45, 65, 14, 89, 68, 23, 48, 20, 32};
    int size = 11;

    cout << "Your array before merge sort: ";
    printArray(arr, size);

    mergeSort(arr, 0, 10);

    cout<< "Your array after merge sort: ";
    printArray(arr, size);



    return 0;
}