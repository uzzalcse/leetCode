
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool halvesAreAlike(string s) {
    	int left=0, right=0;
    	int len=s.size();
        for(int i=0; i<len; i++) {
        	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
        		if(i<len/2) {
        			left++;
        		}
        		else {
        			right++;
        		}
        	}

        }
        return left==right;
    }
};

int main() {
	Solution s;
	string text; cin>>text;
	cout<<s.halvesAreAlike(text)<<endl;
}