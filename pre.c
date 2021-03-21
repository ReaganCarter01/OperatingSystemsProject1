#include<stdio.h>

int main(){

        char stateNames[10][4];
        int population[10];
        int counter=0;

        while(scanf("%s %d",&stateNames[counter],&population[counter],stdin)==2){
              counter++;

              if(counter==10){
              break;
                }
              }

        for(int i=0;i<counter;i++){
              if(population[i]>10){
                  printf("%s\n",stateNames[i]);
                }
              }
    return 0;
}
