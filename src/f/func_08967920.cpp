#include "common.h"

extern "C" {

class Alloc_08967920 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

struct RC_08967920 {
    s32 *unk_00;
    s32 get() {
        return unk_00 != NULL ? *unk_00 : 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct M_08967920 {
    s32 unk_00;
    Alloc_08967920 *unk_04;
    s32 unk_08;
    RC_08967920 unk_0C;
};

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x8DB8];
    M_08967920 unk_8DC4;
} Obj_08967920;

extern u8 D_08A47DA4[];

void func_0880416C(void *);
void func_0896273C(Obj_08967920 *, s32);
void func_08967C14(Obj_08967920 *);
void func_08967C5C(s32, s32);

Obj_08967920 *func_08967920(Obj_08967920 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47DA4;
        func_08967C14(arg0);
        if (&arg0->unk_8DC4 != NULL) {
            if (&arg0->unk_8DC4 != NULL) {
                s32 *h = &arg0->unk_8DC4.unk_08;
                if (*h != 0) {
                    RC_08967920 *rc = &arg0->unk_8DC4.unk_0C;
                    --*rc->unk_00;
                    if (arg0->unk_8DC4.unk_0C.get() == 0) {
                        arg0->unk_8DC4.unk_04->unk_0C(*h, rc->unk_00, arg0->unk_8DC4.unk_00);
                        func_08967C5C(*h, arg0->unk_8DC4.unk_00);
                    }
                }
            }
        }
        func_0896273C(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
