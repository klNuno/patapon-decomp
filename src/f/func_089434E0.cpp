#include "common.h"

extern "C" {

typedef struct S_089434E0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0xC];
} S_089434E0;

class C_089434E0 {
public:
    u8 pad_00[0x1C0];
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual s32 vfunc_10(S_089434E0 *);
};

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x1510 - 8];
    u8 unk_1510[0x16BC - 0x1510];
    s32 unk_16BC;
    u8 pad_16C0[0x16D4 - 0x16C0];
    u8 unk_16D4;
    u8 pad_16D5[3];
    u8 unk_16D8[8];
    u8 unk_16E0[4];
} T_089434E0;

extern void *D_08A8812C[];
extern void *D_08AD2070[];
extern char D_08A03D94[];
s32 func_08860820(void *, s32);
s32 func_0886E580(T_089434E0 *, s32);
void func_0886F33C(T_089434E0 *, s32, s32);
void func_0887C240(void *, s32);
void func_08899188(void);
void func_088E64E0(s32, s32, s32, s32, s32);
void func_0894259C(S_089434E0 *);
void func_089425C8(S_089434E0 *, s32, s32, s32, s32, s32, s32);
void func_089436B4(T_089434E0 *, s32);
s32 func_089437BC(T_089434E0 *, void *);
s32 func_089450E8(void *, char *);

s32 func_089434E0(T_089434E0 *arg0, s32 arg1) {
    S_089434E0 sp18;
    s32 r;
    bool b;
    s32 o;

    if (func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0) != 0) {
        func_0887C240(D_08AD2070[0] != NULL ? D_08AD2070[0] : NULL, arg1);
    } else {
        if (arg0->unk_16D4 == 0) {
            func_0894259C(&sp18);
            func_089425C8(&sp18, func_089450E8(arg0->unk_16E0, D_08A03D94), -1, 0, 0, 1, 0);
            o = ((C_089434E0 *)arg0->unk_1510)->vfunc_10(&sp18);
            arg0->unk_16BC = o;
            if (o != 0) {
                func_088E64E0(o, 0xA, arg1, 0, 0);
            }
            func_08899188();
        }
        arg0->unk_16D4 = 1;
        r = func_0886E580(arg0, arg1);
        func_089436B4(arg0, arg1);
        switch (r) {
        case 0x10000:
            break;
        case 0x10001:
            b = !func_089437BC(arg0, arg0->unk_16D8);
            switch (arg0->unk_04) {
            case 0:
                if (b) {
                    if (arg0->unk_16BC != 0) {
                        func_088E64E0(arg0->unk_16BC, 0x10, arg1, 0, 0);
                    }
                    return 0x10001;
                }
                func_0886F33C(arg0, 0, 1);
                break;
            }
            break;
        case 0x10002:
            return 0x10001;
        case 0:
            func_0886F33C(arg0, 0, 1);
            break;
        }
    }
    return 0x10000;
}

}
