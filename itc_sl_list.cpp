#include "easy_list.h"

int itc_sl_list(const vector <int> &a){
    int b = 0;
    if (a.size() > 0){
    for (int i = 1; i < a.size(); i ++){
        if (a[i] > a[i - 1])
             b ++;}}
    return b;}

