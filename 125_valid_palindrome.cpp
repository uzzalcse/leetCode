


#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<=j) {
        	if(!isalnum(s[i])) {
        		i++; continue;
        	}
        	if(!isalnum(s[j])) {
        		j--; continue;
        	}
        	if(tolower(s[i])!=tolower(s[j])) {
        		return false;
        	}
        	else {
        		i++;
        		j--;
        	}
        }
        return true;
    }
};

int main() {
	Solution ob;
	string s; cin>>s;
	cout<<ob.isPalindrome(s)<<endl;

}
