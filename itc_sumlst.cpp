#include "middle_list.h"
long itc_sumlst(const vector<int> &a)
{
    long b = 0;
    for (int i = 0; i != a.size(); i++)
        b += a[i];
    return b;}