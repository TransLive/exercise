//
//  Tools.cpp
//  LeetCode
//
//  Created by JyWang on 2017/6/5.
//  Copyright © 2017年 Jy. All rights reserved.
//

#include "Tools.hpp"
std::vector<int> Tools::DecToBin(int decimal)
{
    
    std::vector<int> res;
    for(int i = 0;decimal > 0;i++,decimal /= 2)
    {
        //正序
        //res.insert(res.begin(),1,decimal % 2);
        //逆序
        res.push_back(decimal % 2);
    }
    res.push_back(0);
    return res;
}
