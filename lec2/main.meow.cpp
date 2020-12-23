#include<stdio.h>

float average(int score[], int size);
void asPointer(int score[], int size);

int main(){
    int score[6] {60, 70, 80, 87, 89, 100};
    for(int id = 0; id < 6; id++){
        printf("ID:%3d SCORE:%3d\n", id, score[id]);
    }
    printf("AVERAGE:%.1f\n", average(score, sizeof(score)/sizeof(int)));
    asPointer(score, sizeof(score)/sizeof(int));
    return 0;
}

float average(int score[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += score[i];
    }
    return sum / float(size);
}

void asPointer(int score[], int size) {
    //printf("%X\n", score);
    //for (int id = 0; id < 6; id++)
    //{
    //    printf("ID: %2d Score: %3d\n",id, score[id]);
    //}
    char *addr = (char*)score;
    for(int i = 0; i < size; i++)
    {
        printf("ID:%d SCORE:%d ADDR:%X \n", i, *(addr+4*i), addr+4*i);
    }

}
