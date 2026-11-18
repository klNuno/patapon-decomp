#include "common.h"

extern "C" {

struct A_08967068 {
    u8 pad_00[0x8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08[0x1B8];
    void *unk_1C0;
} M2_08967068;

typedef struct {
    u8 pad_00[0x4];
    void *unk_04;
} M1_08967068;

struct Obj_08967068 : A_08967068 {
    u8 pad_0C[0x14];
    M2_08967068 unk_20;
    M1_08967068 unk_1E4;
};

void func_0880416C(void *);
void func_089406E0(void *, s32);
void func_0895EFE4(void *, s32);
extern u8 D_08A474C8[];
extern u8 D_08A47A38[];
extern u8 D_08A47C54[];
extern u8 D_08A47C70[];
extern u8 D_08A47C8C[];

Obj_08967068 *func_08967068(Obj_08967068 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->pad_00[8] = D_08A47C54;
        arg0->unk_20.unk_1C0 = D_08A47C70;
        arg0->unk_1E4.unk_04 = D_08A47C8C;
        arg0->v4();
        if (&arg0->unk_1E4 != NULL) {
            arg0->unk_1E4.unk_04 = D_08A47A38;
        }
        if (&arg0->unk_20 != NULL) {
            arg0->unk_20.unk_1C0 = D_08A474C8;
            func_089406E0(arg0->unk_20.unk_08, -1);
        }
        func_0895EFE4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
