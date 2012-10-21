// --------
// Test.c++
// --------

#include <cassert>   // assert
#include <cstring>   // strcmp
#include <exception> // exception
#include <iostream>  // cout, endl;

struct My_Exception : std::exception {
    const char* what () const throw () {
        return "My_Exception";}};

int main () {
    using namespace std;
    cout << "Test.c++" << endl;

    My_Exception x;
    exception& y = x;
    assert(strcmp(y.what(), "My_Exception") == 0);

    cout << "Done." << endl;
    return 0;}
