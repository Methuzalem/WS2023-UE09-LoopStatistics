#include <stdio.h>
#include <stdlib.h>

int main()
{
    double eingabe;
    double eingabeTotal = 0;
    double eingabeMin = 0;
    double eingabeMax;
    int count = 0;

    while(1){

        printf(": ");
        scanf(" %lf", &eingabe);

            if(eingabe <= 0){
                    break;
            }

            eingabeTotal += eingabe;

            if(eingabe > eingabeMax){
                    eingabeMax = eingabe;
            }
            if(eingabeMin == 0){
                eingabeMin = eingabe;
            }else if(eingabe < eingabeMin){
                eingabeMin = eingabe;
            }
        ++count;
    }



if(eingabeTotal > 0){
    printf("cnt: %d\n", count);
    printf("min: %.2lf\n", eingabeMin);
    printf("max: %.2lf\n", eingabeMax);
    printf("avg: %.2lf\n", eingabeTotal/count);
}else{
    printf("no number entered\n");
}


    return 0;
}
