#include "middle_list.h"
long itc_sum_even_lst(const vector<int> &a)
{
    long b = 0;
    for (int i = 1; i < a.size(); i += 2)
        b += a[i];
    return b;
}