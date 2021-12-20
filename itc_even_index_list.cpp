#include "easy_list.h"

void itc_even_index_list(const vector <int> &a, vector <int> &b){
    if (a.size() > 0){
    for (int i = 0; i < a.size(); i += 2){
        b.push_back(a[i]);}}
}
