//
//  main.cpp
//  9012 괄호
//
//  Created by 장진웅 on 01/10/2019.
//  Copyright © 2019 장진웅. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    
    stack <char> st; //스택
    char arr[51]={0,}; // 입력받을 문자열
    int n;
    vector<string> answer;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        
        cin >> arr ; // 괄호 문자열 입력받음
        
        int cnt = 0; //cnt값 초기화
        while(!st.empty()) //스택 초기화
        {
            st.pop();
        }
        
        while (arr[cnt] != '\0') {
            if(st.empty()) //스택 비어있을 대
            {
                if(arr[cnt] == ')') //)면, 즉 오류인거지
                {
                    st.push(arr[cnt]);
//                    answer.push_back("NO");
                    break;
                }
                // 아닐경우
                
                st.push(arr[cnt++]); //푸시 하고 cnt++
            }
            else // empty 아닌 일반 상황
            {
                if(arr[cnt] == '(')
                {
                    st.push(arr[cnt++]); //푸시 하고 cnt++
                }
                else if(arr[cnt] == ')')
                {
                    st.pop(); // 앞에 '('일 애랑 같이 사라짐.
                    cnt++;
                }
            }
        }
        
        if(st.empty())
        {
            answer.push_back("YES");
        }
        else{
            answer.push_back("NO");
        }
        
        
        
    }
    
    for(int j=0; j<n; j++)
    {
        cout << answer[j] << '\n';
    }
    
    
    
    return 0;
}
