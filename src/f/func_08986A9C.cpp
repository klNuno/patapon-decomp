#include "common.h"

extern "C" {

class V_08986A9C {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C(s32);
};

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_0886AD10;

typedef struct {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    Sub_0886AD10 unk_0C;
    s32 unk_A40;
    u8 unk_A44[4];
} Obj_08986A9C;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_0886AD10 *);
void func_08985900(void *, s32, s32);
void func_08985B70(void *);
void func_08985BA0(void *, s32);
extern u8 D_08A478D8[];
extern u8 D_08A48024[];
extern u8 D_08A481FC[];

Obj_08986A9C *func_08986A9C(Obj_08986A9C *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a;
    s32 b;
    Sub_0886AD10 *sub;

    arg0->unk_00 = D_08A478D8;
    arg0->unk_04 = 2;
    arg0->unk_00 = D_08A481FC;
    arg0->unk_08 = arg3;
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_0C;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    arg0->unk_A40 = arg1;
    func_08985900(arg0->unk_A44, arg1, arg2);
    func_08985B70(arg0->unk_A44);
    func_08985BA0(arg0->unk_A44, arg3);
    ((V_08986A9C *)arg0)->v1C(0);
    return arg0;
}

}
