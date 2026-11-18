#include "common.h"

typedef struct {
    s32 *unk_00;
    u8 pad_04[0x88];
} E_088EBB74;

typedef struct {
    u8 pad_00[0x44C];
    E_088EBB74 unk_44C[1];
} T_088EBB74;

typedef struct {
    u8 pad_00[0x36B18];
    T_088EBB74 *unk_36B18;
} Obj2_088EBB74;

typedef struct {
    u8 pad_00[0x14];
    Obj2_088EBB74 *unk_14;
} Obj_088EBB74;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08852C5C(void *, s32, s32);
void func_0885369C(void *, s32);
void func_08852D00(void *);

void func_088EBB74(Obj_088EBB74 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    v = (*(s32 **)((u8 *)arg0->unk_14->unk_36B18 + *a * 0x8C + 0x44C))[*b];
    if (v != -1) {
        func_0885369C(arg1, 0);
        func_08852D00(arg1);
        func_08852C5C(arg1, v, 0);
        func_08852F00(arg1, 0);
    } else {
        func_08852F00(arg1, 0);
    }
}
