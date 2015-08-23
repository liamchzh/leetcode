#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* convert(char* s, int numRows);


int main() {
    char* s;
    s = convert("PAYPALISHIRING", 2);
    printf("%s\n", s);
    return 0;
}


char* convert(char* s, int numRows) {
    if(numRows == 1) return s;

    int interval = 2 * numRows - 2 ;
    int i = 0;
    int j;

    int length = strlen(s);
    char converted[length+1];
    int p = 0;
    int next_j;

    for(i = 0; i < numRows; i++){
        for(j = i; j < length; j += interval){
            converted[p] = s[j];
            p++;
            next_j = (j - i) + interval - i;
            if(i != 0 && i != numRows - 1 && next_j < length){
                converted[p] = s[next_j];
                p++;
            }
        }
    }
    converted[p] = '\0';
    return converted;
}
