/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calcula.h"

int *
sub_100_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Função SUB(%d - %d) Foi chamada!\n",argp->x, argp->y);
	result = argp->x - argp->y;

	return &result;
}

int *
mult_100_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Função MULT(%d * %d) Foi chamada!\n",argp->x, argp->y);
	result = argp->x * argp->y;

	return &result;
}

int *
div_100_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("Função DIV(%d / %d) Foi chamada!\n\n",argp->x, argp->y);
	result = argp->x/argp->y;

	return &result;
}
