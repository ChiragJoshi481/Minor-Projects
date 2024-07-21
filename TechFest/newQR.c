#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_QR_SIZE 41

// Function to generate QR code
void generate_qr_code(char *text, int size, char qr_code[MAX_QR_SIZE][MAX_QR_SIZE]) {
    int i, j;

    // Initialize QR code to all spaces
    for (i = 0; i < MAX_QR_SIZE; i++) {
        for (j = 0; j < MAX_QR_SIZE; j++) {
            qr_code[i][j] = ' ';
        }
    }

    // Add border around QR code
    for (i = 0; i < size + 2; i++) {
        qr_code[0][i] = qr_code[size + 1][i] = '#';
        qr_code[i][0] = qr_code[i][size + 1] = '#';
    }

    // Add data to QR code
    int pos = 0;
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size) {
                // Add border around data area
                qr_code[i][j] = '#';
            } else {
                // Add data to QR code
                qr_code[i][j] = text[pos++];
            }
        }
    }
}

int main() {
    // Prompt user to enter a name for the QR code
    char name[MAX_NAME_LENGTH];
    printf("Enter name for QR code (up to %d characters): ", MAX_NAME_LENGTH);
    fgets(name, MAX_NAME_LENGTH, stdin);

    // Remove newline character from input
    name[strcspn(name, "\n")] = 0;

    // Check if name is empty
    if (strlen(name) == 0) {
        printf("Error: Name cannot be empty\n");
        return 1;
    }

    // Generate QR code
    char text[MAX_QR_SIZE * MAX_QR_SIZE];
    snprintf(text, MAX_QR_SIZE * MAX_QR_SIZE, "https://example.com/%s", name);
    char qr_code[MAX_QR_SIZE][MAX_QR_SIZE];
    generate_qr_code(text, strlen(text), qr_code);

    // Print QR code to console
    int i, j;
    for (i = 0; i < MAX_QR_SIZE; i++) {
        for (j = 0; j < MAX_QR_SIZE; j++) {
            printf("%c%c", qr_code[i][j], qr_code[i][j]);
        }
        printf("\n");
    }

    return 0;
}
