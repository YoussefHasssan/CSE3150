#include <iostream>
#include <vector>
using namespace std;


#ifndef IN_CLASS_LAB_ELEVEN
#define IN_CLASS_LAB_ELEVEN

pair<int, int> multiply_fracs(pair<int, int> frac1, pair<int, int> frac2);
pair<int, int> add_fracs(pair<int, int> frac1, pair<int, int> frac2);
vector<vector<pair<int, int>>> matrix_multiply(vector<vector<pair<int, int>>> matrix1, vector<vector<pair<int, int>>> matrix2);
vector<vector<pair<int, int>>> create_matrix(int rows, int cols);
void print_matrix(vector<vector<pair<int, int>>> matrix1);

#endif
