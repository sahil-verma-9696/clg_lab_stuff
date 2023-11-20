#include<stdio.h>
void main()
{
    int A[] = {1,2,3,4,5,6,7,8};
    for(int i = 0; i<4; i++)
    {
        A[i+1] = A[i];
    }

    for(int i = 0; i<8; i++){
        printf("%d\n",A[i]);
    }
}