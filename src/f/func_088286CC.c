#include "common.h"

extern u32 D_089DA770[];

typedef struct {
    u32 unk_00;
    u32 unk_04[624];
} Unk;

u32 func_088286CC(Unk *arg0)
{
    u32 i;
    u32 temp;
    u32 y;

    if (arg0->unk_00 == 624) {
        for (i = 0; i < 227; i++) {
            y = (arg0->unk_04[i] & 0x80000000U) | (arg0->unk_04[i + 1] & 0x7FFFFFFFU);
            arg0->unk_04[i] = arg0->unk_04[i + 397] ^ (y >> 1) ^ D_089DA770[y & 1];
        }
        for (; i < 623; i++) {
            y = (arg0->unk_04[i] & 0x80000000U) | (arg0->unk_04[i + 1] & 0x7FFFFFFFU);
            arg0->unk_04[i] = arg0->unk_04[i - 227] ^ (y >> 1) ^ D_089DA770[y & 1];
        }
        y = (arg0->unk_04[623] & 0x80000000U) | (arg0->unk_04[0] & 0x7FFFFFFFU);
        arg0->unk_04[623] = arg0->unk_04[396] ^ (y >> 1) ^ D_089DA770[y & 1];
        arg0->unk_00 = 0;
    }
    i = arg0->unk_00;
    y = arg0->unk_04[i];
    arg0->unk_00 = i + 1;
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680U;
    y ^= (y << 15) & 0xEFC60000U;
    return y ^ (y >> 18);
}
