#include "common.h"

extern "C" {

class A {
public:
    virtual s32 *unk_08(void *, s32);
    virtual void unk_0C(s32, s32 *, s32);
};

struct C {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP {
    s32 unk_00;
    A *unk_04;
    s32 unk_08;
    C unk_0C;
};

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
void func_088DF528(s32, s32);
void func_08908108(SP *, s32);
void func_0897FD0C(s32, s32, s32, u8 *, u8 *, s32, s32 *, s32 *, s32 *, s32 *);

void func_089086CC(S *arg0, void *arg1) {
    SP sp;
    s32 *p0 = func_0885356C(arg1, 0, 1, 4);
    s32 *p1 = func_0885356C(arg1, 1, 1, 4);
    s32 *p2 = func_0885356C(arg1, 2, 0, 4);
    s32 *p3 = func_0885356C(arg1, 3, 0, 4);
    s32 *p4 = func_0885356C(arg1, 4, 1, 4);
    s32 *p5 = func_0885356C(arg1, 5, 1, 4);
    s32 *p6 = func_0885356C(arg1, 6, 1, 4);
    s32 *p7 = func_0885356C(arg1, 7, 1, 4);
    s32 *p8 = func_0885356C(arg1, 8, 0, 4);
    s32 a = *p0;
    u8 *b = func_08852BA8(arg1) + *p2;
    u8 *c = func_08852BA8(arg1) + *p3;
    s32 d = *p8;

    func_08908108(&sp, arg0->unk_10);
    func_0897FD0C(sp.unk_08, a, *p1, b, c, d, p4, p5, p6, p7);
    if (sp.unk_08 != 0) {
        if (sp.unk_0C.release() == 0) {
            sp.unk_04->unk_0C(sp.unk_08, *(s32 **)&sp.unk_0C, sp.unk_00);
            func_088DF528(sp.unk_08, sp.unk_00);
        }
    }
    func_08852F00(arg1, 0);
}

}
