#include "common.h"

extern "C" {

typedef struct N N;
typedef struct T089CB0E8 T089CB0E8;
struct N { N *unk_00, *unk_04; u8 pad_08[4]; T089CB0E8 *unk_0C; };
struct T089CB0E8 {
    N *unk_00, *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    void *unk_24;
    s32 func_00(N *arg0) {
        if (unk_00 != (N *)this) {
            arg0->unk_00 = unk_00;
            (*(N *volatile *)&unk_00)->unk_04 = arg0;
            unk_00 = arg0;
            return 1;
        } else {
            unk_00 = arg0;
            unk_04 = arg0;
            arg0->unk_00 = (N *)this;
            return 1;
        }
    }
    void func_04(N *arg0) {
        if ((N *)this != arg0) {
            s32 temp = func_00(arg0);
            arg0->unk_04 = (N *)this;
            if (temp) {
                arg0->unk_0C = this;
                ++unk_20;
            }
        }
    }
};
typedef struct { u8 pad_00[8]; s32 unk_08; } A;
typedef struct {
    u8 pad_00[8];
    u8 unk_08[0x124];
    T089CB0E8 unk_12C, unk_154;
    u8 pad_17C[4];
    s32 unk_180[100];
} B;
typedef struct { u8 pad_00[0x30]; f32 unk_30, unk_34; } C;
typedef struct { f32 unk_00, unk_04; } V_089CA8A0;
typedef struct T_089CA8A0 T_089CA8A0;
s32 func_088586E8(void);
s32 func_089B53D8(s32);
u32 func_089B5464(s32);
void func_08878864(s32, void *, s32, f32, f32, f32);
s32 func_08945908(s32 *, s32);
void func_08945F18(void *, s32, s32);
void func_089CA8A0(T_089CA8A0 *, u8 *, V_089CA8A0 *);
s32 func_089CAE8C(s32);
void func_089CB2AC(s32 *, T089CB0E8 *);
void func_089CB214(s32 *, T089CB0E8 *, s32);

void func_089CB744(B *arg0, s32 arg1, C *arg2, s32 arg3) {
    s32 temp0, temp1;
    V_089CA8A0 temp2;
    s32 temp4, temp3;
    f32 temp6, temp9, temp11, temp12;
    temp3 = ((A *)arg0->unk_12C.unk_04)->unk_08;
    func_089CB2AC(&temp1, &arg0->unk_12C);
    func_089CB214(&temp0, &arg0->unk_12C, temp1);
    temp4 = 0;
    if (arg3 == 0) {
        temp4 = 0x22;
    } else if (arg3 < 3) {
        temp4 = 0x21;
    } else if (arg3 < 5) {
        temp6 = (f32)func_089B5464(func_088586E8());
        temp6 /= 4294967296.0f;
        temp9 = 100.0f * temp6;
        temp6 = 0.0f;
        temp6 += temp9;
        temp4 = arg0->unk_180[(u32)temp6];
    }
    temp12 = arg2->unk_34;
    temp11 = arg2->unk_30;
    temp2.unk_00 = temp11;
    temp2.unk_04 = temp12;
    func_089CA8A0((T_089CA8A0 *)temp3, (u8 *)func_08945908((s32 *)arg0, temp4), &temp2);
    arg0->unk_154.func_04((N *)func_089CAE8C(temp3));
    func_08945F18(arg0->unk_08, temp4, 1);
    func_08878864(func_089B53D8(func_088586E8()), (void *)0x1B0105, 2, 1.0f, 0.0f, 0.0f);
}

}

