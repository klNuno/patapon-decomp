#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0x290];
    s32 unk_3A8;
} T08973F5C_O;

extern s32 func_0888FCFC(s32, s32);
T08973F5C_O *func_08890CEC(s32, s32);
s32 func_088F5BA0(s32);

struct T08973F5C {
    u8 pad_00[4];
    s32 unk_04;
    T08973F5C_O *func_08973F5C_0(s32 i) {
        T08973F5C_O *r;
        if (unk_04 != 0 && i < func_0888FCFC(unk_04, 0)) {
            r = func_08890CEC(unk_04, i);
            if (r != NULL) {
                return r;
            }
        }
        return NULL;
    }
};

void func_08973F5C(T08973F5C *arg0, s32 arg1, s32 *arg2) {
    T08973F5C_O *p;

    p = arg0->func_08973F5C_0(arg1);
    if (p != NULL) {
        if (func_088F5BA0(p->unk_114) == 0) {
            *arg2 = p->unk_3A8;
        } else {
            *arg2 = -1;
        }
    } else {
        *arg2 = -1;
    }
}

}
