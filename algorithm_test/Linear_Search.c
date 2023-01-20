#include <stdio.h>

int Lsearch(int arg[], int len, int target);

int main(void) {
    int arg[] = {1, 2, 3, 4, 5};

    int result = Lsearch(arg, sizeof(arg)/sizeof(int), 5);

    printf("%d", result);

    return 0;
}

int Lsearch(int arg[], int len, int target){
    for (int i=0; i<=len; i++){
        if (arg[i]==target){
            return i;
        }
    }
}
