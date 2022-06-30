#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d ",&n);
	char ch[n][50];
	bool a = false;
	for(int i=0;i<n;i++){
		scanf("%[^\n]%*c", &ch[i]);
		for(int j=0;j<i;j++){
			if(strcmp(ch[j],ch[i])==0){
				a = true;
			}
		}
	}
	if(a){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;
}
// There are NN people in Artland .Bitman want to know about their name. But in Artland database there may available duplicate name. The family name and given name of the ii-th person
//<1<=i<N) are si and Ti respectively

// Determine whether there is a pair of people with the same family and given names. In other words, determine whether there is a pair of integers 
//(i, j) such that 1<=i<j<=N, Si=Sj, and Ti = Tj