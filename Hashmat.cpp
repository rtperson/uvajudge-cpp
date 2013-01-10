/* 
 * File:   Hashmat.cpp
 * Author: turnau_r
 * 
 * Created on January 9, 2013, 9:23 AM
 */

#include <iostream>

using namespace std;

int hash() {
    long long a, b, c;
    while (cin >> a >> b) {
        if (a > b) {
            c = a - b;
        } else {
            c = b - a;
        }
        cout << c << endl;
    }

}

