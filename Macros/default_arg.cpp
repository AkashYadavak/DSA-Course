#include<iostream>

using namespace std;

#define ELE  1,2,3,4,5,6


void func(int arr[], int size, int start = 4)
{
    for(int i = start; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return;
}

void three(int a = 0, int b = 1, int c = 2)
{
    cout << a << " " << b << " " << c << endl;
}




int main()
{
    // int arr[] = {ELE};

    // func(arr, 6, 2);

    // cout << "without start argument" << endl;

    // func(arr, 6);

    three();

    return 0;
}