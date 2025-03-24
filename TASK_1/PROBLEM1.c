#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int x = 0;
    int y = INT_MAX;
    int z ;
 while (1) {
    printf("Enter your number \n");
    scanf("%d", &z);

    if (z == -1)
    {
        break;
    }
    if (z>x){
            x=z;
            }
    if (z<y){
        y=z;
    }
 }
    printf("Largest number: %d\n", x);
    printf("Smallest number: %d\n", y );



  return 0;
}