#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, m, n, j;
	scanf("%d %d", &n, &m);
	
	for (i=1 ; i <=n ; i++){
		for (j=1 ; j<=m ; j++){
			printf("%d %d\n", i, j);
		}
	}
	return 0;
}
