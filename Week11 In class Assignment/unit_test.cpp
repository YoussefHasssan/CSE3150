#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "in_class_11.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing functions") {
    SUBCASE("testing functions 0"){
        pair<int, int> frac1 = make_pair(1, 1);
        pair<int, int> frac2 = make_pair(1, 1);
        pair<int, int> expected = make_pair(1, 1);
        pair<int, int> expected1 = make_pair(2, 1);
        CHECK(multiply_fracs(frac1, frac2) == expected);
        CHECK(add_fracs(frac1, frac2) == expected1);
    }
    SUBCASE("testing function 1")
    {
        pair<int, int> frac1 = make_pair(2, 3);
        pair<int, int> frac2 = make_pair(9, 4);
        pair<int, int> expected = make_pair(18, 12);
        pair<int, int> expected1 = make_pair(35, 12);
        CHECK(multiply_fracs(frac1, frac2) == expected);
        CHECK(add_fracs(frac1, frac2) == expected1);
    }
    SUBCASE("testing function 2")
    {
        pair<int, int> frac1 = make_pair(0, 1);
        pair<int, int> frac2 = make_pair(9, 4);
        pair<int, int> expected = make_pair(0, 4);
        pair<int, int> expected1 = make_pair(9, 4);
        CHECK(multiply_fracs(frac1, frac2) == expected);
        CHECK(add_fracs(frac1, frac2) == expected1);
    }
    SUBCASE("testing matrix multiply function")
    {
        vector<vector<pair<int, int>>> test1 = create_matrix(2, 2);
        vector<vector<pair<int, int>>> test2 = create_matrix(2, 2);
        vector<vector<pair<int, int>>> expected = {{make_pair(2, 1), make_pair(3, 1)}, {make_pair(6, 1), make_pair(11, 1)}};
        CHECK(matrix_multiply(test1, test2) == expected);
    }
    SUBCASE("create matrix") {
        vector<vector<pair<int, int>>> expected = {{make_pair(0, 1), make_pair(1, 1)}, {make_pair(2, 1), make_pair(3, 1)}};
        CHECK(create_matrix(2, 2) == expected);
    }
}