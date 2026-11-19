#include "common.h"

extern "C" {
void func_08866028(void *);

void func_0899D4D4(u8 *arg0) {
    u32 i;
    u32 j;
    u8 *temp;
    u8 *temp2;
    i = 0;
    temp = arg0;
    do {
        j = 0;
        temp2 = temp;
        do {
            func_08866028(temp2 + 0x10);
            ++j;
            temp2 += 0xA0;
        } while (j < 3U);
        ++i;
        temp += 0x220;
    } while (i < 3U);
    func_08866028(arg0 + 0x680);
}
}
