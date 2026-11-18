#include "common.h"

extern s32 func_08822AD0(char *, char *);

typedef struct {
    u8 pad_00[0x14];
    char unk_14[0x24];
} T08991310_E;

typedef struct {
    u8 pad_00[0x3814];
    T08991310_E *unk_3814;
    u32 unk_3818;
} T08991310;

s32 func_08991310(T08991310 *arg0, char *arg1) {
    T08991310_E **p;
    u32 i;
    s32 off;

    i = 0;
    if (arg0->unk_3818 != 0) {
        off = 0;
        p = &arg0->unk_3814;
        do {
            if (func_08822AD0(((T08991310_E *)((u8 *)*p + off))->unk_14, arg1) == 0) {
                return i;
            }
            i++;
            off += 0x38;
        } while (i < arg0->unk_3818);
    }
    return -1;
}
