#include<bits/stdc++.h> 

using namespace std;


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> um;
        for(int i=0; i<arr.size(); i++) {
        	um[arr[i]]++;
        }
        vector<int> v;
        for(auto pair: um) {
        	v.push_back(pair.second);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size()-1; i++) {
        	if(v[i]==v[i+1])
        		return false;
        }
        return true;
    }
};

int main() {
	vector<int> arr{-3,0,1,-3,1,1,1,-3,10,0};
	Solution sob;
	cout<<sob.uniqueOccurrences(arr)<<endl;
}