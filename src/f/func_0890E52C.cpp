#include "common.h"

extern "C" {

struct K {
    s32 unk_00;
    s32 unk_04;
};

struct F2 {
    f32 unk_00[2];
};

struct F3 {
    f32 unk_00[3];
};

struct F4 {
    f32 unk_00[4];
};

typedef struct Elem_0890E830 {
    F2 unk_00;
    s32 unk_08;
    u8 unk_0C;
    u8 unk_0D;
    u8 pad_0E[2];
    F3 unk_10;
    F4 unk_1C;
    F4 unk_2C;
    F4 unk_3C;
    s32 unk_4C;
    s32 unk_50;
    F4 unk_54;
    F4 unk_64;

    Elem_0890E830() {}

    Elem_0890E830(const Elem_0890E830 &arg0) {
        ((K *)&unk_00)->unk_00 = ((const K *)&arg0.unk_00)->unk_00;
        ((K *)&unk_00)->unk_04 = ((const K *)&arg0.unk_00)->unk_04;
        unk_08 = arg0.unk_08;
        unk_0C = arg0.unk_0C;
        unk_0D = arg0.unk_0D;
        unk_10 = arg0.unk_10;
        unk_1C = arg0.unk_1C;
        unk_2C = arg0.unk_2C;
        unk_3C = arg0.unk_3C;
        unk_4C = arg0.unk_4C;
        unk_50 = arg0.unk_50;
        unk_54 = arg0.unk_54;
        unk_64 = arg0.unk_64;
    }

    Elem_0890E830 &operator=(const Elem_0890E830 &arg0) {
        unk_00 = arg0.unk_00;
        unk_08 = arg0.unk_08;
        unk_0C = arg0.unk_0C;
        unk_0D = arg0.unk_0D;
        unk_10 = arg0.unk_10;
        unk_1C = arg0.unk_1C;
        unk_2C = arg0.unk_2C;
        unk_3C = arg0.unk_3C;
        unk_4C = arg0.unk_4C;
        unk_50 = arg0.unk_50;
        unk_54 = arg0.unk_54;
        unk_64 = arg0.unk_64;
        return *this;
    }
} Elem_0890E830;

typedef struct Vec_0890E830 {
    Elem_0890E830 *unk_00;
    s32 unk_04;
} Vec_0890E830;

typedef struct Obj_0890E830 {
    u8 pad_00[0x74A4];
    Vec_0890E830 unk_74A4;
    u8 pad_74AC[0x7E264 - 0x74AC];
    s32 unk_7E264;
} Obj_0890E830;

s32 func_0890E830(Obj_0890E830 *arg0, s32 arg1, s32 arg2);
void func_0890EF30(Elem_0890E830 *, Elem_0890E830 *);
Elem_0890E830 *func_08910870(Elem_0890E830 *, K *, s32, u8, u8);

inline void *operator new(unsigned int, void *arg0) { return arg0; }

void func_0890E52C(Obj_0890E830 *arg0, K *arg1, s32 *arg2, u8 arg3, u8 arg4) {
    Elem_0890E830 e;
    func_08910870(&e, arg1, *arg2, arg3, arg4);
    u32 i = func_0890E830(arg0, arg1->unk_04, arg1->unk_00);
    if (i >= (u32)arg0->unk_74A4.unk_04) {
        new (&arg0->unk_74A4.unk_00[arg0->unk_74A4.unk_04]) Elem_0890E830(e);
        s32 n = ++arg0->unk_74A4.unk_04;
        func_0890EF30(arg0->unk_74A4.unk_00, arg0->unk_74A4.unk_00 + n);
    } else {
        arg0->unk_74A4.unk_00[i] = e;
    }
    ++arg0->unk_7E264;
}
}
