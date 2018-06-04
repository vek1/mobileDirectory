#include <stdio.h>
#include "userlist.h"

/*isUserPresent(const char *) */

int main(void){
	char nm[10];
	printf("Enter Name: ");
	scanf("%s", nm);
	
	if(isUserPresent(nm)) printf("Present\n");
	else printf("Not Present\n");
	
	return 0;
}

