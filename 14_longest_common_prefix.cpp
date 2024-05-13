
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

    	string last, first, ans="";
    	sort(strs.begin(), strs.end());

    	int n=strs.size();
    	last=strs[n-1], first=strs[0];
    	for(int i=0; i<first.size(); i++) {
    		if(first[i]!=last[i]) {
    			return ans;
    		}
    		ans+=first[i];
    	}
        
    }
};

int main() {
	vector<string> v{"flower", "flow", "flight"};
	Solution sobj;
	cout<<sobj.longestCommonPrefix(v)<<endl;
}