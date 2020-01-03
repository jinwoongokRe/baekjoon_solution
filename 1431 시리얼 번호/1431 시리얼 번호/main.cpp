//
//  main.cpp
//  1431 시리얼 번호
//
//  Created by 장진웅 on 2019/12/24.
//  Copyright © 2019 ``q``q. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n ;
    string str[n+1];
    for(int i=0; i<n; i++)
    {
        cin >> str[i];

    }
    for(int i=0; i<n-1;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(str[i].length() > str[j].length())
            {
                string temp = str[i];
                str[i] = str[j];
                str[j] = temp; //길이와 관련한 알고리즘 작성
            }
            else if(str[i].length() == str[j].length())
            {

                int sum1, sum2 =0;


                for(int k=0; k<str[i].length(); k++)
                {
                    if(str[i][k]<='9' && '1'<=str[i][k])
                    {
                        char ch = str[i][k];
                        sum1 += atoi(ch);
                        
                    }
                }



            }
        }
    }
    for(int i=0; i<n-1; i++)
    {
        cout << str[i] <<'\n';
    }


//    string test="abcd"; //test : 작동함
//    for(int i=0; i<4; i++)
//    {
//        cout << test[i] <<'\n';
//    }
    return 0;
}
