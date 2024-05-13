
#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    	map<int, int> loosers;
        for(int i=0; i<matches.size(); i++) {
        	for(int j=0; j<matches[i].size(); j++) {
        		if(j==1) {
        			loosers[matches[i][j]]++;
        		}
        	}
        }
        vector<int> onematchloosers;
        for(auto it: loosers) {
        	if(it.second==1) {
        		//cout<< it.first <<" ";
        		onematchloosers.push_back(it.first);
        	}
        }
        //cout<<endl;
        vector<int> onlywinners;
        set<int> v;
        for(int i=0; i<matches.size(); i++) {
        	for(int j=0; j<matches[i].size(); j++) {
        		if(j==0) {
        			auto it=loosers.find(matches[i][j]);
        			if(it==loosers.end()) {
        				//onlywinners.push_back(matches[i][j]);
        				v.insert(matches[i][j]);
        			}
        		}
        	}
        }
        for(auto it: v) {
        	onlywinners.push_back(it);
        }
        sort(onlywinners.begin(), onlywinners.end());
        return {onlywinners, onematchloosers};
    }
};

int main() {
	cout<<"hello\n";
	Solution sob;
	vector< vector<int> > matches{{1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}};
	vector< vector<int> > result=sob.findWinners(matches);
	for(int i=0; i<result[0].size(); i++) {
		cout<<result[0][i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<result[1].size(); i++) {
		cout<<result[1][i]<<" ";
	}
	cout<<endl;
}
