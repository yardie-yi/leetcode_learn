#include "matrix.h"

NumMatrix::NumMatrix(vector<vector<int>>& matrix)
{
    preMatrix.resize(matrix.size() + 1);
    for(int i = 0; i < preMatrix.size(); i++) {
        preMatrix[i].resize(matrix[0].size() + 1);
    }
    for(int i = 1; i < preMatrix.size(); i++) {
        for(int j = 1; j < preMatrix[0].size(); j++) {
            preMatrix[i][j] = preMatrix[i-1][j] + preMatrix[i][j-1] + matrix[i-1][j-1] - preMatrix[i-1][j-1];
        }
    }
}

int NumMatrix::sumRegion(int row1, int col1, int row2, int col2)
{
    return preMatrix[row2+1][col2+1] - preMatrix[row2+1][col1] - preMatrix[row1][col2+1] + preMatrix[row1][col1];
}