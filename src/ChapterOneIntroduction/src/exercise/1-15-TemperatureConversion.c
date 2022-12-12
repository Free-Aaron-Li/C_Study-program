/**
 * @file 1-15-TemperatureConversion.c
 * @author AaronLi
 * @date 2022-11-30-16
 * @description 温度转换
 * @link
 */
#include <stdio.h>

float power(float fahr);

int main() {
    float fahr;
    float lower, upper, step;

    lower = 0;        // lower limit of temperature table
    upper = 300;      // upper limit of temperature table
    step = 20;         // step size of temperature table

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, power(fahr));
        fahr += step;
    }

}

/**
 * @date 11/30/22 3:58 PM
 * @description print Fahrenheit-Celsius table and floating-point version
 */

float power(float fahr) {
    return (fahr - 32.0) * (5.0 / 9.0);
}
