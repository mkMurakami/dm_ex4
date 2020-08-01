//2020.8.1 s1270188

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int coin, h=0, t=0;
  srand(time(NULL));
  
  printf("Tossing a coin...\n");

  for(int i=1;i<=3;i++){
    printf("Round %d:",i);
    coin=rand()%2;

    if(coin==0){
      h++;
      printf("Heads\n");
    }
    else{
      t++;
      printf("Tails\n");
    }
  }

  printf("Heads:%d, Tails:%d\n",h,t);

  //judge
  if(h>t) printf("\nYou won!!!\n");
  else printf("\nYou lost...\n");
  
  return 0;
}
