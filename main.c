#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int setMonth(int inDay);
int setDays(int inDay);
int main(){

/*Initializing lakes*/
double lakeS[365], lakeMich[365], lakeHuron[365], lakeEr[365], lakeOnt[365], lakeSt[365];
double sumS = 0, sumMich = 0, sumHur = 0, sumEr =0, sumOnt = 0, sumSt = 0;
int cS = 0, cM =0, cH = 0, cE = 0, cO = 0, cSt = 0;
int lakeNum = 1;
double garbage;

double sHigh =0, mHigh = 0, hHigh =0, eHigh =0, oHigh =0, stHigh =0;
int sDay, mDay, hDay, eDay, oDay, stDay;

double sLow =100, mLow = 100, hLow =100, eLow =100, oLow =100, stLow =100;
int sDay2, mDay2, hDay2, eDay2, oDay2, stDay2;

double sAvg=0, mAvg=0, hAvg=0, eAvg=0, oAvg=0, stAvg=0;
double wsAvg=0, wmAvg=0, whAvg=0, weAvg=0, woAvg=0, wstAvg=0;

int swimCountS =0, swimCountM =0, swimCountH =0, swimCountE =0, swimCountO =0, swimCountSt =0;
int fCountS =0, fCountM =0, fCountH =0, fCountE =0, fCountO =0, fCountSt =0;


/*Readin In Lake Data*/
FILE* in;
in =fopen("data.txt", "r");
fscanf(in, "%lf", &garbage);
fscanf(in, "%lf", &garbage);
for(int i =0; i<365*6; i++){

if(lakeNum==1){
fscanf(in, "%lf", &lakeS[cS]);
sumS += lakeS[cS];
lakeNum++;
 if(lakeS[cS]>sHigh){
        sHigh = lakeS[cS];
        sDay =cS +1;
    }
    if(lakeS[cS]<sLow){
        sLow = lakeS[cS];
        sDay2 =cS +1;
    }
    if((cS>=171)&&(cS<=264)){
       sAvg+=lakeS[cS];
    }
    if((cS<=78)||((cS>=354)&(cS<=364))){
        wsAvg += lakeS[cS];
    }
    if(lakeS[cS]>20){
        swimCountS++;
    }
    if(lakeS[cS]<=0){
        fCountS++;
    }
cS++;
}
else if(lakeNum==2){
    fscanf(in, "%lf", &lakeMich[cM]);
    sumMich+= lakeMich[cM];
     if(lakeMich[cM]>mHigh){
        mHigh = lakeMich[cM];
        mDay =cM +1;
    }
    if(lakeMich[cM]<mLow){
        mLow = lakeMich[cM];
        mDay2 =cM +1;
    }
    if((cM>=171)&&(cM<=264)){
       mAvg+=lakeMich[cM];
    }
    if((cM<=78)||((cM>=354)&(cM<=364))){
        wmAvg += lakeMich[cM];
    }
    if(lakeMich[cM]>20){
        swimCountM++;
    }
     if(lakeMich[cM]<=0){
        fCountM++;
    }
    cM++;
    lakeNum++;
}
else if(lakeNum==3){
    fscanf(in, "%lf", &lakeHuron[cH]);
    sumHur+=lakeHuron[cH];
     if(lakeHuron[cH]>hHigh){
        hHigh = lakeHuron[cH];
        hDay =cH +1;
    }
    if(lakeHuron[cH]<hLow){
        hLow = lakeHuron[cH];
        hDay2 =cH +1;
    }
    if((cH>=171)&&(cH<=264)){
       hAvg+=lakeHuron[cH];
    }
    if((cH<=78)||((cH>=354)&(cH<=364))){
        whAvg += lakeHuron[cH];
    }
        if(lakeHuron[cH]>20){
        swimCountH++;
    }
     if(lakeHuron[cH]<=0){
        fCountH++;
    }
    cH++;
    lakeNum++;
}
else if(lakeNum==4){
    fscanf(in, "%lf", &lakeEr[cE]);
    sumEr+=lakeEr[cE];
     if(lakeEr[cE]>eHigh){
        eHigh = lakeEr[cE];
        eDay =cE +1;
    }
    if(lakeEr[cE]<eLow){
        eLow = lakeEr[cE];
        eDay2 =cE +1;
    }
    if((cE>=171)&&(cE<=264)){
       eAvg+=lakeEr[cE];
    }
    if((cE<=78)||((cE>=354)&(cE<=364))){
        weAvg += lakeEr[cE];
    }
        if(lakeEr[cE]>20){
        swimCountE++;
    }
     if(lakeEr[cE]<=0){
        fCountE++;
    }
   cE++;
   lakeNum++;
}
else if(lakeNum==5){
    fscanf(in, "%lf", &lakeOnt[cO]);
    sumOnt+=lakeOnt[cO];
     if(lakeOnt[cO]>oHigh){
        oHigh = lakeOnt[cO];
        oDay =cO + 1;
    }
    if(lakeOnt[cO]<oLow){
        oLow = lakeOnt[cO];
        oDay2 =cO + 1;
    }
    if((cO>=171)&&(cO<=264)){
       oAvg+=lakeOnt[cO];
    }
    if((cO<=78)||((cO>=354)&(cO<=364))){
        woAvg += lakeOnt[cO];
    }
        if(lakeOnt[cO]>20){
        swimCountO++;
    }
     if(lakeOnt[cO]<=0){
        fCountO++;
    }
    cO++;
    lakeNum++;
}
else if(lakeNum==6){
    fscanf(in, "%lf", &lakeSt[cSt]);
    sumSt+=lakeSt[cSt];
     if(lakeSt[cSt]>stHigh){
        stHigh = lakeSt[cSt];
        stDay =cSt + 1;
    }
    if(lakeSt[cSt]<stLow){
        stLow = lakeSt[cSt];
        stDay2 =cSt + 1;
    }
    if((cSt>=171)&&(cSt<=264)){
       stAvg+=lakeSt[cSt];
    }
    if((cSt<=78)||((cSt>=354)&(cSt<=364))){
        wstAvg += lakeSt[cSt];
    }
        if(lakeSt[cSt]>20){
        swimCountSt++;
    }
     if(lakeSt[cSt]<=0){
        fCountSt++;
    }
    cSt++;
    lakeNum =1;
    fscanf(in, "%lf", &garbage);
    fscanf(in, "%lf", &garbage);
}
}

/*Calculating Values*/
sumS = sumS/365;
sumMich = sumMich/365;
sumHur = sumHur/365;
sumEr = sumEr/365;
sumSt = sumSt/365;
sumOnt = sumOnt/365;

sAvg = sAvg/93;
mAvg = mAvg/93;
hAvg = hAvg/93;
eAvg = eAvg/93;
oAvg = oAvg/93;
stAvg = stAvg/93;

wsAvg = wsAvg/89;
wmAvg = wmAvg/89;
whAvg = whAvg/89;
weAvg = weAvg/89;
woAvg = woAvg/89;
wstAvg = wstAvg/89;

double a[6] = {sAvg, mAvg, hAvg, eAvg, oAvg, stAvg};
double a2[6] = {wsAvg, wmAvg, whAvg, weAvg, woAvg, wstAvg};


/*Printing information to terminal*/
double totalAvg = (sumS+sumMich+sumHur+sumEr+sumSt+sumOnt)/6;
printf("Average Temp of: \nSuperior: %.2lf\nMichigan: %.2lf\nHuron: %.2lf\nErie: %.2lf\nOntatio: %.2lf\nSt. Clair: %.2lf", sumS, sumMich, sumHur, sumEr, sumOnt,sumSt);
printf("\n\nThe Total average of the lakes is: %.2lf", totalAvg);

printf("\n\nThe warmest lake is Erie and the coldest lake is Superior");

printf("\n\nThe lakes below the average are: ");

if(sumS<totalAvg){
    printf("\nSuperior");
}
if(sumMich<totalAvg){
    printf("\nMichigan");
}
 if(sumHur<totalAvg){
    printf("\nHuron");
}
if(sumEr<totalAvg){
    printf("\nErie");
}
if(sumOnt<totalAvg){
    printf("\nOntario");
}
if(sumSt<totalAvg){
    printf("\nSt. Clair");
}

printf("\n\nThe lakes above the average are: ");

if(sumS>totalAvg){
    printf("\nSupeior");
}
if(sumMich>totalAvg){
    printf("\nMichigan");
}
if(sumHur>totalAvg){
    printf("\nHuron");
}
if(sumEr>totalAvg){
    printf("\nErie");
}
if(sumOnt>totalAvg){
    printf("\nOntario");
}
if(sumSt>totalAvg){
    printf("\nSt. Clair\n");
}

printf("\n\nThe highest temp for Superior is %.2lf on %d/%d", sHigh, setMonth(sDay), setDays(sDay));
printf("\n\nThe highest temp for Michigan is %.2lf on %d/%d", mHigh, setMonth(mDay), setDays(mDay));
printf("\n\nThe highest temp for Huron is %.2lf on %d/%d", hHigh, setMonth(hDay), setDays(hDay));
printf("\n\nThe highest temp for Erie is %.2lf on %d/%d", eHigh, setMonth(eDay), setDays(eDay));
printf("\n\nThe highest temp for Ontario is %.2lf on %d/%d", oHigh, setMonth(oDay), setDays(oDay));
printf("\n\nThe highest temp for St. Clair is %.2lf on %d/%d", stHigh, setMonth(stDay), setDays(stDay));

printf("\n\nThe lowest temp for Superior is %.2lf on %d/%d", sLow, setMonth(sDay2), setDays(sDay2));
printf("\n\nThe lowest temp for Michigan is %.2lf on %d/%d", mLow, setMonth(mDay2), setDays(mDay2));
printf("\n\nThe lowest temp for Huron is %.2lf on %d/%d", hLow, setMonth(hDay2), setDays(hDay2));
printf("\n\nThe lowest temp for Erie is %.2lf on %d/%d", eLow, setMonth(eDay2), setDays(eDay2));
printf("\n\nThe lowest temp for Ontario is %.2lf on %d/%d", oLow, setMonth(oDay2), setDays(oDay2));
printf("\n\nThe lowerst temp for St. Clair is %.2lf on %d/%d", stLow, setMonth(stDay2), setDays(stDay2));

printf("\n\nThe highest temperature overall is St. Clair at %.2lf on %d/%d", stHigh, setMonth(stDay), setDays(stDay));
printf("\n\nThe lowest temperature overall is St. Clair at %.2lf on %d/%d\n", stLow, setMonth(stDay2), setDays(stDay2));

double tmp =0;

/*Sorting temperatures*/
for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(a[j] < a[i]){
				 tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
/*Printing Sorted temperatures*/
printf("\n\nWarmest summers in descending order :\n");
	for(int i = 0; i < 6; i++){
            if(a[i]==sAvg){
                printf("Superior: ");
            }
            if(a[i]==mAvg){
                printf("Michigan: ");
            }
             if(a[i]==hAvg){
                printf("Huron: ");
            }
             if (a[i]==eAvg){
                printf("Erie: ");
            }
             if(a[i]==oAvg){
                printf("Ontario: ");
            }
             if(a[i]==stAvg){
                printf("St. Clair: ");
            }
		printf("%.2lf\n", a[i]);
	}

	double tmp2 =0;
/*Sorting Temperatures*/
for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(a2[j] < a2[i]){
				 tmp2 = a2[i];
				a2[i] = a2[j];
				a2[j] = tmp2;
			}
		}
	}
