#include "common.h"

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
    f32 unk_6C;
    u8 pad_70[4];
    s32 unk_74;
} O_088D7A84;

extern char D_089FBFE0[];
extern char D_089FBFF0[];
extern char D_089FC008[];
extern char D_089FBEEC[];
extern char D_089FC024[];
extern s32 D_089FBFC4[];
extern u8 D_08AD7B20[];

void func_088D78C8(void);
void *func_0885CB00(O_088D7A84 *, char *, void *, void *, s32, s32, s32, s32, s32);
void *func_0885C750(O_088D7A84 *, char *, void *, void *, s32, s32, s32, s32, s32);

s32 func_088D7A84(O_088D7A84 *arg0) {
    s32 i;

    arg0->unk_74 = 0;
    arg0->unk_6C = 0.5f;
    arg0->unk_68 = 0x1E;
    func_0885CB00(arg0, D_089FBFE0, NULL, NULL, 0, 0, 0x2710, 0xFF00FFFF, 0xCC22CCCC);
    func_0885CB00(arg0, D_089FBFF0, NULL, NULL, 0, 0, 0x2710, 0xFF00FFFF, 0xCC22CCCC);
    func_0885C750(arg0, D_089FC008, D_08AD7B20, NULL, 0, 0, 0x2710, 0xFF00FFFF, 0xCC22CCCC);
    func_0885CB00(arg0, D_089FBEEC, NULL, NULL, 0, 0, 0x2710, 0xFF00FFFF, 0xCC22CCCC);
    func_0885CB00(arg0, D_089FBEEC, NULL, NULL, 0, 0, 0x2710, 0xFF00FFFF, 0xCC22CCCC);
    func_0885CB00(arg0, D_089FC024, NULL, NULL, 0, 0, 0x2710, 0xFF00FFFF, 0xCC22CCCC);
    for (i = 0; i < 7; i++) {
        func_0885CB00(arg0, D_089FBEEC, &D_089FBFC4[i], func_088D78C8, 0, 0, 0x2710, 0xFF00FFFF, 0xCC22CCCC);
    }
    return 1;
}
