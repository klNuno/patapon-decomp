#include "common.h"

typedef struct T089CB0E8 {
    struct T089CB0E8 *unk_00;
    struct T089CB0E8 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T089CB0E8;

extern u8 D_08A48DF4[];
extern u8 D_08A48DE4[];

void func_089CB2AC(s32 *, T089CB0E8 *);
void func_089CB2A4(s32 *, T089CB0E8 *);
s32 func_089CB1C0(s32 *, s32 *);
void func_089CB27C(s32 *, s32 *, s32);
void func_089CB214(s32 *, T089CB0E8 *, s32);
void func_089CA6FC(void *);
void func_0880416C(void *);

T089CB0E8 *func_089CB0E8(T089CB0E8 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 sp14;
    s32 sp10;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A48DF4;
        func_089CB2AC(&it, arg0);
        func_089CB2A4(&end, arg0);
        while (func_089CB1C0(&it, &end)) {
            func_089CB27C(&sp10, &it, 0);
            func_089CB214(&sp14, arg0, sp10);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A48DE4;
            func_089CA6FC(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
