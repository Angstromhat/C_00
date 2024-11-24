#include <unistd.h>

void ft_print_alphabet(void) {
    char letra;

    for (letra = 'a'; letra <= 'z'; letra++) {
        write(1, &letra, 1); 
    }
}

int main(void) {

	ft_print_alphabet();
	return 0;
}
