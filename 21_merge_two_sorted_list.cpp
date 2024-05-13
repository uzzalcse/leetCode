
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


struct ListNode {
	int val;
	ListNode *next;
	ListNode(): val(0), next(nullptr) {}
	ListNode(int x): val(x), next(nullptr) {}
	ListNode(int x, ListNode *next): val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head=list1;
        if(list1==NULL&&list2==NULL) {
        	head=NULL;
        	return head;
        }
        else if(list1==NULL&&list2!=NULL) {
        	head=list2;
        	return head;
        }
        else if(list1!=NULL&&list2==NULL) {
        	head=list1;
        	return head;
        }
        else {
        	ListNode* temp1=list1, *temp2=list2;
        	head=list1;
        	while(temp1!=NULL && temp2!=NULL) {
        		if(temp1->val > temp2->val) {
        			
        		}
        	}

        	return head;
        }
    }
};

int main() {
	
}
