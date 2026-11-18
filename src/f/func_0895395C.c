#include "common.h"

typedef struct {
    u8 pad_00[0xA8];
} E_0895395C;

typedef struct {
    E_0895395C *unk_00;
    s32 unk_04;
} Vec_0895395C;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xFCC - 0x8];
    Vec_0895395C unk_FCC;
    u8 pad_FD4[4];
    u8 unk_FD8[0x38];
    void *unk_1010;
    u8 pad_1014[4];
    f32 unk_1018;
    f32 unk_101C;
    f32 unk_1020;
    f32 unk_1024;
    u8 pad_1028[0x30];
    u8 unk_1058;
    u8 pad_1059[0x3B];
    s32 unk_1094;
    u8 pad_1098[0x1B8];
    u8 unk_1250;
    u8 unk_1251;
} Obj_0895395C;

void func_088D68BC(void *);
void func_08912D8C(Obj_0895395C *);
extern u8 D_089EA640[];

void func_0895395C(Obj_0895395C *arg0) {
    E_0895395C *p;
    Vec_0895395C *v;

    if (arg0->unk_1251 != 0) {
        func_088D68BC(arg0->unk_FD8);
        arg0->unk_1010 = D_089EA640;
        arg0->unk_1058 = 0;
        func_08912D8C(arg0);
        arg0->unk_1024 = 0.0f;
        arg0->unk_1020 = 1.0f;
        arg0->unk_1018 = 126.0f;
        arg0->unk_101C = 64.0f;
    } else {
        p = arg0->unk_FCC.unk_00;
        v = &arg0->unk_FCC;
        if ((u32)p != (u32)(p + arg0->unk_FCC.unk_04)) {
            do {
                p++;
            } while (p != v->unk_00 + arg0->unk_FCC.unk_04);
        }
        arg0->unk_FCC.unk_04 = 0;
        arg0->unk_1094 = 0;
        arg0->unk_04 = 0;
    }
    arg0->unk_1250 = 0;
    arg0->unk_1251 = 0;
}
