
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {

        int len=nums.size();

        sort(nums.begin(), nums.end());

        vector< vector<int> > result(len/3, vector<int>(3, 0));

        int index_result=0;

        for(int i=0; i<len; i+=3) {
            if(i<len && nums[i+2]-nums[i]<=k) {
                result[index_result]={nums[i], nums[i+1], nums[i+2]};
            }
            else {
                vector < vector<int> > res;
                return res;
            }
        }

        return result;
        
    }
};

int main() {
    Solution sob;

}