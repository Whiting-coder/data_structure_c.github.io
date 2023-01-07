#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define InitSize 10
/*
1.声明一个顺序表
2.初始化一个顺序表
3.动态增加顺序表长度.
*/
typedef struct{
    int *date;
    int MaxSize;
    int length;
}SeqList;
//初始化线性表
void InitList(SeqList *L){
    L->date = (int *)malloc(InitSize*sizeof(int));
    L->length = 0;
    L->MaxSize = InitSize;
}
//动态增加线性表的长度
void IncreaseSize(SeqList *L,int len){
    int *p = L->date;
    L->date = (int *)malloc((InitSize + len) * sizeof(int));
    for (int i = 0; i < L->length; i++) {
        L->date[i] = p[i];
    }
    L->MaxSize = L->MaxSize + len;
    free(p);
}
int main(int argc, char *argv[]) 
{
    SeqList L;
    InitList(&L);
    //其他的基本操作
    IncreaseSize(&L, 5);
    return 0;
}
