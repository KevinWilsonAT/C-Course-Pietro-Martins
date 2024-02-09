#include <stdio.h>
#include <stdlib.h>

float calcProfitDist(float fact_p, float perc_dist){
	return fact_p * perc_dist / 100;
}

float calcTaxes(float fact_p, float perc_tax){
	return fact_p * perc_tax / 100;
}

float calcFinalPrice(float fact_p, float v_dist, float v_tax){
	return fact_p + v_dist + v_tax;
}

int main(int argc, char *argv[]){
	
	float fact_p, perc_dist, perc_tax, prof_dist, taxes, f_price;
	
	printf("Insert factory price: ");
	scanf("%f", &fact_p);
	printf("Insert distributor percentual profit: ");
	scanf("%f", &perc_dist);
	printf("Insert tax percentual: ");
	scanf("%f", &perc_tax);
	
	
	prof_dist = calcProfitDist(fact_p, perc_dist);
	taxes = calcTaxes(fact_p, perc_tax);
	f_price = calcFinalPrice(prof_dist, f_price, taxes);
	
	printf("Distributor profit: R$%.2f\n", prof_dist);
	printf("Taxes: R$%.2f\n", taxes);
	printf("Final price: R$%.2f\n\n", f_price);
	
	system("pause");
	
	return 0;
}
