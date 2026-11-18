#include "common.h"

typedef struct T08881F98 {
    struct T08881F98 *unk_00;
    struct T08881F98 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T08881F98;

extern u8 D_08A4537C[];
extern u8 D_08A4538C[];
void func_08881D4C(s32 *, T08881F98 *);
void func_08881D44(s32 *, T08881F98 *);
s32 func_08881C88(s32 *, s32 *);
void func_08881B70(s32 *, s32 *, s32);
void func_08881CDC(s32 *, T08881F98 *, s32);

T08881F98 *func_08881F98(T08881F98 *arg0) {
    s32 it;
    s32 end;
    s32 ret;
    s32 old;

    arg0->unk_24 = D_08A4538C;
    arg0->unk_1C = D_08A4537C;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_08881D4C(&it, arg0);
    func_08881D44(&end, arg0);
    while (func_08881C88(&it, &end)) {
        func_08881B70(&old, &it, 0);
        func_08881CDC(&ret, arg0, old);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
