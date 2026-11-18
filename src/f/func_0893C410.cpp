#include "common.h"

extern "C" {

struct E {
    u8 pad_00[0x8E0];
    u32 unk_8E0;
};

struct P {
    f32 unk_00, unk_04;
};

struct U {
    u8 pad_00[4];
    E *unk_04;
    s32 unk_08(E *arg0) { return unk_04 == arg0; }
};

struct T {
    void *unk_00;
    U unk_04;
    u8 pad_0C[4];
    P unk_10;
};

void func_088D4448(void *, u8 *, f32);
void func_088D4724(char *, s32);
void func_0893BC58(void *, U *);

void func_0893C410(T *arg0, u8 *arg1, const P *arg2, f32 arg3) {
    if (arg0->unk_04.unk_08(NULL) == 1) {
        func_0893BC58(arg0->unk_00, &arg0->unk_04);
    }
    E *temp = arg0->unk_04.unk_04;
    func_088D4724((char *)temp, 3);
    func_088D4448(temp, arg1, 0.1f);
    temp->unk_8E0 = (u32)(4800.0f * arg3);
    arg0->unk_10.unk_00 = arg2->unk_00;
    arg0->unk_10.unk_04 = arg2->unk_04;
}

}
