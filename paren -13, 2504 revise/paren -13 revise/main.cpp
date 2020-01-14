//
//  main.cpp
//  paren -13
//
//  Created by 장진웅 on 2020/01/11.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    
    char input[31];
    int confirm1=0; // 마지막 ( 랑
    int confirm2=0; // ) 랑 갯수 비교
    int confirm3=0;
    int confirm4=0;// []도 갯수 서로 비교.
    long long sum=0; // temp에서 계산한 값을 모두 sum에 더할 것..
    int cnt=0;
    int temp=1; // 임시 계산 방
    stack <char> st;
    bool impossible = false;
    
    scanf("%s", input); //괄호 전부 입력받음.
    
    while (input[cnt] != '\0') {
        
        //초반 입력값 오류 잡기 () [] 아닐 경우 false
        if(input[cnt] !='(' && input[cnt] !=')')
        {
            if(input[cnt] !='[' && input[cnt] !=']')
            {
                impossible = true;
                break;
            }
        }
        
        
        
            if(input[cnt] =='(' )
            {
                st.push(input[cnt++]);
                temp*=2;
                confirm1++;
            }
            else if (input[cnt] == '[')
            {
                st.push(input[cnt++]);
                temp*=3;
                confirm3++;
            }
            else if( input[cnt] == ')')
            {
                
                
                if(st.empty())
                {
                    impossible = true;
                    break;
                }
                confirm2++;
                if(st.top()=='[')
                {
                    impossible =true;
                    break;
                }
                if(st.top() == '(')
                {
                    sum += temp;
                }
                st.push(input[cnt++]);
//                st.pop();
                temp/=2;
//                cnt++;
            }
            else if( input[cnt] == ']')
            {
                if(st.empty())
                {
                    impossible =true;
                    break;
                }
                if(st.top()=='(')
                {
                    impossible =true;
                    break;
                }
                 confirm4++;
                if(st.top() == '[')
                {
                    sum += temp;
                }
                st.push(input[cnt++]);
//                st.pop();
                temp/=3;
//                cnt++;
            }
        }
        
        
        
    
    
    if (impossible)
    {
        printf("0\n");
    }
    else if((confirm1 == confirm2)&& (confirm3==confirm4))  //마지막 여기서 갯수도 맞아야 올바른 괄호식이라 판단함.
    {

        cout << sum << "\n";
    }
    else {
        printf("0\n");
    }

   
    
    
    
    
    
    return 0;
}
