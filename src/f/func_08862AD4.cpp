#include "common.h"

extern "C" {

class O08862AD4 {
public:
    u8 pad_00[0x1C];
    virtual void v08(u8 *, s32, s32, s32);
};

typedef struct {
    u8 pad_00[0xAC];
    u8 unk_AC[0x78];
    s32 unk_124;
    u8 pad_128[4];
    s32 unk_12C;
    u8 pad_130[4];
    s32 unk_134;
    u8 pad_138[0x10];
    O08862AD4 unk_148;
} W08862AD4;

typedef struct {
    u8 unk_00[0x84];
    s32 *unk_84;
    s32 unk_88;
    void init() {
        unk_88 = 0;
        unk_84 = (s32 *)&unk_00[(u32)unk_00 & 3];
    }
} V08862AD4;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[4];
    W08862AD4 *unk_28;
    u8 pad_2C[0xC];
    s32 unk_38;
    u8 pad_3C[0xAC];
    u8 *unk_E8;
} T08862AD4;

extern int sceKernelWaitSemaCB(s32, s32, s32);
extern int sceKernelSignalSema(s32, s32);
extern int sceKernelSetEventFlag(s32, s32);
void func_088626A4(T08862AD4 *);

void func_08862AD4(T08862AD4 *arg0) {
    W08862AD4 *w;

    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    w = arg0->unk_28;
    if (w != NULL) {
        V08862AD4 c;
        s32 *p;

        c.init();
        arg0->unk_E8 = c.unk_00;
        w->unk_148.v08(w->unk_AC, w->unk_124, w->unk_12C, w->unk_134);
        arg0->unk_28 = NULL;
        func_088626A4(arg0);
        sceKernelSetEventFlag(arg0->unk_20, 1);
        {
            s32 *base = c.unk_84;
            p = *(s32 *volatile *)&c.unk_84;
            if (p != base + c.unk_88) {
                s32 *end = base + *(volatile s32 *)&c.unk_88;
                do {
                    p++;
                } while (p != end);
            }
        }
        c.unk_88 = 0;
    }
    sceKernelSignalSema(arg0->unk_38, 1);
}

}
