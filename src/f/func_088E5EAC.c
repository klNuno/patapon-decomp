#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x470];
    u8 unk_474[0x20];
    void *unk_494;
    s32 unk_498;
    s32 unk_49C;
    s32 unk_4A0;
    s32 unk_4A4;
    s32 unk_4A8;
    s32 unk_4AC;
    u8 unk_4B0;
    u8 unk_4B1;
    u8 unk_4B2;
} Obj_088E5EAC;

typedef struct {
    u8 pad_00[0x10];
} H_0894529C;

void *func_08827A50(s32, s32);
void func_08852700(Obj_088E5EAC *, s32, s32, s32, s32, s32);
s32 func_08858B9C(void);
void *func_0888D040(H_0894529C *, s16);
s32 func_088A88C0(void);
void func_088E5F98(H_0894529C *, void *);
void func_088E5FDC(H_0894529C *, void *, s32);
void func_088E64D8(Obj_088E5EAC *, s32);
void *func_089426A0(void *, Obj_088E5EAC *);
extern u8 D_08A4638C[];
extern u8 D_08A46568[];

Obj_088E5EAC *func_088E5EAC(Obj_088E5EAC *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    H_0894529C h;
    s32 temp;
    void *p;

    func_08852700(arg0, arg1, arg2, arg3, arg4, arg5);
    arg0->unk_00 = D_08A4638C;
    arg0->unk_494 = arg0->unk_474;
    arg0->unk_00 = D_08A46568;
    arg0->unk_498 = 0;
    arg0->unk_49C = 0;
    arg0->unk_4A0 = 0;
    arg0->unk_4A4 = 0;
    arg0->unk_4A8 = 0;
    arg0->unk_4AC = 0;
    arg0->unk_4B0 = 0;
    arg0->unk_4B1 = 0;
    arg0->unk_4B2 = 1;
    func_088E64D8(arg0, func_088A88C0());
    if (arg6 != 0) {
        temp = func_08858B9C();
        p = func_08827A50(0x14, func_08858B9C());
        if (p != NULL) {
            p = func_089426A0(p, arg0);
        }
        func_088E5FDC(&h, p, temp);
        func_088E5F98(&h, &arg0->unk_4A0);
        func_0888D040(&h, -1);
    }
    return arg0;
}
