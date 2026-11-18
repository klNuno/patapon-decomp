#include "common.h"

extern "C" {

void func_0880416C(void *);
void func_0886B11C(void *, s32);
void func_08985484(void *, s32);
void func_089CB3D4(void *, s32);
void func_089D3B78(void *, s32);
extern u8 D_08A48024[];
extern u8 D_08A48D94[];

class Sub_089C8ECC {
public:
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    void fini() {
        *(void **)this = D_08A48024;
        vf_14();
        func_0886B11C(this, 0);
    }
};

typedef struct {
    u8 pad_00[0x15C];
    void *unk_15C;
    u8 pad_160[0x480 - 0x160];
    Sub_089C8ECC unk_480;
} Obj_089C8ECC;

Obj_089C8ECC *func_089C8ECC(Obj_089C8ECC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_15C = D_08A48D94;
        func_089D3B78((u8 *)arg0 + 0xED0, -1);
        if (&arg0->unk_480 != NULL) {
            arg0->unk_480.fini();
        }
        func_089CB3D4((u8 *)arg0 + 0x170, -1);
        func_08985484(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
