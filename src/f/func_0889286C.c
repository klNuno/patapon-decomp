#include "common.h"

typedef struct T08892FA8 {
    struct T08892FA8 *unk_00;
    struct T08892FA8 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T08892FA8;

extern u8 D_08A45668[];
extern u8 D_08A45658[];

void func_08892A08(s32 *, T08892FA8 *);
void func_08892A00(s32 *, T08892FA8 *);
s32 func_08892944(s32 *, s32 *);
void func_0889282C(s32 *, s32 *, s32);
void func_08892998(s32 *, T08892FA8 *, s32);
void func_088923A0(T08892FA8 *);
void func_0880416C(void *);

T08892FA8 *func_0889286C(T08892FA8 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 sp14;
    s32 sp10;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A45668;
        func_08892A08(&it, arg0);
        func_08892A00(&end, arg0);
        while (func_08892944(&it, &end)) {
            func_0889282C(&sp10, &it, 0);
            func_08892998(&sp14, arg0, sp10);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A45658;
            func_088923A0(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
