//
//  AddTwoNumbers.cpp
//  LeetCode
//
//  Created by JyWang on 2017/6/4.
//  Copyright © 2017年 Jy. All rights reserved.
//

#include "AddTwoNumbers.hpp"

// Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}//x 和 NULL 分别為 val 和 next 的默認值
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int length = 0;
        for (ListNode* l = l1;l != NULL;l = l->next)
        {
            length ++;
        }
        for (int i = length;i<length;i++)
        {
            //ashita
        }
        return NULL;
    }
};
