#include <stdio.h>
#include <stdbool.h>

#define MAX_PROCESSES 5
#define MAX_RESOURCES 3

int available[MAX_RESOURCES];
int maximum[MAX_PROCESSES][MAX_RESOURCES];
int allocation[MAX_PROCESSES][MAX_RESOURCES];
int need[MAX_PROCESSES][MAX_RESOURCES];

// Function to check if a request can be granted
bool isSafe(int process, int req[]) {
    // Check if the request is within the need and available limits
    for (int i = 0; i < MAX_RESOURCES; i++) {
        if (req[i] > need[process][i] || req[i] > available[i]) {
            return false;
        }
    }

    // Simulate the request
    for (int i = 0; i < MAX_RESOURCES; i++) {
        available[i] -= req[i];
        allocation[process][i] += req[i];
        need[process][i] -= req[i];
    }

    // Check if the system is in a safe state
    bool finish[MAX_PROCESSES] = {false};
    int work[MAX_RESOURCES];
    for (int i = 0; i < MAX_RESOURCES; i++) {
        work[i] = available[i];
    }

    int count = 0;
    while (count < MAX_PROCESSES) {
        bool found = false;

        // Iterate through each process to find one that can finish
        for (int i = 0; i < MAX_PROCESSES; i++) {
            // Check if the process is not finished
            if (!finish[i]) {
                int j;

                // Check if the resources needed by the process are less than or equal to the available resources
                for (j = 0; j < MAX_RESOURCES; j++) {
                    if (need[i][j] > work[j]) {
                        // If any resource is unavailable, break the loop and consider the next process
                        break;
                    }
                }

                // If j reaches MAX_RESOURCES, it means all needed resources are available
                if (j == MAX_RESOURCES) {
                    // Process can finish
                    // Update the work vector and mark the process as finished
                    for (int k = 0; k < MAX_RESOURCES; k++) {
                        work[k] += allocation[i][k];
                    }
                    finish[i] = true;
                    count++;
                    found = true;
                }
            }
        }

        // If no process can finish, the system is not in a safe state
        if (!found) {
            // No process found, not in a safe state
            // Roll back changes and deny the request
            for (int i = 0; i < MAX_RESOURCES; i++) {
                available[i] += req[i];
                allocation[process][i] -= req[i];
                need[process][i] += req[i];
            }
            return false;
        }
    }

    // All processes can finish, request granted
    return true;
}

// Function to handle a resource request
void request(int process, int req[]) {
    if (isSafe(process, req)) {
        printf("Request granted.\n");
    } else {
        printf("Request denied. Unsafe state.\n");
    }
}

// Function to handle a resource release
void release(int process, int release[]) {
    for (int i = 0; i < MAX_RESOURCES; i++) {
        available[i] += release[i];
        allocation[process][i] -= release[i];
        need[process][i] += release[i];
    }
}

// Function to initialize the system
void initializeSystem() {
    // Initialize available resources
    printf("Enter the number of instances for each resource:\n");
    for (int i = 0; i < MAX_RESOURCES; i++) {
        printf("Resource %c: ", 'A' + i);
        scanf("%d", &available[i]);
    }

    // Initialize maximum claims
    printf("Enter the maximum claims for each process and resource:\n");
    for (int i = 0; i < MAX_PROCESSES; i++) {
        printf("Process P%d: ", i);
        for (int j = 0; j < MAX_RESOURCES; j++) {
            scanf("%d", &maximum[i][j]);
            allocation[i][j] = 0;
            need[i][j] = maximum[i][j];
        }
    }
}

// Function to display the current state of the system
void displayState() {
    printf("\nCurrent state:\n");

    // Display available resources
    printf("Available resources: ");
    for (int i = 0; i < MAX_RESOURCES; i++) {
        printf("%d ", available[i]);
    }
    printf("\n");

    // Display maximum claims
    printf("Maximum claims:\n");
    for (int i = 0; i < MAX_PROCESSES; i++) {
        printf("P%d: ", i);
        for (int j = 0; j < MAX_RESOURCES; j++) {
            printf("%d ", maximum[i][j]);
        }
        printf("\n");
    }

    // Display allocated resources
    printf("Allocated resources:\n");
    for (int i = 0; i < MAX_PROCESSES; i++) {
        printf("P%d: ", i);
        for (int j = 0; j < MAX_RESOURCES; j++) {
            printf("%d ", allocation[i][j]);
        }
        printf("\n");
    }

    // Display needed resources
    printf("Needed resources:\n");
    for (int i = 0; i < MAX_PROCESSES; i++) {
        printf("P%d: ", i);
        for (int j = 0; j < MAX_RESOURCES; j++) {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int main() {
    initializeSystem();
    displayState();

    // Enter interactive session
    int choice, process, requestUnits[MAX_RESOURCES], releaseUnits[MAX_RESOURCES];
    while (1) {
        printf("Enter 1 to request resources, 2 to release resources, or 0 to exit: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0: // Exits
                return 0;
            case 1: // Requests a resource
                printf("Enter process number: ");
                scanf("%d", &process);
                printf("Enter resource request for process P%d: ", process);
                for (int i = 0; i < MAX_RESOURCES; i++) {
                    scanf("%d", &requestUnits[i]);
                }
                request(process, requestUnits);
                displayState();
                break;
            case 2: // releases a resource
                printf("Enter process number: ");
                scanf("%d", &process);
                printf("Enter resource release for process P%d: ", process);
                for (int i = 0; i < MAX_RESOURCES; i++) {
                    scanf("%d", &releaseUnits[i]);
                }
                release(process, releaseUnits);
                displayState();
                break;
            default: // Invalid choice entered
                printf("Invalid choice. Please enter 0, 1, or 2.\n");
        }
    }

    return 0;
}
