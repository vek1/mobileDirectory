#include <stdio.h>
#include "userlist.h"

/*isUserPresent(const char *) */

int main(){
	char nm[10];
	printf("Enter Name:");
	scanf("%s", nm);
	
	if(isUserPresent(nm)) printf("Present");
	else printf("Not Present");
	
	return 10;
}

