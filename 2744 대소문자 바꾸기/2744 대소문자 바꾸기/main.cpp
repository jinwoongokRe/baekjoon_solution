//
//  main.cpp
//  2744 대소문자 바꾸기
//
//  Created by 장진웅 on 2020/03/09.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string.h>
int main(int argc, const char * argv[]) {
    
    char str[101];
    
    scanf("%s" , str);
    
    int cnt=0;
    for(int i=0; i< strlen(str); i++) //strlen은 string.h에 있다.
    {
        if(str[i] >='a')
        {
            str[i]= str[i] - 32;
        }
        else
        {
            str[i] = str[i] +32;
        }
    }
    
    printf("%s", str);
    
    return 0;
}
