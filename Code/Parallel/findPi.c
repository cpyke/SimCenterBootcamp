#include <stdio.h>
#include <time.h>

static int long numSteps=100000;



int main(){
double dx=1.0/numSteps;
double pi=0;
double time =0;
double z=0;

clock_t start = clock();
for (int x=0; x<numSteps; x++){

pi=pi+(4/(1+(z*z)))*dx;
z=z+dx;
}

clock_t stop = clock();
time = (double)(stop-start)*1000.0/CLOCKS_PER_SEC;
printf("Pi= %f, duration: %f ms\n",pi,time);
return 0;
}
