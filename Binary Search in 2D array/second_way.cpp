// Link: https://leetcode.com/problems/search-a-2d-matrix-ii/description/  (Leetcode)

/* MOST IMPORTANT

                Conditions Required for using the Second way of Binary Search in 2D matrix

        *****Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
        *****Integers in each row are sorted in ascending from left to right.
        *****Integers in each column are sorted in ascending from top to bottom.

!!! Remember you can use the Second way on the first way's conditions as well,

    but can NOT use first way on the second way's conditions.
*/

#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    // Efficient searching in 2D array (sorted by row and col as well)
    // from left-most bottom

    // T.C: - O(m+n)
    int row = matrix.size() - 1;
    int col = matrix[0].size() - 1;

    int i = row;
    int j = 0;

    while (i >= 0 && j <= col)
    {
        int elem = matrix[i][j];

        if (elem == target)
        {
            return true;
        }
        else if (elem < target)
        {
            j++;
        }
        else
        {
            i--;
        }
    }

    return false;
}

int main()
{
    int matrix[][5] = { {1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5;
    return 0;
}