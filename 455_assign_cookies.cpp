
#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()); sort(s.begin(), s.end());
        int cnt=0;
        int j=0;
        for(int i=0; i<g.size(); i++) {
        	for( ; j<s.size(); j++) {
        		if(g[i]<=s[j]) {
        			j++;
        			cnt++; break;
        		}
        	}
        }

        return cnt;
    }
};

int main() {
	Solution sob;
	vector<int> g{1, 2};
	vector<int> s{1, 2, 3};
	cout<<sob.findContentChildren(g, s)<<endl;
}
