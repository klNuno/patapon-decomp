#include "common.h"

extern "C" {

void func_0881F5C0(void *, s32, s32);
void func_0895C72C(void *);
void func_0895C8D8(void *);
s32 func_0884B6FC(s32, s32, void *, u32);
struct X_0895C528 {
    s32 unk_00;
    X_0895C528(const X_0895C528 &o) : unk_00(o.unk_00) {}
};

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} Y_0895C528;

extern Y_0895C528 D_08A04D0C;

inline void *operator new(unsigned int, void *p) { return p; }

class A_0895C528 {
public:
    virtual void *alloc(s32 size, s32 align);
    virtual void v0C();
    virtual void free(void *p);
};

template <class T> struct V_0895C528 {
    T *unk_00;
    u32 unk_04;
    void push(const T &v) {
        new (&unk_00[unk_04]) T(v);
        unk_04++;
    }
};

typedef struct {
    u8 pad_00[0x18];
    A_0895C528 *unk_18;
    u32 unk_1C;
    s32 unk_20;
    u8 pad_24[0x18];
    void *unk_3C[2];
    u8 pad_44[0x44];
    V_0895C528<void *> unk_88;
    u8 pad_90[0x44];
    V_0895C528<u32> unk_D4;
    s32 unk_DC;
    s32 unk_E0;
    s32 unk_E4;
    void *unk_E8;
} S_0895C528;

s32 func_0895C528(S_0895C528 *arg0, A_0895C528 *arg1, s32 arg2, u32 arg3, s32 arg4) {
    u32 i;
    u32 j;
    void *p;

    func_0895C72C(arg0);
    arg0->unk_18 = arg1;
    arg0->unk_1C = arg3;
    arg0->unk_20 = arg2;
    arg0->unk_DC = arg4;
    arg0->unk_E0 = 0;
    func_0895C8D8(arg0);
    arg0->unk_E8 = arg0->unk_18->alloc(arg0->unk_20, 4);
    if (arg0->unk_E8 == NULL) {
        return 0;
    }
    func_0881F5C0(arg0->unk_E8, 0, arg0->unk_20);
    arg0->unk_E4 = func_0884B6FC(-1, 2, arg0->unk_E8, arg0->unk_20);
    if (arg0->unk_E4 < 0) {
        arg1->free(arg0->unk_E8);
        arg0->unk_E8 = NULL;
        return 0;
    }
    for (i = 0; i < arg0->unk_1C; i++) {
        p = arg0->unk_18->alloc(arg0->unk_20, 0x40);
        if (p == NULL) {
            return 0;
        }
        func_0881F5C0(p, 0, arg0->unk_20);
        arg0->unk_88.push(p);
    }
    for (i = 0; i < arg0->unk_1C; i++) {
        arg0->unk_D4.push(D_08A04D0C.unk_00);
    }
    for (j = 0; j < 2; j++) {
        arg0->unk_3C[j] = arg0->unk_18->alloc(arg0->unk_20, 4);
        if (arg0->unk_3C[j] == NULL) {
            return 0;
        }
        func_0881F5C0(arg0->unk_3C[j], 0, arg0->unk_20);
    }
    return 1;
}

}
