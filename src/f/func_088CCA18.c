#include "common.h"

typedef struct T088CD634 {
    struct T088CD634 *unk_00;
    struct T088CD634 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T088CD634;

void func_0880416C(void *);
extern u8 D_08A46014[];
extern u8 D_08A46024[];
void func_088CCD28(s32 *, T088CD634 *);
void func_088CCD20(s32 *, T088CD634 *);
s32 func_088CCAF0(s32 *, s32 *);
void func_088CCCF8(s32 *, s32 *, s32);
void func_088CCB44(s32 *, T088CD634 *, s32);
void func_088CD20C(void *);

T088CD634 *func_088CCA18(T088CD634 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 ret;
    s32 old;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A46024;
        func_088CCD28(&it, arg0);
        func_088CCD20(&end, arg0);
        while (func_088CCAF0(&it, &end)) {
            func_088CCCF8(&old, &it, 0);
            func_088CCB44(&ret, arg0, old);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A46014;
            func_088CD20C(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
