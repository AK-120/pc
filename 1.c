#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int vol=0,con=0,i;
    printf("enter a word:");
    scanf("%[^\n]", str);    
    int len = strlen(str);
    for(i=0;i<len;i++)
    {
        char let=str[i];
        if (let == 'a' || let == 'e' || let == 'i' || let == 'o' ||  let == 'u' || let == 'A'|| let == 'E' || let == 'I' || let == 'O' ||let == 'U') {
                vol++;
            } else {
                con++;
            }
    }
    printf("no of vowels :%d\n",vol);
    printf("no of consanants:%d\n",con);
    return 0;
}