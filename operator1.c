#include<stdio.h>
int main()
{
    int ch;
    printf("enter a charecter");
    scanf("%c",&ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
{
    printf("your  enter charecter is vowel");
}
else
{
    printf("your enter charecter is consonenet");
}

return 0;


}