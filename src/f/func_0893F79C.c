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

extern u8 D_08A473D8[];
extern u8 D_08A473E4[];

void func_0893FCF4(s32 *, T08892FA8 *);
void func_0893FCEC(s32 *, T08892FA8 *);
s32 func_0893FC08(s32 *, s32 *);
void func_0893FCC4(s32 *, s32 *, s32);
void func_0893FC5C(s32 *, T08892FA8 *, s32);
void func_0893F874(T08892FA8 *);
void func_0880416C(void *);

T08892FA8 *func_0893F79C(T08892FA8 *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 sp14;
    s32 sp10;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A473D8;
        func_0893FCF4(&it, arg0);
        func_0893FCEC(&end, arg0);
        while (func_0893FC08(&it, &end)) {
            func_0893FCC4(&sp10, &it, 0);
            func_0893FC5C(&sp14, arg0, sp10);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A473E4;
            func_0893F874(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
