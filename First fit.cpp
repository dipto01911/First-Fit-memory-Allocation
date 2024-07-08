#include<iostream>
int B[50],P[50];
using namespace std;
int main(){
	int n,j,i,m;
	printf("Enter the number of block\n");
	cin>>n;
	for(i=1;i<=n;i++){
	printf("Enter size of mempry block M%d: ",i);
    cin>>B[i];
}
printf("Enter the number of process\n");
cin>>m;
for(i=1;i<=m;i++){
	printf("Enter the process requirement P%d: ",i);
	cin>>P[i];
}

for(i=1;i<=m;i++){
	int id=-1;
	for(j=1;j<=n;j++){
		if(B[j]>=P[i]){
			id=j;
			break;
		}
	}
	if(id==-1){
		printf("Process P%d is not allocated\n",i);
	}
	else{
		printf("Process p%d is allocated block %d\n",i,id);
		B[id]=B[id]-P[i];
	}
}
return 0;
}
