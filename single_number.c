/*sigle_number.c*/

/*Create by Jesse_EC on 2023.3.16*/
/*Copyright © 2023 Jesse_EC All rights reserved.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Leecode 136.只出现过一次的数字*/

/*解题思路：使用异或运算，将数组中的每一个元素都异或过去,便能找到那个只重复了一次的值*/
/*
    1 ^ 1 = 0   1 ^ 1 = 0   1 ^ 0 = 1(只有相异结果才为真)
*/
int Single_Number(int *array, int arr_size);

int Single_Number(int *array, int arr_size)
{
    if (!array || arr_size <= 0)
    {
        puts("Array Null....");
        return -1;
    }

    int single = 0;                         /*检测到不重复的值*/
    register int index = 0;                 /*遍历数组用的变量 放在寄存器中*/

    for (index; index < arr_size; ++index)  /*遍历数组*/
    {
        single ^= *array;                   /*异或数组元素并赋值给unrepeat*/
        ++array;                            /*指针偏移*/
    }

    return single;                          /*返回找到的不重复的值*/
}

#define ARRAY_SIZE 5
int main(int argc, char const *argv[])
{
    int array[ARRAY_SIZE] = {101, 101, 20, 96, 96};
    int single_number = 0;

    if (single_number = Single_Number(array, ARRAY_SIZE))
    {
        printf("The non-repeat number is:[%d].", single_number);
    }
    else
    {
        printf("Number no found.......\n");
    }

    return EXIT_SUCCESS;
}

/*Author:Jesse_EC Date:2023.5.10*/
