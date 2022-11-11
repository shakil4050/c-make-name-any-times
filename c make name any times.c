#include <stdio.h>


int main() {
int a;
int n;
char x[10];
printf("name please!\n");
scanf("%s",&x);
printf("how many time\n");
scanf("%d",&n);
for(a=0;a<=n;a++)
{
    printf("%s\n",x);
}
getch();
  return 0;
}
