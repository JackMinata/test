#include <stdio.h>
#include <unistd.h>
#include <math.h>

#define MAX_WIDTH 40  // Maximum width of the wave
#define ITERATIONS 200  // Number of iterations of wave
#define SLEEP_DURATION 30000  // Duration to sleep in microseconds

int main() {
    int center = MAX_WIDTH / 2;
    for (int i = 0; i < ITERATIONS; i++) {
        int current_width = (int)(center + center * sin(i * 0.1));  // Create a sine wave pattern
        int padding = (MAX_WIDTH - current_width) / 2;

        for (int j = 0; j < padding; j++) printf(" ");  // Print spaces for padding
        for (int j = 0; j < current_width; j++) printf("*");  // Print the wave
        printf("\n");

        usleep(SLEEP_DURATION);  // Sleep for a while to visualize the wave
    }

    printf("\nHELLO WORLD\n");

    return 0;
}
