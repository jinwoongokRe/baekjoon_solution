//
//  main.c
//  11720 숫자의 합
//
//  Created by 장진웅 on 16/08/2019.
//  Copyright © 2019 장진웅. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char number[102]={'\0'};
    int how; //총 몇개
    char input;
    int sum=0; // 총 합
    scanf("%d ", &how); //총 몇개 입력
    
    while(how--)// 총 입력되는 개수
    {
        scanf("%c", &input);
        
        sum += (input -'0');
        
        
    }
    printf("%d", sum);
    
    return 0;
}
//품 완료
