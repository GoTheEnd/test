#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str1[30], str2[30];
    gets(str1); gets(str2);
    char *pt1 = str1, *pt2 = str2;
    int count = 0, index[30], site = 0, i = 0;
    while (*pt1 != '\0'){
        if (*pt1 == *pt2){
            pt2++;
        }else{
            if (*pt2 == '\0'){
                count++;
                index[i++] = site - strlen(str2);
            }
            if (pt2 != str2){
                pt2 = str2;
                continue;
            }
        }
        pt1++; site++;
    }
    if (*pt2 == '\0' && *pt1 == '\0'){
        count++;
        index[i++] = strlen(str1) - strlen(str2);
    }
    if(i != 0){
        printf("出现了%d次，起始位置分别是：", count);
        for (int j = 0; j < i; j++){
            if(j < i - 1){
                printf("%d,", index[j]);
            }else printf("%d", index[j]);
            
        }
    }else{
        printf("NO");
    }
    
}