#include <string.h>
#define TUSERS 5

char *user[TUSERS] = {"vivek", "shashi", "verma", "srivastav", "yogi"};
int isUserPresent(const char *s){
	int i = 0;
	while (i < TUSERS) {
		if (!strcmp(user[i], s))
			return 1;
		i++;
	}
	return 0;
}
