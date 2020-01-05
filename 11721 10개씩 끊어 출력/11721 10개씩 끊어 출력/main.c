//
//  main.c
//  11721 10개씩 끊어 출력
//
//  Created by 장진웅 on 16/08/2019.
//  Copyright © 2019 장진웅. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char string[102]={"NULL"};
    int cnt=0;
    scanf("%s", string);
    
    for(int i=0; i<100; i++)
    {
        if(string[i]=='\0')
            break;
        
        printf("%c", string[i]);
        cnt++;
        if(cnt==10)
        {
            cnt=0;
            printf("\n");
        }
        
    }
    return 0;
}
