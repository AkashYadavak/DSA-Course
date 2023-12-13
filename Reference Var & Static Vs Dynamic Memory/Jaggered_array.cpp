#include<iostream>

using namespace std;



int main()
{
    int n_rows;
    cout << "Please enter the number of rows: ";
    cin >> n_rows;

    int **arr = new int*[n_rows];

    int *n_cols = new int[n_rows];
    for(int i = 0; i < n_rows; i++)
    {
        cout << "Please tell us the number of columns in the " << i+1 << " row: ";
        cin >> n_cols[i];

        arr[i] = new int[n_cols[i]];
    }

    for(int i = 0; i < n_rows; i++)
    {
        for(int j = 0; j < n_cols[i]; j++)
        {
            cin >> arr[i][j]; 
        }
    }

    for(int i = 0; i < n_rows; i++)
    {
        for(int j = 0; j < n_cols[i]; j++)
        {
            cout << arr[i][j] << " ";
        }

    cout << endl;
    }

    return 0;
}