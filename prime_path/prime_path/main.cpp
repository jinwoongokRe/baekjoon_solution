//
//  main.cpp
//  prime_path
//
//  Created by 장진웅 on 2020/02/01.
//  Copyright © 2020 cbycongbab. All rights reserved.
//

#include <iostream>
#include <queue>
#include <utility>
using namespace std;
bool primeconfirm(int number) //소수판별 함수 : 문제 없음
{
    int sw=0;
    
    int confirm= number;
    for(int i=2; i<number/2; i++)
    {
        if(confirm % i==0)
        {
            sw=1;
        }
    }
    
    if(sw==0)
    {
        return true; // 소수
    }
    else return false; // 소수 아님
    
    
    
}//소수 확인 함수



int main(int argc, const char * argv[]) {
    
    queue<pair<int, int> > q; //큐
    int visit[10000]={0,}; // 4자리 수들 검색 확인 배열
    int temp[5];
    int start, end;
    
    cin >> start >> end;
    
    q.push({start, 0}); // 시작수 랑 카운트 0 시작으로 푸시
    visit[start]=1; //첫 시작 쪽 이미 visit으로 변경
    while (q.front().first != end) {
        
        
        int tempnumber = q.front().first;
        
        for(int i=4; i>=1; i--) // 수들 나누기 천자리 백자리 십자리 일자리
        {
            temp[i] = tempnumber%10;
            tempnumber /= 10;
        }
        
        int count = q.front().second; // 카운트 저장하고
        q.pop(); //맨 앞 삭제
        for(int i=1; i<=9; i++) //천자리 변형
        {
            if(i==temp[1]) continue; // 같은수면 넘어가기
            int confirmnumber = i*1000 + temp[2]*100 + temp[3] *10 + temp[4];
            
            if(primeconfirm(confirmnumber) && visit[confirmnumber]==0)
            {
                visit[confirmnumber]=1; //visit한걸로 변경
                q.push({confirmnumber, count+1});
                
            }
            
            
        }
        
        for(int i=0; i<=9; i++) //백자리 변형
        {
            if(i==temp[2]) continue; // 같은수면 넘어가기
            int confirmnumber = temp[1]*1000 + i *100 + temp[3] *10 + temp[4];
            
            if(primeconfirm(confirmnumber) && visit[confirmnumber]==0)
            {
                visit[confirmnumber]=1; //visit한걸로 변경
                q.push({confirmnumber, count+1});
                
            }
            
            
        }
        
        for(int i=0; i<=9; i++) //십자리 변형
        {
            if(i==temp[3]) continue; // 같은수면 넘어가기
            int confirmnumber = temp[1]*1000 + temp[2]*100 + i *10 + temp[4];
            
            if(primeconfirm(confirmnumber) && visit[confirmnumber]==0)
            {
                visit[confirmnumber]=1; //visit한걸로 변경
                q.push({confirmnumber, count+1});
                
            }
            
            
        }
        
        for(int i=0; i<=9; i++) //일자리 변형
        {
            if(i==temp[4]) continue; // 같은수면 넘어가기
            int confirmnumber = temp[1]*1000 + temp[2]*100 + temp[3] *10 + i;
            
            if(primeconfirm(confirmnumber) && visit[confirmnumber]==0)
            {
                visit[confirmnumber]=1; //visit한걸로 변경
                q.push({confirmnumber, count+1});
                
            }
            
            
        }
        
        
        
    }
    
    
    
    cout << q.front().second; // 결과 카운트 출력
    return 0;
}
