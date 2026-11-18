#include "common.h"

extern "C" {

extern s8 D_08A04156[];
void func_0881F120(void *, void *, s32);

struct Str {
    u32 unk_00;
    u8 unk_04[0x14];

    Str() { unk_00 = 0; }
    Str(const Str &o) { assign(o); }
    void assign(const Str &o) {
        u32 n;
        n = o.unk_00;
        if (n > 0x10) {
            n = 0x10;
        }
        if (this != &o) {
            func_0881F120(unk_04, (void *)o.unk_04, n);
            unk_00 = n;
            unk_04[n] = D_08A04156[0];
        }
    }
};

inline void *operator new(unsigned int, void *p) { return p; }

void func_0894A2C8(Str *);

typedef struct {
    u8 pad_00[0x1785C];
    Str *unk_1785C;
    s32 unk_17860;
} Obj;

void func_0894A1FC(Obj *arg0) {
    Str s;

    func_0894A2C8(&s);
    new (&arg0->unk_1785C[arg0->unk_17860]) Str(s);
    arg0->unk_17860++;
}

}
