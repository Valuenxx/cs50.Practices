#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
long cardnumber=get_double("Kart Numarasını Giriniz\n");
double cardsize =0;
int a=0;
int top=0;
long cardnumber2=cardnumber;
long cardnumber3=cardnumber2;


// Kart Basamak Kontrolü
while(cardnumber>=1){
    cardnumber=cardnumber/10;
    cardsize++;
    //printf("%lf\n",cardsize);
}


//Kart Türü Kontrolü

if(cardsize==16||cardsize==15||cardsize==13){
    for(int c=2;c<cardsize;c++){
        cardnumber3=cardnumber3/10;
        //printf("%li\n",cardnumber3);


    }
}
if(cardsize==16&cardnumber3==51||cardnumber3==52||cardnumber3==53||cardnumber3==54||cardnumber3==55){
    printf("Kartınız MasterCard\n");
}
if(cardsize==15&cardnumber3==34||cardnumber3==37){
    printf("Kartınız Amerikan Express\n");
}
    cardnumber3=cardnumber3/10;
if(cardsize==13||cardsize==16&cardnumber3==4){
    printf("Kartınız Visa\n");

}


// Geçerlilik Kontrolü
while(a<=cardsize){
    int b=cardnumber2%10;
    cardnumber2=cardnumber2/10;

    if(a%2!=0){
        b=b*2;

        if(b>=10)
        {
        top=b%10+1+top;
        }
        else
        {
        top=top+b;
        }
        }
        else if(a%2==0)
        {
        top=top+b;
        }
    a++;
}

    top=top%10;
    if(top==0){
        printf("Kartınız Geçerlidir\n");
    }
    else{
        printf("Kartınız Geçersizdir\n");
    }


}