#include <iostream>
#include <vector>

using namespace std;

class NumArray {
private:
    vector<int> preNum;

public:
    NumArray(vector<int>& nums) {
        preNum.resize(nums.size() + 1);
        preNum[0] = 0;
        for (int i = 1; i < preNum.size(); i++) {
            preNum[i] = preNum[i-1] + nums[i-1];
        }
    }

    int sumRange(int left, int right) {
        return preNum[right + 1] - preNum[left];
    }
};

int main()
{
    vector<int> num = {-2, 0, 3, -5, 2, -1};
    NumArray numArray(num);
    cout << "the total is:" << numArray.sumRange(0, 0) << endl;
}