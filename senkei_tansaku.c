#include <stdio.h>
#define N 10

int a[N] = {3, 54, 16, 8, 9, 1, 5, 22, 19, 60};
void search(int x);

int main(void){
    search(3);
    search(5);
    search(30);
    search(60);
    return 0;
}

void search(int x){
    int i = 0;
    while(i != N && a[i] != x) {
        i++;
    }
    if (i != N)
        printf("%d:見つかりました¥n", x);
    else
        printf("%d:見つかりませんでした¥n", x);
}