#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C(s32);
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual s32 unk_54();
};

class U : public T {
public:
    u8 pad_04[0x18];
    u8 unk_1C[0x60];
    u8 unk_7C[1];
};

typedef struct {
    u8 pad_00[0x10];
} V;

typedef struct {
    u8 pad_00[4];
    T *unk_04;
    u8 unk_08[0xA9C];
    void *unk_AA4;
    u8 pad_AA8[0x38A8];
    u8 unk_4350[0x1DD64];
    s32 unk_220B4;
    u8 pad_220B8[4];
    s32 unk_220BC;
} S;

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_088784C4(V *, void *, s32);
s32 func_08878520(void *, s32);
T *func_0897C16C(void *, s32, V *, s32, s32);
void func_0887A910(void *, s32, s32);
void func_08956DF0(void *, void *);
void func_0893B20C(T *, s32, f32);
extern s32 func_08950BC4(s32);

void func_089578A8(S *arg0, s32 arg1, s32 arg2, f32 arg3) {
    V temp;
    U *q;
    void *p;
    s32 temp2, temp3;

    p = func_089B53D8(func_088586E8());
    func_088784C4(&temp, p, arg1);
    p = func_089B53D8(func_088586E8());
    temp2 = func_08878520(p, arg1);
    q = (U *)func_0897C16C(arg0->unk_AA4, 1, &temp, temp2, arg2);
    temp3 = q->unk_54();
    func_0887A910(arg0->unk_08, 0, temp3);
    func_08956DF0(q->unk_7C, arg0->unk_08);
    func_08956DF0(q->unk_1C, arg0->unk_08);
    func_08956DF0(q->unk_7C, arg0->unk_4350);
    func_08956DF0(q->unk_1C, arg0->unk_4350);
    q->unk_3C(1);
    func_0893B20C(q, 0, arg3);
    arg0->unk_04 = q;
    arg0->unk_220B4 = 0;
    arg0->unk_220BC = arg2;
    func_08950BC4((s32)arg0 + 0x1D50);
}

}
