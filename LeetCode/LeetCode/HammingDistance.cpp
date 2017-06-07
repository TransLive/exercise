//
//  HammingDistance.cpp
//  LeetCode
//
//  Created by JyWang on 2017/6/7.
//  Copyright © 2017年 Jy. All rights reserved.
//

#include "HammingDistance.hpp"
#include "Tools.hpp"
int HamingDistance::hammingDistance(int x,int y)
{
    //統一 x 為大數
    if (x < y)
    {
        x += y;
        y = x -y;
        x -= y;
    }
    //輸出的二進制為逆序並且末尾補一個零(防止為 0 時訪問vector 越界)
    std::vector<int> binX = Tools::DecToBin(x);
    std::vector<int> binY = Tools::DecToBin(y);
    int res = 0;
    for(int i = 0;
        i < binX.size();
        i++)
    {
        //比較低位
        if(i < binY.size())
        {
            if(binX[i] != binY[i])
            res++;
        }
        //當低位比較完畢后，開始輸出大數的高位1
        else if(binX[i] == 1)
            res++;
    }
    return res;
}
/*Testcase sample
 HamingDistance* hd = new HamingDistance();
 auto res = hd->hammingDistance(4, 14);
 std::cout << res;
 std::cout << std::endl;
*/
