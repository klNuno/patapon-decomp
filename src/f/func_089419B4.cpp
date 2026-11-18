#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0xC];
} M_089419B4;

class C_089419B4 {
public:
    u8 pad_00[0x1C0];
    virtual void v08();
    virtual void v0C();
    virtual s32 v10(M_089419B4 *);
};

typedef struct {
    u8 pad_00[0x10];
    C_089419B4 *unk_10;
} Obj_089419B4;

s32 func_08852BA8(void *);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_089424C0(C_089419B4 *, s32);
void func_0894259C(M_089419B4 *);
void func_089425C8(M_089419B4 *, s32, s32, s32, s32, s32, s32);

void func_089419B4(Obj_089419B4 *arg0, void *arg1) {
    M_089419B4 m;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 0, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    if (arg0->unk_10 != NULL) {
        if (*a == -2) {
            v = func_08852BA8(arg1);
        } else {
            v = func_089424C0(arg0->unk_10, *a);
        }
        func_0894259C(&m);
        func_089425C8(&m, v, *b, *c, 0, 1, 0);
        arg0->unk_10->v10(&m);
    }
    func_08852F00(arg1, 0);
}

}
