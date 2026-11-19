#include "common.h"

typedef struct {
    u8 pad_00[0x970];
    u8 unk_970;
} T0;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} T1;

typedef struct {
    u8 pad_00[0x3A0];
    T0 *unk_3A0;
    u8 pad_3A4[0xC];
    T1 *unk_3B0;
} T2;

typedef struct {
    u8 pad_00[0x92E4];
    s32 unk_92E4;
} T3;

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
} T4;

typedef struct {
    u8 pad_00[0x170];
    char unk_170;
    u8 pad_171[0x283];
    T3 *unk_3F4;
    T2 *unk_3F8;
} T;

extern s32 func_088A85E8(s32);
extern void func_08928C84(char *, s32, s32, s32);

void func_0889D9C8(T *arg0) {
    T2 *temp = arg0->unk_3F8;
    if (temp != NULL) {
        T0 *temp2 = temp->unk_3A0;
        if (temp2 != NULL) {
            T4 *temp3 = (T4 *)func_088A85E8((s32)&temp2->unk_970);
            if (temp3 != NULL) {
                T1 *temp4 = arg0->unk_3F8->unk_3B0;
                s32 temp5 = temp3->unk_4C;
                if (temp4 != NULL) {
                    s32 temp6 = temp4->unk_20;
                    func_08928C84(&arg0->unk_170, temp5, temp6, arg0->unk_3F4->unk_92E4);
                }
            }
        }
    }
}
