#include "common.h"

typedef struct {
    u8 pad_00[0xE8];
    s32 unk_E8;
    u8 pad_EC[0x1C];
    u8 *unk_108;
} Node_08975358;

void func_088226BC(char *, char *, ...);
void func_0893D8A8(char *, u8 *);
void *func_0896CE18(void *, s32, s32, s32);
s32 func_08974E50(char *, s32, char *);
extern s32 D_08A05504[];
extern s32 D_08A05514[];
extern s32 D_08A05544[];
extern char D_08A05558[];

s32 func_08975358(void *arg0, void *arg1, s32 arg2, s32 arg3, u8 **arg4) {
    char name[0x80];
    char buf[0x80];
    u8 *p;
    void *h;
    void *g;
    Node_08975358 *n;

    p = ((Node_08975358 *)func_0896CE18(arg1, arg2, 0, 1))->unk_108;
    if (arg4 != NULL) {
        *arg4 = p;
    }
    h = func_0896CE18(arg1, D_08A05504[0], 0, 1);
    func_0893D8A8(name, p + 0x160);
    func_088226BC(buf, D_08A05558, name, D_08A05544[0]);
    g = func_0896CE18(h, D_08A05514[0], 0, 1);
    n = func_0896CE18(g, func_08974E50(buf, arg3, buf), 0, 1);
    if (n == NULL) {
        return 0;
    }
    return n->unk_E8;
}
