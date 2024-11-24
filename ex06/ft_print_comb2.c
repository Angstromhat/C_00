#include <stdio.h>

void ft_print_comb2(void) {
    for (int i = 0; i <= 99; i++) {
        for (int j = i + 1; j <= 99; j++) {
            printf("%02d %02d", i, j);
            if (!(i == 98 && j == 99)) {
                printf(", ");
            }
        }
    }
    printf("\n");
}


int main (void){

	ft_print_comb2();
	return 0;
}



