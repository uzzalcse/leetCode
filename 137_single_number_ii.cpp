#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> um;
        for(int i=0; i<nums.size(); i++) {
        	um[nums[i]]++;
        }
        for(auto my_pair: um) {
        	if(my_pair.second==1) return my_pair.first;
        }
        return -1;
    }
};

int main() {
	vector<int> v{1, 2, 1, 1};
	Solution sob
	cout<<sob.singleNumber(v);
}