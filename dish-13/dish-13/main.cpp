//
//  main.cpp
//  dish-13
//
//  Created by 장진웅 on 2020/01/04.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;
int main(int argc, const char * argv[]) {
    
//    char input[30] ={0,}; //입력받는 값
    
    char stack[30] = {0,};
    char temp[30] = "abcdefghijklmnopqrstuvwxyz";
    char input[30] = {0,};
    int cnt=0;
    int i=0,j=0;
    vector <string> answer;
    
    scanf("%s", input); //입력값 받기 : 접시순서 알파벳
    temp[strlen(input)] = '\0'; //입력받은 값과 관련하여 앞으로 사용할 abcd문자열 선언.
    
    while (input[cnt] != 0) {// j
        
        if(input[cnt] != stack[i]) //얘가 if인지 else if인지 일단 밑에꺼 짜보고..
        {
            stack[i++] = temp[j++]; // 저장하고 각 변수들 ++
            answer.push_back("push");
            cnt++;
        }
        else
        {
            stack[i]
        }
    }
    
    
    
    
    
    
    return 0;
}
