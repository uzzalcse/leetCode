#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
    	if(s.size()!=goal.size()) return 0;
        string ans=s+s;
        return ans.find(goal)==-1?false:true;
    }
};