#include <stdio.h>

int main(int argc, char * argv[]) {
    char teste[120];
    fgets(teste, 120, stdin);
    printf("%s\n", teste);
    return 0;
}
