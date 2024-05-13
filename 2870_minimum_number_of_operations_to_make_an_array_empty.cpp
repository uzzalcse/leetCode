


#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
        	mp[nums[i]]++;
        }
        int cnt1=0;
        for(auto it=mp.begin(); it!=mp.end(); it++) {
            if(it->second==1) return -1;
            else {
                cnt1=cnt1+it->second/3;
                if(it->second%3) {
                    cnt1++;
                }
            }
        }
        return cnt1;
    }
};

int main() {
	vector<int> nums={19,19,19,19,19,19,19,19,19,19,19,19,19};
    Solution s;
    cout<<s.minOperations(nums);
}