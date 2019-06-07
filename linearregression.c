
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

#include"linearregression.h"

//--------------------------------------------------------
// FUNCTION PROTOTYPES
//--------------------------------------------------------
static double arithmetic_mean(double* data, int size);
static double mean_of_products(double* data1, double* data2, int size);
static double variance(double* data, int size);

// --------------------------------------------------------
// FUNCTION linear_regression
// --------------------------------------------------------
void linear_regression(double* independent, double* dependent, int size, lin_reg* lr)
{
    double independent_mean = arithmetic_mean(independent, size);
    double dependent_mean = arithmetic_mean(dependent, size);
    double products_mean = mean_of_products(independent, dependent, size);
    double independent_variance = variance(independent, size);

    lr->a = (products_mean - (independent_mean * dependent_mean) ) / independent_variance;

    lr->b = dependent_mean - (lr->a * independent_mean);
}

//--------------------------------------------------------
// FUNCTION arithmetic_mean
//--------------------------------------------------------
static double arithmetic_mean(double* data, int size)
{
    double total = 0;

    // note that incrementing total is done within the for loop
    for(int i = 0; i < size; total += data[i], i++);

    return total / size;
}

//--------------------------------------------------------
// FUNCTION mean_of_products
//--------------------------------------------------------
static double mean_of_products(double* data1, double* data2, int size)
{
    double total = 0;

    // note that incrementing total is done within the for loop
    for(int i = 0; i < size; total += (data1[i] * data2[i]), i++);

    return total / size;
}

//--------------------------------------------------------
// FUNCTION variance
//--------------------------------------------------------
static double variance(double* data, int size)
{
    double squares[size];

    for(int i = 0; i < size; i++)
    {
        squares[i] = pow(data[i], 2);
    }

    double mean_of_squares = arithmetic_mean(squares, size);
    double mean = arithmetic_mean(data, size);
    double square_of_mean = pow(mean, 2);
    double variance = mean_of_squares - square_of_mean;

    return variance;
}
