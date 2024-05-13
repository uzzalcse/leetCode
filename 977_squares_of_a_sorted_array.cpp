#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) {
        	nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
	vector <int> v{-4, -3, -2, -1, 0, 11, 22, 33, 44, 5};
	Solution sobj;
	vector <int> ans=sobj.sortedSquares(v);
	for(auto value: ans) {
		cout<<value<<" ";
	}
}