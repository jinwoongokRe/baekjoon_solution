
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n;
    int cnt=0;
    scanf("%d", &n);
    int value;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &value);
        int j = value;
        int count=0;
        while(j>0)
        {
            if(value%j ==0)
                count++;
            j--;
        }
        if(count==2)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}
