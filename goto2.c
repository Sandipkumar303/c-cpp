#include<stdio.h>
int main()
{
    int i=1;

    goto print;

    print:
       printf("%d\n",i);
       goto next;

    increment:
    i++;
    goto print;

    next:
    if(i<10)
    
    goto increment;
      else
      goto exit;

      printf("i cannot execute.");

      exit:

      return 0;
}