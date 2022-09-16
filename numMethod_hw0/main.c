//
//  main.c
//  numMethod_hw0
//
//  Created by Michael Leong on 16/09/2022.
//

#include <stdio.h>


double hornerMethod(int deg, double x, double coeff[], int index);

int main(int argc, const char * argv[]) {
    //input data
    int deg;
    double x;
    
    printf("enter poly deg\n");
    scanf("%d", &deg);
    printf("enter x\n");
    scanf("%lf", &x);
    
    double coeff[deg+1];
    
    //input coeff arr
    for(int i = 0; i < deg+1; i++) {
        printf("enter coeff for x deg %d\n", i);
        scanf("%lf", &coeff[i]);
    }
    
    printf("%lf\n", hornerMethod(deg, x, coeff, 0));
    
    return 0;
}

double hornerMethod(int deg, double x, double coeff[], int index) {
    
    if(deg > 0) {
        return (hornerMethod(deg-1, x, coeff, index+1)*x)+coeff[index];
    }
    
    return coeff[index];
}
