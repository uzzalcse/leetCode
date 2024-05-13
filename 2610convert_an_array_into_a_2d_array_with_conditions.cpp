


#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> vt;
        vector<int> v1d;
        map<int, int> mp;
        int vtlen=nums.size();
        for(int i=0; i<vtlen; i++) {
        	mp[nums[i]]++;
        }
        set<int> st;
        for(auto it=mp.begin(); it!=mp.end(); it++) {
        	st.insert(it->second);
        }
        auto it=st.end();
        int v=*(--st.end());
        int mpsize=mp.size();
        int t=1;
        for(int i=0; i<v; i++) {
        	for(auto it=mp.begin(); it!=mp.end(); it++) {
        		if(it->second!=0) {
        			v1d.push_back(it->first);
        			it->second--;
        		}
        	}
        	vt.push_back(v1d);
        	v1d.clear();
        }
        return vt;
    }
};


int main() {
	vector<int> vt={1,3,4,1,2,3,1};
	Solution s;
	vector<vector<int>> v2d=s.findMatrix(vt);
	for(int i=0; i<v2d.size(); i++) {
		for(int j=0; j<v2d[i].size(); j++) {
			cout<<v2d[i][j]<<" ";
		}
		cout<<endl;
	}
}

