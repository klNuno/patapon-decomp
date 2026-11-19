#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x2C];
    s32 unk_2C;
    u8 pad_30[0x2E390];
    u8 unk_2E3C0[1];
} T1;

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} S_089C2CA8_3B0;

typedef struct {
    T1 *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
    S_089C2CA8_3B0 *unk_164;
    u8 unk_168[0xB18];
    s32 unk_C80, unk_C84, unk_C88;
    u8 pad_C8C[4];
    s32 unk_C90;
    u8 unk_C94;
    u8 pad_C95[7];
    u8 unk_C9C;
    u8 pad_C9D[3];
    s32 unk_CA0, unk_CA4;
    u8 pad_CA8[0xC];
    s32 *unk_CB4;
    s32 unk_CB8;
} T3;

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    union { f32 unk_54; u32 unk_54_as_u32; };
    u8 pad_58[4];
    f32 unk_5C;
} T4;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} T5;

class T6 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual s32 unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28(s32 *, f32 *, s32 *);
};

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} T7;

typedef struct {
    f32 unk_00[4][4];
} Mtx;

extern s32 func_088586E8(void);
extern int func_08864E80(char *, char *);
void func_08866464(Mtx *, void *, void *);
extern s32 func_0887ED88(s32, s32);
void func_088D45F4(S_089C2CA8_3B0 *);
void func_08956380(void *, s32, s32);
void func_08958374(s32, f32);
extern void *func_08958954(u8 *);
void func_0897C3F4(f32, void *, s32);
extern s32 func_08985828(s32, s32);
void func_0898584C(T3 *, s32);
void func_0898ABB8(f32, s32, s32, u8);
u8 *func_089B53D8(s32);
s32 func_089BF024(T6 *);
s32 func_089BF02C(T6 *);
T7 *func_089BF034(T6 *);
T5 *func_089BF03C(T6 *);
s32 func_089BF044(T6 *);
s32 func_089BF04C(T6 *);
s32 func_089C8794(T3 *, s32);
void func_089C8954(T3 *, s32);
s32 func_089C8BA0(T3 *);
void func_089C8D54(s32 *, s32 *, s32 *);
void func_089CD4B0(void *, s32);
void func_089CD744(void *, T3 *, s32);
void func_089CDBE8(void *);
s32 func_089CDCE4(void *, s32);
extern s32 D_089F33B8[];
extern s32 D_089F33C0[];
extern s32 D_08A097B0[];

