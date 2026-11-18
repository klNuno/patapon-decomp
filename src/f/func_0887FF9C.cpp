#include "common.h"

extern "C" {

typedef struct S_0887FF9C_L {
    struct S_0887FF9C_L *unk_00;
    struct S_0887FF9C_L *unk_04;
    u8 pad_08[0x1C];
    void *unk_24;
} S_0887FF9C_L;

typedef struct S_0887FF9C {
    s32 unk_00;
    s32 unk_04;
    struct S_0887FF9C *unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    S_0887FF9C_L unk_20;
    S_0887FF9C_L unk_48;
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[0x10];
    void *unk_90;
} S_0887FF9C;

class V_0887FF9C {
public:
    u8 pad_00[0x90];
    virtual void v0();
    virtual void v1();
};

extern u8 D_08A45338[];
extern u8 D_08A45350[];
extern u8 D_08A4535C[];

void func_08880754(S_0887FF9C_L *);
void func_0888065C(S_0887FF9C_L *);
void func_08880530(s32, S_0887FF9C *);

S_0887FF9C *func_0887FF9C(S_0887FF9C *arg0) {
    S_0887FF9C_L *l;

    arg0->unk_90 = D_08A45338;
    arg0->unk_1C = D_08A4535C;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = NULL;
    arg0->unk_0C = 0;
    l = &arg0->unk_20;
    arg0->unk_20.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    l = &arg0->unk_48;
    arg0->unk_48.unk_24 = D_08A45350;
    func_08880754(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0888065C(l);
    arg0->unk_70 = 0;
    arg0->unk_74 = 0;
    arg0->unk_78 = 0;
    arg0->unk_7C = -1;
    ((V_0887FF9C *)arg0)->v1();
    if (arg0->unk_0C != 0) {
        func_08880530(arg0->unk_0C, arg0);
    }
    arg0->unk_0C = 0;
    arg0->unk_04 = 0;
    arg0->unk_00 = 0;
    arg0->unk_08 = arg0;
    return arg0;
}

}
