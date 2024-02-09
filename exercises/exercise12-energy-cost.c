#include <stdio.h>
#include <stdlib.h>

void calcKW(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc){
	
	(*v_kw) = v_sal / 1000;
	(*v_rs) = (*v_kw) * q_kw;
	(*v_dsc) = (*v_rs) * 0.85;
}

int main(int argc, char *argv[]){
	
	float v_sal, q_kw, v_kw, v_rs, v_dsc;
	
	printf("Insert minimum salary: ");
	scanf("%f", &v_sal);
	printf("Insert quantity of KW spent: ");
	scanf("%f", &q_kw);

	calcKW(v_sal, q_kw, &v_kw, &v_rs, &v_dsc);

	printf("1 KW price: R$%.2f.\n", v_kw);
	printf("Amount to be paid by the resident: R$%.2f.\n", v_rs);
	printf("Amount with discount: R$%.2f.\n\n", v_dsc);

	system("pause");
	
	return 0;
}
