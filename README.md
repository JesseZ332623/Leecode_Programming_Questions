# Leecode_Programming_Questions
自己做的Leecode题目，偶尔会收入一些奇技淫巧（逃）

Date：2023.5.10      Leecode 136.只出现过一次的数字
-------------------------------------------------------

原题如下：

![image](https://github.com/JesseZ332623/Leecode_Programming_Questions/assets/101250851/baf04425-d0ff-45b6-bb86-2bd98662bacc)

解题思路：

解题思路：使用异或运算，将数组中的每一个元素都异或过去,便能找到那个只重复了一次的值

1 ^ 1 = 0   1 ^ 1 = 0   1 ^ 0 = 1(只有相异结果才为真)

```C
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
```

