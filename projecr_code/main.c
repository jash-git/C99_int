#define __STDC_LIMIT_MACROS
#define __STDC_CONSTANT_MACROS
#define __STDC_FORMAT_MACROS

#include <stdio.h>

#include <wchar.h>

#include "stdint.h"
#include "inttypes.h"

void Pause()
{
    printf("Press Enter key to continue ...");
    fgetc(stdin);
}

int main(int argc, char* argv[])
{
    uint8_t i08 = (uint8_t)INT8_C(-1);
    uint16_t i16 = (uint16_t)INT16_C(-1);
    uint32_t i32 = (uint32_t)INT32_C(-1);
    uint64_t i64 = (uint64_t)INT64_C(-1);

    printf("c99 int:\t%" PRIu8 ", %" PRIu16 ", %" PRIu32 ", %" PRIu64 "\n", i08, i16, i32, i64);

    Pause();
    return 0;
}
