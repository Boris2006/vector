#include "middle_list.h"
string itc_join(vector <char> a, string b){
    string c = "";
    if (a.size() <= 1)
        return c;
    c = c + a[0];
    for(int i = 1; i != a.size(); i++)
         c = c + b + a[i] ;
    return c;}