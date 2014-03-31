#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
        int n = 0;
        int memory = 500;
        char **p;
	

        if ( argc== 2 ) {
                memory=atoi(argv[1]);
                printf("PARAM %s MiB\n", argv[1] );
        }

	p = malloc(memory*sizeof(char*));

        while (1) {

                if(n<memory){
                	if ((*(p+n) = malloc(1<<20)) == NULL) {
                        	printf("malloc failure after %d MiB\n", n);
	                        return 0;
        	        }
                	memset (*(p+n), 0, (1<<20));
	                printf (">>Use %d MiB\n", ++n);

                }else{
			printf("FREE\n");
//			usleep(300000);
			sleep(10);
			int i=0;
			printf("FREE");
			for(i = 0; i < n ; i ++) {
				free(*(p+i));
			}
			printf("FREE END\n");
			sleep(10);
		return 0;
		}
        }
}
