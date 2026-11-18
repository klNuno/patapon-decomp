#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} Elem;

typedef struct {
    u8 pad_00[0x90];
    s32 unk_90;
} Res;

typedef struct {
    u8 pad_00[0x27C];
    s32 unk_27C;
    u8 pad_280[0x20];
    void *unk_2A0;
    u8 pad_2A4[0x54];
    void *unk_2F8;
} Obj;

void *func_088A88C0(void);
void *func_0884E64C(void *);
void func_0884EBE8(void *, s32, s32);
Elem *func_0892ABF0(void *);
void *func_0892ABE8(void *);
Res *func_0892AE88(void *);
void func_08944AA0(void *, void *, s32, s32, s32, s32);

void func_0892C670(Obj *arg0, s32 arg1) {
    void *a;
    Elem *b;

    if (arg1 != -1) {
        a = func_0884E64C(func_088A88C0());
        func_0884EBE8(a, 0xF, arg0->unk_27C);
        b = func_0892ABF0(arg0->unk_2A0);
        func_08944AA0(func_0892ABE8(arg0->unk_2A0), func_0892ABF0(arg0->unk_2A0), b[arg1].unk_04, 1, 1, func_0892AE88(arg0->unk_2F8)->unk_90);
        func_0884EBE8(a, 0xF, -1);
    }
}
