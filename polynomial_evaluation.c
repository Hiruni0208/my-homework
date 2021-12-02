#include <stdio.h>

//return x^q
double power(double x, int q) {

    if (q == 0) {
        return 1;
    }

    double m = x;
    for (int i = 1; i < q; i++) {
        //HERE
        //this line should do some operation to achieve multiplications
        //only ONE line to be ADD
        //please refer to page 6 of Operation slides to get some idea
        m*=x;
    }
    return m;
}

int main() {
    //prompt user to type in x and y
    printf("請輸入浮點數x的值以及多項式含有的項數正整數y︰");

    //variable declaration
    double x;
    int y;

    //get from standard input
    scanf("%lf%d", &x, &y);

    //initial result
    double result = 0.0;

    //array declaration, to keep the polynomial with size of 6
    double p[6];
    int q[6];

    //iterate each line
    for (int i = 0; i < y; i++) {
        //fetch input
        scanf("%lf%d", &p[i], &q[i]);

        //value cumulation
        //HERE
        //this line should do some operation to achieve summations
        //the left variable and right expression should be UNTOUCHED
        //only the OPERATION to be MODIFIED
        //please refer to page 6 of Operation slides to get some idea
        result += p[i] * power(x, q[i]);
    }

    printf("%lf\n", result);
}
