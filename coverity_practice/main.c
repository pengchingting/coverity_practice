//
//  main.c
//  coverity_practice
//
//  Created by 彭敬庭 on 5/30/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int len = 100;
    int x[len];
    int n;
    
    for (n = len; n >= 0; n--)
    {
        x[n] = 0;
    }
    
    printf("Hello, World!\n");
    return 0;
}
