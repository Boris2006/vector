#include "middle_list.h"
int max_char(vector <int> b){
    int d = b[1];
    for(int i = 0; i != b.size(); i++){
         if (b[i] > d)
             d = b[i];}
    return d;}
