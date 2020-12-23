/*
 * @Author: HisenZhang <zhangz29@rpi.edu>
 * @Date: 2020-12-22 20:19:46
 * @LastEditors: HisenZhang <zhangz29@rpi.edu>
 * @LastEditTime: 2020-12-22 22:57:11
 * @Description: file content
 */

#include <stdio.h>
#include <cstdlib>
// #include <memory.h>

float average(int score[], int size);
float stddev(int score[], int size);
float zscore(int score, float mean, float sigma);
void asPointer(int score[],int size);
void varOnHeap(void);

// int main(int argc, char const *argv[])
int main(int argc, char const **argv)
// char s[] == char* s
// int main(int argc, char const argv[][])
{
    // declare an array and initialize
    // int score[6] {60,70,80,90,95,100};
    // for (int id = 0; id < 6; id++)
    // {
    //     printf("ID: %2d Score: %3d\n",id, score[id]);
    // }
    // // using sizeof()
    // printf("AVG: %.1f\n", average(score, sizeof(score)/sizeof(int)));
    // asPointer(score,6);
    // varOnHeap();
    
    // printf("ARGC: %d\n",argc);
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("ARGV: %d, %s\n", i, argv[i]);
    // }
    
    // char s[6] {'h','i','s','e','n','\0'};
    // printf("%s",s);

    int heightMap[4][4];
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            heightMap[i][j] = i+j;
        }
        
    }

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d ",heightMap[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}

float average(int score[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += score[i];
    }
    return sum / float(size);
}

// int score[] == int* score
void asPointer(int score[], int size) {
    printf("ADDR on stack: %X\n", score);
    // int *addr = (char*) score;
    // for (int id = 0; id < 6; id++)
    // {
    //     printf("ID: %2d Score: %3d\n",id, *addr);
    //     addr++;
    // }
    // What is indexing actually?
    char *addr = (char*) score; 
    for (int i = 0; i < 6; i++)
    {
        printf("ID: %2d Score: %3d ADDR:%X\n",i, *(addr+4*i),addr+4*i);
    }
}

float stddev(int score[], int size) {
    // TODO compute standard deviation
    return 0;
}

float zscore(int sample, float mean, float sigma) {
    // TODO compute Z-score for a given sample
    return 0;
}

void varOnHeap(void) {
    char* data = (char *) malloc(128*sizeof(char));
    printf("ADDR on heap: %X\n",data);
    char* data2 = (char *) malloc(128*sizeof(char));
    printf("ADDR2 on heap: %X\n",data2);
    char* data3 = (char *) malloc(128*sizeof(char));
    printf("ADDR2 on heap: %X\n",data3);

    free(data);
    free(data2);
    free(data3);
}