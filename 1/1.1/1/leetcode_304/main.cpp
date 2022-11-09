#include "matrix.h"

int main()
{
    vector<vector<int>> num = {{3,0,1,4,2},{5,6,3,2,1},{1,2,0,1,5},{4,1,0,1,7},{1,0,3,0,5}};
    NumMatrix numArray(num);
    cout << "the total is:" << numArray.sumRegion(2, 1, 4, 3) << endl;
}