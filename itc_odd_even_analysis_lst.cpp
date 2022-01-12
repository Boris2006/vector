#include "middle_list.h"
void itc_odd_even_analysis_lst(const vector <int> &a){
     vector <int> b;
     vector <int> c;
     itc_odd_even_separator_lst(a, b, c);
     cout << "Анализ списка :" << endl;
     cout << "Количество четных чисел: " << b.size() << "       Количество нечетных чисел: " << c.size() << endl;
     cout << "Максимальная четная цифра: " << max_char(b) << "      Максимальная нечетная цифра: " << max_char(c) << endl ; 
     cout << "Минимальная четная цифра: " << min_char(b) << "       Минимальная нечетная цифра: " << min_char(c) << endl; 
     cout << "Сумма четных чисел: " << itc_sumlst(b) << "       Сумма нечетных чисел: " <<  itc_sumlst(c) << endl;}
