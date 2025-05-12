#include <stdio.h>

#define MaxSize 100         //定义线性表的最大长度
typedef int ElemType;       //将int重命名为ElemType方便实现代码运行

typedef struct
{
  ElemType data[MaxSize];   //定义线性表结构体
  int length;
}Sqlist;
