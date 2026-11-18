#include "common.h"

typedef struct {
    void *unk_00;
} It_08962C50;

typedef struct {
    u8 pad_00[0x38];
    void *unk_38;
    void *unk_3C;
    u8 pad_40[0x18];
    s32 unk_58;
    u8 pad_5C[0x4];
    s32 unk_60;
} Obj_08962C50;

s32 func_0895FB60(It_08962C50 *, It_08962C50 *);
void func_0895FBB4(It_08962C50 *, void *, It_08962C50);
void func_0895FC1C(It_08962C50 *, It_08962C50 *, s32);
void func_0895FC44(It_08962C50 *, void *);
void func_0895FC4C(It_08962C50 *, void *);

void func_08962C50(Obj_08962C50 *arg0) {
    It_08962C50 it;
    It_08962C50 end;
    It_08962C50 ret;
    It_08962C50 tmp;

    func_0895FC4C(&it, &arg0->unk_38);
    func_0895FC44(&end, &arg0->unk_38);
    while (func_0895FB60(&it, &end) != 0) {
        func_0895FC1C(&tmp, &it, 0);
        func_0895FBB4(&ret, &arg0->unk_38, tmp);
    }
    arg0->unk_58 = 0;
    arg0->unk_3C = &arg0->unk_38;
    arg0->unk_38 = &arg0->unk_38;
    arg0->unk_60 = 0;
}
