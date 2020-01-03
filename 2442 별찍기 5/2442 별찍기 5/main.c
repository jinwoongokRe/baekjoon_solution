//
//  main.c
//  2442 별찍기 5
//
//  Created by 권유리 on 24/09/2019.
//  Copyright © 2019 권유리. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tt;

    scanf("%d", &tt);
    
    for(int i=0; i<tt; i++)
    {
        for(int j=i; j<tt-1; j++)
        {
            printf(" ");
        }
        for(int k=0; k<2*(i+1)-1; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
