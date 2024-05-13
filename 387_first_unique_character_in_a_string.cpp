
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        for(int i=0; i<s.size(); i++) {
        	arr[s[i]-'a']++;
        }
        for(int i=0; i<s.size(); i++) {
        	if(arr[s[i]-'a']==1) {
        		return i;
        	}
        }
        return -1;
    }
};

int main() {
	Solution sob;
	cout<<sob.firstUniqChar("aabb");
}