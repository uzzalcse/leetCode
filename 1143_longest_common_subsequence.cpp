
#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(), n=text2.size();
        vector< vector<int> > t(m+1, vector<int>(n+1));
        for(int i=0; i<m+1; i++) {
        	t[i][0]=0;
        }
        for(int i=1; i<n+1; i++) {
        	t[0][i]=0;
        }

        for(int i=1; i<m+1; i++) {
        	for(int j=1; j<n+1; j++) {
        		if(text1[i-1]==text2[j-1]) {
        			t[i][j]=1+t[i-1][j-1];
        		}
        		else {
        			t[i][j]=max(t[i-1][j], t[i][j-1]);
        		}
        	}
        }

        return t[m][n];
    }
};

int main() {
	string s1, s2; cin>>s1>>s2;
	Solution sob;
	cout<<sob.longestCommonSubsequence(s1, s2);
}