/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "divisao.h"

int *
add_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Funcao Dividir:(%d, %d) Foi chamada!\n",argp->a, argp->b);
	if(argp->b == 0){
		printf("Impossivel dividir (%d) por zero!\n",argp->b);
		return 0;
	}
	 else{
		 result = argp->a / argp->b;
	 }
	     
	return &result;
}
