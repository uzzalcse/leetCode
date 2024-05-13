#include<bits/stdc++.h> 

using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    	vector<int> nums2;
    	//int count=0;
    	int j=0, k=0;
        for(int i=0; i<nums.size(); i++) {
        	if(nums[i]!=val) {
        		nums[j++]=nums[i];
        		//count++;
        	}
        }
     /*   for(int i=0; i<nums.size(); i++) {
        	cout<<nums[i]<<" ";
        }

      */
        
        return j;
    }
};


int main() {

	Solution s;
	vector<int> lis={0,1,2,2,3,0,4,2};
	int ss=s.removeElement(lis, 2);
	cout<<ss<<endl;
}