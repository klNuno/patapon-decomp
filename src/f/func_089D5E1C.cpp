#include "common.h"

extern "C" {

class A_089D5E1C {
public:
    virtual void *v08(s32, s32);
};

typedef struct {
    u8 pad_00[0x73];
    u8 unk_73;
} D_089D5E1C_B;

typedef struct {
    u8 pad_00[0x4];
    D_089D5E1C_B *unk_04;
} D_089D5E1C_A;

typedef struct {
    u8 pad_00[0x2460];
    u8 unk_2460[0x4];
} G_089D5E1C_B;

typedef struct {
    u8 pad_00[0x42820];
    G_089D5E1C_B *unk_42820;
} G_089D5E1C;

typedef struct {
    A_089D5E1C *unk_00;
    s32 unk_04;
    u8 pad_08[0x4];
    u8 unk_0C[0x4];
    void *unk_10[2];
    s32 unk_18;
    u8 pad_1C[0x11780];
    u8 unk_1179C;
} S_089D5E1C;

extern G_089D5E1C *D_08AD1E28[];
extern char *D_08A0A230[];
void func_0881F5C0(void *, s32, s32);
void func_088226BC(char *, char *, ...);
void func_089D5F4C(S_089D5E1C *);
void func_0893F3C8(void *, A_089D5E1C *);
s32 func_089A8B20(void *, s32);
void func_0893F4C0(void *, char *, s32, s32, s32);
void *func_088A88C0(void);
D_089D5E1C_A *func_0884E644(void *);

void func_089D5E1C(S_089D5E1C *arg0) {
    char buf[0x80];
    u32 i;
    void *p;

    if (arg0->unk_10[0] != NULL || arg0->unk_10[1] != NULL) {
        func_089D5F4C(arg0);
    }
    func_0893F3C8(arg0->unk_0C, arg0->unk_00);
    for (i = 0; i < 2; i++) {
        p = arg0->unk_00->v08(0x88000, 0x40);
        arg0->unk_10[i] = p;
        if (p != NULL) {
            func_0881F5C0(p, 0, 0x88000);
        }
    }
    arg0->unk_18 = 0;
    func_088226BC(buf, D_08A0A230[0], func_089A8B20((D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_2460, 2));
    func_0893F4C0(arg0->unk_0C, buf, 0x4000, 0x10, 0x200);
    arg0->unk_04 = 1;
    arg0->unk_1179C = (func_0884E644(func_088A88C0())->unk_04->unk_73 & 1) != 0;
}

}
