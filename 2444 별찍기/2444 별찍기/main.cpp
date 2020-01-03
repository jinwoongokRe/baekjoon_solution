//
//  main.cpp
//  2444 별찍기
//
//  Created by 장진웅 on 2019/10/15.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int line;
    
    cin >> line; //5입력 받음
    
    int i,j;
    for(i=1; i<=line; i++)
    {
        for(j=line-1; j>i-1; j--) //4~1
        {
            putchar(' ');
        }
        for(j=0; j<2*i-1; j++) //i 1일때 j 1 i2 j3
        {
            putchar('*');
        }
        putchar('\n');
    }
    for(i=line-1; i>0; i--)//1~4
    {
        for(j=line; j>i; j--)//주의
        {
            putchar(' ');
        }
        for(j=i*2-1; j>0; j--)
        {
            putchar('*');
        }
        putchar('\n');
    }
    
    return 0;
}
