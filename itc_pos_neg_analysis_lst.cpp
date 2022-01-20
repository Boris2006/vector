#include "middle_list.h"
void itc_pos_neg_analysis_lst(const vector <int> &a){
    vector <int> b ;
    vector <int> c;
    int f, g;
    vector <int> d;
    itc_pos_neg_separator_lst(a, b, c, d);
    g = itc_sumlst(b);
    f = b.size();
    cout << "Положительные: Отрицательные:" << endl;
    cout << "Количество чисел: " << d.size() << ", Количество чисел:" << b.size() << endl;
    cout << "Максимальная цифра: " << max_char(d) << ", Максимальная цифра: " << max_char(b) << "," << endl;
    cout << "Минимальная цифра: " << min_char(d) << ", Минимальная цифра: " << min_char(b) << "," << endl;
    cout << "Сумма чисел: " << itc_sumlst(d) << ", Сумма чисел: "<< itc_sumlst(b) << "," << endl;
    cout << "Среднее значение: " << itc_sumlst(d) / d.size() << " Среднее значение: " << g / f << endl;
    cout << "Количество нулей: " << c.size() << endl;
}
