#include "middle_list.h"
void itc_odd_even_separator_lst(const vector <int> &a, vector <int> &b, vector <int> &c){
    for(int i = 0; i != a.size(); i++){
        if (a[i] % 2 == 0)
            b.push_back(a[i]);
        else
            c.push_back(a[i]);}}