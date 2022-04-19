//
// Created by fk035 on 2022/4/20.
//

#include "SqrtX.h"
int MySqrt(int x){
    if(x < 2) return x;
    if(x < 4) return 1;
    int left = 0, right = x;
    while(left < right)
    {
        int mid = (left + right) /2;
        if(x / mid >= mid)
            left = mid + 1;
        else
            right = mid;
    }
    return right-1;
}