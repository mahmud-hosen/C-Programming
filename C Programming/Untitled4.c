#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of element: \n");
	scanf("%d", &n);
	int a[n], i, j, k, temp;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	for(i=0; i<n-1 ; i++){
		for(j=0; j<n-1-i; j++){
				if(a[j]%2==0){
					for(k=j+1; k<n-i; k++){
						if(a[k]%2==0){
							if(a[j]>a[k]){
								temp = a[j];
								a[j] = a[k];
								a[k] = temp;
								break;
							}
						}
					}
				}



		}
	}
	for(i=0; i<n; i++){
		printf("%d\t", a[i]);
	}
	return 0;
}