
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
    	sort(tokens.begin(), tokens.end());
        int i=0, j=tokens.size()-1;
        int max_score=0;
        int score=0;
        while(i<=j) {
        	if(power>=tokens[i]) {
        		score=score+1;
        		power=power-tokens[i];
        		max_score=max(max_score, score);
        		i++;
        	}
        	else if(score>=1) {
        		power=power+tokens[j];
        		score=score-1;
        		j--;
        	}
        	else break;
        }
        return max_score;
    }
};

int main() {
	Solution sobj;
	vector<int> v{100, 200, 300, 400};
	int power=200;
	cout<<sobj.bagOfTokensScore(v, power)<<endl;
}