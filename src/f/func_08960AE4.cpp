#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} R08960AE4;

class C08960AE4 {
public:
    u8 pad_00[0x8];
    virtual void v08();
    virtual void v0C();
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
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4C();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5C();
    virtual void v60(s32);
    virtual void v64(s32);
    virtual void v68(s32);
    virtual void v6C(s32);
    virtual void v70(s32);
    u8 pad_0C[0xC4];
    s32 unk_D0;
    u8 pad_D4[0x38];
    s32 unk_10C;
};

extern s32 D_08A04DB0[];

R08960AE4 *func_0896CE18(s32, s32, s32, s32);

s32 func_08960AE4(C08960AE4 *arg0, s32 arg1) {
    R08960AE4 *r;

    if (arg1 == 0) {
        return 0;
    }
    r = func_0896CE18(arg1, D_08A04DB0[0], 0, 1);
    if (r == NULL) {
        return 0;
    }
    arg0->unk_D0 = r->unk_108;
    arg0->v60(arg1);
    arg0->v64(arg1);
    arg0->v68(arg1);
    arg0->v70(arg1);
    arg0->v6C(arg1);
    arg0->unk_10C = arg1;
    return 1;
}

}
