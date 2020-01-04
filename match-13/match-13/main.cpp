//
//  main.cpp
//  match-13
//
//  Created by 장진웅 on 2020/01/04.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
using namespace std;
int main(int argc, const char * argv[]) {
    
    char arr[51] = {0,};
    int stack[50] ={0,}; //배열 stack 용
    scanf("%s", arr);
    
    int cnt=0;
    int cntstack=0;
    vector <pair <int , int > > answer;
    int answercnt=0;
    while (arr[cnt] != 0) {
        if(arr[cnt]=='(')
        {
            stack[cntstack++] = cnt;
        }
        if(arr[cnt]==')')
        {
            if(cntstack < 1) {
                printf("not match\n");
                return 0;
            }
            
            answer.push_back({stack[cntstack-1], cnt});
            answercnt++;
            stack[cntstack--] = NULL; //그 앞거와 함께 초기화
        }
        cnt++;
    }
    
    if(cntstack!=0) // '('가 하나 이상 남아있었을 조건
    {
        printf("not match\n");
        return 0;
    }
    
    for(int j= 0; j<answercnt; j++)
    {
        printf("%d %d\n", answer[j].first, answer[j].second);
    }
    
    
    
    
    return 0;
}
