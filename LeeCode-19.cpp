/*************************************************************************
    > File Name: LeeCode-19.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 二  2/25 21:03:26 2020
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret,*p,*q;
    ret.next = head;
    p = q = &ret;
    while(n--) q = q->next;
    q = q->next;
    while(q){
        p = p->next;
        q = q->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return ret.next;
}
