#include "common.h"

extern "C" {

typedef struct {
    u8 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} S_088774CC;

extern void *D_08AD1E28[];
extern char D_089F9590[];
extern char D_089F95A8[];
extern char D_089F95C4[];
extern char D_089F95D8[];
extern char D_089F95F0[];
extern char D_089F9608[];
extern char D_089F961C[];
s32 *func_08868E8C(void *, s32, char *);

inline s32 func_088774CC_0(char *s) {
    void *g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    s32 *r;

    if (g == NULL) {
        return 0;
    }
    r = func_08868E8C(g, 0xF, s);
    if (r == NULL) {
        return 0;
    }
    return *r;
}

void func_088774CC(S_088774CC *arg0) {
    arg0->unk_00 = 1;
    arg0->unk_04 = func_088774CC_0(D_089F9590);
    arg0->unk_08 = func_088774CC_0(D_089F95A8);
    arg0->unk_0C = func_088774CC_0(D_089F95C4);
    arg0->unk_10 = func_088774CC_0(D_089F95D8);
    arg0->unk_14 = func_088774CC_0(D_089F95F0);
    arg0->unk_18 = func_088774CC_0(D_089F9608);
    arg0->unk_1C = func_088774CC_0(D_089F961C);
}

}
