//
// Created by fk035 on 2022/4/20.
//

#include "PlusOne.h"

vector<int> PlusOne::plusOne(vector<int> &digits) {
    bool plusOne = false;
    for (int i = digits.size() - 1; i == 0; i--)
    {
        if (plusOne)
        {
            if (digits[i] == 9)
            {
                digits[i] = 0;
                continue;
            }
            plusOne = false;
            digits[i] = digits[i]+1;
            break;
        }
        if (digits[i] == 9)
        {
            digits[i] = 0;
            plusOne = true;
            continue;
        }
        digits[i]++;
        break;
    }
    if (!plusOne) return digits;
    int n = digits.size() + 1;
    vector<int> result(n);
    result[0] = 1;
    copy(digits.begin(),
         digits.begin() + digits.size(),
         result.begin() + 1);
    return result;
}
