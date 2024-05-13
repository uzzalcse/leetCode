
#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        vector<int> word1count(26, 0);
        vector<int> word2count(26, 0);
        for(int i=0; i<word1.size(); i++) {
        	word1count[word1[i]-'a']++;
        	word2count[word2[i]-'a']++;
        }

        for(int i=0; i<26; i++) {
        	if((word1count[i]>0 && word2count[i]>0) || (word1count[i]==0 && word2count[i]==0)) {
        		continue;
        	}
        	else return false;
        }

        sort(word1count.begin(), word1count.end());
        sort(word2count.begin(), word2count.end());;
        for(int i=0; i<26; i++) {
        	if(word1count[i]!=word2count[i]) {
        		return false;
        	}
        }
        return true;
    }
};

int main() {
	string s1, s2; cin>>s1>>s2;
	Solution sob;
	cout<<sob.closeStrings(s1, s2)<<endl;
}
