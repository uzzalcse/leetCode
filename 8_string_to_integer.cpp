#include<bits/stdc++.h> 

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        if(s.empty())return 0; //Base Case
        long i=0, sign=1, sum=0, res=0;
        while(i<s.length() && s[i]==' ')++i; //Remove Blank Space
        if(s[i] == '-' || s[i]=='+'){ 
            s[i++]=='-' ? sign = -1 : sign = 1; //handle Pos/Neg
        }

        while(i<s.length()){ 
            //if current value is digit then add it, else exit;
            if(s[i]>='0' && s[i]<='9') res = res *10 + (s[i++]-'0');
            else return res*sign; 

            //Handle overflow 
            if(res > INT_MAX)return sign== -1 ? INT_MIN : INT_MAX;  
           
        }
        return res*sign; 
    }
};

int main() {
	string s="-+42";
	Solution sob;
	cout<<sob.myAtoi(s)<<endl;
}