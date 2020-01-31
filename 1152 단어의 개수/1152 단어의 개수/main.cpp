//
//  main.cpp
//  1152 단어의 개수
//
//  Created by 장진웅 on 2020/01/04.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;
int main(int argc, const char * argv[]) {
    
    string str;
    char arr[1000000];
    
    scanf("%[^\n]s",arr);
    
//    cin >> str;
    int cnt=0;
    int i=0;
//    cout << arr; //test
    while (arr[i] != '\0') {
        if(arr[i] == ' ' && arr[i+1] != NULL) //arr[i] == ' ' && i!=0 && arr[i+1] != 0
        {
            
            cnt++;
        }
        i++;
    }
    if(arr[0] == ' ' || arr[0] == NULL)
    {
        cnt--;
    }
    
    printf("%d", cnt+1);
// TEST:   printf("\n%d",strlen(arr));
    return 0;
}
