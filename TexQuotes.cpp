#include <cstdio>

using namespace std;

/*
 * 
 */
int texquote() {
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
