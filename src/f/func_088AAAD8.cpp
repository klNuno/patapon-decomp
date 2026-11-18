#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Unk;

class Unk24 {
public:
    u8 pad_00[0x24];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual f32 *unk_18();
};

void func_088AAAD8(Unk *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    f32 *temp2 = (f32 *)func_0885356C(arg1, 1, 1, 4);
    Unk24 *temp3;
    if ((temp3 = (Unk24 *)func_0888A5A0(func_088BCF58(arg0->unk_10), *temp)) == NULL) {
        func_08852F00(arg1, 0);
    } else {
        *temp2 = *temp3->unk_18();
        func_08852F00(arg1, 0);
    }
}
}
