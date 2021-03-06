//
//  TwoSum.cpp
//  LeetCode
//
//  Created by JyWang on 2017/6/4.
//  Copyright © 2017年 Jy. All rights reserved.
//

#include "TwoSum.hpp"
std::vector<int>  TwoSum::twoSum(std::vector<int>& nums, int target)
{
    int sum;
    std::vector<int> res(2,0);
    for (int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1;j < nums.size();j++)
        {
            sum = nums[i] + nums[j];
            if (sum == target)
            {
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    return res;
}

//Testcase sample
//Insert into main
//    TwoSum ts;
//    std::vector<int> nums{2,7,11,15};
//    auto res = ts.twoSum(nums, 9);
//    for(auto it = res.begin();it != res.end() && !isspace(*it); it++)
//    {
//        std::cout << *it << std::endl;
//    }
