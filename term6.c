#include <stdio.h>

int main()
{
	int i;
	int j;
	FILE *in;
	int year[366];
	int day[366];
	double temp;
	double avgs=0, avgm=0, avgh=0, avge=0, avgo=0, avgst=0;
	double sums=0, summ=0, sumh=0, sume=0, sumo=0, sumst=0;
	double sup[366];
	double mich[366];
	double huron[366];
	double erie[366];
	double ont[366];
	double st_clr[366];
	in = fopen("data.txt", "r");
	for(i = 0; i <= 364; i++){
		fscanf(in, "%d", &year[i]);
		fscanf(in, "%d", &day[i]);
		fscanf(in, "%lf", &sup[i]);
		fscanf(in, "%lf", &mich[i]);
		fscanf(in, "%lf", &huron[i]);
		fscanf(in, "%lf", &erie[i]);
		fscanf(in, "%lf", &ont[i]);
		fscanf(in, "%lf", &st_clr[i]);
	}
	for(i = 0; i <= 78; i++){
		sums = sums + sup[i];
	}
	for(i = 354; i <= 364; i++){
		sums = sums + sup[i];
	}
	avgs = sums / 90.0;
	for(i = 0; i <= 78; i++){
		summ = summ + mich[i];
	}
	avgm = summ / 90.0;
	for(i = 0; i <= 78; i++){
		sumh = sumh + huron[i];
	}
	avgh = sumh / 90.0;
	for(i = 0; i <= 78; i++){
		sume = sume + erie[i];
	}
	avge = sume / 90.0;
	for(i = 0; i <= 78; i++){
		sumo = sumo + ont[i];
	}
	avgo = sumo / 90.0;
	for(i = 0; i <= 78; i++){
		sumst = sumst + st_clr[i];
	}
	avgst = sumst / 90.0;
	
	double array[] = {avgs, avgm, avgh, avge, avgo, avgst};
	
	for(i = 0; i < 6; i++){
        for(j = 0; j < (6 - i - 1); j++){
            if (array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
	for(i = 0; i < 6; i++){
		if(array[i] == avgs){
			printf("SUP: ");
		}
		if(array[i] == avgm){
			printf("MICH: ");
		}
		if(array[i] == avgh){
			printf("HURON: ");
		}
		if(array[i] == avge){
			printf("ERIE: ");
		}
		if(array[i] == avgo){
			printf("ONT: ");
		}
		if(array[i] == avgst){
			printf("St.CLR: ");
		}
		printf("%lf\n", array[i]);
	}
	fclose(in);
	return 0;
	
}

