#include "common.h"

extern "C" {

struct M_089C6B64 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_089C6B64;

typedef struct {
    u8 pad_00[0xC];
    V_089C6B64 unk_0C;
} I_089C6B64;

struct Obj_089C6B64 {
    u8 pad_00[0x15C];
    void *unk_15C;
    u8 pad_160[0x168 - 0x160];
    u8 unk_168[0x24C - 0x168];
    M_089C6B64 unk_24C;
    u8 pad_250[0xCA8 - 0x250];
    I_089C6B64 unk_CA8;
    u8 unk_CBC[4];
};

void func_0880416C(void *);
void func_0886B11C(void *, s32);
void func_08985484(void *, s32);
void func_089CD120(void *, s32);
void func_089D3B78(void *, s32);
extern u8 D_08A48024[];
extern u8 D_08A48D5C[];

Obj_089C6B64 *func_089C6B64(Obj_089C6B64 *arg0, s16 arg1) {
    s32 *p;
    V_089C6B64 *v;

    if (arg0 != NULL) {
        arg0->unk_15C = D_08A48D5C;
        func_089D3B78(arg0->unk_CBC, -1);
        if (&arg0->unk_CA8 != NULL) {
            p = arg0->unk_CA8.unk_0C.unk_00;
            v = &arg0->unk_CA8.unk_0C;
            if ((u32)p != (u32)(p + arg0->unk_CA8.unk_0C.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_CA8.unk_0C.unk_04);
            }
            arg0->unk_CA8.unk_0C.unk_04 = 0;
        }
        if (&arg0->unk_24C != NULL) {
            *(void **)&arg0->unk_24C = D_08A48024;
            arg0->unk_24C.v3();
            func_0886B11C(&arg0->unk_24C, 0);
        }
        func_089CD120(arg0->unk_168, -1);
        func_08985484(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
