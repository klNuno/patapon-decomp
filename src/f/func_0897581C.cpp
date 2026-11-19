#include "common.h"

extern "C" {

struct T {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    f32 unk_0C;

    virtual void unk_08_v();
    virtual void unk_0C_v();
    virtual void unk_10_v();
    virtual void unk_14_v();
    virtual void unk_18_v();
    virtual void unk_1C_v();
    virtual void unk_20_v();
    virtual void unk_24_v();
    virtual void unk_28_v();
    virtual void unk_2C_v();
    virtual void unk_30_v();
    virtual void unk_34_v();
};

typedef struct {
    f32 unk_00;
    u8 pad_04[8];
    f32 unk_0C;
} V;

extern void *D_08ADB048[];
extern s32 func_08975538(s32, s32, s32);
extern void func_088CAC04(s32 (*)(s32, s32, s32), s32);
void func_088CAC40(void *, s32);
extern s32 func_088CB02C(s32);
V *func_088CB558(void *);

void func_0897581C(T *arg0, void *arg1, s32 arg2, void *arg3, s32 arg4) {
    f32 temp;
    u32 *temp4;
    void *temp2;
    V *temp3;

    arg0->unk_34_v();
    arg0->unk_00 = arg1;
    arg0->unk_08 = 0;
    arg0->unk_04 = arg2;
    temp2 = *(void **)&arg0->unk_00;
    D_08ADB048[0] = arg3;
    func_088CAC04(func_08975538, 0);
    func_088CAC40(temp2, arg4);
    arg0->unk_2C_v();
    temp3 = func_088CB558((void *)func_088CB02C((s32)temp2));
    arg0->unk_0C = 1.0f;
    if (temp3 != NULL) {
        temp = temp3->unk_0C - temp3->unk_00;
        u32 temp5 = *(u32 *)&temp;
        temp4 = (u32 *)&temp;
        *(u32 *)&temp = (temp5 << 1) >> 1;
        arg0->unk_0C = 0.5f * *(f32 *&)temp4;
    }
    func_088CAC04(NULL, 0);
    D_08ADB048[0] = NULL;
}

}
