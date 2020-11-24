#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void valuepass(int* number, int* loop);
int num[10];
int main()
{
    int loop1=0, loop2, i = 1, answer = 0;
    for (; loop1 < 10;)
    {
        valuepass(&num[loop1],&loop1);
    }
    for (loop1 = 0; loop1 < 10; loop1++)
    {
        for (loop2 = 0; loop2 < loop1; loop2++)
        {
            if (num[loop1] % 42 == num[loop2])
            {
                i = 0;
            }
        }
        if (i == 1)
        {
            answer++;
        }
        i = 1;

        num[loop1] = num[loop1] % 42;
    }
    printf("%d", answer);


    return 0;
}
void valuepass(int *number,int *loop)
{
   // pass value by pointer
    
    int num;

    scanf("%d", &num);

    *number = num; 
    
    *loop = *loop+1;
}
