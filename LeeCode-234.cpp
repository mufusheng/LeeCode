/*************************************************************************
    > File Name: LeeCode-234.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 四  2/27 21:22:20 2020
 ************************************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int get_length(struct ListNode *head){
    int n = 0;
    while(head) n += 1, head = head->next;
    return n;
}
struct ListNode* reverse(struct ListNode *head, int n){
    struct ListNode ret,*p = head,*q;
    while(n--) p = p->next;
    ret.next = NULL;
    while(p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}

bool isPalindrome(struct ListNode* head){
    int len = get_length(head);
    struct ListNode *p = head, *q = reverse(head,(len + 1) / 2);
    while(q){
        if(p->val - q->val) return false;
        p = p->next;
        q = q->next;
    }
    return true;
}
