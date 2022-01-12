#include "middle_list.h"
string itc_rmstrspc(string b){
    string c;
    for(int i = 0; b[i] != '\0'; i++){
        if(b[i] != ' ')
            c += b[i];
    }
    return c;}