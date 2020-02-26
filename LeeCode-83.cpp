/*************************************************************************
    > File Name: LeeCode-83.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 三  2/26 16:29:17 2020
 ************************************************************************/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p = head,*q;
    while(p && p->next){
        if(p->val - p->next->val){
            p = p->next;
        } else {
            q = p->next;
            p->next = q->next;
            free(q);
        }

    }
    return head;
}