/*Printing Sorted temperatures*/
printf("\n\nColdest winters in descending order :\n");
	for(int i = 0; i < 6; i++){
            if(a2[i]==wsAvg){
                printf("Superior: ");
            }
            if(a2[i]==wmAvg){
                printf("Michigan: ");
            }
             if(a2[i]==whAvg){
                printf("Huron: ");
            }
             if (a2[i]==weAvg){
                printf("Erie: ");
            }
             if(a2[i]==woAvg){
                printf("Ontario: ");
            }
             if(a2[i]==wstAvg){
                printf("St. Clair: ");
            }
		printf("%.2lf\n", a2[i]);
	}
	printf("\n\n");

	printf("The amount of days you can going swimming in each lake are:\nSuperior: %d\nMichigan: %d\nHuron: %d\nErie: %d\nOntario: %d\nSt. Clair: %d\n\n", swimCountS, swimCountM, swimCountH, swimCountE, swimCountO, swimCountSt);
    printf("The amount of days the water is frozen in each lake are:\nSuperior: %d\nMichigan: %d\nHuron: %d\nErie: %d\nOntario: %d\nSt. Clair: %d\n", fCountS, fCountM, fCountH, fCountE, fCountO, fCountSt);
fclose(in);

}

/*Function to find current month*/
int setMonth(int inDay){

int month = inDay/30;

return month + 1;
}
/*Function to find current day*/
int setDays(int inDay){

int day = inDay%30;
return day;
}



