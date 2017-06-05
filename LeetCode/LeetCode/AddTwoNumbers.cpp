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
        
        l1->val = l1->val + l2->val;
        
        //遞歸判斷進位情況
        this->next(l1);
        
        //當 l2 長於 l1 時，直接將之後的 l2 掛在 l1 的 next
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
            //當產生進位且次節點為空的時候，生成新節點并將進位 1 補入其中
            l->next = new ListNode(1);
        }
        else
        {
            //當產生進位且次節點不為空時，直接給次節點 +1，並且遞歸判斷次節點是否產生進位
            l->next->val += 1;
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
