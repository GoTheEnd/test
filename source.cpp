#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
int main(){
    int nums[100];
    int a, f = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> nums[i];
    }
    for(int i = 0; i < a; i++){
        for(int j = i + 1; j < a; j++){
            if (nums[i] == nums[j]){
                f++;
            }
        }
    }
    cout << f;
    return 0;
}