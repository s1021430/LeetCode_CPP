//
// Created by fk035 on 2022/4/20.
//

#include "ClimbingStairs.h"

int ClimbingStairs::climbStairs(int n) {
    if(n <= 1) return 1;

    if(climbingTable[n] != 0)
        return climbingTable[n];

    climbingTable[n] = climbStairs(n-1) + climbStairs(n-2);
    return climbingTable[n];
}
