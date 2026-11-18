#include "common.h"

extern "C" {

class S1 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    u8 pad_00[0x2434];
    u8 unk_2434;
    u8 pad_2435[3];
    S1 unk_2438;
} S0;

typedef struct {
    f32 unk_00[2];
} S2;

typedef struct {
    S2 unk_00;
    S2 unk_08;
    S2 unk_10;
    S2 unk_18;
} S3;

extern S2 D_08A006D8[];
extern S2 D_08A006E0[];
extern S2 D_08A006E8[];
extern S2 D_08A006F0[];
extern void *D_08A8812C[];
void func_08855354(char *);
s32 func_08860820(void *, s32);
void func_088651A4(S3 *, char *, s32, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
void func_08915DFC(S0 *, s32);

void func_089160A0(S0 *arg0) {
    S3 a;
    char b[0x50];
    void *p;

    if (arg0->unk_2434 == 0) {
        func_08915DFC(arg0, 1);
        return;
    }
    arg0->unk_2438.unk_14(0, 0);
    a.unk_00 = D_08A006D8[0];
    a.unk_08 = D_08A006E0[0];
    a.unk_10 = D_08A006E8[0];
    a.unk_18 = D_08A006F0[0];
    func_08855354(b);
    func_0886575C(0, 0, 1);
    func_088651A4(&a, b, 0, 0, 1);
    func_08865870();
    p = D_08A8812C[0];
    func_08915DFC(arg0, func_08860820(p != NULL ? p : NULL, 0));
}

}
