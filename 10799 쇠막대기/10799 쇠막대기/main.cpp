//
//  main.cpp
//  10799 쇠막대기
//
//  Created by 장진웅 on 2020/01/29.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    
    
    string str;
    stack<char> st;
    
    int result =0; //답
    
    cin >> str;
    
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='(')
        {
            st.push(str[i]); //여는 괄호는 푸시
        }
        else{ // 닫는 괄호이면 일단 앞 괄호 팝하되 레이저인지 아닌지 알아보기
            st.pop();
            
            if(str[i-1] == '(') //레이저
            {
                result += st.size();
            }
            else{ //파이프의 끝이면
                result +=1;
            }
        }
    }
    
    cout << result <<'\n';
    return 0;
}
