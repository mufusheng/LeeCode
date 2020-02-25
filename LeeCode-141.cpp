/*************************************************************************
    > File Name: LeeCode-141.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 二  2/25 21:12:01 2020
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *p = head,*q = head;
    if(p == NULL) return false;
    do{
        p = p->next;
        q = q->next;
        if(q == NULL || q->next == NULL) return false;
        q = q->next;
    }while(p != q);
    return true;
}
