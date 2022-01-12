#include "middle_list.h"
vector <char> itc_strtlist(string e){
    vector <char> a;
    for(int i = 0; e[i] != '\0'; i++)
        a.push_back(e[i]);
    return a;}