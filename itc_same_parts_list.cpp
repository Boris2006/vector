#include "easy_list.h"
bool itc_same_parts_list(const vector <int> &a){
    if (a.size() > 0){
    for (int i = 1; i < a.size(); i ++){
        if ((a[i] < 0 && a[i - 1] < 0) || (a[i] >= 0 && a[i - 1] >= 0))
             return true;}}
    return false;
}

