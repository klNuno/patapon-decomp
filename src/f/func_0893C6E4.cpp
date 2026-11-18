#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x8E0];
    u32 unk_8E0;
} T;

struct U {
    u8 pad_00[4];
    T *unk_04;
    u8 pad_08[4];
    void *unk_0C;
    s32 unk_10(T *arg0) { return unk_04 == arg0; }
};

void func_088D4448(void *, u8 *, f32);
void func_0893BC58(void *, U *);

void func_0893C6E4(U *arg0, u8 *arg1, f32 arg2) {
    T *temp;

    if (arg0->unk_10(NULL) == 1) {
        func_0893BC58(arg0->unk_0C, arg0);
    }
    temp = arg0->unk_04;
    if (temp != NULL) {
        func_088D4448(temp, arg1, 0.1f);
        temp->unk_8E0 = (u32)(4800.0f * arg2);
    }
}

}
