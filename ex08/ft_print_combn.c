#include <stdio.h>

void ft_print_combn(int n) {
    if (n <= 0 || n >= 10) return;

    int digits[10];
    for (int i = 0; i < n; i++) digits[i] = i;

    while (1) {
        for (int i = 0; i < n; i++) printf("%d", digits[i]);
        if (digits[0] == 10 - n) break;
        printf(", ");

        int i = n - 1;
        while (i >= 0 && digits[i] == 10 - n + i) i--;
        digits[i]++;
        for (int j = i + 1; j < n; j++) digits[j] = digits[j - 1] + 1;
    }
    printf("\n");
}


int main (void) {

	ft_print_combn(9);
	return 0;
}
