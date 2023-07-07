#include <main.h>

unsigned int binary_to_uint(const char *b) {
    // Return 0 if b is NULL
    if (b == NULL) {
        return 0;
    }
    
    unsigned int result = 0;
    int len = strlen(b);
    
    // Iterate over each character in the string
    for (int i = 0; i < len; i++) {
        // If a non-binary character is found, return 0
        if (b[i] != '0' && b[i] != '1') {
            return 0;
        }
        
        // Convert the binary digit to integer and update the result
        result = result * 2 + (b[i] - '0');
    }
    
    return result;
}

