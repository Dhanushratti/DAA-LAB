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
    unsigned int m, n;

    printf("Enter value of m: ");
    scanf("%u", &m);

    printf("Enter value of n: ");
    scanf("%u", &n);

    printf("Ackermann(%u, %u) = %llu\n", m, n, ackermann(m, n));

    return 0;
}

