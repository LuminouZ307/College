#pragma once

double convert_word(double kilobit) {
    return kilobit / 0.015625;
}

double convert_block(double kilobit) {
    double word = convert_word(kilobit) / 256;
    return word;
}

double convert_character(double kilobit) {
    double block = convert_block(kilobit) / 0.001953125;
    return block;
}