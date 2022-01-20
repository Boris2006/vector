#include "middle_list.h"
string itc_rmstrchar(string e, string r){
    string a = "";
    int m = 0;
    for(int i = 0; e[i] != '\0'; i++){
        for(int b = 0; r[b] != '\0'; b++){
            //cout << e[c] << " " << r[b] << endl;
            if (e[i] == r[b])
                m = 1;
                //cout << m << " " << c << endl;
        }
        if(m == 0)
            a += e[i];
        m = 0;
    }
    return a;}
