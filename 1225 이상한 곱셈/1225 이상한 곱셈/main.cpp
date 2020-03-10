//
//  main.cpp
//  1225 이상한 곱셈
//
//  Created by 장진웅 on 2020/02/18.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    long long int i,  j, sum=0;
    char arr[10001];
    char arr2[10001];
    scanf("%s %s", arr, arr2);
    for(i=0; i < strlen(arr); i++)
    {
        for(j=0; j < strlen(arr2); j++)
        {
            sum +=((arr[i] - '0')*(arr2[j] - '0') );
        }
    }
    printf("%lld", sum);
    
    
}

