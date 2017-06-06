//
//  ReverseInteger.cpp
//  LeetCode
//
//  Created by JyWang on 2017/6/6.
//  Copyright © 2017年 Jy. All rights reserved.
//

#include "ReverseInteger.hpp"
#include <cmath>
#include <cstdlib>
long ReverseInteger::reverse(int x)
{
    long temp = 0;
    
    do
    {
        temp = temp * 10 + x % 10;
        x = x / 10;
    }while(x != 0);

    if (std::abs(temp) > __INT32_MAX__) //判斷溢出
        return 0;
    else
        return (int)temp;
}

/*Testcase sample
 ReverseInteger* ri = new ReverseInteger();
 std::cout <<
 ri->reverse(100)
 << std::endl;
*/
