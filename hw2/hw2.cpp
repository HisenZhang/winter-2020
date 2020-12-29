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

char* randomMap(int row, int col)
{
    char* map ;
    srand(6);
    map = (char *) malloc(row * col *sizeof(char));
    for(int i = 0; i < row * col ; i++)
    {
        map[i] = rand() % 256;
    }
    return map;
}
int printMap(char* map, int row, int col)
{
    int numPeak = 0;
    for(int i = 0; i < row * col; i++)
    {

        if (/* condition */)
        {
            /* code */
        }
        
        if(map[i] > map[i-1]
        && map[i] > map[i+1]
        && map[i] > map[i-col]
        && map[i] > map[i+col]
        && map[i] > map[i-col-1]
        && map[i] > map[i-col+1]
        && map[i] > map[i+col-1]
        && map[i] > map[i+col+1])
        {
            numPeak++;
        }
    }
    return numPeak;
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
