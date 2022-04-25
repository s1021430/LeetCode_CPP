//
// Created by fk035 on 2022/4/26.
//

#include "ImplementStrStr.h"

int ImplementStrStr::strStr(string haystack, string needle) {
    if(haystack.length() < needle.length()) return -1;
    if(haystack == needle) return 0;
    for(int i = 0;i < haystack.length() - needle.length() + 1;i++)
    {
        if(haystack[i] == needle[0])
        {
            for(int j = 0;j < needle.length();j++)
            {
                if(haystack[i+j] != needle[j])
                    break;
                if(j == needle.length()-1)
                    return i;
            }
        }
    }
    return -1;
}
