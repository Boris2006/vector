#ifndef MIDDLE_H_INCLUDED
#define MIDDLE_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector <char> itc_strtlist(string e);
int len(string a);
string itc_rmstrchar(string e, string r);
string itc_join(vector <char> a, string b);
string itc_rmstrspc(string b);
long itc_sumlst(const vector<int> &a);
long itc_sum_even_lst(const vector<int> &a);
long itc_sum_even_part_lst(const vector<int> &a);
void itc_odd_even_separator_lst(const vector <int> &a, vector <int> &b, vector <int> &c);
void itc_pos_neg_separator_lst(const vector <int> &a, vector <int> &b, vector <int> &c, vector <int> &d);
int max_char(vector <int> &b);
int min_char(vector <int> &b);
void itc_odd_even_analysis_lst(const vector <int> &a);
itc_pos_neg_analysis_lst(const vector <int> &a);
#endif // MIDDLE_H_INCLUDED
