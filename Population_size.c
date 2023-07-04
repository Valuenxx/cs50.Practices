#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size = 100;
    int end_size = 200;
    int years = 100;
    int i = 1;

    while(i>-1){
        int new = start_size /3;
        int ded = start_size /4;
        start_size = start_size + new - ded;
        printf("%i%s",i,". Yılın Bitiş Boyutu=");
        printf("%i\n",start_size);
        if(start_size>end_size){
            printf("%i%s\n",i," Yıl sürdü");
            break;
        }
        i++;
    }
}
