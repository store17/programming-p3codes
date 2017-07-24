#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* convert(char* s, int numRows) {
    
    int slen = 0, gap, i, pos, respos = 0;
    char *res;
    
    if ((numRows == 1) || (s == NULL)) return (s);

    slen = strlen(s);
    
    if (numRows == slen) return (s);
    
    res = (char *)malloc((slen+1) * sizeof(char));
    
    gap = (numRows * 2) - 2;
    for (i = 0; i < numRows; i++) {
        for (pos = 0; pos < slen; pos++) {
            if ( (((pos+i)%gap) == 0) ||
                 (((pos-i)%gap) == 0) ) {
                    res[respos] = s[pos];
                    respos++;
                 }
        }
    }
    res[respos] = '\0';
    return(res);
}
int main()
{
	char str[]={"RAMANCLASSES"};
	int n=5;
	char *str1=convert(str,n);
	printf("%s",str1);
}
