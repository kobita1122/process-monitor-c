#include <stdio.h>

int main() {
    int processes = 5;
    int running = 3;
    int stopped = 2;

    printf("Process Monitor\n");
    printf("----------------\n");
    printf("Total Processes : %d\n", processes);
    printf("Running         : %d\n", running);
    printf("Stopped         : %d\n", stopped);

    if (stopped > 0) {
        printf("Warning: Some processes are stopped!\n");
    } else {
        printf("All processes running normally.\n");
    }

    return 0;
}
