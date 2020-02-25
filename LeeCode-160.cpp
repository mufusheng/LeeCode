/*************************************************************************
    > File Name: LeeCode-160.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 二  2/25 21:13:00 2020
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int cntA = 0, cntB = 0;
    struct ListNode *p = headA, *q = headB;
    while(p) cntA++,p = p->next;
    while(q) cntB++,q = q->next;
    int m = cntA - cntB;
    p = headA, q = headB;
    if(m > 0){
        while(m--) p = p->next;
        while(p != q){
            p = p->next;
            q = q->next;
        }
    } else {
        while(m++) q = q->next;
        while(p != q){
            p = p->next;
            q = q->next;
        }
    }
    return p;
}
