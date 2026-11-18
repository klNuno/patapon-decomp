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

typedef struct {
    u8 pad_00[0x718];
    s32 unk_718;
    s32 unk_71C;
} T1;

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

typedef struct {
    T unk_00;
    s32 unk_5C;
    T1 unk_60;
    u8 unk_780;
} S;

void func_089B3450(T089B3450 *, s32, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887EDA8(s32, s32);
void func_088F51E4(s32);
void func_088F5224(s32);
void func_0891259C(T1 *, s32, void *);
s32 func_089127D0(char *);

void func_089AEF00(S *arg0, s32 arg1, void *arg2) {
    func_089B3450((T089B3450 *)arg0, arg1, (s32)arg2);
    if ((u8)arg0->unk_00.unk_1C() != 0) {
        if (arg0->unk_780 == 1) {
            if (func_089127D0((char *)&arg0->unk_60) == 0) {
                func_088F51E4(arg0->unk_5C);
                func_08878864(func_089B53D8(func_088586E8()), 0, 2, 1.0f, 0.0f, 0.0f);
            }
            if (func_089127D0((char *)&arg0->unk_60) == 1) {
                func_088F5224(arg0->unk_5C);
                arg0->unk_00.unk_20(0);
                func_08878864(func_089B53D8(func_088586E8()), 2, 2, 1.0f, 0.0f, 0.0f);
            }
            arg0->unk_780 = 0;
        } else {
            func_0891259C(&arg0->unk_60, arg1, arg2);
            if (func_0887EDA8((s32)arg2, 0x4000) != 0) {
                arg0->unk_780 = 1;
            }
        }
    }
}

}
