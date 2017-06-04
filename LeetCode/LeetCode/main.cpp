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
#include "TwoSum.hpp"
int main(int argc, const char * argv[]) {
    TwoSum ts;
    std::vector<int> nums{2,7,11,15};
    auto res = ts.twoSum(nums, 9);
    for(auto it = res.begin();it != res.end() && !isspace(*it); it++)
    {
        std::cout << *it << std::endl;
    }
    return 0;
}
