#include "common.h"

extern "C" {

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

class V {
public:
    u8 pad_00[0x24];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual f32 *unk_18();
};

void func_088AAB8C(T *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    V *temp;
    f32 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    if ((temp = (V *)func_0888A5A0(func_088BCF58(arg0->unk_10), *a)) == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    p = temp->unk_18();
    *b = p[0];
    *c = p[1];
    func_08852F00(arg1, 0);
}

}
