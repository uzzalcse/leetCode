

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long sum_nums=0, sum_each_element=0;
        set<int> myset;
        int n=nums.size();
        for(int i=0; i<n; i++) {
            myset.insert(nums[i]);
            sum_nums+=nums[i];
        }
        for(auto it: myset) {
            sum_each_element+=it;
        }
        sum_each_element=2*sum_each_element;
        return (sum_each_element - sum_nums);
    }
};

int main() {
    Solution sob;
    vector<int> v{1,1,2,2,5,5,7,3,3};
    cout<<sob.singleNumber(v);
}