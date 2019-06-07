//--------------------------------------------------------
// STRUCT lin_reg
//--------------------------------------------------------
typedef struct lin_reg
{
    double a;
    double b;
} lin_reg;

//--------------------------------------------------------
// FUNCTION PROTOTYPES
//--------------------------------------------------------
void linear_regression(double* independent, double* dependent, int size, lin_reg* lr);
