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

extern u8 D_08A46014[];
extern u8 D_08A46024[];
void func_088CCD28(s32 *, T088CD634 *);
void func_088CCD20(s32 *, T088CD634 *);
s32 func_088CCAF0(s32 *, s32 *);
void func_088CCCF8(s32 *, s32 *, s32);
void func_088CCB44(s32 *, T088CD634 *, s32);

T088CD634 *func_088CD634(T088CD634 *arg0) {
    s32 it;
    s32 end;
    s32 ret;
    s32 old;

    arg0->unk_24 = D_08A46024;
    arg0->unk_1C = D_08A46014;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_088CCD28(&it, arg0);
    func_088CCD20(&end, arg0);
    while (func_088CCAF0(&it, &end)) {
        func_088CCCF8(&old, &it, 0);
        func_088CCB44(&ret, arg0, old);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
