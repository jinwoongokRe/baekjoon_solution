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
    
//    char stack[30] = {0,}; //원래 사용할려던거
    stack <char> st; //새롭게 사용해볼려고 선언
    char temp[30] = "abcdefghijklmnopqrstuvwxyz";
    char input[30] = {0,};
    int cnt=0; //원래 스택배열에 사용할려던..
    int i=0,j=0; // 안 쓸 수도
    vector <string> answer;
    
    scanf("%s", input); //입력값 받기 : 접시순서 알파벳
    temp[strlen(input)] = '\0'; //입력받은 값과 관련하여 앞으로 사용할 abcd문자열 선언.
    
    while (input[cnt] != 0) // j //전체 문자열이 끝나기 전까지, 널값 나오기 전까지
    {
        if(input[cnt] != st.top()) //push를 위한...
        {
            st.push(temp[i++]); // stack에 알파벳 넣어주고 i 증가
            answer.push_back("push");
            j++; //j는 vector : answer 용 인덱스
        }
        
        else if(input[cnt] == st.top()) //pop 을 위한..
        {
            st.pop(); // stack맨 위에 터뜨리고
            answer.push_back("pop");
            j++;
            cnt++;
        }
        
        //뭔가 imposible을 위한 예외처리를 여기서 해주긴 해야함...
    }
    
    for(int k=0; k<j; k++)
    {
        cout << answer[k] <<'\n' ;
    
    }
    
    
    
    
    
    
    return 0;
}
