#include <unistd.h>

void ft_print_alphabet(void) {
    char letra;

    for (letra = 'z'; letra >= 'a'; letra--) {
        write(1, &letra, 1);
    }
}

int main(void) {

        ft_print_alphabet();
        return 0;
}

