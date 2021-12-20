#include "easy_list.h"

void itc_lshift_list(vector <int> &a){
    int c = a[0];
    if (a.size() > 0){
    for (int i = 1 ; i < a.size(); i++){
        a[i - 1] = a[i];}
    a[a.size() - 1] = c;}}
