#include "common.h"

extern "C" {

struct U {
    u8 pad_00[0x28];
    virtual void unk_08(s32);
};

typedef struct {
    u8 pad_00[0x100];
    U *unk_100;
    u8 pad_104[4];
    s32 unk_108;
} T;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

void func_0881F5C0(void *, s32, s32);
void func_088F98E4(s32);
U *func_0898FF4C(U *, s32, s32, s32, s32, V *, f32, s32);

void func_0890A2EC(T *arg0, s32 arg1, s32 arg2, s32 arg3, V *arg4, f32 arg5, s32 arg6) {
    U *temp;
    V temp2;

    if (arg0->unk_100 != NULL) {
        arg0->unk_100->unk_08(-1);
        arg0->unk_100 = NULL;
        func_088F98E4(arg0->unk_108);
        func_0881F5C0(arg0, 0, 0x100);
    }
    temp = (U *)((u32)arg0 + ((u32)arg0 & 0xF));
    if (temp != NULL) {
        temp2.unk_00 = arg4->unk_00;
        temp2.unk_04 = arg4->unk_04;
        temp = func_0898FF4C(temp, arg0->unk_108, arg1, arg2, arg3, &temp2, arg5, arg6);
    }
    arg0->unk_100 = temp;
}

}
