#include "common.h"

typedef struct {
    u8 pad_00[0x1060];
    s32 unk_1060;
    u8 pad_1064[0xC];
    u8 unk_1070[0x6790];
    u8 unk_7800[1];
} T;
typedef struct Obj_089BA824 Obj_089BA824;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_08998080(s32, s32);
s32 func_08999AB0(s32);
s32 func_0899A8E0(s32);
void func_08999A68(s32);
s32 func_0899A900(s32);
void func_08998E78(s32);
void func_08998DC8(s32);
void func_089B98CC(void *, s32);
void func_089B9A1C(void *);
void func_089B73EC(void *, s32);
void func_089BA8C8(Obj_089BA824 *, s32);

void func_089955DC(T *arg0, s32 arg1) {
    if ((u8)func_08999AB0(func_08998080(arg0->unk_1060, arg1)) != 0) {
        if (func_0899A8E0(func_08998080(arg0->unk_1060, arg1)) != 0) {
            func_08878864(func_089B53D8(func_088586E8()), 0x210003, 2, 1.0f, 0.0f, 0.0f);
        }
        func_08999A68(func_08998080(arg0->unk_1060, arg1));
        func_089BA8C8((Obj_089BA824 *)(arg0->unk_7800), 0);
        if (arg1 != 3) {
            if (func_0899A900(func_08998080(arg0->unk_1060, arg1)) != 0) {
                func_08998E78(arg0->unk_1060);
                func_089B98CC(arg0->unk_7800, arg1);
            } else {
                func_08998DC8(arg0->unk_1060);
                func_089B9A1C(arg0->unk_7800);
            }
            func_089B73EC(arg0->unk_1070, 0);
        } else {
            func_089B9A1C(arg0->unk_7800);
            func_089B73EC(arg0->unk_1070, 1);
        }
    }
}
