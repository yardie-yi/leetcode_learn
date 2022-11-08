#ifndef _SOLUTION_H_
#define _SOLUTION_H_

#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> preNum;
public:
    Solution(vector<int>& nums);
    int subarraySum(int k);    
};

#endif