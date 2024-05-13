

#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    	vector<int> vt;
    	for(int i=0; i<bank.size(); i++) {
    		int cnt=0;
    		for(int j=0; j<bank[i].size(); j++) {
    			if(bank[i][j]=='1') {
    				cnt++;
    			}
    		}
    		if(cnt!=0)
    		vt.push_back(cnt);
    		cnt=0;
    	}
    	int ans=0;
    	for(int i=0; i<vt.size(); i++) {
    		if((i+1)<vt.size())
    		ans+=vt[i]*vt[i+1];
    	}
        return ans;
    }
};

int main() {
	vector<string> s={"011001","000000","010100","001000"};
	//vector<string> s={"0"};
	Solution ss;
	cout<<ss.numberOfBeams(s)<<endl;
}