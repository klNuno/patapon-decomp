#include "common.h"

typedef struct T089CCE34 {
    struct T089CCE34 *unk_00;
    struct T089CCE34 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T089CCE34;

void func_0880416C(void *);
extern u8 D_08A48E5C[];
extern u8 D_08A48E6C[];
void func_089CCFF8(s32 *, T089CCE34 *);
void func_089CCFF0(s32 *, T089CCE34 *);
s32 func_089CCF0C(s32 *, s32 *);
void func_089CCFC8(s32 *, s32 *, s32);
void func_089CCF60(s32 *, T089CCE34 *, s32);
void func_089CC868(void *);

T089CCE34 *func_089CCE34(T089CCE34 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 ret;
    s32 old;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A48E6C;
        func_089CCFF8(&it, arg0);
        func_089CCFF0(&end, arg0);
        while (func_089CCF0C(&it, &end)) {
            func_089CCFC8(&old, &it, 0);
            func_089CCF60(&ret, arg0, old);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A48E5C;
            func_089CC868(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
