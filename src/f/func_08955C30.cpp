#include "common.h"

extern "C" {
class S {
public:
    u8 pad_00[0x4C];
    virtual void unk_08(s32);
};

class U {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

typedef struct {
    u8 pad_00[8];
    u8 unk_08[0x48];
    U unk_50;
    u8 pad_54[0xA9C];
    u8 unk_AF0[0x1260];
    char unk_1D50[0x2600];
    u8 unk_4350[0x70];
    u8 unk_43C0[0x1A2F0];
    u8 unk_1E6B0[0x1960];
    u8 unk_20010[0x2050];
    u8 unk_22060[0x12C];
    S *unk_2218C;
    S *unk_22190;
    S *unk_22194;
    S *unk_22198;
} Obj_08955104;

typedef struct T08958BB8_S T08958BB8_S;

extern s32 func_088586E8(void);
void func_088792C0(s32, f32);
void func_0887A88C(void *);
void func_0894B5C8(void *);
void func_0894C1AC(void *);
void func_0894DA9C(void *);
void func_08950790(void *);
extern void func_08950BBC(char *, s32);
void func_0895307C(void *);
void func_089541F8(void *);
void func_089555BC(Obj_08955104 *);
void func_08956E50(s32, f32);
void func_089570E8(void *, void *);
void func_08958D74(T08958BB8_S *);
s32 func_089B53D8(s32);

static inline void unk_00(S *arg0) {
    if (arg0 != NULL) {
        arg0->unk_08(1);
    }
}

void func_08955C30(Obj_08955104 *arg0) {
    if (arg0->unk_2218C != NULL) {
        unk_00(arg0->unk_2218C);
        arg0->unk_2218C = NULL;
    }
    if (arg0->unk_22190 != NULL) {
        unk_00(arg0->unk_22190);
        arg0->unk_22190 = NULL;
    }
    if (arg0->unk_22194 != NULL) {
        unk_00(arg0->unk_22194);
        arg0->unk_22194 = NULL;
    }
    if (arg0->unk_22198 != NULL) {
        unk_00(arg0->unk_22198);
        arg0->unk_22198 = NULL;
    }
    func_089541F8(arg0->unk_1E6B0);
    func_08956E50((s32)arg0, 0.0f);
    func_088792C0(func_089B53D8(func_088586E8()), -1.0f);
    func_0894DA9C(arg0->unk_43C0);
    func_08950BBC(arg0->unk_1D50, (s32)arg0);
    func_08950790(arg0->unk_1D50);
    func_08958D74((T08958BB8_S *)arg0->unk_4350);
    func_089570E8(arg0, arg0->unk_22060);
    func_0894B5C8(arg0->unk_22060);
    func_0894C1AC(arg0->unk_20010);
    arg0->unk_50.unk_14();
    func_0895307C(arg0->unk_AF0);
    func_0887A88C(arg0->unk_08);
    func_089555BC(arg0);
}
}
