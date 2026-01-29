#include <stdio.h>

unsigned long long ackermann(unsigned int m, unsigned int n) {
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    unsigned int m = 3, n = 4;
    printf("Ackermann(%u, %u) = %llu\n", m, n, ackermann(m, n));
    return 0;
}

