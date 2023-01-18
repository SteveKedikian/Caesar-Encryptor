#include "caesar.h"

std::string caesar_encrypt(const std::string& line, const int key) {
    if (key <= 0) {
        return line;
    }

    std::string encrypt_line = "";
    int shift = key % LETTER_COUNT;
    
    for (int i = 0; i < line.length(); ++i) {
        if (line[i] + shift > CAPITAL_Z && (line[i] >= CAPITAL_A && line[i] <= CAPITAL_Z)) {
            int cicle_shift = CAPITAL_Z - line[i];
            encrypt_line += CAPITAL_A + (shift - cicle_shift - 1); // -1 as we did cicle from Z to A
            continue;
        }

        if (line[i] + shift > SMALL_z && (line[i] >= SMALL_a && line[i] <= SMALL_z)) {
            int cicle_shift = SMALL_z - line[i];
            encrypt_line += SMALL_a + (shift - cicle_shift - 1); // -1 as we did cicle from z to a
            continue;
        }
        encrypt_line += line[i] + shift;
    }

    return encrypt_line;
}

std::string caesar_decoder(const std::string& line, const int key) {
    if (key <= 0) {
        return line;
    }

    std::string encrypt_line = "";
    int shift = key % LETTER_COUNT;
    
    for (int i = 0; i < line.length(); ++i) {
        if (line[i] - shift < CAPITAL_A && (line[i] >= CAPITAL_A && line[i] <= CAPITAL_Z)) {
            int cicle_shift = line[i] - CAPITAL_A;
            encrypt_line += CAPITAL_Z - (shift - cicle_shift - 1); // -1 as we did cicle from A to Z
            continue;
        }

        if (line[i] - shift < SMALL_a && (line[i] >= SMALL_a && line[i] <= SMALL_z)) {
            int cicle_shift = line[i] - SMALL_a;
            encrypt_line += SMALL_z - (shift - cicle_shift - 1); // -1 as we did cicle from a to z
            continue;
        }
        encrypt_line += line[i] - shift;
    }

    return encrypt_line;
}
