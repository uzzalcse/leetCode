
#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        int cnt=0;

        int sa[26]={0}, ta[26]={0};

        for(int i=0; i<26; i++) {
        	sa[i]=0;
        	ta[i]=0;
        }

        for(int i=0; i<s.size(); i++) {
        	sa[s[i]-'a']++;
        	ta[t[i]-'a']++;
        }

        // for(int i=0; i<26; i++) {
        // 	cout<<i+1<<" :"<<sa[i]<<endl;
        // }
        // cout<<endl;

        // for(int i=0; i<26; i++) {
        // 	cout<<i+1<<" :"<<ta[i]<<endl;
        // }
        // cout<<endl;

        for(int i=0; i<26; i++) {
        	if(sa[i]!=0) {
        		if(sa[i]>=ta[i])
        		cnt+=(sa[i]-ta[i]);
        		// cout<<i<< " " <<sa[i]<<" ";
        		// cout<<cnt<<" cnt\n";
        	}
        }

        return cnt;
    }
};

int main() {
	string s, t;
	cin>>s>>t;
	Solution so;
	cout<<so.minSteps(s, t)<<endl;
}
