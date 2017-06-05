//
//  AddTwoNumbers.cpp
//  LeetCode
//
//  Created by JyWang on 2017/6/4.
//  Copyright © 2017年 Jy. All rights reserved.
//

#include "AddTwoNumbers.hpp"

// Definition for singly-linked list.


ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    auto la = l1;
    for(;l2 != NULL;l1 = l1->next,l2 = l2->next)
    {
 
        l1->val = l2==NULL ? l1->val + 0 : l1->val + l2->val;
        this->next(l1);
        if(l1->next == NULL && l2->next != NULL)
        {
            l1->next = l2->next;
            l1 = la;
            return la;
        }
    }
    l1 = la;
    return l1;
}
void AddTwoNumbers::next(ListNode *l)
{
    if(l->val >= 10)
    {
        l->val %= 10;
        if(l->next == NULL)
        {
            l->next = new ListNode(1);
        }
        else
        {
            l->next->val +=1;
            this->next(l->next);
        }
    }
    else
        return;
}

/*Testcase sample
 ListNode * l1 = new ListNode(9);
 l1->next = new ListNode(9);
 ListNode * l2 = new ListNode(9);
 //l2->next = new ListNode(3);
 AddTwoNumbers* atn = new AddTwoNumbers();
 auto l = atn->addTwoNumbers(l1, l2);
 for(;l != NULL;l = l->next)
 {
 std::cout << l->val << std::endl;
 }
*/
