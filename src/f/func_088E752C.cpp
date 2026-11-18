#include "common.h"

extern "C" {
struct T {
    virtual void unk_08();
    virtual s32 unk_0C();
};
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 func_088533F8(void *, s32);
u8 func_08853424(void *, s32);
s32 func_08853004(void *);
s32 func_0884EBC0(s32, s32);
f32 func_0884EBD4(s32, s32);
T *func_088E79FC(s32, s32, s32, s32, s32, s32);

void func_088E752C(s32 arg0, void *arg1) {
    s32 temp8, temp9, temp10;
    s32 *p3, *p5;
    s32 temp, temp2, temp3, temp4, temp6;
    u8 temp5;
    s32 a, b, c, d;
    s32 temp7;
    s32 temp11 = arg0;
    temp3 = (s32)func_0885356C(arg1, 0, 1, 4);
    temp4 = (s32)func_0885356C(arg1, 1, 1, 4);
    func_0885356C(arg1, 2, 1, 4);
    p3 = func_0885356C(arg1, 3, 1, 4);
    temp6 = (s32)func_0885356C(arg1, 4, 1, 4);
    p5 = func_0885356C(arg1, 5, 1, 4);
    func_0885356C(arg1, 6, 1, 4);
    temp = func_088533F8(arg1, 2);
    temp2 = (temp & 0x70) != 0;
    temp8 = (temp & 0xE) != 0;
    temp9 = (temp & 0x48) != 0;
    temp10 = (temp & 0x24) != 0;
    temp5 = func_08853424(arg1, 2);
    temp = func_088533F8(arg1, 3);
    a = *(s32 *)temp3;
    b = *p5;
    temp3 = (temp & 0x70) != 0;
    c = *(s32 *)temp4;
    d = *(s32 *)temp6;
    temp4 = (temp & 0xE) != 0;
    temp11 = (s32)func_088E79FC(temp11, a, c, d, b, b);
    if (temp11 != 0) {
        temp6 = 0;
        temp7 = func_08853004((void *)temp11);
        if (temp9 != 0) {
            temp7 = func_08853004((void *)temp11);
        } else if (temp10 != 0) {
            temp7 = ((T *)temp11)->unk_0C();
        } else {
            temp6 = 1;
        }
        if (temp6 == 0) {
            if (temp2 != 0) {
                f32 f = func_0884EBD4(temp7, (u8)temp5);
                if (temp3 != 0) {
                    *(f32 *)p3 = f;
                } else if (temp4 != 0) {
                    *p3 = (s32)f;
                }
            } else {
                if (temp8 == 0) goto end;
                s32 i = func_0884EBC0(temp7, (u8)temp5);
                if (temp3 != 0) {
                    *(f32 *)p3 = (f32)i;
                } else if (temp4 != 0) {
                    *p3 = i;
                }
            }
        }
    }
end:
    func_08852F00(arg1, 0);
}
}
