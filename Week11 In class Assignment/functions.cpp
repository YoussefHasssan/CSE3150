#include <iostream>
#include "in_class_11.h"
using namespace std;

pair<int, int> multiply_fracs(pair<int, int> frac1, pair<int, int> frac2) {
    int num = frac1.first * frac2.first;
    int den = frac1.second * frac2.second;
    return make_pair(num, den);
}

pair<int, int> add_fracs(pair<int, int> frac1, pair<int, int> frac2) {
    int num = (frac1.first * frac2.second) + (frac2.first * frac1.second);
    int den = frac1.second * frac2.second;
    return make_pair(num, den);
}

vector<vector<pair<int, int>>> matrix_multiply(vector<vector<pair<int, int>>> matrix1, vector<vector<pair<int, int>>> matrix2) {
    int size = matrix1.size();
    vector<vector<pair<int, int>>> final(size, vector<pair<int, int>>(size, make_pair(0, 1)));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                final[i][j] = add_fracs(final[i][j], multiply_fracs(matrix1[i][k], matrix2[k][j]));
            }
        }
    }
    return final;
}

vector<vector<pair<int, int>>> create_matrix(int rows, int cols) {
    vector<vector<pair<int, int>>> mat(rows, vector<pair<int, int>>(cols));
    int counter = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = make_pair(counter, 1);
            counter++;
        }
    }
    return mat;
}

void print_matrix(vector<vector<pair<int, int>>> matrix1) {
    for (int i = 0; i < matrix1.size(); i++) {
        for (int j = 0; j < matrix1.size(); j++) {
            cout << " (" << matrix1[i][j].first << "/" << matrix1[i][j].second << ") ";
        }
        cout <<endl;
    }
}
