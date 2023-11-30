#include <stdio.h>

int main() {
	int n, q;
    
	scanf("%d %d", &n, &q);
	int arr[100];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	for(int i = 0; i < q; i++) {
		int qt;
		scanf("%d", &qt);
		
		if(qt == 1) {
			int a;
			scanf("%d", &a);
			
			printf("%d\n", arr[a - 1]);
		}
		else if(qt == 2) {
			int a;
			scanf("%d", &a);
			
			int idx = -1;
			for(int j = 0; j < n; j++) {
				if(arr[j] == a) {
					idx = j;
					break;
				}
			}
			
			printf("%d\n", idx + 1);
		}
		else {
			int a, b;
			scanf("%d %d", &a, &b);
			
			for(int j = a - 1; j < b; j++) {
				printf("%d ", arr[j]);
			}
			printf("\n");
		}
	}
	
    return 0;
}