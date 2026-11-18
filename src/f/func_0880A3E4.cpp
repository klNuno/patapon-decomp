#include "common.h"

extern "C" {

class C_0880A3E4 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual s32 v1C();
    u8 pad_04[0x20];
    s32 unk_24;
    void *unk_28;
    u8 pad_2C[0x10];
    s32 unk_3C;
    u8 pad_40[0xA];
    u8 unk_4A;
    u8 unk_4B;
};

extern u32 D_089F5FEC[];
void func_08804150(void *);
void *func_088041FC(u32);
u32 *func_08809C20(u32 *, u32 *);
void func_0880A530(C_0880A3E4 *);
void func_0880B728(C_0880A3E4 *);

C_0880A3E4 *func_0880A3E4(C_0880A3E4 *arg0, void *arg1, s32 arg2) {
    u32 a;
    u32 b;
    s32 n;

    if (arg0->v1C() < 0) {
        return NULL;
    }
    if (arg1 == NULL) {
        if (arg0->unk_4B != 0) {
            func_08804150(arg0->unk_28);
        }
        arg0->unk_28 = NULL;
        b = arg2;
        a = (u32)(arg0->unk_3C * 2) / 4;
        n = *func_08809C20(func_08809C20(&a, &b), D_089F5FEC);
        arg0->unk_24 = n;
        arg0->unk_28 = func_088041FC(n * 4);
        arg0->unk_4B = 1;
        arg0->unk_4A = arg2 != 0;
        if (arg0->unk_4A != 0) {
            func_0880B728(arg0);
        } else {
            func_0880A530(arg0);
        }
    } else {
        if (arg2 < arg0->unk_3C * 2 / 4) {
            return NULL;
        }
        if (arg0->unk_4B != 0) {
            func_08804150(arg0->unk_28);
        }
        arg0->unk_28 = arg1;
        arg0->unk_24 = arg2;
        arg0->unk_4B = 0;
        arg0->unk_4A = 1;
        func_0880B728(arg0);
    }
    return arg0;
}

}
