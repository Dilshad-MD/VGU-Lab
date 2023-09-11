// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("enter the first number\n");
//     scanf("%d", &a);
//     printf("enter the second the number\n");
//     scanf("%d", &b);
//     printf("the total number is %d\n", a % b);
//     return 0;
// }

#include <stdio.h>
int main()
{
    char firstName[8];
    printf("Input your firstname: ");
    scanf("%s", firstName);
    printf(" My printed name \n");

    for (int i = 0; i <= 7; i++)
    {
        printf("my printed name \n");

        printf("%c \n", firstName[i]);
    }
    return 0;
}
