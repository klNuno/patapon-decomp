#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x4];
} E_089CDBE8;

typedef struct {
    E_089CDBE8 *unk_00;
    s32 unk_04;
} V_089CDBE8;

typedef struct {
    u8 pad_00[0xA0];
    u8 unk_A0;
    u8 pad_A1[0x37];
    V_089CDBE8 unk_D8;
} Obj_089CDBE8;

s32 func_089D45A4(void *);

static inline bool ne_089CDBE8(void *h) { return !(bool)func_089D45A4(h); }
void func_089D44E4(void *);
s32 func_089D4624(void *);
void func_089D45C8(void *);
void func_089D45F0(void *);
void func_089D462C(void *, s32);

void func_089CDBE8(Obj_089CDBE8 *arg0) {
    E_089CDBE8 *p;
    E_089CDBE8 *end;
    V_089CDBE8 *v;
    void *h;
    s32 r;

    v = &arg0->unk_D8;
    p = arg0->unk_D8.unk_00;
    end = p + arg0->unk_D8.unk_04;
    for (; p != end; p++) {
        h = p->unk_08;
        if (ne_089CDBE8(h)) {
            continue;
        }
        func_089D44E4(h);
        r = func_089D4624(h);
        if (r == 2) {
            func_089D45C8(h);
        } else if (r == 3) {
            func_089D45C8(h);
        }
        break;
    }
    if (arg0->unk_A0) {
        arg0->unk_A0 = 0;
        func_089D45F0(v->unk_00->unk_08);
        func_089D462C(v->unk_00->unk_08, -1000);
    }
}

}
