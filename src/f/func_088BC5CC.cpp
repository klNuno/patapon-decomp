#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_088BC5CC;

typedef struct {
    E_088BC5CC *unk_00;
    s32 unk_04;
} V_088BC5CC;

typedef struct {
    u8 pad_00[0x3004];
    V_088BC5CC unk_3004;
} I_088BC5CC;

class B_088BC5CC {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_088BC5CC unk_04;
    u8 pad_3010[0x10];
} A_088BC5CC;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x14C - 0xC];
    u8 unk_14C[0x150 - 0x14C];
    u8 unk_150[0x3970 - 0x150];
    u8 unk_3970[0x3990 - 0x3970];
    u8 unk_3990[0x39B8 - 0x3990];
    u8 unk_39B8[0x3DD0 - 0x39B8];
    u8 unk_3DD0[0x4B70 - 0x3DD0];
    A_088BC5CC unk_4B70;
    u8 unk_7B90[0x7D40 - 0x7B90];
    u8 unk_7D40[0x80E0 - 0x7D40];
    u8 unk_80E0[0x8100 - 0x80E0];
    void *unk_8100;
} S_088BC5CC;

extern u8 D_08A45E88[];
extern u8 D_08A45EA4[];
extern u8 D_08A44C14[];
void func_0891DFC0(void *, s32);
void func_088CF250(void *, s32);
void func_088D224C(void *, s32);
void func_08889EAC(void *, s32);
void func_088D2BD0(void *, s32);
void func_088D3298(void *, s32);
void func_08990D68(void *, s32);
void func_088B9FD8(void *, s32);
void func_088BA320(void *, s32);
void func_0880416C(void *);

S_088BC5CC *func_088BC5CC(S_088BC5CC *arg0, s16 arg1) {
    E_088BC5CC *p;
    V_088BC5CC *v;

    if (arg0 != NULL) {
        arg0->unk_8100 = D_08A45E88;
        func_0891DFC0(arg0->unk_80E0, -1);
        func_088CF250(arg0->unk_7D40, -1);
        func_088D224C(arg0->unk_7B90, -1);
        if (&arg0->unk_4B70 != NULL) {
            arg0->unk_4B70.unk_00 = D_08A45EA4;
            ((B_088BC5CC *)&arg0->unk_4B70)->func_0C();
            if (&arg0->unk_4B70.unk_04 != NULL) {
                p = arg0->unk_4B70.unk_04.unk_3004.unk_00;
                v = &arg0->unk_4B70.unk_04.unk_3004;
                if ((u32)p != (u32)(p + arg0->unk_4B70.unk_04.unk_3004.unk_04)) {
                    do {
                        p++;
                    } while (p != v->unk_00 + arg0->unk_4B70.unk_04.unk_3004.unk_04);
                }
                arg0->unk_4B70.unk_04.unk_3004.unk_04 = 0;
            }
            if (&arg0->unk_4B70 != NULL) {
                arg0->unk_4B70.unk_00 = D_08A44C14;
            }
        }
        func_08889EAC(arg0->unk_3DD0, -1);
        func_088D2BD0(arg0->unk_39B8, -1);
        func_088D3298(arg0->unk_3990, -1);
        func_08990D68(arg0->unk_150, -1);
        func_088B9FD8(arg0->unk_14C, -1);
        func_088BA320(arg0->unk_0C, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
