#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

	int memory = 120000;

        if ( argc== 2 ) {
                memory=atoi(argv[1]);
        }
        int n = 0;
	int flag=1;
        while (1) {
		if(n<memory){
		if(flag==1){
                if (malloc(1<<20) == NULL) {
                        printf("malloc failure after %d MiB\n", n);
                        //return 0;
			flag=0;
                }
                printf ("got %d MiB\n", ++n);
		}
		}
        }
}
