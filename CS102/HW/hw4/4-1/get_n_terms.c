#define _USE_MATH_DEFINES
#include <math.h>

void get_n_terms(const long long int a[], int N, int pos[])
{
    int i = 0;
    long long int j = 0; 
    
    double res[N]; 
    
    for (i = 0; i < N; i++)
    {
        double sum = 0.0;
        int count = 0;

        for (j = 0; j < a[i]; j++)
        {
            double term_val = 4.0 / ((2.0 * j) + 1.0);
            
            if (j % 2 == 0)
            {
                sum += term_val;
            }
            else
            {
                sum -= term_val;
            }
        }
        
        double difference = M_PI - sum;

        while (difference < 1.0 && difference > 0) 
        {
            difference *= 10.0;
            count++;
        }

        pos[i] = count; 
    }
}