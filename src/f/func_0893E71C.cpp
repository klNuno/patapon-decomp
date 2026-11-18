#include "common.h"

extern "C" {

class C_0893E71C {
public:
    u8 pad_00[0x10];
    virtual void v08();
    virtual s32 v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C(s32, s32);
};

typedef struct {
    u8 pad_00[0xC38];
    s32 unk_C38;
} G_0893E71C;

typedef struct {
    u8 pad_00[0x4];
    C_0893E71C *unk_04;
    u8 pad_08[0x4];
    s32 unk_0C;
    s32 unk_10;
} S_0893E71C;

void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_08859B80(s32);
G_0893E71C *func_08859C04(void);
void func_0893E4E4(S_0893E71C *, s32, s32);

void func_0893E71C(S_0893E71C *arg0, s32 arg1, s32 arg2) {
    G_0893E71C *g;

    if (arg0->unk_04->v0C() == 0) {
        if (arg0->unk_0C == 0 || (g = func_08859C04(), arg0->unk_10 != g->unk_C38)) {
            func_0893E4E4(arg0, arg1, arg2);
        }
        if (arg0->unk_0C != 0) {
            func_08814BB4(9);
            func_08814BB4(4);
            func_08859B80(arg0->unk_0C);
            func_08814C0C(4);
            func_08814C0C(9);
        }
    } else {
        arg0->unk_04->v3C(arg1, arg2);
    }
}

}
