#include "common.h"

typedef struct T089648F8 {
    struct T089648F8 *unk_00;
    struct T089648F8 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T089648F8;

extern u8 D_08A47BC8[];
extern u8 D_08A47BB8[];

void func_08964284(s32 *, T089648F8 *);
void func_0896427C(s32 *, T089648F8 *);
s32 func_089641C0(s32 *, s32 *);
void func_089640A8(s32 *, s32 *, s32);
void func_08964214(s32 *, T089648F8 *, s32);
void func_08963C1C(T089648F8 *);
void func_0880416C(void *);

T089648F8 *func_089640E8(T089648F8 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 sp14;
    s32 sp10;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A47BC8;
        func_08964284(&it, arg0);
        func_0896427C(&end, arg0);
        while (func_089641C0(&it, &end)) {
            func_089640A8(&sp10, &it, 0);
            func_08964214(&sp14, arg0, sp10);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A47BB8;
            func_08963C1C(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
