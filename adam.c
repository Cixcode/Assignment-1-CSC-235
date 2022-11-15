#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*Using for loop iteration to get the solution solved. The ranges are defined as in the steps length */


int for_implementation(char all_steps[]) {
	int steps_len = strlen(all_steps);
	int steps = 0;
	for (int s = 0; s < steps_len; ++s) {
		if (all_steps[s] == 'D') {
			break;
		} else {
			steps++;
		}
	}
	return steps;
}

/* This is done to call the function while. It is another preferred method
 * The program uses a file named adam.in and it should be placed in the same directory or path as the program*/


int while_implementation(char all_steps[]) {
	int steps = 0;
	int s = 0;
	while(all_steps[s]) {
		if (all_steps[s] == 'D') break;
		else steps++;
		s++;
	}
	return steps;
}


int main(void) {
	int MAX_BUFFER = 1000;
	int MAX_LENGTH = 100;
	char path[MAX_BUFFER];
	getcwd(path, MAX_BUFFER);
	strcat(path, "\\adam.in");
	FILE *ftpr;
	char input[MAX_LENGTH];
	ftpr = fopen(path, "r");
	while(fgets(input, MAX_LENGTH, ftpr)) {
		int steps = while_implementation(input);
		printf("%d\n", steps);
	}
	fclose(ftpr);
	return 0;
}
