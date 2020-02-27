/*************************************************************************
    > File Name: LeeCode-206.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 四  2/27 21:21:55 2020
 ************************************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode ret,*p,*q;
    ret.next = NULL;
    p = head;
    while(p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}
