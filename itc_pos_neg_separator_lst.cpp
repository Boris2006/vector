#include "middle_list.h"
void itc_pos_neg_separator_lst(const vector <int> &a, vector <int> &b, vector <int> &c, vector <int> &d){
    for(int i = 0; i != a.size() ; i++){
        if(a[i] == 0)
            c.push_back(a[i]);
        if(a[i] < 0)
            b.push_back(a[i]);
        else if (a[i] > 0)
            d.push_back(a[i]);}}