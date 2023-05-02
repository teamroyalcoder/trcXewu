#include <stdio.h>
#include <math.h>

void TakeInput(int target[], int size);
double CalcMean(int target[], int size);
double Calc_Std_deviation(int target[], int size);

int main() {
    int n;
    scanf("%d", &n);
    int integers[n];
    TakeInput(integers, n);
    double std_deviation = Calc_Std_deviation(integers, n);
    printf("%0.2lf", std_deviation);
    return 0;
}

void TakeInput(int target[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &target[i]);
    }
}

double CalcMean(int target[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += target[i];
    }
    return (double)sum / size;
}

double Calc_Std_deviation(int target[], int size) {
    double mean = CalcMean(target, size);
    double sum = 0;
    for (int i = 0; i < size; i++) {
        double deviation = (double)target[i] - mean;
        sum += deviation * deviation;
    }
    return sqrt(sum / size);
}
