// wonderouslyBusy! james coates 
// 12 jan 2023 9:00pm approx

#include <stdlib.h>
#include <stdio.h>

int wondrous_sequence(int x) {
    int length = 1;
    while (x > 1) {
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = 3 * x + 1;
        }
        length++;
    }
    return length;
}

int wonderously_busy_sequence(int x) {
    int length = 1;
    while (x > 10) {
        x = wondrous_sequence(x);
        length++;
    }
    return length;
}

int main() {
    int max_length = 0;
    int max_start = 0;
    for (int i = 11; i < 1000000; i++) {
        int length = wonderously_busy_sequence(i);
        if (length > max_length) {
            max_length = length;
            max_start = i;
        }
    }
    printf("The starting number of the longest sequence is %d with a length of %d\n", max_start, max_length);
    return 0;
}
