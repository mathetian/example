/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!head)
            return head;
        ListNode*nHead=new ListNode(0);
        nHead->next=head;
        ListNode*prev=nHead;
        ListNode*cur=nHead->next;
        ListNode*oldcur=cur;
        while(cur)
        {
        	oldcur=cur;
        	while(cur->next&&cur->next->val==cur->val)
        		cur=cur->next;
        	prev->next=cur;
        	prev=cur;
        	cur=cur->next;
        }
        return nHead->next;
    }
};