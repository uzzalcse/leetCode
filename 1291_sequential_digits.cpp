

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int>result;
        for(int i=1; i<=9; i++) {
        	int temp=i;
        	int nextDigit=i+1;
        	while(temp<=high && nextDigit<=9) {
        		temp=temp*10+nextDigit;
        		if(low<=temp && temp<=high) {
        			result.push_back(temp);
        		}
        		nextDigit++;
        	}
        }
        sort(result.begin(), result.end());
        return result;
    }
};

int main() {
	Solution sob;
	vector<int> ans=sob.sequentialDigits(1, 10000);

	for(int i=0; i<ans.size(); i++) {
		cout<<ans[i]<<" ";
	}
}