#include "common.h"

extern "C" {

class C_0893CC10 {
public:
    virtual void *unk_08(s32, s32);
};

typedef struct {
    C_0893CC10 *unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    u8 unk_10[0x4];
    void *unk_14[2];
    s32 unk_1C;
} S_0893CC10;

typedef struct {
    u8 pad_00[0x2460];
    u8 unk_2460[0x4];
} Sub_0893CC10;

typedef struct {
    u8 pad_00[0x42820];
    Sub_0893CC10 *unk_42820;
} G_0893CC10;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x7C];
} B_0893CC10;

extern G_0893CC10 *D_08AD1E28[];
extern char *D_08A039A8[];

void func_0893CD18(S_0893CC10 *);
void func_0893F3C8(void *, C_0893CC10 *);
void func_0881F5C0(void *, s32, s32);
s32 func_089A8B20(void *, s32);
void func_088226BC(B_0893CC10 *, char *, s32);
void func_0893F4C0(void *, B_0893CC10 *, s32, s32, s32);

void func_0893CC10(S_0893CC10 *arg0) {
    B_0893CC10 buf;
    G_0893CC10 *g;
    u32 i;
    void *p;

    if (arg0->unk_14[0] != 0 || arg0->unk_14[1] != 0) {
        func_0893CD18(arg0);
    }
    func_0893F3C8(arg0->unk_10, arg0->unk_00);
    for (i = 0; i < 2; i++) {
        p = arg0->unk_00->unk_08(0x88000, 0x40);
        arg0->unk_14[i] = p;
        if (p != NULL) {
            func_0881F5C0(p, 0, 0x88000);
        }
    }
    arg0->unk_1C = 0;
    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_088226BC(&buf, D_08A039A8[0], func_089A8B20(g->unk_42820->unk_2460, 2));
    func_0893F4C0(arg0->unk_10, &buf, 0x4000, 0x10, 0x200);
    arg0->unk_04 = 1;
}

}
