#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int main() {

    // Basic character type
    char letter = 'A';

    //Signed integer types
    signed char smallSignedChar = -100;
    short smallNumber = -32000;
    int normalNumber = -100001;
    long longNumber = -1000001L;
    long long veryLongNumber = -1000000001LL;

    // Unsigned integer types
    unsigned char smallUnsignedChar = 200;
    unsigned short positiveShort = 65000;
    unsigned int positiveInt = 4000000000U;
    unsigned long positiveLong = 4000000000UL;
    unsigned long long positiveVeryLong = 18000000000000000000ULL;

    // Floating point types
    float height = 1.75f;
    double pi = 3.141592653589793;
    long double precisePi = 3.141592653589793238L;

    // Boolean type
    bool isLearning = true;

    // String in C: array of characteres
    char name[] = "Tharominek";

    // Fixed-width integer types
    int8_t fixed8 = -128;
    int16_t fixed16 = -32768;
    int32_t fixed32 = -2147483647;
    int64_t fixed64 = -9223372036854775807LL;

    uint8_t unsignedFixed8 = 255;
    uint16_t unsignedFixed16 = 65535;
    uint32_t unsignedFixed32 = 4294967295U;
    uint64_t unsignedFixed64 = 18446744073709551615ULL;    

    // Print values
    printf("char: %c\n", letter);

    printf("signed char: %hhd\n", smallSignedChar);
    printf("short: %hd\n", smallNumber);
    printf("int: %d\n", normalNumber);
    printf("long: %ld\n", longNumber);
    printf("long long: %lld\n", veryLongNumber);

    printf("unsigned char: %hhu\n", smallUnsignedChar);
    printf("unsigned short: %hu\n", positiveShort);
    printf("unsigned int: %u\n", positiveInt);
    printf("unsigned long: %lu\n", positiveLong);
    printf("unsigned long long: %llu\n", positiveVeryLong);

    printf("float: %.2f\n", height);
    printf("double: %.15lf\n", pi);
    printf("long double: %.18Lf\n", precisePi);

    printf("bool: %d\n", isLearning);
    printf("string: %s\n", name);

    printf("int8_t: %hhd\n", fixed8);
    printf("int16_t: %hd\n", fixed16);
    printf("int32_t: %d\n", fixed32);
    printf("int64_t: %lld\n", fixed64);

    printf("uint8_t: %hhu\n", unsignedFixed8);
    printf("uint16_t: %hu\n", unsignedFixed16);
    printf("uint32_t: %u\n", unsignedFixed32);
    printf("uint64_t: %llu\n", unsignedFixed64);

    return 0;
}