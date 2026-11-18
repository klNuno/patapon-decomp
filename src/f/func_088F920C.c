#include "common.h"

extern s32 func_08822AD0(char *, char *);
u32 func_088E5C74(void *);
void *func_088E5C98(void *, u32);

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[0x24];
    char unk_48[1];
} T088F920C_E;

typedef struct {
    u8 pad_00[0x220];
    u8 unk_220[1];
} T088F920C;

s32 func_088F920C(T088F920C *arg0, char *arg1) {
    u32 i;
    T088F920C_E *e;

    for (i = 0; i < func_088E5C74(arg0->unk_220); i++) {
        e = func_088E5C98(arg0->unk_220, i);
        if (func_08822AD0(e->unk_48, arg1) == 0) {
            return e->unk_20;
        }
    }
    return 4;
}
