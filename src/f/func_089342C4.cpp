#include "common.h"

extern "C" {

class C_089342C4 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C(s32);
};

typedef struct {
    s32 unk_00;
    C_089342C4 *unk_04;
    s32 unk_08;
    u8 pad_0C[0x4];
    u8 unk_10[0x80];
    u8 unk_90;
    u8 unk_91;
} Obj_089342C4;

extern void *D_08AD1E28[];
extern s32 D_08A02F10[];
extern char D_08A02F14[];

C_089342C4 *func_08868D9C(void *, s32, char *, s32);
void func_088AEF6C(void *, s32);
void func_088AF260(void *, s32);

Obj_089342C4 *func_089342C4(Obj_089342C4 *arg0) {
    arg0->unk_00 = 0;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    func_088AEF6C(arg0->unk_10, 1);
    arg0->unk_90 = 1;
    arg0->unk_91 = 1;
    func_088AF260(arg0->unk_10, 1);
    arg0->unk_04 = func_08868D9C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 1, D_08A02F14, 1);
    arg0->unk_08 = arg0->unk_04->unk_1C(D_08A02F10[0]);
    return arg0;
}

}
