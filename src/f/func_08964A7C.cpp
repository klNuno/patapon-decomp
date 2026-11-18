#include "common.h"

extern "C" {

class B_08964A7C {
public:
    u8 pad_00[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

class O_08964A7C : public B_08964A7C {
public:
    u8 pad_0C[0x20 - 0xC];
    u8 unk_20[4];
    void *unk_24;
    u8 pad_28[8];
    u8 unk_30[0x160 - 0x30];
    u8 unk_160[0x200];
};

extern u8 D_08A47A38[];
extern u8 D_08A47B84[];
extern u8 D_08A47BA0[];
extern u8 D_08A47BF0[];
extern u8 D_08A47C08[];

void func_08804000(void *, void *, s32, s32);
void func_0880416C(O_08964A7C *);
void func_0885BDA0(void *, s32);
void func_088D23FC(void);
void func_0895EFE4(O_08964A7C *, s32);
void func_089640E8(void *, s32);
void func_08963898(void *, s32);
void func_08964290(void *);
void func_08964564(void);
void func_089645F8(void);
void func_089646E4(void *);
void func_089649B8(void);

O_08964A7C *func_08964A7C(O_08964A7C *arg0, s16 arg1) {
    u8 *p;

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 8) = D_08A47B84;
        arg0->unk_24 = D_08A47BA0;
        arg0->v4();
        p = arg0->unk_160;
        if (p != NULL) {
            *(void **)arg0->unk_160 = D_08A47BF0;
            func_08964290(p);
            func_08963898((u8 *)arg0 + 0x238, -1);
            func_08963898((u8 *)arg0 + 0x210, -1);
            func_08804000((u8 *)arg0 + 0x1B0, (void *)func_08964564, 0x20, 3);
            func_08804000((u8 *)arg0 + 0x180, (void *)func_089645F8, 0x10, 3);
            func_0885BDA0(arg0->unk_160, 0);
        }
        p = arg0->unk_30;
        if (p != NULL) {
            *(void **)arg0->unk_30 = D_08A47C08;
            func_089646E4(p);
            func_089640E8((u8 *)arg0 + 0x108, -1);
            func_089640E8((u8 *)arg0 + 0xE0, -1);
            func_08804000((u8 *)arg0 + 0x80, (void *)func_089649B8, 0x20, 3);
            func_08804000((u8 *)arg0 + 0x50, (void *)func_088D23FC, 0x10, 3);
            func_0885BDA0(arg0->unk_30, 0);
        }
        if (arg0->unk_20 != NULL) {
            arg0->unk_24 = D_08A47A38;
        }
        func_0895EFE4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
