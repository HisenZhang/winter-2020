/*
 * @Author: HisenZhang <zhangz29@rpi.edu>
 * @Date: 2020-12-21 20:42:12
 * @LastEditors: HisenZhang <zhangz29@rpi.edu>
 * @LastEditTime: 2020-12-22 20:46:10
 * @Description: file content
 */

#include <stdio.h>

// declaration

void prettyPrint(bool, float, int);
void conversion(bool);
void test();

int main(int argc, const char **argv)
{
    test();
    return 0;
}

void test()
{
    // Test
    printf("F ONLT\r\n");
    conversion(true); // function call

    printf("BOTH\r\n");
    conversion(false);
}

void conversion(bool f_only)
{

    for (int c = 0; c <= 20; c++)
    {
        float f = (c * 9 / 5.0) + 32; // arithmetic
        prettyPrint(f_only, f, c);
    }
}

// function definition example

void prettyPrint(bool i, float f, int c)
{
    if (i)
    {
        printf("%.1f\r\n", f);
    }
    else
    {
        printf("%d, %.1f\r\n", c, f);
    }
}