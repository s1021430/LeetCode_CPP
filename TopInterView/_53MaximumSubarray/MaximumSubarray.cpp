//
// Created by 宋汎遠 on 2022/4/17.
//

#include "MaximumSubarray.h"

int MaximumSubarray::maxSubArray(std::vector<int> &nums) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i = 0;i < nums.size();i++){
        currentSum += nums[i];
        if(currentSum > maxSum)
            maxSum = currentSum;
        if(currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}
