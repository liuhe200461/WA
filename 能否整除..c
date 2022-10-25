#include <stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int k;
	k = m%n;
	if (k==0){
		printf("YES");
	} else{
		printf("NO");
	}
	return 0;
}
