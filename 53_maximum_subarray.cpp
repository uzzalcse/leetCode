


#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

    	int curr=nums[0], maxsum=nums[0];

    	for(int i=1; i<nums.size(); i++) {
    		curr=max(nums[i], curr+nums[i]);
    		maxsum=max(maxsum, curr);
    	}

        return maxsum;
    }
};


int main() {
	Solution sob;
	vector<int> arr{-2,-1,-3,-4,-1,-2,-1,-5,-4};
	cout<<sob.maxSubArray(arr)<<endl;
}