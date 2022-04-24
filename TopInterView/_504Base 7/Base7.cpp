//
// Created by fk035 on 2022/4/25.
//

#include "Base7.h"

string Base7::convertToBase7(int num) {
    if(num < 0)
    {
        string value = convertToBase7(num*-1);
        return "-" + value;
    }
    if(num < 7)
        return std::to_string(num);
    string base7 = convertToBase7(num/7);
    return base7 + std::to_string(num % 7);
}
