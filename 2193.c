#include<stdio.h>
long long arr[91] = { 0,1,1,0 };
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i-2];
	}
	printf("%lld", arr[n]);

}
 
