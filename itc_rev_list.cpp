#include "easy_list.h"

void itc_rev_list(vector <int> &a){
    if (a.size() > 0){
    int c = 0;
    for (int i = 0 ; i <= (a.size() / 2); i++){
        c = a[i];
        a[i] = a[(a.size() - 1) - i];
        a[(a.size() - 1) - i] = c;
    }
    }
}
