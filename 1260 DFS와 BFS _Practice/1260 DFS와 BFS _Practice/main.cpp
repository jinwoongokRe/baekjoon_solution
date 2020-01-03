//
//  main.cpp
//  1260 DFS와 BFS _Practice
//
//  Created by 장진웅 on 2019/12/24.
//  Copyright © 2019 ``q``q. All rights reserved.
//

#include <iostream>
#include <cstdio> //bfs 방식
#include <vector>
using namespace std;
int n;
bool apt[27][27] ={};
bool visited[27][27]={};
int dirx[

vector<int> ans;

int search (int, int); //bfs
int main(int argc, const char * argv[]) {
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%1d", &apt[i][j]);
           
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(apt[i][j])
            {
                ans.push_back(search(j,i));
            }
        }
    }
    
    sort(ans.begin(), ans.end());
    
    int s = ans.size(); //단지의 수 를 size를 통해 알 수 있음.
    printf("%d\n", s);
    for(int i=0; i<s; i++)
        printf("%d\n", ans[i]);
    
    
    
    
    
    
    return 0;
}

int search(int x, int y)
{
    visited[y][x] = true;
    apt[y][x] = false; //이미 간 곳 구분
    
    int household =1;
    for(int i=0; i<4; i++)
    {
        int newx = x + dirx[i];
    }
}
