#include "common.h"

extern "C" {

class E_089D21B8 {
public:
    u8 pad_00[0x80];

    virtual void vf0(s32);
    u8 pad_84[0xC];
};

typedef struct {
    u8 pad_00[0x2E0];
    E_089D21B8 *unk_2E0;
    u32 unk_2E4;
    u8 pad_2E8[0x8];
} M_089D21B8;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x11A34];
    M_089D21B8 unk_11A40;
    M_089D21B8 unk_11D30;
    u8 unk_12020[0x90];
    u8 unk_120B0[0x90];
    u8 unk_12140[0x90];
} Obj_089D21B8;

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_089CE3C0(void *, s32);
void func_089D23B0(Obj_089D21B8 *);

Obj_089D21B8 *func_089D21B8(Obj_089D21B8 *arg0, s16 arg1) {
    E_089D21B8 *p;

    if (arg0 != NULL) {
        func_089D23B0(arg0);
        func_08865F78(arg0->unk_12140, -1);
        func_08865F78(arg0->unk_120B0, -1);
        func_08865F78(arg0->unk_12020, -1);
        if (&arg0->unk_11D30 != NULL) {
            p = arg0->unk_11D30.unk_2E0;
            E_089D21B8 *&data = arg0->unk_11D30.unk_2E0;
            if (p != data + arg0->unk_11D30.unk_2E4) {
                u32 &size = arg0->unk_11D30.unk_2E4;
                do {
                    p->vf0(-1);
                    p++;
                } while (p != data + size);
            }
            arg0->unk_11D30.unk_2E4 = 0;
        }
        if (&arg0->unk_11A40 != NULL) {
            p = arg0->unk_11A40.unk_2E0;
            E_089D21B8 *&data = arg0->unk_11A40.unk_2E0;
            if (p != data + arg0->unk_11A40.unk_2E4) {
                u32 &size = arg0->unk_11A40.unk_2E4;
                do {
                    p->vf0(-1);
                    p++;
                } while (p != data + size);
            }
            arg0->unk_11A40.unk_2E4 = 0;
        }
        func_089CE3C0(arg0->unk_0C, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
