#include <stdio.h>


int main(){
    char stringa[100] = {'\0'};
    char cognome[100] = {'\0'};
    printf("\n\033[32mCiao\033[37m come va? ");
    scanf("%99s%99s", stringa, cognome);
    printf("\nHai scritto: %s %s", stringa, cognome);
}