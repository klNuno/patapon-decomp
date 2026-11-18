#include "common.h"

extern "C" {

class E_088D8AF8 {
public:
    u8 pad_00[0x109AC];
    virtual void v0(s32);
};

typedef struct {
    u8 pad_00[0x30];
    u32 *unk_30;
    u32 unk_34;
} M_088D8AF8;

typedef struct {
    u8 pad_00[0x84D90];
    E_088D8AF8 *unk_84D90;
    u32 unk_84D94;
    M_088D8AF8 unk_84D98;
    void *unk_84DD0;
} S_088D8AF8;

void func_0880416C(void *);
extern u8 D_08A463EC[];

S_088D8AF8 *func_088D8AF8(S_088D8AF8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_84DD0 = D_08A463EC;
        if (&arg0->unk_84D98 != NULL) {
            u32 *p = arg0->unk_84D98.unk_30;
            u32 *&data = arg0->unk_84D98.unk_30;
            if (p != *(u32 **)&data + arg0->unk_84D98.unk_34) {
                u32 &size = arg0->unk_84D98.unk_34;
                do {
                    p++;
                } while (p != data + size);
            }
            arg0->unk_84D98.unk_34 = 0;
        }
        if (arg0 != NULL) {
            E_088D8AF8 *q = arg0->unk_84D90;
            E_088D8AF8 *&data2 = arg0->unk_84D90;
            if (q != data2 + arg0->unk_84D94) {
                u32 &size2 = arg0->unk_84D94;
                do {
                    q->v0(-1);
                    q++;
                } while (q != data2 + size2);
            }
            arg0->unk_84D94 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
