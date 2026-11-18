#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
} E_089A09D8;

typedef struct {
    E_089A09D8 *unk_00;
    u32 unk_04;
} V_089A09D8;

struct O8_089A09D8 {
    u8 pad_00[0x10];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
};

struct O34_089A09D8 {
    virtual void v0();
    virtual void v1();
};

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
} R_089A09D8;

typedef struct {
    u8 unk_00;
    u8 pad_01[0x3];
    s32 unk_04;
    O8_089A09D8 *unk_08;
    u8 pad_0C[0x28];
    O34_089A09D8 unk_34;
    u8 pad_38[0xDC4 - 0x38];
    s32 unk_DC4;
    u8 unk_DC8[0xC];
    u8 unk_DD4[0xC];
    u8 pad_DE0[0xF10 - 0xDE0];
    V_089A09D8 unk_F10;
} S_089A09D8;

void func_088148F0(s32, s32);
void func_0881F5C0(void *, s32, s32);
void func_08993614(s32);
R_089A09D8 *func_0899F140(s32);

void func_089A09D8(S_089A09D8 *arg0) {
    u32 i;
    s32 j;
    V_089A09D8 *v;

    i = 0;
    if (arg0->unk_F10.unk_04 != 0) {
        j = 0;
        v = &arg0->unk_F10;
        do {
            func_08993614(((E_089A09D8 *)((u8 *)v->unk_00 + j))->unk_08);
            i++;
            j += sizeof(E_089A09D8);
        } while (i < arg0->unk_F10.unk_04);
    }
    func_088148F0(4, 0);
    arg0->unk_08->v11();
    arg0->unk_34.v1();
    func_0899F140(arg0->unk_04)->unk_08 = 0;
    func_0899F140(arg0->unk_04)->unk_04 = 0;
    arg0->unk_00 = 0;
    arg0->unk_DC4 = 0;
    func_0881F5C0(arg0->unk_DC8, 0, 0xC);
    func_0881F5C0(arg0->unk_DD4, 0, 0xC);
}

}
