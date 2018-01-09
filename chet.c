#include <stdio.h>

int main() {
  int k, flag = 1;
    scanf(" %d", &k);
    
    while(flag == 1)
    {
        if((k % 2) == 0)
        {
            printf("1");
            flag = 0;
        }
        else
        {
            printf("-1");
            flag = 0;
        }
    }

    return 0;
} 
