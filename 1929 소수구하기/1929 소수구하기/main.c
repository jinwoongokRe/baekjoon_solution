//
//  main.c
//  1929 소수구하기
//
//  Created by 장진웅 on 2019/11/04.
//  Copyright © 2019 장진웅. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n;
    scanf("%d %d", &m, &n);
    for(int i=m; i<=n; i++)
    {
        int stop=i;
        int cnt=0;
        while(stop>0)
        {
            if(i%stop==0)
                cnt++;
            
            stop--;
        }
        if(cnt==2)
            printf("%d\n", i);
    }
    return 0;
}
