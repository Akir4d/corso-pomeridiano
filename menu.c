#include <stdio.h>

void stampaMenu(){
    printf("\nMenu:\n");
    printf("\nA abbaia");
    printf("\nB miagola");
    printf("\ne esci");
}

int main(){
    char scegli = '\0';
    while (scegli != 'E')
    {
        stampaMenu();
        printf("\nA te la scelta: ");
        scanf(" %c", &scegli);
        switch (scegli)
        {
        case 'A':
        case 'a':
            printf("\nMa ti sembro un cane?");
            break;
        case 'B':
        case 'b':
            printf("\nMa ti sembro un gatto?");
            break;
        case 'e':
            scegli = 'E';
            break;
        default:
            printf("\nRitenta");
            break;
        }
    }
    
    return 0;
}