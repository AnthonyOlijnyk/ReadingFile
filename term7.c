#include <stdio.h>

int main()
{
	int i;
	FILE *in;
	int year[366];
	int day[366];
	int dayss=0, daysm=0, daysh=0, dayse=0, dayso=0, daysst=0;
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
		if(sup[i] > 20.0){
			dayss++;
		}
	}
	for(i = 0; i <= 364; i++){
		if(mich[i] > 20.0){
			daysm++;
		}
	}
	for(i = 0; i <= 364; i++){
		if(huron[i] > 20.0){
			daysh++;
		}
	}
	for(i = 0; i <= 364; i++){
		if(erie[i] > 20.0){
			dayse++;
		}
	}
	for(i = 0; i <= 364; i++){
		if(ont[i] > 20.0){
			dayso++;
		}
	}
	for(i = 0; i <= 364; i++){
		if(st_clr[i] > 20.0){
			daysst++;
		}
	}
	printf("Days you can swim comfortably in SUP: %d\n", dayss);
	printf("Days you can swim comfortably in MICH: %d\n", daysm);
	printf("Days you can swim comfortably in HURON: %d\n", daysh);
	printf("Days you can swim comfortably in ERIE: %d\n", dayse);
	printf("Days you can swim comfortably in ONT: %d\n", dayso);
	printf("Days you can swim comfortably in ST.CLR: %d\n", daysst);
	fclose(in);
	return 0;
}
