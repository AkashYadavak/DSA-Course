// Link to the problem: - https://leetcode.com/problems/search-a-2d-matrix/   (LeetCode)

/* MOST IMPORTANT

            Conditions Required for using first way of Binary Search in 2D matrix

    *****You are given an m x n integer matrix matrix with the following two properties:
    *****Each row is sorted in non-decreasing order.
    *****The first integer of each row is greater than the last integer of the previous row.
*/

#include<bits/stdc++.h>
using namespace std;


bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    // Love Babbar bhaiya solution

    // T.C: - O(log(row * col))

    // Remeber we assume that the given 2d array is stored in 1d array
    // So, for calculating the row and col index of the selected elem

    // row index = mid / number of col
    // col index = mid % number of col

    int row = matrix.size();    // number of rows
    int col = matrix[0].size(); // number of columns

    int s = 0;               // starting index  in 1d array
    int e = (row * col) - 1; // end index  in 1D array

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        int i = mid / col; // row index
        int j = mid % col; // col index

        int elem = matrix[i][j]; // Actuall array is 2D

        if (elem == target)
        {
            return true;
        }
        else if (elem < target)
        {
            s = mid + 1; // remeber we are searching in 1D array
        }
        else
        {
            e = mid - 1; // we are searching in 1d rray
        }
    }

    return false;
}

int main()
{
    int matrix[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 13;

    return 0;
}