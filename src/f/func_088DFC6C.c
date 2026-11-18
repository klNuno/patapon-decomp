#include "common.h"

typedef struct {
    u8 pad_00[0x8100];
    void *unk_8100;
    u8 pad_8104[0xC];
    u8 unk_8110[0x130A0];
    u8 unk_1B1B0[0x448];
    u8 unk_1B5F8[0x10858];
    u8 unk_2BE50[0x40B0];
    s32 unk_2FF00;
    u8 unk_2FF04[4];
} Obj_088DFC6C;

void func_088BC314(Obj_088DFC6C *, s32, s32, void *);
void func_088E0050(void *, s32);
void func_088E24BC(void *, s32, s32, Obj_088DFC6C *);
void func_088F676C(void *, s32, s32);
void func_0898EC68(void *, s32, s32);
void func_0893B890(void *);
extern u8 D_08A46458[];

Obj_088DFC6C *func_088DFC6C(Obj_088DFC6C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_088BC314(arg0, arg1, arg2, arg0->unk_2FF04);
    arg0->unk_8100 = D_08A46458;
    func_088E0050(arg0->unk_8110, arg1);
    func_088E24BC(arg0->unk_1B1B0, arg1, arg3, arg0);
    func_088F676C(arg0->unk_1B5F8, arg1, arg3);
    func_0898EC68(arg0->unk_2BE50, arg1, arg3);
    arg0->unk_2FF00 = arg4;
    func_0893B890(arg0->unk_2FF04);
    return arg0;
}
