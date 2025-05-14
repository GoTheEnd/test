#include<stdio.h>
#include<stdlib.h>
void comb(){
    for (int x = 1; x <= 3; x++){
        for (int y = 1; y <= 5; y++){
            printf("x = %d, y = %d, z = %d\n", x, y, 8 - x - y);
        }
    }
}
int main(){
    comb();
    return 0;
}