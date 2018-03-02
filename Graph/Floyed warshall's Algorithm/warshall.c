#include <stdio.h>

int main(){

	int i,j,k,vertices;

	printf("How Many Vertices Will be in the Graph:");
	scanf("%d",&vertices);

    int A[vertices][vertices],B[vertices][vertices];

	printf("\n\n");

	for(i=1; i<=vertices; i++){

		for(j=1; j<=vertices; j++){

			printf("Edge from vertex %d to %d:  ",i,j);
			scanf("%d",&B[i][j]);
		}
	}

	for(i=1; i<=vertices; i++){

		for(j=1; j<=vertices; j++){

			A[i][j] = B[i][j] ? 1 : 0;
		}
	}

for(i=1; i<=vertices; i++){

		for(j=1; j<=vertices; j++){

			printf("%4d",A[i][j] );
		}
		printf("\n");
	}

	for(k=1; k<=vertices; k++){

		for(i=1; i<=vertices; i++){

			for(j=1; j<=vertices; j++){

				A[i][j] = (A[i][j] | (A[i][k] & A[k][j]));
			}


		}

	}

	printf("Path Matrix:\n\n");

	for(i=1; i<=vertices; i++){

		for(j=1; j<=vertices; j++){

			printf("%5d",A[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	return 0;

	}
