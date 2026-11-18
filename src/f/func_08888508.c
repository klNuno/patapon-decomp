#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_08888508;

typedef struct {
    u8 pad_00[0x44];
    V_08888508 unk_44;
} S_08888508;

typedef struct {
    u8 pad_00[0x1C];
    void *unk_1C;
} T_08888508;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
    u8 unk_28[0xC0];
    void *unk_E8;
    u8 pad_EC[4];
    u8 unk_F0[4];
    void *unk_F4;
    u8 unk_F8[0x61C - 0xF8];
    void *unk_61C;
    u8 unk_620[0x18];
    T_08888508 unk_638;
    u8 pad_658[0x670 - 0x658];
    u8 unk_670[0x72C - 0x670];
    u8 unk_72C[0x924 - 0x72C];
    u8 unk_924[0x9A8 - 0x924];
    S_08888508 unk_9A8;
} O_08888508;

void func_0880416C(void *);
void func_08880160(T_08888508 *);
void func_08888360(void *, s32);
void func_088B4960(void *, s32);
void func_088B5010(void *, s32);
void func_088B5B24(void *, s32);
void func_088D1ADC(void *, s32);
void func_088F58F0(void *, s32);
void func_0893555C(void *, s32);
void func_0893C358(void *, s32);
extern u8 D_08A4535C[];
extern u8 D_08A45400[];
extern u8 D_08A4541C[];
extern u8 D_08A45444[];
extern u8 D_08A45450[];

O_08888508 *func_08888508(O_08888508 *arg0, s16 arg1) {
    s32 *p;
    V_08888508 *v;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A45400;
        arg0->unk_E8 = D_08A4541C;
        arg0->unk_F4 = D_08A45444;
        arg0->unk_61C = D_08A45450;
        if (&arg0->unk_9A8 != NULL) {
            p = arg0->unk_9A8.unk_44.unk_00;
            v = &arg0->unk_9A8.unk_44;
            if ((u32)p != (u32)(p + arg0->unk_9A8.unk_44.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_9A8.unk_44.unk_04);
            }
            arg0->unk_9A8.unk_44.unk_04 = 0;
        }
        if (arg0->unk_924 != NULL) {
            func_08888360(arg0->unk_924, -1);
        }
        func_088F58F0(arg0->unk_72C, -1);
        func_088B5B24(arg0->unk_670, -1);
        if (&arg0->unk_638 != NULL) {
            arg0->unk_638.unk_1C = D_08A4535C;
            func_08880160(&arg0->unk_638);
        }
        func_0893C358(arg0->unk_620, 0);
        func_0893555C(arg0->unk_F8, 0);
        func_088B4960(arg0->unk_F0, 0);
        func_088B5010(arg0->unk_28, 0);
        func_088D1ADC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
