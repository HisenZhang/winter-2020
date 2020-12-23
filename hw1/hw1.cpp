#include<stdio.h>
int main(int argc, const char **cargv)
{
    for(int num1 = 1; num1 <= 9; num1++)
    {
        for (int num2 = num1; num2 <= 9; num2++)
        {
             printf("%dx%d=%2d ", num2, num1, num1*num2);
        }
        printf("\n");
        
    }

}