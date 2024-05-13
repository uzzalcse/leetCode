#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result=0;
        while(x!=0) {
            int last_digit=x%10; cout<<last_digit<<endl;
            if(result>INT_MAX/10 || result<INT_MIN/10) return 0;
            result=result*10+last_digit;
            x=x/10;
        }
        return result;
    }
};

int main() {
	Solution sob;
	cout<<sob.reverse(-123);
}