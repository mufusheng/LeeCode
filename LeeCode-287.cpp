/*************************************************************************
    > File Name: LeeCode-287.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 四  2/27 21:23:12 2020
 ************************************************************************/


int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do{
        p = nums[p];
        q = nums[nums[nums[q]]];
    }while(p !=q);
    int cnt = 0;
    do{
        cnt += 1;
        p = nums[p];
    }while(p != q);
    p = nums[0],q = nums[0];
    while(cnt--) q = nums[q];
    while(p != q){
        p = nums[p];
        q = nums[q];
    }
    return p;
}
