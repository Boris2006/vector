#include "middle_list.h"
int min_char(vector <int> b){
    int d = b[0];
    for(int i = 1; i != b.size(); i++){
         if (b[i] < d)
             d = b[i];}
    return d;}
