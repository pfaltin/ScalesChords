#include <stdio.h>
#include <ctype.h> 
#include <stdlib.h>




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
   system("clear"); 

   printf("\n ------------------------------------------------------------------------\n");
   printf("|       Chromatic scale:                                                |\n ");
   
   /* output each array element's value */
    
   printf("------------------------------------------------------------------------\n| ");
   for (j=0; j<12; j++){
 	  if(j<10){
	   	printf(" %d  | ",j);
	  }
	  else
	  {

	   	printf(" %d | ",j);
	  }
	  
  	 }
   printf("\n-------------------------------------------------------------------------");

   printf("\n| ");
   for (j = 0; j < 12; j++ ) {
      printf(" %c%c | ", chromaticscale[j][0],chromaticscale[j][1] );
   }
 
   printf("\n-------------------------------------------------------------------------");
 
 
   char inKey[2];

   printf( "\n\n  Enter a desired  key :");
   scanf("%s", inKey);
   inKey[0]= toupper(inKey[0]);
   printf("\n-------------------------------------------------------------------------");
   printf( "\n	You entered key: %c%c",inKey[0],inKey[1]);

   printf("\n-------------------------------------------------------------------------");
   printf("\n");
   int modesFormula[7][7] ={
				{2,2,1,2,2,2,1}, //Ionian - major
				{2,1,2,2,2,1,2}, //Dorian
				{1,2,2,2,1,2,2}, //Phrygian
				{2,2,2,1,2,2,1}, //Lydian
				{2,2,1,2,2,1,2}, //Mixolydian
				{2,1,2,2,1,2,2}, //Aeolian - minor
				{1,2,2,1,2,2,2}, //Locrian
			};
/* menu sa popisom modova
 * postavi brojace na 0
 * uzmi odabrani mod 
 * prodji cirklularno kromatsku ljestvicu
 * 	za korak upisan u formuli moda
 * 	korake upisi u novu listu chosenScale[7]
 * 	ispis nove liste sa imenima nota
 * 	poruka zavrsetak scale
 */

 /* Akordi
  * uzmi formulu
  * primjeni je na ljestvicu
  * ispis sastavnih tonova
  * ispis akorda u tonalitetu odabranom
  */

 
   return 0;
}


