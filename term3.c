#include <stdio.h>


void d_to_d(int ins){
			if(ins <= 31){
				printf("01/%d\n",ins);
			}
			if(ins > 31 && ins <= 59){
				printf("02/%d\n", ins-31);
			}
			if(ins > 59 && ins <= 90){
				printf("03/%d\n", ins-59);
			}
			if(ins > 90 && ins <= 120){
				printf("04/%d\n", ins-90);
			}
			if(ins > 120 && ins <= 151){
				printf("05/%d\n", ins-120);
			}
			if(ins > 151 && ins <= 181){
				printf("06/%d\n", ins-151);
			}
			if(ins > 181 && ins <= 212){
				printf("07/%d\n", ins-181);
			}
			if(ins > 212 && ins <= 243){
				printf("08/%d\n", ins-212);
			}
			if(ins > 243 && ins <= 273){
				printf("09/%d\n", ins-243);
			}
			if(ins > 273 && ins <= 304){
				printf("10/%d\n", ins-273);
			}
			if(ins > 304 && ins <= 334){
				printf("11/%d\n", ins-304);
			}
			if(ins > 334 && ins <= 365){
				printf("12/%d\n", ins-334);
			}
}





int main()
{
	int i;
	FILE *in;
	int year[366];
	int day[366];
	int ins, insc, inm, inmc,inh,inhc,ine,inec,ino,inoc,inst,instc;
	double hs= -99999, hm=-9999,hh=-99,he=-99,ho=-99,hst=-99;
	double ls= 99999, lm=9999,lh=999,le=999,lo=999,lst=999;
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
		if(sup[i] > hs){
			hs = sup[i];
			ins = i+1;
		}
		if(sup[i] < ls){
			ls = sup[i];
			insc = i+1;
		}
	}
	for(i = 0; i <= 364; i++){
		if(mich[i] > hm){
			hm = mich[i];
			inm = i+1;
		}
		if(mich[i] < lm){
			lm = mich[i];
			inmc = i+1;
		}
	}
	for(i = 0; i <= 364; i++){
		if(huron[i] > hh){
			hh = huron[i];
			inh = i+1;
		}
		if(huron[i] < lh){
			lh = huron[i];
			inhc = i+1;
		}
	}
	for(i = 0; i <= 364; i++){
		if(erie[i] > he){
			he = erie[i];
			ine = i+1;
		}
		if(erie[i] < le){
			le = erie[i];
			inec = i+1;
		}
	}
	for(i = 0; i <= 364; i++){
		if(ont[i] > ho){
			ho = ont[i];
			ino = i+1;
		}
		if(ont[i] < lo){
			lo = ont[i];
			inoc = i+1;
		}
	}
	for(i = 0; i <= 364; i++){
		if(st_clr[i] > hst){
			hst = st_clr[i];
			inst = i+1;
		}
		if(st_clr[i] < lst){
			lst = st_clr[i];
			instc = i+1;
		}
	}
	printf("SUP warmest temperature: %lf\ndate: ", hs);
	d_to_d(ins);
	printf("coldest temperature: %lf\ndate: ", ls);
	d_to_d(insc);
	printf("MICH warmest temperature: %lf\ndate: ", hm);
	d_to_d(inm);
	printf("coldest temperature: %lf\ndate: ", lm);
	d_to_d(inmc);
	printf("HURON warmest temperature: %lf\ndate: ", hh);
	d_to_d(inh);
	printf("coldest temperature: %lf\ndate: ", lh);
	d_to_d(inhc);
	printf("ERIE warmest temperature: %lf\ndate: ", he);
	d_to_d(ine);
	printf("coldest temperature: %lf\ndate: ", le);
	d_to_d(inec);
	printf("ONT warmest temperature: %lf\ndate: ", ho);
	d_to_d(ino);
	printf("coldest temperature: %lf\ndate: ", lo);
	d_to_d(inoc);
	printf("ST.CLR warmest temperature: %lf\ndate: ", hst);
	d_to_d(inst);
	printf("coldest temperature: %lf\ndate: ", lst);
	d_to_d(instc);

	fclose(in);
	return 0;
}
