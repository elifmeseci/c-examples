#include <stdio.h>

int main(){
	int r;
	int p=3.14;
	int circuit;
	int area;
	int choice;
	
	printf("find the:\n1-circuit \n2-area\n");
	scanf("%d", &choice);
	printf("yaricapi giriniz: ");
	scanf("%d", &r);
	if(choice==1){
		circuit = 2*p*r;
		printf("circuit: %d", circuit);
	}
	else if(choice ==2){
		area = p*r*r;
		printf("area: %d", area);
	}
	else
		printf("wrong input");
}
