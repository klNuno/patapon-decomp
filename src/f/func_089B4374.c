#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} E_089B4374;

typedef struct {
    f32 unk_00[6];
} I_089B4374;

typedef struct {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0C;
} O_089B4374;

O_089B4374 *func_0886095C(void);
void func_08861534(O_089B4374 *);
void func_088619D8(O_089B4374 *, s32);
void func_0886186C(O_089B4374 *, void *);
void func_08861924(O_089B4374 *, void *, s32);
void func_088619D0(O_089B4374 *, void *);
void func_088616AC(O_089B4374 *);
void func_08864938(O_089B4374 *, s32);
void func_088648E4(O_089B4374 *, s32);
void func_08861C68(O_089B4374 *, s32);
s32 func_08861AEC(O_089B4374 *, s32, s32, s32, s32);
void func_0886207C(O_089B4374 *, s32, s32);
void func_08861CCC(O_089B4374 *);
void func_089B3F94(void);
void func_089B3FD0(void);
void func_089B400C(void);

extern char D_08A08920[];
extern char D_08A08718[];
extern char D_08ADC028[];
extern f32 D_08A08A00[];
extern f32 D_08A08A08[];
extern f32 D_08A08A10[];
extern f32 D_08A08A18[];
extern s32 D_089F1DD8[];
extern s32 D_089F1DDC[];

void func_089B4374(void) {
    E_089B4374 e[2];
    O_089B4374 *q;
    E_089B4374 *p;
    O_089B4374 *o;
    u32 i;

    o = func_0886095C();
    func_08861534(o);
    o->unk_00 = func_089B3F94;
    o->unk_04 = func_089B3FD0;
    o->unk_08 = func_089B400C;
    o->unk_0C = func_089B400C;
    func_088619D8(o, 4);
    func_0886186C(o, D_08A08920);
    func_08861924(o, D_08A08718, 0);
    func_088619D0(o, D_08ADC028);
    func_088616AC(o);
    func_08864938(o, 0);
    func_088648E4(o, 1);
    q = func_0886095C();
    func_088648E4(q, 1);
    *(I_089B4374 *)e = *(I_089B4374 *)&D_08A08A00[1];
    e[0].unk_08 = D_089F1DD8[0];
    e[1].unk_08 = D_089F1DDC[0];
    p = e;
    for (i = 0; i < 2; i++, p++) {
        s32 r;

        func_08861C68(q, p->unk_00);
        r = func_08861AEC(q, 1, p->unk_00, p->unk_04, p->unk_08);
        if (r >= 0) {
            func_0886207C(q, r, 1);
        }
    }
    func_08861CCC(q);
}
