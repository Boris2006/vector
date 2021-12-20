#include "easy_list.h"
void itc_rshift_list(vector <int> &a){
    if (a.size() > 0){
    int c = a[a.size() - 1];
    for (int i = a.size() - 2; i >= 0; i--){
        a[i + 1] = a[i];}
    a[0] = c;}}
