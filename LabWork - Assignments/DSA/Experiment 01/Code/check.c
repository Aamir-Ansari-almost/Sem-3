#include <stdio.h>
#include <stdlib.h>
int func(int);
int main() {
    int a, b, aa, bb;
    a = 200;
    b = 300;
    aa = func(a);
    printf("\naa  =  %d", aa);
    printf("\nbb  =  %d", bb);
    bb = func(b);
    printf("\nbb  =  %d", bb);
}

int func(int x) {
    if (x == 200) {
        return 1;
    }
    else {
        return 0;
    }

}
