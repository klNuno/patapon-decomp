#include "common.h"

extern "C" {

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_08928D24;

typedef struct {
    u8 pad_00[0x204];
    V_08928D24 unk_204;
} M_08928D24;

typedef struct {
    u8 pad_00[0x8];
    M_08928D24 unk_08;
    M_08928D24 unk_214;
    M_08928D24 unk_420;
    void *unk_62C;
} S_08928D24;

extern u8 D_08A46F08[];
void func_08928E30(S_08928D24 *);
void func_0880416C(void *);

S_08928D24 *func_08928D24(S_08928D24 *arg0, s16 arg1) {
    s32 *p;
    V_08928D24 *v;

    if (arg0 != NULL) {
        arg0->unk_62C = D_08A46F08;
        func_08928E30(arg0);
        if (&arg0->unk_420 != NULL) {
            p = arg0->unk_420.unk_204.unk_00;
            v = &arg0->unk_420.unk_204;
            if ((u32)p != (u32)(p + arg0->unk_420.unk_204.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_420.unk_204.unk_04);
            }
            arg0->unk_420.unk_204.unk_04 = 0;
        }
        if (&arg0->unk_214 != NULL) {
            p = arg0->unk_214.unk_204.unk_00;
            v = &arg0->unk_214.unk_204;
            if ((u32)p != (u32)(p + arg0->unk_214.unk_204.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_214.unk_204.unk_04);
            }
            arg0->unk_214.unk_204.unk_04 = 0;
        }
        if (&arg0->unk_08 != NULL) {
            p = arg0->unk_08.unk_204.unk_00;
            v = &arg0->unk_08.unk_204;
            if ((u32)p != (u32)(p + arg0->unk_08.unk_204.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_08.unk_204.unk_04);
            }
            arg0->unk_08.unk_204.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
