#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX 100000

int reverse(int x);


int main() {
    int res;
    res = reverse(-1534236469);
    printf("%d\n", res);
    return 0;
}

int reverse(int x) {
    int ret = 0;
    int posi = 1;

    if(x < 0){
        x = -1 * x;
        posi = -1;
    }

    char str[MAX];
    sprintf(str, "%d", x);

    int i = strlen(str) - 1;
    for(; i >= 0; i--){

        if((ret + (str[i]-'0') * pow(10, i)) > 2147483647){
            ret = 0;
            break;
        }
        ret += (str[i]-'0') * pow(10, i); 
    }

    if(x > 2147483647 || x < -2147483648){
        ret = 0;
    }

    return posi * ret;
}

/*
int reverse(int x) {  
    int newN =0, left =0;  
    while(x != 0)  
    {  
         left = x%10;  
         newN = newN*10 + left;  
         x = x/10;  
    }  
    return newN;  
}
*/
