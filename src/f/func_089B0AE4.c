#include "common.h"

typedef struct {
    u8 pad_00[8];
    char *unk_08;
    u8 pad_0C[4];
} T;

typedef struct {
    u8 pad_00[0x174];
    T *unk_174;
} S;

s32 func_088FD044(char *);

s32 func_089B0AE4(S *arg0, s32 arg1) {
    u32 temp = (u32)arg1 * 0x10;
    T *temp1 = arg0->unk_174;
    char **temp2 = (char **)((u8 *)temp1 + temp);
    return func_088FD044(temp2[2]);
}
