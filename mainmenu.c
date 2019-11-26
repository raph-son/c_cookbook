#include <stdio.h>
#include <time.h>
#include <unistd.h>



int main(void)
{
    clock_t start = clock();
    printf("=====================================\n\n");
    printf(" Welcome to Our Program!\n\n");
    printf(" Main Menu\n");
    printf("[0] Web Utils\n");
    printf("[1] Crypto\n");
    printf("[2] Text Utils\n");
    printf("[3] exit\n\n");

    time_t timenow = time(NULL);
    printf("%lu \n", timenow);

    printf("\n=====================================\n");
    //printf("");

    return 0;
};