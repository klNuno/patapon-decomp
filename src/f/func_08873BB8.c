#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    u8 unk_58[0x208];
    s32 unk_260;
    u8 pad_264[0x435C];
    u8 unk_45C0[0x4];
} M_08873BB8;

typedef struct {
    u8 pad_00[0x14A0];
    M_08873BB8 *unk_14A0;
} G_08873BB8;

typedef struct {
    u8 pad_00[0x2980];
    u8 unk_2980[0x3EC70 - 0x2980];
    u8 unk_3EC70[0x431A0 - 0x3EC70];
    u8 unk_431A0[0x55428 - 0x431A0];
    void *unk_55428;
    u8 pad_5542C[0x55598 - 0x5542C];
    u8 unk_55598[0x65FD4 - 0x55598];
    u8 unk_65FD4;
    u8 pad_65FD5[0x66A8D - 0x65FD5];
    u8 unk_66A8D;
} S_08873BB8;

extern G_08873BB8 *D_08AD1F14[];
void func_08876B1C(G_08873BB8 *);
void func_08874610(S_08873BB8 *, s32);
void func_08945E5C(void *, s32);
void func_089573F0(void *);
void func_08957520(void *);
s32 func_089D1AC8(void *);
void func_089D1904(void *, s32, s32);
void func_08882AB0(void *);
void func_0881F120(void *, void *, s32);
void func_0891B408(void *, s32, S_08873BB8 *);

void func_08873BB8(S_08873BB8 *arg0, s32 arg1) {
    M_08873BB8 *m;

    if (arg0->unk_66A8D == 0) {
        func_08876B1C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL);
    }
    func_08874610(arg0, 0);
    arg0->unk_66A8D = 1;
    func_08945E5C(arg0->unk_431A0, 0);
    if (arg1 == 2) {
        func_089573F0(arg0->unk_2980);
    } else {
        func_08957520(arg0->unk_2980);
    }
    arg0->unk_65FD4 = 0;
    if (func_089D1AC8(arg0->unk_55598) != 0) {
        func_089D1904(arg0->unk_55598, 0, -1);
    }
    func_08882AB0(arg0->unk_3EC70);
    m = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0;
    m->unk_260 = arg1;
    if (arg1 == 1) {
        func_0881F120(m->unk_58, m->unk_45C0, 0x200);
    }
    func_0891B408(arg0->unk_55428, arg1, arg0);
}
