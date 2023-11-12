#include <stdio.h>
#include <string.h>

int main() {  
	char str[10][21];
    char a;
    int s = 0,i,j;
	
	for(i = 0; i < 10; i++)
		scanf("%s", str[i]);
	
	scanf(" %c", &a);
	
	for(i = 0; i < 10; i++) {
		j = strlen(str[i]);
		if(str[i][j-1] == a) {
			printf("%s\n", str[i]);
			s++;
		}
	}
	
	if(s == 0)
		printf("None");
	
    return 0;
}