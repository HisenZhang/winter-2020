/*
 * @Author: HisenZhang <zhangz29@rpi.edu>
 * @Date: 2020-12-21 20:50:13
 * @LastEditors: HisenZhang <zhangz29@rpi.edu>
 * @LastEditTime: 2020-12-21 22:06:28
 * @Description: file content
 */

// int main() {
//     return 0;
// }
#include <stdio.h>
void prettyPrint(bool, float, int);
int main(int argc, const char **cargv)
{
    bool f_only = false;
    for (int c = 0; c <= 20; c++)
    {
        float f = (c * 9 / 5.0) + 32;
        prettyPrint(f_only, f, c);
    }
}

void prettyPrint(bool i, float f, int c)
{
    if(i){
        printf("%.1f\r\n", f);
    }
    else{
        printf("%d, %.1f\r\n", c, f);
    }
}
// "/" slash
// "\" back-slash
