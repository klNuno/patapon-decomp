#include "common.h"

typedef struct {
    u8 pad_00[0x7FF8];
    char *unk_7FF8;
} U;

typedef struct {
    u8 pad_00[0x15E4];
    U unk_15E4;
} S;

s32 func_0893F2EC(char *);

s32 func_08895B50(S *arg0, s32 arg1) {
    char **p = &arg0->unk_15E4.unk_7FF8;
    s32 temp = arg1;
    s32 i = 0;
    while (1) {
        if (temp == func_0893F2EC(*p + (u32)i * 0x28U)) {
            return i;
        }
        if (++i >= 0x10) {
            return -1;
        }
    }
}
