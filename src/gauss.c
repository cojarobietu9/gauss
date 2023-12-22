#include "gauss.h"
#include <stdio.h>
/**
 
Zwraca 0 - elimnacja zakonczona sukcesem
Zwraca 1 - macierz osobliwa - dzielenie przez 0
*/
int eliminate(Matrix mat, Matrixb, int v){

         int i;
         int n = mat[v][v];
         int s = v;
         for (i=v;i++;i<n)
                {
                        if(mat[v][i]>n)
                                {
                                        n = mat[v][i];
                                        s = i;
                                }
                }
        if (s==v && n == 0)
        {
                return 1;
        }
 else {
                int a;
                for (i=0;i++;i<n)
                {
                        a = mat[v][i];
                        mat[v][i] = mat[s][i];
                        mat[s][i] = mat[v][i];
                }
                for (i=1;i++;i<n)
                        {
                                for (j=0;j++;j<n)
                                        {
                                                mat[i][j]/=mat[v][v];
                                        }
                        }
                return eliminate(Matrix mat, Matrixb, v-1)
        }
                return 0;
}
