//
// Created by fk035 on 2022/7/5.
//

#include <map>
#include "TwoSum.h"

vector<int> TwoSum::twoSum(vector<int> &nums, int target) {
    map<int, int> numsMap;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numsMap.find(complement) != numsMap.end()) {
            result.push_back(numsMap[complement]);
            result.push_back(i);
            break;
        }
        else
            numsMap[nums[i]] = i;
    }
    return result;
}
