#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        else if(n==2) return 2;
        else {
        	int a=1, b=2, c;
        	for(int i=0; i<n-2; i++) {
        		c=a+b;
        		a=b;
        		b=c;
        	}
        	return c;
        }
    }
};

int main() {
	Solution sob; 
	cout<<sob.climbStairs(6)<<endl;
}