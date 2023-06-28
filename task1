#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(void) {
    char buffer[BUFFER_SIZE];
    char *args[2]; // Only one word command, no arguments

    while (1) {
        printf("$ "); // Display prompt
        fflush(stdout);

        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL) {
            printf("\n"); // Handle end of file condition (Ctrl+D)
            break;
        }

        buffer[strcspn(buffer, "\n")] = '\0'; // Remove newline character

        args[0] = buffer;
        args[1] = NULL; // Null-terminate the args array

        pid_t pid = fork();

        if (pid < 0) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child process
            execve(args[0], args, environ);

            // If execve returns, it means an error occurred
            perror("execve");
            exit(EXIT_FAILURE);
        } else {
            // Parent process
            int status;
            waitpid(pid, &status, 0);
            if (status != 0) {
                printf("Command execution failed.\n");
            }
        }
    }

    return 0;
}

