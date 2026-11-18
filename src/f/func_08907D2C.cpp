#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x968];
    u8 unk_968;
    u8 unk_969;
    u8 unk_96A;
} O_08907D2C;

typedef struct {
    O_08907D2C *unk_00;
} P_08907D2C;

typedef struct {
    u8 unk_00[4];
    u8 unk_04[0x200];
    u8 unk_204[0x200];
    u8 unk_404[0x20];
} E_08907D2C;

typedef struct {
    u8 pad_00[0x8484];
    E_08907D2C *unk_8484;
    s32 unk_8488;
    u8 pad_848C[8];
    P_08907D2C unk_8494;
    u8 pad_8498[4];
    u8 unk_849C[0x80];
    s32 unk_851C;
} S_08907D2C;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
void func_088F2104(O_08907D2C *, u8 *);
void func_088F1C7C(O_08907D2C *);
void func_088F1DB4(O_08907D2C *, u8 *, u8 *, E_08907D2C *, u8 *);
void func_088F1A78(O_08907D2C *, s32);

void func_08907D2C(void *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    S_08907D2C *s;
    s32 v;
    s32 w;
    E_08907D2C *p;
    E_08907D2C *end;
    O_08907D2C *o;
    P_08907D2C *hp;
    P_08907D2C *hq;
    s32 f;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 0, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    s = *(S_08907D2C **)a;
    v = *b;
    s->unk_851C = v;
    w = *c;
    f = v != 0;
    if (s->unk_8488 != 0) {
        hp = &s->unk_8494;
        func_088F2104(hp->unk_00, s->unk_849C);
        func_088F1C7C(hp->unk_00);
        p = s->unk_8484;
        end = p + s->unk_8488;
        if (p != end) {
            hq = &s->unk_8494;
            do {
                func_088F1DB4(hq->unk_00, p->unk_04, p->unk_204, p, p->unk_404);
            } while (++p != end);
        }
        o = hp->unk_00;
        o->unk_969 = 0;
        o->unk_968 = 0;
        o->unk_96A = f;
        func_088F1A78(o, w);
    }
    func_08852F00(arg1, 0);
}

}
