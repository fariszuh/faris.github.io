#include <stdio.h>

int main(int argc, char **argv)
{
int i,j,n;
	n=3; //kalo mau orde n, diganti scanf n dan ntar diubah juga di proses line 25. dibuat statis n dari 0,1,2,....dst.
int mat1[n][n],mat2[n][n],mat3[n][n];
	printf("Masukkan elemen matriks 1 : ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat1[i][j]);
			}
		}
	printf("Masukkan elemen matriks 2 : ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat2[i][j]);
			}
		}
		
	printf("\nHasilnya matriks %d : \n",n);
	for(i=0;i<n;i++){
		printf(" |  ");
		for(j=0;j<n;j++){
			mat3[i][j]=(mat1[i][0]*mat2[0][j])+(mat1[i][1]*mat2[1][j])+(mat1[i][2]*mat2[2][j]);
			printf("%d ",mat3[i][j]);
			}
		printf("| \n");
		}
	return 0;
}
