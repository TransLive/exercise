//
//  main.cpp
//  LeetCode
//
//  Created by JyWang on 2017/6/4.
//  Copyright © 2017年 Jy. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "AddTwoNumbers.hpp"
int main(int argc, const char * argv[])
{
    ListNode * l1 = new ListNode(9);
    l1->next = new ListNode(9);
    ListNode * l2 = new ListNode(9);
    //l2->next = new ListNode(3);
    AddTwoNumbers* atn = new AddTwoNumbers();
    auto l = atn->addTwoNumbers(l1, l2);
    std::cout << l->val << std::endl;
    return 0;
}
