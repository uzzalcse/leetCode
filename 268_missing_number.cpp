

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long s=0;

        for(auto num: nums) {
        	s+=num;
        }
        int n=nums.size();
        long long ss=((n+1)*(n))/2;
        return abs(ss-s);
    }
};

int main() {
	Solution sob;
	int n; cin>>n;
	vector<int>v;
	for(int i=0; i<n; i++) {
		int x; cin>>x;
		v.push_back(x);
	}
	cout<<sob.missingNumber(v);
}