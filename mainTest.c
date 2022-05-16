#include <stdio.h>
 
int main () {
char chromaticscale[12][2]={
	{'C',' '},
	{'C','#'},
	{'D',' '},
	{'D','#'},
	{'E',' '},
	{'F',' '},
	{'F','#'},
	{'G',' '},
	{'G','#'},
	{'A',' '},
	{'A','#'},
	{'B',' '}		
	};

   int n[ 10 ]; /* n is an array of 10 integers */
   int i,j;
 
   /* initialize elements of array n to 0 */         
   for ( i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; /* set element at location i to i + 100 */
   }
   
   /* output each array element's value */
   for (j = 0; j < 12; j++ ) {
      printf("Element[%d] = %c%c \n", j, chromaticscale[j][0],chromaticscale[j][1] );
   }
 
   return 0;
}
