/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calcula.h"


void prog_100(char *host, int x, int y)
{
	CLIENT *clnt;
	int  *result_1;
	operandos  sub_100_arg;
	int  *result_2;
	operandos  mult_100_arg;
	int  *result_3;
	operandos  div_100_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, PROG, VERSAO, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    div_100_arg.x =x;
	div_100_arg.y =y;

	mult_100_arg.x =x;
	mult_100_arg.y =y;

	sub_100_arg.x =x;
	sub_100_arg.y =y; 

	result_1 = sub_100(&sub_100_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("Resultado SUB(): %d\n",*result_1);
	}

	result_2 = mult_100(&mult_100_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("Resultado MULT(): %d\n",*result_2);
	}

	result_3 = div_100(&div_100_arg, clnt);
	if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("Resultado DIV(): %d\n\n",*result_3);
	}

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 4) {
		printf ("usage: %s server_host Numero_1 Numero_2\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	prog_100 (host, atoi(argv[2]),atoi(argv[3]));
exit (0);
}
