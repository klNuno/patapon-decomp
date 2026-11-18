#include "common.h"

typedef struct T08976E34 {
    struct T08976E34 *unk_00;
    struct T08976E34 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T08976E34;

extern u8 D_08A47FA4[];
extern u8 D_08A47F94[];

void func_0888DA68(s32 *, T08976E34 *);
void func_08976C28(s32 *, T08976E34 *);
s32 func_08976BD4(s32 *, s32 *);
void func_08976AC4(s32 *, s32 *, s32);
void func_0888D66C(s32 *, T08976E34 *, s32);
void func_0888D820(void *);
void func_0880416C(void *);

T08976E34 *func_08976AFC(T08976E34 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 sp14;
    s32 sp10;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A47FA4;
        func_0888DA68(&it, arg0);
        func_08976C28(&end, arg0);
        while (func_08976BD4(&it, &end)) {
            func_08976AC4(&sp10, &it, 0);
            func_0888D66C(&sp14, arg0, sp10);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A47F94;
            func_0888D820(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
