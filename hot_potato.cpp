#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int n, totalTimes, times = 1, i = 1, price;
    int friends[30] = {0};
    scanf("%d %d", &n, &totalTimes);
    srand((unsigned int)time(NULL));
    int drumNeed = rand() % 4 + 2;
    int beerNeed = rand() % 3 + 1;
    int drumTimes = 1, beerNum = 0;
    while (times <= totalTimes){
        while(i){
            if(i > n){
                i = 1; 
                continue;
            }
            printf("%d %d test\n", drumTimes, i);
            if(drumTimes++ == drumNeed){
                friends[i]++;
                printf("         %d\n", i++);
                drumTimes = 1;
                beerNum += beerNeed;
                break;
            }
            i++;
        }
        times++;
    }
    if(beerNum % 3 == 0){
        price = 5 * beerNum / 3;
    }else price = 5 * (beerNum / 3 + 1);
    printf("%d %d\n", drumNeed, beerNeed);
    for(int i = 1; i <= n; i++){
        if (friends[i] == 0)
            continue;
        else printf("code%d beer%d \n", i, friends[i]);
    }
    printf("price = %d", price);
}