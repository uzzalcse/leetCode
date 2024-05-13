
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


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    	ListNode* head=NULL;
    	ListNode* temp1=l1;
    	ListNode* temp2=l2;
    	int carry=0;
    	while(temp1!=NULL && temp2!=NULL) {
    		ListNode* new_node=new ListNode;
    		int temp_sum=temp1->val + temp2->val + carry;
    		if(temp_sum>9) {
    			carry=1;
    			temp_sum=temp_sum%10;
    		}
    		else {
    			carry=0;
    		}

    		new_node->val=temp_sum;
    		new_node->next=NULL;

    		if(head==NULL) {
    			head=new_node;
    		}

    		else {
    			ListNode* temp=head;
    			while(temp->next!=NULL) {
    				temp=temp->next;
    			}
    			temp->next=new_node;
    		}

    		temp1=temp1->next;
    		temp2=temp2->next;

    	}

    	if(temp1==NULL) {
    		while(temp2!=NULL) {
    			ListNode* new_node=new ListNode;
    			int temp_sum=temp2->val + carry;
    			if(temp_sum>9) {
    				carry=1;
    				temp_sum=temp_sum%10;
    			}
    			else {
    				carry=0;
    			}

    			new_node->val=temp_sum;
    			new_node->next=NULL;

    			if(head==NULL) {
    				head=new_node;
    			}
    			else {
    				ListNode* temp=head;
    				while(temp->next!=NULL) {
    					temp=temp->next;
    				}
    				temp->next=new_node;
    			}

    			temp2=temp2->next;
    		}
    	}

    	else if(temp2==NULL) {

    		while(temp1!=NULL) {
    			ListNode* new_node=new ListNode;
    			int temp_sum=temp1->val + carry;
    			if(temp_sum>9) {
    				carry=1;
    				temp_sum=temp_sum%10;
    			}
    			else {
    				carry=0;
    			}
    			new_node->val=temp_sum;
                new_node->next=NULL;
    			if(head==NULL) {
    				head=new_node;
    			}
    			else {
    				ListNode* temp=head;
    				while(temp->next!=NULL) {
    					temp=temp->next;
    				}
    				temp->next=new_node;
    			}
    			temp1=temp1->next;
    		}
    	}

        if(carry) {
            ListNode* temp=head;
            ListNode* new_node=new ListNode;
            new_node->val=carry;
            new_node->next=NULL;
            while(temp->next!=NULL) {
                temp=temp->next;
            }
            temp->next=new_node;
        }

    	return head;
        
    }
};