#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} R_08947D78;

typedef struct {
    s32 unk_00;
} T08947D78;

extern u8 *D_08AD1F14[];
extern char D_08A03F60[];

s32 func_0887744C(u8 *, char *, s32);
u32 func_0885AB08(s32, s32);
R_08947D78 *func_0885AB7C(s32, s32, u32);

s32 func_08947D78(T08947D78 *arg0) {
    s32 h;
    u32 n;
    u32 i;
    s32 idx;

    h = func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_08A03F60, 1);
    n = func_0885AB08(h, 0);
    for (i = 0; i < n; i++) {
        idx = func_0885AB7C(h, 0, i)->unk_24;
        if (!!*(u8 *)(arg0->unk_00 + idx * 4 + 6)) {
            return idx;
        }
    }
    return -1;
}

}
