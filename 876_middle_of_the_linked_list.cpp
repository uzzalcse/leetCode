
#include<bits/stdc++.h> 

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

	int node_count(ListNode* head) {
		ListNode* temp=head;
		int cnt=0;
		while(temp!=NULL) {
			cnt++;
			temp=temp->next;
		}
		return cnt;
	}

    ListNode* middleNode(ListNode* head) {
        int n=node_count(head);
        ListNode* temp=head;
        for(int i=0; i<n/2; i++) {
        	temp=temp->next;
        }
        return temp;

    }
};

int main() {
	
}
