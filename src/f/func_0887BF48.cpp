#include "common.h"

extern "C" {

typedef struct Obj_089794B0 Obj_089794B0;

class Unk_0887BF48_Sub {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct Unk_0887BF48 {
    u8 pad_00[0x4];
    void *unk_04;
    u8 pad_08[0x8];
    u8 unk_10[0x5C70];
    Unk_0887BF48_Sub unk_5C80;
} Unk_0887BF48;

extern void func_08865FEC(s32, s32, s32);
void func_08866690(void *);
s32 func_08868CAC(Obj_089794B0 *, s32, s32, s32);
extern void func_0887BFD4(char *, s32, s32);
extern s32 D_089F97A4[];
extern Obj_089794B0 *D_08AD1E28[];

void func_0887BF48(Unk_0887BF48 *arg0) {
    func_08866690(arg0->unk_10);
    arg0->unk_04 = arg0->unk_10;
    func_08865FEC((s32)&arg0->unk_5C80, func_08868CAC(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 1, D_089F97A4[0], 1), 0);
    arg0->unk_5C80.unk_14(0, 1);
    func_0887BFD4((char *)arg0, 0, 0);
}

}
