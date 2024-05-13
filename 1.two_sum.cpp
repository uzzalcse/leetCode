

#include<bits/stdc++.h>
using namespace std;

/*

Brute Force Solution


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
        	for(int j=i+1; j<nums.size(); j++) {
        		if(nums[i]+nums[j]==target) {
        			ans.push_back(i);
        			ans.push_back(j); 
        			break;
        		}
        	}
        }
        return ans;
    }
};

*/

/*

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++) {
        	mp[nums[i]]=i;
        }
        for(int i=0; i<nums.size(); i++) {
        	int complement=target-nums[i];
        	if(mp.count(complement) && mp[complement]!=i) {
        		ans.push_back(i);
        		ans.push_back(mp[complement]);
        		return ans;
        	}
        }
        return ans;
    }
};

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++) {
        	int complement=target-nums[i];
        	if(mp.count(complement)) {
        		ans.push_back(i);
        		ans.push_back(mp[complement]);
        		return ans;
        	}
        	mp[nums[i]]=i;
        }
        return ans;
    }
};



int main() {
	Solution s;
	vector<int> nums={2,7,11,15};
	vector<int> ans=s.twoSum(nums, 9);
	cout<<ans[0]<<" "<<ans[1]<<endl;
}