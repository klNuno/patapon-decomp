#include "common.h"

extern "C" {

class E_088D9680 {
public:
    virtual void v0(s32);
    u8 pad_04[0x4B0];
};

typedef struct {
    u8 pad_00[0x214];
    u32 *unk_214;
    u32 unk_218;
} M_088D9680;

typedef struct {
    u8 pad_00[0x25EC4];
    E_088D9680 *unk_25EC4;
    u32 unk_25EC8;
    M_088D9680 unk_25ECC;
    void *unk_260E8;
} S_088D9680;

void func_0880416C(void *);
extern u8 D_08A46380[];

S_088D9680 *func_088D9680(S_088D9680 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_260E8 = D_08A46380;
        if (&arg0->unk_25ECC != NULL) {
            u32 *p = arg0->unk_25ECC.unk_214;
            u32 *&data = arg0->unk_25ECC.unk_214;
            if (p != *(u32 **)&data + arg0->unk_25ECC.unk_218) {
                u32 &size = arg0->unk_25ECC.unk_218;
                do {
                    p++;
                } while (p != data + size);
            }
            arg0->unk_25ECC.unk_218 = 0;
        }
        if (arg0 != NULL) {
            E_088D9680 *q = arg0->unk_25EC4;
            E_088D9680 *&data2 = arg0->unk_25EC4;
            if (q != data2 + arg0->unk_25EC8) {
                u32 &size2 = arg0->unk_25EC8;
                do {
                    q->v0(-1);
                    q++;
                } while (q != data2 + size2);
            }
            arg0->unk_25EC8 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
