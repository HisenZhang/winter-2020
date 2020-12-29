/*
 * @Author: HisenZhang <zhangz29@rpi.edu>
 * @Date: 2020-12-28 20:41:19
 * @LastEditors: HisenZhang <zhangz29@rpi.edu>
 * @LastEditTime: 2020-12-28 21:53:49
 * @Description: file content
 */
#include<stdio.h>
#include<cstdlib>

#define ROW 6
#define COL 6

int randomMap()
{
char* map ;
    srand(6);
    map = (char *) malloc(ROW * COL *sizeof(char));   
    for(int i = 0; i < ROW * COL ; i++)
    {
        map[i] = rand() % 256;
        printf("%4d ", map[i]);
        if(i != 0 && (i+1) % 6 == 0)
        {

         printf("\n");
        }
    }
    free(map);
    map = NULL;

    return m;
}
int main ()
{
    
    char* map ;
    srand(6);
    map = (char *) malloc(ROW * COL *sizeof(char));   
    for(int i = 0; i < ROW * COL ; i++)
    {
        map[i] = rand() % 256;
        printf("%4d ", map[i]);
        if(i != 0 && (i+1) % 6 == 0)
        {

         printf("\n");
        }
    }
    free(map);
    map = NULL;

    return 0;

}