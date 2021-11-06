#include<stdio.h>

int main(){
	
	int inicial, qpares=0, final, i, f;
	
	printf("\n Digite o numero inicial: ");
	scanf("%d", &inicial);
	printf("\n Digite o numero final: ");
	scanf("%d", &final);
	
	for(i=inicial;i<=final;i++){
		if(i %2 == 0)
		printf("\n %d e par.", i);
		else 
		printf("\n %d e impar.", i);
		break;	
	}
	
	for(f=final;f<=final;i--){
		if(f %2 == 1)
		printf("\n %d e impar.", f);
		else 
		printf("\n %d e par.", f);
		break;
	}
	
	for(i=inicial;i<=final;i++){
		if(i %2 == 0)
			qpares++;
		
			
}
		printf("\n A quantidade de numeros pares e: %d ", qpares);
	

}
