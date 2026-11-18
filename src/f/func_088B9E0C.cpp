#include "common.h"

extern "C" {

struct A_088B9E0C {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_0886A45C(s32, s32);

struct H_088B9E0C {
    s32 unk_00;
    A_088B9E0C *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return (unk_0C != NULL) ? *unk_0C : 0; }
    void release() {
        if (unk_08 != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vfunc_0C(unk_08, *(void **)&unk_0C, unk_00);
                func_0886A45C(unk_08, unk_00);
            }
        }
    }
};

struct O_088B9E0C {
    u8 pad_00[0x80];
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32, s32);
};

typedef struct {
    O_088B9E0C unk_00;
    u8 pad_84[0xC];
    O_088B9E0C unk_90;
    u8 pad_114[0xC];
    s32 unk_120;
    s32 unk_124;
} B_088B9E0C;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} I_088B9E0C;

typedef struct {
    u8 pad_00[0x100];
    s8 unk_100;
    u8 pad_101[0x1F];
    s8 unk_120;
    u8 pad_121[0x5F];
} E_088B9E0C;

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
    u8 pad_54[0x10];
    I_088B9E0C *unk_64;
    E_088B9E0C *unk_68;
} T_088B9E0C;

void func_08865FEC(void *, s32, s32);
void func_089912C8(H_088B9E0C *, s32, void *);

void func_088B9E0C(T_088B9E0C *arg0, B_088B9E0C *arg1, s32 arg2) {
    H_088B9E0C h;
    H_088B9E0C h2;
    E_088B9E0C *e;

    e = &arg0->unk_68[arg0->unk_64[arg2].unk_20];
    arg1->unk_120 = 0;
    if (e->unk_100 != 0) {
        func_089912C8(&h, arg0->unk_50, &e->unk_100);
        func_08865FEC(&arg1->unk_00, h.unk_08, 1);
        h.release();
        arg1->unk_00.v4(0, 1);
        arg1->unk_120 = 1;
    }
    arg1->unk_124 = 0;
    if (e->unk_120 != 0) {
        func_089912C8(&h2, arg0->unk_50, &e->unk_120);
        func_08865FEC(&arg1->unk_90, h2.unk_08, 1);
        h2.release();
        arg1->unk_90.v4(0, 1);
        arg1->unk_124 = 1;
    }
}

}
