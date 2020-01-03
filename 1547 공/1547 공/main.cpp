//
//  main.cpp
//  1547 공
//
//  Created by 장진웅 on 2019/12/31.
//  Copyright © 2019 cbycongbab. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int trynum;
    int x,y;
    int temp[4]={0,1,0,0};
    int temp2;
    
    cin >> trynum;
    
    for(int i=0; i<trynum; i++)
    {
        cin >> x >> y;
        
        temp2 = temp[x];
        temp[x] = temp[y];
        temp[y] = temp2;
        
    }
    for(int j=1; j<=3; j++)
    {
        if(temp[j]==1)
        {
            printf("%d", j);
            return 0;
        }
    }
    
    printf("-1");
    
    
    
    
    
    
    return 0;
}
