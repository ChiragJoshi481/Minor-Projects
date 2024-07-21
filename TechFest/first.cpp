#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
        if(argc==2) {
		printf("Checking License: %s\n", argv[1]);
		if(strcmp(argv[1], "Y0UR_FLAG_1$_THI$")==0) {
			printf("Access Granted!\n");
		} else {
			printf("WRONG!\n");
		}
	} else {
		printf("Usage: <key>\n You need to provide a key like this crackStation.exe <key>\n it should look like this A_KEY");
	}
    getchar();
	return 0;
}