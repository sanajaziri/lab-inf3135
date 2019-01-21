#include <stdio.h>
int main (int argc, char *argv[]){
	if (argc !=2){
	printf("Erreur: un seul argument permis\n");
	return 1;
	}
	printf("Hello , %s\n:", argv[1]);
	return 0;

}
