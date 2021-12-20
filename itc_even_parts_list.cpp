#include "easy_list.h"

void itc_even_parts_list(const vector <int> &a, vector <int> &b){
    if (a.size() > 0){
    for (int i = 0; i < a.size(); i ++){
        if (a[i] % 2 == 0)
             b.push_back(a[i]);}
    }}
