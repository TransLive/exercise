//
//  AddTwoNumbers.hpp
//  LeetCode
//
//  Created by JyWang on 2017/6/4.
//  Copyright © 2017年 Jy. All rights reserved.
//

#ifndef AddTwoNumbers_hpp
#define AddTwoNumbers_hpp

#include <stdio.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class AddTwoNumbers
{
public:
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2);
    void next(ListNode *l1);
};
#endif /* AddTwoNumbers_hpp */
