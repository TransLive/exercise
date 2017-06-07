//
//  ReverseInteger.cpp
//  LeetCode
//
//  Created by JyWang on 2017/6/6.
//  Copyright © 2017年 Jy. All rights reserved.
//

#include "ReverseInteger.hpp"
//#include <cmath>
#include <cstdlib>
long ReverseInteger::reverse(int x)
{
    long temp = 0;
    
    while(x)
    {
        temp = temp * 10 + x % 10;
        x = x / 10;
    }//x == 0 時說明處理完畢
    return (temp > INT32_MAX || temp < INT32_MIN) ? 0 :temp;
    //return std::abs(temp) > __INT32_MAX__ ? 0 : (int)temp ;
}

/*Testcase sample
 ReverseInteger* ri = new ReverseInteger();
 std::cout <<
 ri->reverse(100)
 << std::endl;
*/
