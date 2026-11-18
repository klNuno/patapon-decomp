#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
} E_089B22B0;

typedef struct {
    u8 pad_00[0x2];
    u8 unk_02;
    u8 unk_03;
} F_089B22B0;

typedef struct {
    u8 pad_00[0x1C0];
    u8 unk_1C0[0x8];
    F_089B22B0 *unk_1C8;
    u8 pad_1CC[0x1D4 - 0x1CC];
    u8 unk_1D4[0x11F8 - 0x1D4];
    E_089B22B0 *unk_11F8;
} Obj_089B22B0;

typedef struct {
    u8 pad_00[0xC];
} S_089B22B0;

u32 func_08945918(void *);
void func_08945E64(S_089B22B0 *);
void func_08945EC4(S_089B22B0 *, s32);
void func_08946084(S_089B22B0 *);
void func_08947BA8(S_089B22B0 *, u32);
void func_089B131C(s32, u32);
void func_089B16EC(void *);

void func_089B22B0(Obj_089B22B0 *arg0) {
    S_089B22B0 s;
    u32 i;
    s32 off;
    F_089B22B0 *p;
    E_089B22B0 **e;

    func_08945E64(&s);
    func_08946084(&s);
    i = 0;
    off = 0;
    e = &arg0->unk_11F8;
    do {
        func_089B131C(((E_089B22B0 *)((u8 *)*e + off))->unk_08, -1);
        i++;
        off += 0x10;
    } while (i < 0x100);
    i = 0;
    if (func_08945918(arg0->unk_1C0) != 0) {
        off = 0;
        do {
            p = (F_089B22B0 *)((u8 *)arg0->unk_1C8 + off + 4);
            func_08947BA8(&s, i);
            if (p->unk_02 != 0) {
                func_089B131C((*e)[p->unk_03].unk_08, i);
            }
            off += 4;
            i++;
        } while (i < func_08945918(arg0->unk_1C0));
    }
    func_089B16EC(arg0->unk_1D4);
    func_08945EC4(&s, -1);
}
