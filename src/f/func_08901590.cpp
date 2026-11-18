#include "common.h"

extern "C" {

class V08901590 {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual s32 unk_28();
};

typedef struct {
    u8 pad_00[8];
    V08901590 *unk_08;
    u8 pad_0C[4];
} E08901590;

typedef struct {
    u8 pad_00[0x404];
    E08901590 *unk_404;
    s32 unk_408;
} O08901590;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W08901590;

typedef struct {
    u8 pad_00[0x10];
    W08901590 *unk_10;
} T08901590;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O08901590 **);
void func_088F9778(V08901590 *, s32, s32);

void func_08901590(T08901590 *arg0, void *arg1) {
    O08901590 *o;
    s32 *a;
    s32 *b;
    s32 w;
    E08901590 *p;
    E08901590 *end;
    V08901590 *v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            v = p->unk_08;
            if (v != NULL) {
                func_088F9778(v, v->unk_28(), *b);
            }
        }
    }
    func_08852F00(arg1, 0);
}

}
