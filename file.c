#include <stdio.h>

int main() {
    // Open the file in append mode
    FILE *file = fopen("file1.txt", "a");
    
    // Check if the file opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Append data to the file
    fprintf(file, "Appending this line to the file.\n");

    // Close the file and check if it closed successfully
    if (fclose(file) == 0) {
        printf("File closed successfully.\n");
    } else {
        printf("Error closing file.\n");
    }

    return 0;
}
