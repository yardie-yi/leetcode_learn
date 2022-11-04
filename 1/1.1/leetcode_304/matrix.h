#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <vector>
#include <iostream>

using namespace std;

class NumMatrix {
private:
    vector<vector<int>> preMatrix;
public:
    NumMatrix(vector<vector<int>>& matrix);
    int sumRegion(int row1, int col1, int row2, int col2);
};

#endif