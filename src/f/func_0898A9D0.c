#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    void *unk_80;
    u8 pad_84[0xC];
    u8 unk_90[0x28];
    void *unk_B8;
    u8 pad_BC[0x4];
    u8 unk_C0[0x294];
    u8 unk_354[0x4];
} T;

extern void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_088CE530(void *, s32);
void func_0898A7E0(void *, s32);
void func_0898A96C(void *, s32);
extern u8 D_08A4838C[];
extern u8 D_08A483A8[];

T *func_0898A9D0(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_80 = D_08A4838C;
        arg0->unk_B8 = D_08A483A8;
        if (arg0->unk_C0 != NULL) {
            func_0898A7E0(arg0->unk_354, 0);
            func_0898A96C(arg0->unk_C0, 0);
        }
        func_088CE530(arg0->unk_90, 0);
        func_08865F78(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
