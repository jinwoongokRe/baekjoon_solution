//
//  main.cpp
//  catch_cow
//
//  Created by 장진웅 on 2020/02/01.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <queue>
#include <utility>

using namespace std;
int main(int argc, const char * argv[]) {
    int arr[1000000] ={0,};
    queue < pair<int, int> > q; // 첫번째는 위치, 두번째는 count
    
    
    int n,k;// n 은 내 위치, k는 소 위치
    
    cin >> n >> k;
    
    q.push({n, 0}); // 시작 위치랑 카운트 넣기.
    
    while (q.front().first != k) {
        int temp = q.front().first; //위치
        int temp2= q.front().second; // count
        q.pop();
        
        if(temp-1 >=0 && arr[temp-1]==0)
        {
            q.push({temp-1, temp2+1});
            arr[temp-1]=1;
        }
//        if(temp+1 > 1000000) // 1000000보다 클 때 예외..?
//        {
//            continue;
//        }
        if(temp+1 <=1000000 && arr[temp+1]==0)
        {
            q.push({temp+1, temp2+1});
            arr[temp+1]=1;
        }
//        if(2*temp> 1000000) // 예외 만들기..?
//        {
//            continue;
//        }
        if(2*temp <=1000000 && arr[2*temp]==0)
        {
            q.push({2*temp, temp2+1});
            arr[2*temp]=1;
        }
        
        
    }
    
    cout << q.front().second; // 답으로는 count 출력
    
    return 0;
}
