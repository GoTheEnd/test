#include<stdio.h>
#include<stdlib.h>
int main(){
    char str1[30], str2[30];
    gets(str1);
    int letterNum = 0, numberNum = 0;
    char *pt1 = str1;
    while(*pt1 != '\0'){
        if ((*pt1 >= 'A' && *pt1 <= 'Z') || (*pt1 >= 'a' && *pt1 <= 'z')){
            letterNum++;
        }else if(*pt1 >= '0' && *pt1 <= '9'){
            numberNum++;
        }
        pt1++;
    }
    printf("字母的个数为：%d, 数字的个数为：%d.", letterNum, numberNum);
    return 0;
}