#include <stdio.h>
#include <stdio.h>

#define SIZE 5

int main(void)
{
    int i;
    int score[SIZE];
    int sum=0;
    printf("5명의 점수를 입력하세요.\n");

    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &score[i]);
        sum += score[i];
    }
   
    printf("성적평균:%d\n", sum/SIZE);

    return 0;
}