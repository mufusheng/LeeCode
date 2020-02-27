/*************************************************************************
    > File Name: LeeCode-237.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 四  2/27 21:22:48 2020
 ************************************************************************/

void deleteNode(struct ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}
