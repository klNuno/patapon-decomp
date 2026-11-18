#include "common.h"
typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} A;
typedef struct {
    u8 pad_00[0xB40];
    s32 unk_B40;
} T;
extern u8 func_088A7980(T *, s32, s32, A *, s32);
extern void func_088A86A0(A *, s32, s32);
u8 func_088A78D4(T *arg0, s32 arg1, s32 arg2, A *arg3, s32 arg4) {
    s32 cur;
    u8 ret;
    cur = arg0->unk_B40;
    ret = 1;
    if (arg3 != NULL) {
        if (arg3->unk_04 != -1 && cur != arg3->unk_04) {
            cur = arg3->unk_04;
            func_088A86A0(arg3, arg3->unk_04, 0);
        }
        ret = func_088A7980(arg0, arg1, arg2, arg3, arg4);
    }
    arg0->unk_B40 = cur;
    return ret;
}
