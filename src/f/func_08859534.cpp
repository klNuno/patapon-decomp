#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    char unk_08[0x104];
    u8 unk_10C;
    u8 pad_10D[3];
    u8 unk_110[0x14];
    u8 unk_124;
    u8 pad_125[3];
    u8 unk_128[0x14];
} E_08859534;

typedef struct {
    u8 pad_00[0x13C4];
    E_08859534 *unk_13C4;
    s32 unk_13C8;
} S_08859534;

extern u8 D_08A872A4[];
extern char D_089F8928[];
extern char D_089F8930[];
extern char D_089F8958[];
s32 func_08822BDC(void *, char *, s32);
void func_088591C0(void);
void func_088592C4(char *, char *, s32);
s32 sceKernelLoadModule(const char *, s32, void *);
s32 sceKernelStartModule(s32, u32, void *, s32 *, void *);
s32 sceKernelDelayThreadCB(u32);

void func_08859534(S_08859534 *arg0) {
    E_08859534 *p;
    void *a;
    void *b;
    char *name;
    s32 id;
    s32 r;

    D_08A872A4[0] = 0;
    p = arg0->unk_13C4;
    E_08859534 *&data = arg0->unk_13C4;
    if ((u32)p != (u32)(p + arg0->unk_13C8)) {
        s32 &n = arg0->unk_13C8;
        do {
            if (p->unk_00 == -1) {
                a = NULL;
                b = NULL;
                if (p->unk_10C != 0) {
                    a = p->unk_110;
                }
                if (p->unk_124 != 0) {
                    b = p->unk_128;
                }
                name = p->unk_08;
                if (func_08822BDC(name, D_089F8928, 4) == 0) {
                    func_088591C0();
                }
                while ((id = sceKernelLoadModule(name, 0, a)) < 0) {
                    func_088592C4(D_089F8930, name, id);
                    sceKernelDelayThreadCB(1000);
                }
                while ((r = sceKernelStartModule(id, 0, NULL, NULL, b)) < 0) {
                    func_088592C4(D_089F8958, name, r);
                    sceKernelDelayThreadCB(1000);
                }
                p->unk_00 = id;
            }
            p++;
        } while (p != data + n);
    }
}

}