void func_089C77AC(T3 *arg0, s32 arg1) {
    struct {
        Mtx unk_00;
        u8 pad_40[4];
        s32 unk_44;
        f32 unk_48;
        s32 unk_4C;
    } sp30;
    T6 *temp_s2 = (T6 *)func_08958954(arg0->unk_00->unk_2E3C0);
    func_08866464(&sp30.unk_00, ((T4 *)func_08985828((s32)arg0, 0)), (void *)D_08A097B0[0]);
    func_08864E80((char *)func_08985828((s32)arg0, 3), (char *)&sp30);
    if (temp_s2 != NULL) {
        s32 temp_v1 = arg0->unk_C80 + 1;
        arg0->unk_C80 = temp_v1;
        if (temp_v1 > 0) {
            s32 temp_v1_2 = arg0->unk_C90;
            if (temp_v1_2 != -1) {
                s32 temp_v1_3 = temp_v1_2 + 1;
                arg0->unk_C90 = temp_v1_3;
                f32 temp_f20 = (f32) (temp_v1_3 % 30);
                T4 *temp_v0 = ((T4 *)func_08985828((s32)arg0, 1));
                if ((temp_v0->unk_5C <= temp_v0->unk_54) && ((((T4 *)func_08985828((s32)arg0, 1))->unk_4C == 0x11) || (((T4 *)func_08985828((s32)arg0, 1))->unk_4C == 0x13))) {
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 1), 2, 1);
                    ((T4 *)func_08985828((s32)arg0, 1))->unk_54 = temp_f20;
                }
                T4 *temp_v0_2 = ((T4 *)func_08985828((s32)arg0, 2));
                if ((temp_v0_2->unk_5C <= temp_v0_2->unk_54) && (((T4 *)func_08985828((s32)arg0, 2))->unk_4C == 0x12)) {
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 2), 2, 1);
                    ((T4 *)func_08985828((s32)arg0, 2))->unk_54 = temp_f20;
                }
                if ((((T4 *)func_08985828((s32)arg0, 1))->unk_4C == 2) && (((T4 *)func_08985828((s32)arg0, 2))->unk_4C == 2)) {
                    arg0->unk_C90 = -1;
                }
            }
            s32 temp_s1 = func_089BF044(temp_s2);
            T5 *temp_v0_3 = func_089BF03C(temp_s2);
            if ((temp_v0_3 != NULL) && (temp_v0_3->unk_04 == 4)) {
                if (((T4 *)func_08985828((s32)arg0, 0))->unk_4C != 8) {
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 0), 8, 0);
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 1), 8, 0);
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 2), 8, 0);
                }
            } else if ((temp_s1 != arg0->unk_C84) && (temp_v0_3 != NULL) && (temp_v0_3->unk_04 != 1)) {
                if (((T4 *)func_08985828((s32)arg0, 0))->unk_4C == 8) {
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 0), 2, 1);
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 1), 2, 1);
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 2), 2, 1);
                }
                if (((T4 *)func_08985828((s32)arg0, 3))->unk_4C == 1) {
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 3), 3, 0);
                    func_0898ABB8(0.66f, func_08985828((s32)arg0, 3), 4, 1);
                }
                arg0->unk_C84 = temp_s1;
                arg0->unk_C88 = -1;
            }
            s32 temp_v0_4 = func_089BF04C(temp_s2);
            if (temp_v0_4 != arg0->unk_C88) {
                arg0->unk_C88 = temp_v0_4;
                if (temp_v0_3 != NULL) {
                    func_089C8954(arg0, temp_v0_3->unk_04);
                }
            }
            T7 *temp_v0_5 = func_089BF034(temp_s2);
            if ((temp_v0_5 != NULL) && (func_089C8794(arg0, temp_v0_5->unk_08) != 0)) {
                arg0->unk_CA4 = (s32) (arg0->unk_CA4 + 1);
            }
            if ((arg0->unk_CA4 > 0) && (func_089C8BA0(arg0) != 0)) {
                arg0->unk_CA4 = (s32) (arg0->unk_CA4 - 1);
                s32 *volatile *temp = &arg0->unk_CB4;
                func_089CD744(arg0->unk_168, arg0, **temp);
                s32 temp2 = arg0->unk_CB8;
                s32 *temp_a0 = arg0->unk_CB4;
                func_089C8D54(temp_a0, temp_a0 + 1, *temp + temp2);
                arg0->unk_CB8 = (s32) (arg0->unk_CB8 - 1);
            }
            s32 temp_v0_6 = func_089CDCE4(arg0->unk_168, arg1);
            if (temp_v0_6 != -1) {
                arg0->unk_C90 = (s32) (f32) (s32) ((T4 *)func_08985828((s32)arg0, 0))->unk_54;
                if (temp_v0_6 == 4) {
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 0), 0x11, 0);
                    func_0898ABB8(1.375f, func_08985828((s32)arg0, 0), 2, 1);
                    ((T4 *)func_08985828((s32)arg0, 9))->unk_54_as_u32 = 0;
                    ((T4 *)func_08985828((s32)arg0, 0xB))->unk_54_as_u32 = 0;
                } else {
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 0), 0x12, 0);
                    func_0898ABB8(1.375f, func_08985828((s32)arg0, 0), 2, 1);
                    ((T4 *)func_08985828((s32)arg0, 0xA))->unk_54_as_u32 = 0;
                }
            }
            if (func_0887ED88(arg0->unk_00->unk_2C, 0x2000) != 0) {
                if (func_089BF024(temp_s2) != 0) {
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 3), D_089F33B8[arg0->unk_CA0], 0);
                    func_0898ABB8(0.66f, func_08985828((s32)arg0, 3), 4, 1);
                    func_089CDBE8(arg0->unk_168);
                } else if ((func_089BF02C(temp_s2) != 0) && (arg0->unk_C94 == 0)) {
                    func_0898ABB8(0.0f, func_08985828((s32)arg0, 3), D_089F33C0[arg0->unk_CA0], 0);
                    func_0898ABB8(0.66f, func_08985828((s32)arg0, 3), 4, 1);
                }
            }
            if (temp_s2->unk_14() != 0) {
                sp30.unk_4C = 0;
                sp30.unk_48 = 0.0f;
                sp30.unk_44 = 0;
                temp_s2->unk_28(&sp30.unk_4C, &sp30.unk_48, &sp30.unk_44);
                if (sp30.unk_48 == 1.0f) {
                    arg0->unk_C9C = 1;
                    func_0898584C(arg0, 0);
                    func_089CD4B0(arg0->unk_168, 0);
                } else if (sp30.unk_48 >= 0.9f) {
                    func_0898584C(arg0, 0);
                    func_089CD4B0(arg0->unk_168, 1);
                } else if (sp30.unk_48 >= 0.75f) {
                    func_0898584C(arg0, 1);
                    func_089CD4B0(arg0->unk_168, 2);
                } else {
                    func_0898584C(arg0, 2);
                    func_089CD4B0(arg0->unk_168, 3);
                }
                S_089C2CA8_3B0 *temp_a0_2 = arg0->unk_164;
                if (temp_a0_2 != NULL) {
                    func_088D45F4(temp_a0_2);
                    arg0->unk_164->unk_8D0 = 0;
                    arg0->unk_164 = NULL;
                }
                func_08956380(arg0->unk_00->unk_2E3C0, 0, 0);
                func_0897C3F4(1.0f, func_089B53D8(func_088586E8()) + 0x14, 0);
                func_08958374((s32)arg0->unk_00->unk_2E3C0, 1.0f);
                arg0->unk_160 = 3;
            }
        }
    }
}

}
