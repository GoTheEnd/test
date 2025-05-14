#include<stdio.h>
#include<stdlib.h>
int roundCount(int num){
    int member[num + 1] = {0};
    int flag = 1, count = 0, i = 1;
    while(count < num - 1){
        if(i > num){
            i = 1;
            continue;
        }
        if(member[i] == 1){
            i++;
            continue;
        }
        
        
        if (flag == 3){
            member [i] = 1;
            count++;
            flag = 1;
        }else{
            flag++;
            
        }
        i++;
    }
    for(int j = 1; j <= num; j++){
        if (member[j] == 0){
            return j;
            break;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", roundCount(n));
}