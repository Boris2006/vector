#include "easy_list.h"

void itc_super_shift_list(vector <int> &a, int n){
    if (a.size() > 0){
    if (n < 0){
        n = n * (-1);
        for (int i = 0; i < (n % a.size()); i++){
            itc_lshift_list(a);}}
    else{
        for (int i = 0; i < (n % a.size()); i++){
            itc_rshift_list(a);}
}}}
