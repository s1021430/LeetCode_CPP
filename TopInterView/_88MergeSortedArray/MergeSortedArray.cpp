//
// Created by fk035 on 2022/4/21.
//

#include "MergeSortedArray.h"

void MergeSortedArray::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    --m;
    --n;
    while(n >= 0)
    {
        if (m < 0 || nums1[m] < nums2[n])
        {
            nums1[m+n+1] = nums2[n];
            n--;
        }
        else
        {
            nums1[m+n+1] = nums1[m];
            m--;
        }
    }
}
