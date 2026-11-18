#include "common.h"

extern "C" {

class B {
public:
    u8 pad_00[0x28];
    virtual void unk_08(s32);
};

typedef struct {
    u8 pad_00[0x100];
    B *unk_100;
    u8 pad_104[4];
    s32 unk_108;
} A;

void func_0881F5C0(void *, s32, s32);
void func_088F98E4(s32);
B *func_089337B8(B *, s32, s32, f32);

void func_0890A5EC(A *arg0, s32 arg1, f32 arg2) {
    B *temp;
    if ((temp = arg0->unk_100) != NULL) {
        temp->unk_08(-1);
        arg0->unk_100 = NULL;
        func_088F98E4(arg0->unk_108);
        func_0881F5C0(arg0, 0, 0x100);
    }
    temp = (B *)((u8 *)arg0 + ((u32)arg0 & 0xF));
    if (temp != NULL) {
        temp = func_089337B8(temp, arg0->unk_108, arg1, arg2);
    }
    arg0->unk_100 = temp;
}

}
