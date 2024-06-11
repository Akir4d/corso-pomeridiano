#include <stdio.h>

void scrivivettore(int *ptr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("\ninserisci un numero: ");
        scanf("%d", ptr);
        ptr++;
    }
}

void leggivettore(int *ptr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("\ni=%d 0x%x=%d", i, ptr, *ptr);
        ptr++;
    }
}

int main()
{
    int n[10] = {0};
    int *n_ptr;

    n_ptr = &n[0];

    scrivivettore(n_ptr);
    leggivettore(n_ptr);

    return 0;
}