#include "common.h"

extern "C" {

class C089B3450;

typedef struct {
    C089B3450 **unk_00;
    u32 unk_04;
} V089B3450;

typedef struct {
    u8 pad_00[0x48];
    V089B3450 unk_48;
} T089B3450;

class T {
public:
    u8 pad_00[0x58];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
    virtual void unk_20(s32);
};

class U {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(s32);
};

typedef struct {
    T unk_00;
    u8 pad_5C[0x784];
    U unk_7E0;
    u8 pad_7E4[0x6CC];
    s32 unk_EB0;
    s32 unk_EB4;
} S;

extern s32 D_08A083F8[];

void func_089B3450(T089B3450 *, s32, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887EDA8(s32, s32);
s32 func_0887EDB8(void *, s32);

static inline const s32 &func_089AE830_1(const s32 &a, const s32 &b) {
    return a < b ? b : a;
}

static inline const s32 &func_089AE830_2(const s32 &a, const s32 &b) {
    if (a < b) {
        return a;
    }
    return b;
}

void func_089AE830(S *arg0, s32 arg1, void *arg2) {
    func_089B3450((T089B3450 *)arg0, arg1, (s32)arg2);
    arg0->unk_7E0.unk_18(arg1);
    if ((u8)arg0->unk_00.unk_1C() != 0) {
        if (func_0887EDB8(arg2, 0x40) != 0) {
            arg0->unk_EB0 = func_089AE830_1(arg0->unk_EB0 - 1, arg0->unk_EB4);
        }
        if (func_0887EDB8(arg2, 0x10) != 0) {
            arg0->unk_EB0 = func_089AE830_2(D_08A083F8[0], arg0->unk_EB0 + 1);
        }
        if (func_0887EDA8((s32)arg2, 0x4000) != 0) {
            arg0->unk_EB0 = 0;
            arg0->unk_00.unk_20(0);
            func_08878864(func_089B53D8(func_088586E8()), 2, 2, 1.0f, 0.0f, 0.0f);
        }
    }
}

}
