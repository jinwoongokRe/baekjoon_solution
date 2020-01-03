//
//  main.cpp
//  1251 단어 나누기
//엥
//  Created by 장진웅 on 2019/12/26.
//  Copyright © 2019 ``q``q. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
using namespace std;
int main(int argc, const char * argv[]) {
    vector<string> v;
    string str;
    string temp=""; //임시방
    string temp2=""; //전체 붙이기
    
    cin >> str;
    
    for(int i=1; i<str.length()-1; i++)
    {
        for(int j=i+1; j<=str.length()-1; j++)
        {
          //abcde  a ab 131  212
            temp2="";
            temp=str.substr(0,i);
            reverse(temp.begin(), temp.end());
            temp2 +=temp;
            temp = str.substr(i,j-i);
            reverse(temp.begin(), temp.end());
            temp2 +=temp;
            temp = str.substr(j,str.length()-j);
            reverse(temp.begin(), temp.end());
            temp2 +=temp;
            
            v.push_back(temp2);
        }
    }
    sort(v.begin(), v.end());
    cout << v.front() ;
//    test
//    cout << str.substr(0,1)<<'\n';//abcdef 중에 a
//    cout << str.substr(1,5)<< '\n'; //abcdef 중에 bcdef
//    str = str.substr(1,5);
//    reverse(str.begin(), str.end()); //fedcb로 바뀜
//    cout << str;
    
    
    
    
//    abcdef  for문 나누는 기준 나누기 : 이중 포문
//    i = 1 ~ 4, j= i+1 ~5
//    substr, reverse >> vector에 삽입
//    reverse(기준점, 길이(얼만큼 뒤집고 싶은지))
//sort , 출력
    
    
    
    
    
    
    
    return 0;
}
