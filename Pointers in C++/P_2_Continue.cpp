#include <iostream>

using namespace std;

int getSum(int arr[], int n)
{
    // cout << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i[arr];
    }

    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    // cout << "sizeof(arr): " << sizeof(arr) << endl;
    cout << getSum(arr + 3, 3) << endl;

    return 0;
}