#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
srand(time(NULL));
int i;

while(1)
{
i=rand();
 putchar(i);
}
return 0;
}
