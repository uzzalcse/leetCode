
#include<bits/stdc++.h> 

using namespace std;

class RandomizedSet {
public:
	unordered_set< int > us;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(us.find(val)==us.end()) {
        	us.insert(val);
        	return true;
        }
        else 
        return false;
    }
    
    bool remove(int val) {
        auto it=us.find(val);
        if(it!=us.end()) {
        	us.erase(it);
        	return true;
        }
        else
        	return false;
    }
    
    int getRandom() {
        return *next(us.begin(), rand()%us.size());
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

int main() {
	
}
