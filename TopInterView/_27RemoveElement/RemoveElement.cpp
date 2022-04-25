//
// Created by fk035 on 2022/4/26.
//

#include "RemoveElement.h"

int RemoveElement_27::RemoveElement(vector<int> &nums, int val) {
    int length = 0;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] != val)
            nums[length++] = nums[i];
    return length;
}
