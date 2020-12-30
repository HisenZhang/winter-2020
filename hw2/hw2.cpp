/*
 * @Author: HisenZhang <zhangz29@rpi.edu>; YuxinZheng<yzheng@edu.hse.ru>
 * @Date: 2020-12-28 20:41:19
 * @LastEditors: HisenZhang <zhangz29@rpi.edu>
 * @LastEditTime: 2020-12-29 21:36:39
 * @Description: homework 2
 */
#include<stdio.h>
#include<cstdlib>

#define ROW 10
#define COL 10
#define SEED 233

char* randomMap(int row, int col)
{
    char* map ;
    srand(SEED);
    map = (char *) malloc(row * col *sizeof(char));
    for(int i = 0; i < row * col ; i++)
    {
        map[i] = rand() % 256;
    }
    return map;
}

void printMap(char* map, int row, int col)
{
    for(int i = 0; i < row * col ; i++)
    {
        map[i] = rand() % 256;
        printf("%4d ", map[i]);
        if(i != 0 && (i+1) % col == 0)
        {
         printf("\n");
        }
    }
}


int countPeak(char* map,int row, int col)
{
    int numPeak = 0;
    for(int i = 0; i < row * col; i++)
    {

        if (i <= col ||            // first row
            i > (row-1)*col-1 ||   // last row
            i % col == col-1 ||    // last column
            i % col == 0           // first column
            )
        {
            continue;
        }
        
        if (map[i] > map[i-1] &&       // left
            map[i] > map[i+1] &&       // right 
            map[i] > map[i-col] &&     // above
            map[i] > map[i+col] &&     // below
            map[i] > map[i-col-1] &&   // top-left
            map[i] > map[i-col+1] &&   // top-right
            map[i] > map[i+col-1] &&   // bottom-left
            map[i] > map[i+col+1])     // bottom-right
        {
            numPeak++;
            
            // this operation should not be here :) whatever 
            printf("<r,c>:<%d,%d> value:%3d\n", i/row+1, i%col+1, map[i]);   
        }
    }
    return numPeak;
}

int main ()
{
    char* finalMap = randomMap(ROW, COL);
    printMap(finalMap, ROW, COL);
    printf("# of peaks: %d\r\n", countPeak(finalMap, ROW, COL));
    free(finalMap);
    finalMap = NULL;
    return 0;

}
