#include "solution.h"

int main()
{
    vector<int> num = {1,2,3};
    Solution s(num);
    cout << "sum num is" << s.subarraySum(3) << endl;
}