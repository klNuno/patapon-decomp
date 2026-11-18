#include "common.h"

extern "C" {

typedef struct S_08880778_L {
    struct S_08880778_L *unk_00;
    struct S_08880778_L *unk_04;
    u8 pad_08[0x1C];
    void *unk_24;
} S_08880778_L;

typedef struct S_08880778 {
    s32 unk_00;
    s32 unk_04;
    struct S_08880778 *unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    S_08880778_L unk_20;
    S_08880778_L unk_48;
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[0x10];
    void *unk_90;
} S_08880778;

class V_08880778 {
public:
    u8 pad_00[0x90];
    virtual void v0();
    virtual void v1();
};

extern u8 D_08A45338[];
extern u8 D_08A45350[];
extern u8 D_08A4535C[];

void func_08880530(s32, S_08880778 *);
void func_0888065C(S_08880778_L *);
void func_088804C0(S_08880778_L *, s32);
void func_08880160(S_08880778 *);
void func_0880416C(void *);

S_08880778 *func_08880778(S_08880778 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_90 = D_08A45338;
        ((V_08880778 *)arg0)->v1();
        if (arg0->unk_0C != 0) {
            func_08880530(arg0->unk_0C, arg0);
        }
        arg0->unk_0C = 0;
        arg0->unk_04 = 0;
        arg0->unk_00 = 0;
        arg0->unk_08 = arg0;
        if (&arg0->unk_48 != NULL) {
            arg0->unk_48.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_48);
            func_088804C0(&arg0->unk_48, -1);
        }
        if (&arg0->unk_20 != NULL) {
            arg0->unk_20.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_20);
            func_088804C0(&arg0->unk_20, -1);
        }
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A4535C;
            func_08880160(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
