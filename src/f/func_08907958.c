#include "common.h"

typedef struct {
    void *unk_00;
} It_08907958;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} E_08907958;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Obj_08907958;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088D8874(It_08907958 *, void *);
void func_088D886C(It_08907958 *, void *);
s32 func_08907A74(It_08907958 *, It_08907958 *);
E_08907958 *func_08907BDC(It_08907958 *);
void func_08907BCC(s32);
void func_08907B30(u8 *, s32, s32);
void func_08907AA0(It_08907958 *, void *, It_08907958);
It_08907958 *func_08907A8C(It_08907958 *);

void func_08907958(Obj_08907958 *arg0, void *arg1) {
    It_08907958 it;
    It_08907958 end;
    It_08907958 tmp;
    s32 v;
    u8 *base;

    v = *func_0885356C(arg1, 0, 1, 4);
    base = arg0->unk_10 + 0x142690;
    func_088D8874(&it, base + 0x84E74);
    func_088D886C(&end, base + 0x84E74);
    while (func_08907A74(&it, &end)) {
        s32 w = func_08907BDC(&it)->unk_04;
        if (w == v) {
            func_08907BCC(func_08907BDC(&it)->unk_04);
            func_08907B30(base, func_08907BDC(&it)->unk_04, 0);
            func_08907AA0(&tmp, base + 0x84E74, it);
            break;
        }
        func_08907A8C(&it);
    }
    func_08852F00(arg1, 0);
}
