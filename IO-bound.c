/* Cameron Parrish CS240 Krings
 * Due 02/03/2017
 * parr3147@vandals.uidaho.edu
 * Developed on OSX 10.12.3
*/

// systems includes
#include<time.h>
#include<stdio.h>

int main(){
  time_t begin = time(NULL);
  time_t end = begin + 300;
  time_t now = time(NULL);

  while(now < end){
    FILE * fp;
    fp = fopen("./filetest.txt" , "a+");
    fprintf(fp , "a\n");
    fclose(fp);
    now = time(NULL);
  }
  return 0;
}
