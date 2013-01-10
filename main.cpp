/* 
 * File:   main.cpp
 * Author: turnau_r
 *
 * Created on January 9, 2013, 8:51 AM
 */

#include <cstdio>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char c;
    bool inquot = false;
    while ((c = getchar()) != EOF) {
        if (c == '\"') {
            if (inquot) {
                putchar('\''); putchar('\'');
                inquot = false;
            } else {
                putchar('`'); putchar('`');
                inquot = true;
            }
        } else  {
            putchar(c);
        }
        
    }
    return 0;
}

