#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} R_08947E38;

struct E_08947E38 {
    u8 pad_00[2];
    u8 unk_02;
    u8 pad_03;

    bool empty() { return !(bool)unk_02; }
};

typedef struct {
    u8 pad_00[4];
    E_08947E38 unk_04[1];
} A_08947E38;

extern u8 *D_08AD1F14[];
extern char D_08A03F4C[];

s32 func_0887744C(u8 *, char *, s32);
s32 func_0885AB08(s32, s32);
s32 func_0885AB7C(s32, s32, s32);

s32 func_08947E38(A_08947E38 **arg0) {
    s32 h;
    u32 n;
    u32 i;
    s32 idx;

    h = func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_08A03F4C, 1);
    n = func_0885AB08(h, 0);
    for (i = 0; i < n; i++) {
        idx = ((R_08947E38 *)func_0885AB7C(h, 0, i))->unk_24;
        if ((*arg0)->unk_04[idx].empty()) {
            continue;
        }
        return idx;
    }
    return -1;
}

}
