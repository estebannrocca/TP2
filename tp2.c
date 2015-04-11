#include <stdio.h>

main(){

    int c;

    c = getchar();

    while (c != EOF){

        switch (c){
        case '\t': printf("\t"); break;
        case '\b': printf("\b"); break;
        case '\\': printf("\\"); break;
        default: putchar(c);
        }
        c = getchar();
    }
}
