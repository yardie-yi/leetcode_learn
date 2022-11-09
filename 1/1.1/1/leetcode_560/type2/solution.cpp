#include "solution.h"

Solution::Solution(vector<int>& nums)
{
    preNum.resize(nums.size()+1);
    preNum[0] = 0;
    for(int i = 1; i < preNum.size(); i++) {
        preNum[i] = preNum[i-1] + nums[i-1];

    }
}

int Solution::subarraySum(int k)
{
    int key;
    int res = 0;
    for(int pos = 1; pos <= preNum.size(); pos++) {
        key = preNum[pos] - k;
        for(int next = 0; next < pos; next ++) {
            if (preNum[next] == key) {
                res ++;
            }
        }
    }
    return res;
}