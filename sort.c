#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

   char stateName[10][10];
   char *line = NULL;
   int counter = 0;
   size_t size = 0;
   char holder[10];


   for(int i = 0; i<10; i++){
      if (getline(&line, &size, stdin) != -1){
         sscanf(line,"%s %f",stateName[i]);
         counter++;
      }
      else {
         break;
      }
   }
   for (int i = 0; i<counter; i++){
       for(int j=i; j<counter; j++){
           if (strcmp(stateName[i],stateName[j]) > 0){
               strcpy(holder ,stateName[i]);
               strcpy(stateName[i],stateName[j]);
               strcpy(stateName[j],holder);

           }
       }

   }
   for (int i = 0; i<counter; i++){
       printf("%s\n",stateName[i]);
   }
   return (EXIT_SUCCESS);
}
