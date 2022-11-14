#include <stdio.h>

int main(void) {
    int cnt = 0;
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            if (j % i == 0)
                cnt++;
        }
    }
    printf("%i\n",cnt);
}