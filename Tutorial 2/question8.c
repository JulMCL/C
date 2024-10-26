#include <stdio.h>
#include <math.h>

//Function for the approximation of the function, given s and a cutoff N
double zeta(double s, int N){
  double sum = 0.0;
  
  for(int i = 1; i <= N; i++){
    double power = pow(i, s);
    double term = (1.0 / power);
    sum += term;
  }
  
  return sum;
}


int main(){
  double s; //exponent
  int cutoff[] = {10, 100, 1000, 10000, 100000}; //cutoff since infinity is impossible
  
  do{
    printf("Enter the value of the exponent s (greater than 1):");
  scanf("%lf", &s);
  
    if(s<=1){
      printf("\nS must be greater than 1\n");
    }
  }while(s<=1);
  
  printf("Various Approximations of the Riemann zeta function at s = %.2f\n", s);
    
    for (int i = 0; i < 5; i++) {
      int N = cutoff[i];
      double result = zeta(s, N);
      printf("Using N = %d: zeta(%.2f) ≈ %.10f\n", N, s, result);
    }
    
  return 0;
}
