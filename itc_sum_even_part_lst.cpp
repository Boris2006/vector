#include "middle_list.h"
long itc_sum_even_part_lst(const vector<int> &a)
{
    long b = 0;
    for (int i = 0; i != a.size(); i++)
    {
        if (a[i] % 2 == 0)
            b += a[i];
    }
    return b;
}