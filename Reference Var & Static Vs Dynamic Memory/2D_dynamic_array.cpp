#include<iostream>

using namespace std;

int main()
{

    /*  Always keep remember 
        heap se memory mangane ke baad 
        uska kaam ho jaane ke baad 

        us memory ko free bhi aapne hi karna he
        this is your duty.
    */


    int n_rows;
    cout << "Please enter the number of rows of your 2D array: ";
    cin >> n_rows;

    int n_cols;
    cout << "Please enter the number of columns of your 2D array: ";
    cin >> n_cols;

    int **arr = new int*[n_rows];   // array of pointers
    // for storing the address of a pointer, we need a double pointer (**arr)

    for(int i = 0; i < n_rows; i++)
    {
        arr[i] = new int[n_cols];
    }   

    //till here our 2D array is created

    // Now, assigning values to the 2D array

    for(int i = 0; i < n_rows; i++)
    {
        for(int j = 0; j < n_cols; j++)
        {
           cin >> arr[i][j];
        }
    }

    // printing output

    for(int i = 0; i < n_rows; i++)
    {
        for(int j = 0; j < n_cols; j++)
        {
            cout << arr[i][j] << " ";
        }
    cout << endl;
    }


    // Releasing the memory 

    // Relaesing the 1D arrays which storing the actual data
    for(int i = 0; i < n_rows; i++)
    {
        delete[] arr[i];
        
        cout << "One 1D array is released" << "\n";
    }

    // Releasing the array which storing the addresses of all 1D arrays
    delete[] arr;

    cout << "Last array is also released.";





    return 0;
}