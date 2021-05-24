#include <stdio.h>
#include <algorithm> 
using namespace std;

int x[50];
void Partitions(int pos, int max, int number){
  int i;
  if (!number)
  {
    printf("%d", x[0]);
    for (i = 1; i < pos; i++) 
    printf(" %d",x[i]);
    printf("\n");
  } 
  else
    for (i = 1; i <= min(max,number); i++){
    x[pos] = i;
    Partitions(pos+1,i,number-i);
    }

}
int main(){
    int n;
    scanf("%d",&n); 
    Partitions(0,n,n);
}
