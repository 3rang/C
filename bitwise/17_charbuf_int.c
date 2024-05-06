#include <stdio.h>

unsigned int charBufferToInt(char *buffer) {
    unsigned int result = 0;
    for (int i = 0; i < 4; i++) {
        result = (result << 8) | (unsigned char)buffer[i];
    }
    return result;
}

int main() {
    char buf[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x01};

    unsigned int firstInt = charBufferToInt(buf);

    unsigned int secondInt = charBufferToInt(buf + 3);

    printf("First integer: %u\n", firstInt);
    printf("Second integer: %u\n", secondInt);

    return 0;
}

