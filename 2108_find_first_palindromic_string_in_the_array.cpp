

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isPalindrome(string s) {
        int j=s.size()-1;
        for(int i=0; i<s.size()/2; i++) {
            if(s[i]!=s[j--]) {
                return false;
            }
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++) {
            if(isPalindrome(words[i])) {
                return words[i];
            }
        }
        return "";
    }
};


int main() {
    Solution sob;
    //cout<<sob.firstPalindrome<<endl;
    vector<string> words={"abc","car","addba","aracecar","cool"};
    //cout<<sob.isPalindrome("abaa")<<endl;
    cout<<sob.firstPalindrome(words)<<endl;
}