/*
 Program for calculate the electricity bill
 Author:De Silva K.G.P.M.
 	E/15/065
 upadated date:Fri Jan 26 00:38:06 +0530 2018

*/

#include<stdio.h>
int main(){

    int units=0;
    double bill=0;

    //getting the no of units from the user
    printf("Enter the amount of units you used:");
    scanf("%d",&units);

    if(units>0){

        if(units>60){
            if(units<=90){
                //0-90
                bill=471+90+10*(units-60);
            }else if(units<=120){
                //0-120
                bill=861+480+27.75*(units-90);
            }else if(units<=180){
                //0-180
                bill=2173.5+480+32*(units-120);
            }else{
                //>ls180
                bill=3613.5+540+45*(units-180);
            }


        }else{
            if(units<=30){
                //0-30
                bill=30+2.5*units;
            }else{
                //0-60
                bill=105+60+4.85*(units-30);
            }
        }

            printf("Electricity bill is Rs. %.2f\n",bill);//displaying the final value of bill

    }else{
        printf("-1");
    }


    return 0;
}
