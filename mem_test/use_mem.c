#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
        int n = 0;
        int memory = 500;
        char *p;

        if ( argc== 2 ) {
                memory=atoi(argv[1]);
                printf("PARAM %s MiB\n", argv[1] );
        }

        while (1) {

                if(n<memory){
                if ((p = malloc(1<<20)) == NULL) {
                        printf("malloc failure after %d MiB\n", n);
                        return 0;
                }
                memset (p, 0, (1<<20));
                //n++;
//              if(n>415){
                //usleep(3000000);}
		n++;
                printf ("Use %d MiB\n", n);

                }
        }
}
