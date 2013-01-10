/* 
 * File:   Decoder.cpp
 * Author: turnau_r
 *
 * Created on January 9, 2013, 3:18 PM
 */

#include <cstdio>

using namespace std;

/*
 * 
 */
int decoder(int argc, char** argv) {
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar(c);
        } else  {
            putchar(c - 7);
        }
        
    }
    return 0;
}

