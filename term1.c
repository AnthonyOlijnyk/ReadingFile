#include <stdio.h>

int main()
{
	int i;
	FILE *in;
	int year[366];
	int day[366];
	double avgs, avgm, avgh, avge, avgo, avgst, avgt;
	double sums=0, summ=0, sumh=0, sume=0, sumo=0, sumst=0, sumt=0;
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
	for(i = 0; i <= 364; i++){
		sums = sums + sup[i];
	}
	avgs = sums / 365.0;
	for(i = 0; i <= 364; i++){
		summ = summ + mich[i];
	}
	avgm = summ / 365.0;
	for(i = 0; i <= 364; i++){
		sumh = sumh + huron[i];
	}
	avgh = sumh / 365.0;
	for(i = 0; i <= 364; i++){
		sume = sume + erie[i];
	}
	avge = sume / 365.0;
	for(i = 0; i <= 364; i++){
		sumo = sumo + ont[i];
	}
	avgo = sumo / 365.0;
	for(i = 0; i <= 364; i++){
		sumst = sumst + st_clr[i];
	}
	avgst = sumst / 365.0;
	sumt = sums + summ + sumh + sume + sumo + sumst;
	avgt = sumt / 2190.0;
	printf("average temperature for sup: %lf\n", avgs);
	printf("average temperature for mich: %lf\n", avgm);
	printf("average temperature for huron: %lf\n", avgh);
	printf("average temperature for erie: %lf\n", avge);
	printf("average temperature for ont: %lf\n", avgo);
	printf("average temperature for stclr: %lf\n", avgst);
	printf("total average temperature: %lf\n", avgt);
	fclose(in);
	return 0;
}

