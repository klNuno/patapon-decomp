#include "common.h"

extern "C" {

class V94_0895A68C {
public:
    virtual void v08();
    virtual void v0C();
};

class Heap_0895A68C {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10(void *);
};

typedef struct {
    void *unk_00;
} Sub_0895A68C;

typedef struct {
    u8 pad_00[0x90];
    s32 unk_90;
    Sub_0895A68C unk_94;
    u8 pad_98[0xE24 - 0x98];
    u8 unk_E24[0x1540 - 0xE24];
    u8 unk_1540[0x1D60 - 0x1540];
    u8 unk_1D60[4];
} Obj_0895A68C;

extern u8 D_08A44CAC[];

void func_08959880(Obj_0895A68C *);
void func_08866028(void *);
void func_089591C8(void *);
s32 func_08858BCC(void);
void func_0886A45C(s32, s32);
u32 func_0895A868(void *);
void *func_0895A870(void *, u32);
void func_0885DE4C(void *);
void func_0895A7D0(void *);
void func_089593CC(void *, s32);
void func_08959558(void *, s32);
void func_0886A284(void *, s32);
void func_08865F78(void *, s32);

void func_0895A68C(Obj_0895A68C *arg0, Heap_0895A68C *arg1) {
    u32 i;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            func_08959880(arg0);
            func_08866028(arg0);
            func_089591C8(arg0->unk_1D60);
            func_0886A45C(arg0->unk_90, func_08858BCC());
            arg0->unk_90 = 0;
            ((V94_0895A68C *)&arg0->unk_94)->v0C();
            for (i = 0; i < func_0895A868(arg0->unk_E24); i++) {
                func_0885DE4C(func_0895A870(arg0->unk_E24, i));
            }
            func_0895A7D0(arg0->unk_E24);
            if (arg0->unk_1540 != NULL) {
                func_089593CC(arg0->unk_1D60, 0);
                func_08959558(arg0->unk_1540, 0);
            }
            if (arg0->unk_E24 != NULL) {
                func_0895A7D0(arg0->unk_E24);
            }
            if (&arg0->unk_94 != NULL) {
                arg0->unk_94.unk_00 = D_08A44CAC;
                func_0886A284(&arg0->unk_94, 0);
            }
            func_08865F78(arg0, -1);
        }
        arg1->v10(arg0);
    }
}

}
