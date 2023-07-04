#include <cs50.h>
#include <stdio.h>

int main(void){
    int height,row,space,column,block;
    do{
        height=get_int("Yüksekliği giriniz\n");
    }
    while(height<1 || height>8);

    for( row = 0; row<height; row++){
        for( space =0; space<height - row - 1;space++){
        printf(" ");
    }
        for(column=0;column<=row;column++){
        printf("#");
        }
        printf(" ");
        for(block =0;block<column;block++){
        printf("#");
        }
        printf("\n");
    }
    }
