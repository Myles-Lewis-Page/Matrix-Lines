#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Makes Matrix for each line
	int line1 [7] = {0,0,25,5,5,0,1};
	int line2 [7] = {-10,-10,20,-30,6,10,0};
	int line3 [7] = {10,10,30,-11,-11,14,14};
	int line4 [7] = {-12,10,15,-12,20,3,-1};
	int line5 [7] = {0,5,15,0,5,10,1};
	
	//Makes Variables
	int startX;
	int startY;
	int size;
	int x = 0;
	int y = 0;
	int totalX;
	int totalY; 
	int makeLine1[line1[2]][line1[2]];
	int makeLine2[line2[2]][line2[2]];
	int makeLine3[line3[2]][line3[2]];
	int makeLine4[line4[2]][line4[2]];
	int makeLine5[line5[2]][line5[2]];
	
	int column;
	int row;
	
	//Sets values equal to zero for preparation to print line 1
	printf("Print Line 1\n");
	startX = line1[0];
	startY = line1[1];
	totalX = (startX+size);
	totalY = (startY+size);
	size = line1[2];
	for (column=0; column<size; column++){
       	for(row=0; row<size; row++){
       		makeLine1[row][column] = 0;
		}
    }
    
    //Sets correct values using variables listed in order to print line 1
	makeLine1[line1[3]-1][size-line1[4]] = 1;
	while(size >= x){
		makeLine1[line1[3]-1][x] = 1;
		x++;
	}
	makeLine1[5][0] = 0;
	printf("%d-|", size);
	for (column=0; column<1; column++){
        for(row=0; row<size; row++){
			printf("%d  ", makeLine1[row][column]);
			}
            printf("\n\n");
    }
	for (column=1; column<size-1; column++){
		printf("   |");
        for(row=0; row<size; row++){
			printf("%d  ", makeLine1[row][column]);
			}
            printf("\n\n");
    }
    for (column=24; column<25; column++){
		printf(" 0-|");
        for(row=0; row<size; row++){
			printf("%d  ", makeLine1[row][column]);
			}
            printf("\n\n");
    }
    
    //Prints line 1 in between | | and prints size in top left
    printf("    |\t\t\t\t\t\t\t\t\t    |\n");
    printf("    0\t\t\t\t\t\t\t\t\t    25");
    
    //Sets values equal to zero for new variables to print line 2
    /*
    printf("Print Line 2\n");
    size = line2[2];
	startX = line2[0];
	startY = line2[1];
	totalX = (startX+size);
	totalY = (startY+size);
    for (column=0; column<size; column++){
       	for(row=0; row<size; row++){
       		makeLine2[row][column] = 0;
		}
    }
    
    //Sets correct values using variables listed in order to print line 2
    printf(" %d-|", totalY);
    for (column=0; column<1; column++){
        for(row=0; row<size; row++){
			printf("%d  ", makeLine2[row][column]);
			}
            printf("\n\n");
    }
	for (column=1; column<size-1; column++){
		printf("    |");
        for(row=0; row<size; row++){
			printf("%d  ", makeLine2[row][column]);
			}
            printf("\n\n");
    }
    for (column=19; column<20; column++){
		printf("-10-|");
        for(row=0; row<size; row++){
			printf("%d  ", makeLine2[row][column]);
			}
            printf("\n\n");
    }
    
    //Prints line 2 in between | | and prints size in top left
    printf("     |\t\t\t\t\t\t              |\n");
    printf("    -10\t\t\t\t\t\t              10");
    */
    
    //Sets values equal to zero for new variables to print line 3
    /*
    printf("Print Line 3\n");
    size = line3[2];
	startX = line3[0];
	startY = line3[1];
	totalX = (startX+size);
	totalY = (startY+size);
	for (column=0; column<30; column++){
       	for(row=0; row<30; row++){
       		makeLine3[row][column] = 0;
		}
    }
    
    //Sets correct values using variables listed in order to print line 3
    makeLine3[0][30-1] = 1;
    y = 29;
	while(size >= x){
		makeLine3[y][x] = 1;
		x++;
		y--;
	}
	printf("%d-|", totalY);
	for (column=0; column<1; column++){
        for(row=0; row<30; row++){
			printf("%d  ", makeLine3[row][column]);
			}
            printf("\n\n");
    }
	for (column=1; column<size-1; column++){
		printf("   |");
        for(row=0; row<30; row++){
			printf("%d  ", makeLine3[row][column]);
			}
            printf("\n\n");
    }
    for (column=29; column<30; column++){
		printf("10-|");
        for(row=0; row<30; row++){
			printf("%d  ", makeLine3[row][column]);
			}
            printf("\n\n");
    }
    
    //Prints line 3 in between | | and prints size in top left
    printf("    |\t\t\t\t\t\t\t\t\t\t           |\n");
    printf("    10\t\t\t\t\t\t\t\t\t\t           40");
    */
    
    //Sets values equal to zero for new variables to print line 4
    /*
    printf("Print Line 4\n");
    size = line4[2];
	startX = line4[0];
	startY = line4[1];
	totalX = (startX+size);
	totalY = (startY+size);
	for (column=0; column<15; column++){
       	for(row=0; row<15; row++){
       		makeLine4[row][column] = 0;
		}
    }
    
    //Sets correct values using variables listed in order to print line 4
    makeLine4[10][15] = 1;
    makeLine4[1][11] = 1;
    makeLine4[4][12] = 1;
    makeLine4[7][13] = 1;
    printf("  %d-|", totalX);
    for (column=0; column<1; column++){
        for(row=0; row<15; row++){
			printf("%d  ", makeLine4[row][column]);
			}
            printf("\n\n");
    }
	for (column=1; column<size-1; column++){
		printf("    |");
        for(row=0; row<15; row++){
			printf("%d  ", makeLine4[row][column]);
			}
            printf("\n\n");
    }
    for (column=14; column<15; column++){
		printf("-12-|");
        for(row=0; row<15; row++){
			printf("%d  ", makeLine4[row][column]);
			}
            printf("\n\n");
    }
    
    //Prints line 4 in between | | and prints size in top left
    printf("    |\t\t\t\t\t      |\n");
    printf("   10\t\t\t\t\t      25");
    */
    
    //Sets values equal to zero for new variables to print line 5
    /*
    printf("Print Line 5\n");
	startX = line5[0];
	startY = line5[1];
	totalX = (startX+size);
	totalY = (startY+size);
	size = line5[2];
    for (column=0; column<15; column++){
       	for(row=0; row<15; row++){
       		makeLine5[row][column] = 0;
		}
    }
    
    //Sets correct values using variables listed in order to print line 5z
    makeLine5[0][14] = 1;
    makeLine5[10][13] = 1;
    printf("15-|");
    for (column=0; column<1; column++){
        for(row=0; row<15; row++){
			printf("%d  ", makeLine5[row][column]);
			}
            printf("\n\n");
    }
	for (column=1; column<size-1; column++){
		printf("   |");
        for(row=0; row<15; row++){
			printf("%d  ", makeLine5[row][column]);
			}
            printf("\n\n");
    }
    for (column=14; column<15; column++){
		printf(" 0-|");
        for(row=0; row<15; row++){
			printf("%d  ", makeLine5[row][column]);
			}
            printf("\n\n");
    }
    
    //Prints line 5 in between | | and prints size in top left
    printf("    |\t\t\t\t\t      |\n");
    printf("    5\t\t\t\t\t      20");
    */
    
	return 0;
}
