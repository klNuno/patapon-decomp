#include "common.h"

extern "C" {

struct S_089A09D8;
struct Obj;
class T0;

typedef struct {
    u8 pad_00[8];
    Obj *unk_08;
    u8 pad_0C[4];
} E;

typedef struct {
    E *unk_00;
    u8 pad_04[4];
    u32 unk_08;
} V;

typedef struct T {
    u8 pad_00[0xC];
    u8 unk_0C[0xF28 - 0xC];
    u8 unk_F28;
    u8 pad_F29[0xF90 - 0xF29];
    V unk_F90;
    u8 pad_F9C[0xFE0 - 0xF9C];
    s32 unk_FE0;
    f32 unk_FE4;
    u8 pad_FE8[0x1028 - 0xFE8];
    s32 unk_1028;
    u8 pad_102C[4];
    T0 *unk_1030;
    void (T0::*unk_1034)();
    u8 unk_1040;
    u8 pad_1041[3];
    f32 unk_1044;
    f32 unk_1048;
    T0 *unk_104C;
    void (T0::*unk_1050)();
    u8 unk_105C;
    u8 pad_105D[3];
    f32 unk_1060;
    f32 unk_1064;
    u8 pad_1068[0x40];
    T0 *unk_10A8;
    void (T0::*unk_10AC)();
    u8 unk_10B8;
    u8 pad_10B9[3];
    f32 unk_10BC;
    f32 unk_10C0;
    u8 unk_10C4;
} T;

void func_08999E20(T *);
void func_0899DB2C(Obj *, s32);
void func_0899E144(char *, f32);
void func_089A09D8(S_089A09D8 *);
extern f32 D_08A06BD4[];
extern f32 D_089EEFC0[];

void func_08999FD8(T *arg0, u32 arg1) {
    if (arg0->unk_10C4 == 1) {
        func_089A09D8((S_089A09D8 *)arg0->unk_0C);
        arg0->unk_10C4 = 0;
        return;
    }
    if (arg0->unk_1028 == -1) {
        return;
    }
    if (arg0->unk_FE0 == 1) {
        f32 temp = arg0->unk_FE4 - (f32)arg1 / 4800.0f;
        arg0->unk_FE4 = *(D_08A06BD4[0] < temp ? &temp : D_08A06BD4);
    } else if (arg0->unk_FE0 == 2) {
        f32 temp = arg0->unk_FE4 + (f32)arg1 / 4800.0f;
        arg0->unk_FE4 = *(temp < D_089EEFC0[0] ? &temp : D_089EEFC0);
    }
    if (arg0->unk_F28 != 0) {
        f32 temp = 1.0f - arg0->unk_FE4 / 0.3f;
        u32 i = 0;
        if (arg0->unk_F90.unk_08 != 0) {
            s32 j = 0;
            V *v = &arg0->unk_F90;
            do {
                func_0899E144((char *)((E *)((u8 *)v->unk_00 + j))->unk_08, temp);
                func_0899DB2C(((E *)((u8 *)v->unk_00 + j))->unk_08, arg1);
                i++;
                j += sizeof(E);
            } while (i < arg0->unk_F90.unk_08);
        }
        if (arg0->unk_1040 == 1) {
            f32 temp = arg0->unk_1044 + (f32)arg1 / 4800.0f;
            arg0->unk_1044 = *(temp < arg0->unk_1048 ? &temp : &arg0->unk_1048);
            if (arg0->unk_1044 >= arg0->unk_1048 && arg0->unk_1034 != 0) {
                (arg0->unk_1030->*arg0->unk_1034)();
            }
        }
        if (arg0->unk_105C == 1) {
            f32 temp = arg0->unk_1060 + (f32)arg1 / 4800.0f;
            arg0->unk_1060 = *(temp < arg0->unk_1064 ? &temp : &arg0->unk_1064);
            if (arg0->unk_1060 >= arg0->unk_1064 && arg0->unk_1050 != 0) {
                (arg0->unk_104C->*arg0->unk_1050)();
            }
        }
        if (arg0->unk_10B8 == 1) {
            f32 temp = arg0->unk_10BC + (f32)arg1 / 4800.0f;
            arg0->unk_10BC = *(temp < arg0->unk_10C0 ? &temp : &arg0->unk_10C0);
            if (arg0->unk_10BC >= arg0->unk_10C0 && arg0->unk_10AC != 0) {
                (arg0->unk_10A8->*arg0->unk_10AC)();
            }
        }
    } else {
        func_08999E20(arg0);
    }
}

}
