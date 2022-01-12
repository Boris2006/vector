#include "middle_list.h"
string itc_rmstrchar(string e, string r){
    string a = "";
    int c, m = 0;
    for(int i = 0; e[i] != '\0'; i++){
        c = i;
        for(int b = 0; r[b] != '\0'; b++){
            //cout << e[c] << " " << r[b] << endl;
            if (e[c] != r[b])
                m = 1;
                //cout << m << " " << c << endl;
            c++;
        }
        if(m == 1)
            a += e[i];
        if( m == 0)
            i = i + len(r);     
        m = 0;   
    }
    return a;}