#include <iostream>
#include <vector>

using namespace std;

class NumArray {
private:
    vector<int> num;

public:
    NumArray(vector<int>& nums) {
        num = nums;
    }

    int sumRange(int left, int right) {
        int len = right - left + 1;
        int n = len - 1;
        if (n < 0) {
            cout << "left > right error!!!" << endl;
        } else if (n == 0) {
            return num[left];
        }  else {
            return sumRange(left, right - 1) + num[right] ;
        }
    }
};

int main()
{
    vector<int> num = {-2, 0, 3, -5, 2, -1};
    NumArray numArray(num);
    cout << "the total is:" << numArray.sumRange(0, 0) << endl;
}