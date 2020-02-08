//
//  main.cpp
//  14-4 ccc_taller
//
//  Created by 장진웅 on 2020/02/08.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <queue>
#include <utility> //pair사용시
int arr[100001][100001]={0,}; //2차원 배열 선언.

using namespace std;

queue<int> qu; //큐 선언
bool check(int p, int q)
{
    qu.push(q); //작은 수
    while (!qu.empty()) {
        
        
        int count=0;
        while (arr[qu.front()][count]!=0) { //아예 비었으면 이 while문 안돌듯
            qu.push(arr[qu.front()][count++]);
        }
        qu.pop();
        
        
        if(qu.front()==p)
        {
            return true;
            break;
        }
        
        
        
    }
    
    return false;
    
}
int main(int argc, const char * argv[]) {
    
    
    int n,m;
    cin >> n >>m;
    
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin >> x >>y;
        
        int index =0;
        
        while (arr[y][index]!=0) {
            index++;
        }
        arr[y][index] = x;
        
    }
    
    int p,q;
    cin >> p >> q;
    if(check(p,q)) cout << "yes\n";
    else if(check(q,p)) cout <<"no\n";
    
    else cout << "unknown\n";
    
    
    
    return 0;
}
