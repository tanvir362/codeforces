#include<stdio.h>
main(){char c;int z=0,o=0;while(scanf("%c",&c)==1){if(c=='1')o++;else if(c=='0'&&o!=0)z++;}if(z>5)printf("yes\n");else printf("no\n");return 0;}
