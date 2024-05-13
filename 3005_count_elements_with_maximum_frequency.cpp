
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> my_map;
        int max_frequency=INT_MIN;
        for(int index=0; index<nums.size(); index++) {
            my_map[nums[index]]++;
        }
        int elements_with_max_frequency=0;
        for(const auto &my_pair: my_map) {
        	max_frequency=max(max_frequency, my_pair.second);
        }
        cout<<max_frequency<<endl;
        for(const auto &my_pair: my_map) {
        	if(max_frequency==my_pair.second) 
        		elements_with_max_frequency+=my_pair.second;
        }
        return elements_with_max_frequency;
    }
};

int main() {
	Solution sob;
	vector<int> v{1, 1, 2, 2, 3, 4, 5, 3};
	cout<<sob.maxFrequencyElements(v)<<endl;
}