#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01[7];
    u8 *unk_08;
} Str_08885F0C;

typedef struct {
    u8 pad_00[0x10C];
    u8 unk_10C[0xC];
    s32 unk_118;
    s32 unk_11C;
    u8 unk_120[4];
} Obj_08885F0C;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x54];
    u8 unk_58[4];
} Ent_08885F0C;

void func_08810258(void *, s32);
void func_0881030C(void *, void *);
s32 func_08822AD0(void *, void *);
void func_08885C28(void *, void *);
void func_08885FE4(void *);
void func_088860F4(void *, void *);
Ent_08885F0C *func_08886B18(void *, s32);
extern char D_089FA178[];
extern char D_089FA17C[];
extern char D_089FA180[];

void func_08885F0C(Obj_08885F0C *arg0) {
    Str_08885F0C s;
    Ent_08885F0C *e;

    e = func_08886B18(arg0->unk_120, arg0->unk_11C + arg0->unk_118);
    if (e->unk_00 & 0x1000) {
        if (func_08822AD0(e->unk_58, D_089FA178) == 0) {
            func_08885FE4(arg0);
        } else if (func_08822AD0(e->unk_58, D_089FA17C) != 0) {
            func_0881030C(&s, arg0->unk_10C);
            func_088860F4(&s, D_089FA180);
            func_088860F4(&s, e->unk_58);
            func_08885C28(arg0, (*(s32 *)&s.unk_00 & 1) ? s.unk_08 : s.unk_01);
            func_08810258(&s, -1);
        }
    }
}
