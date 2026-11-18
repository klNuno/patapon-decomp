#include "common.h"

extern "C" {

class T {
public:
    virtual s32 unk_08();
    virtual s32 unk_0C();
};

struct P;
struct O {
    u8 pad_00[0x14];
    P *unk_14;
};

void func_0884EBE8(s32, s32, s32);
void func_0884EC00(s32, s32, f32);
void func_08852F00(void *, s32);
s32 func_08853004(void *);
s32 func_088533F8(void *, s32);
s32 func_08853424(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088E79FC(O *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

void func_088E778C(O *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 *temp2 = func_0885356C(arg1, 1, 1, 4);
    func_0885356C(arg1, 2, 1, 4);
    s32 *temp3 = func_0885356C(arg1, 3, 1, 4);
    s32 *temp4 = func_0885356C(arg1, 4, 1, 4);
    s32 *temp5 = func_0885356C(arg1, 5, 1, 4);
    func_0885356C(arg1, 6, 1, 4);
    u8 temp6 = (u8)func_088533F8(arg1, 2);
    s32 temp7 = (temp6 & 0x70) != 0;
    s32 temp8 = (temp6 & 0xE) != 0;
    s32 temp9 = (temp6 & 0x48) != 0;
    s32 temp10 = (temp6 & 0x24) != 0;
    u8 temp11 = (u8)func_08853424(arg1, 2);
    u8 temp12 = (u8)func_088533F8(arg1, 3);
    s32 temp13 = (temp12 & 0x70) != 0;
    s32 temp14 = (temp12 & 0xE) != 0;
    T *temp15 = (T *)func_088E79FC(arg0, *temp, *temp2, *temp4, *temp5, *temp5);
    if (temp15 != NULL) {
        s32 temp16 = 0;
        s32 temp17 = func_08853004(temp15);
        if (temp9 != 0) {
            temp17 = func_08853004(temp15);
        } else if (temp10 != 0) {
            temp17 = temp15->unk_0C();
        } else {
            temp16 = 1;
        }
        if (temp16 == 0) {
            if (temp7 != 0) {
                f32 temp18 = 0.0f;
                if (temp13 != 0) {
                    temp18 = *(f32 *)temp3;
                } else if (temp14 != 0) {
                    temp18 = (f32)*temp3;
                } else {
                    temp16 = 1;
                }
                if (temp16 == 0) {
                    func_0884EC00(temp17, temp11, temp18);
                }
            } else if (temp8 != 0) {
                s32 temp19 = 0;
                if (temp13 != 0) {
                    temp19 = (s32)*(f32 *)temp3;
                } else if (temp14 != 0) {
                    temp19 = *temp3;
                } else {
                    temp16 = 1;
                }
                if (temp16 == 0) {
                    func_0884EBE8(temp17, temp11, temp19);
                }
            }
        }
    }
    func_08852F00(arg1, 0);
}

}
