#include "common.h"

typedef struct {
    u8 pad_00[0x34];
    s32 unk_34;
} S;

void func_08861850(S *);
void func_08861860(S *);
s32 func_08862C14(S *, s32);
s32 func_08863980(S *);
s32 func_08863A98(S *arg0);
s32 func_08863AA0(S *arg0);

s32 func_08861770(S *arg0) {
    s32 ret;
    s32 id;

    id = func_08863AA0(arg0);
    ret = 40000;
    if (id >= 0) {
        if (arg0->unk_34 == 0) {
            if (func_08863980(arg0) >= 0) {
                arg0->unk_34 = 1;
            }
        }
        if (arg0->unk_34 != 0) {
            func_08861850(arg0);
            ret = func_08862C14(arg0, id);
            func_08861860(arg0);
            if (ret == 0) {
                ret = 10000;
            } else if (ret == 1) {
                ret = 125000;
            } else {
                ret = 1000000;
            }
        }
    } else if (arg0->unk_34 != 0) {
        if (func_08863A98(arg0) == 0) {
            arg0->unk_34 = 0;
        }
    }
    return ret;
}
