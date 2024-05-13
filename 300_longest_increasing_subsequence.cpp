
#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    	if(nums.empty()) return 0;
    	int len=nums.size();
    	vector<int> mylist(len, 1);
    	for(int i=1; i<len; i++) {
    		for(int j=0; j<i; j++) {
    			if(nums[i]>nums[j]) {
    				mylist[i]=max(mylist[i], mylist[j]+1);
    			}
    		}
    	}
    	return *max_element(mylist.begin(), mylist.end());
    }
};

int main() {
	Solution s;
	vector<int> nums={10,9,2,5,3,7,101,18};
	cout<<s.lengthOfLIS(nums)<<endl;
}