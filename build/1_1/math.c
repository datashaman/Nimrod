/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

#include <math.h>
#include <time.h>
typedef struct TY96802 TY96802;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY96802 {
TNimType* m_type;
NI N;
NF Sum;
NF Min;
NF Max;
NF Mean;
NF Oldm;
NF Olds;
NF News;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NU8, Classify_96212)(NF X_96214);
N_NIMCALL(NI, Binom_96216)(NI N_96218, NI K_96219);
N_NIMCALL(NI, Fac_96253)(NI N_96255);
N_NIMCALL(NIM_BOOL, Ispoweroftwo_96270)(NI X_96272);
N_NIMCALL(NI, Nextpoweroftwo_96276)(NI X_96278);
N_NIMCALL(NI, Countbits32_96413)(NI32 N_96415);
N_NIMCALL(NF, Mean_96428)(NF* X_96431, NI X_96431Len0);
N_NIMCALL(NF, Variance_96495)(NF* X_96498, NI X_96498Len0);
N_NIMCALL(NF, Log2_96540)(NF X_96542);
N_NIMCALL(void, Randomize_96529)(void);
N_NIMCALL(NI, Random_96526)(NI Max_96528);
N_NIMCALL(void, Push_96811)(TY96802* S_96814, NF X_96815);
N_NIMCALL(NF, Variance_96830)(TY96802* S_96832);
N_NIMCALL(NF, Standarddeviation_96836)(TY96802* S_96838);
N_NIMCALL(NF, Sum_96438)(NF* X_96442, NI X_96442Len0);
N_NIMCALL(NU8, Classify_96212)(NF X_96214) {
NU8 Result_96215;
Result_96215 = 0;
if (!(X_96214 == 0.00000)) goto LA2;
if (!((1.00000 / X_96214) == INF)) goto LA5;
Result_96215 = ((NU8) 2);
goto BeforeRet;
goto LA4;
LA5: ;
Result_96215 = ((NU8) 3);
goto BeforeRet;
LA4: ;
LA2: ;
if (!((X_96214 * 0.500000) == X_96214)) goto LA8;
if (!(0.00000 < X_96214)) goto LA11;
Result_96215 = ((NU8) 5);
goto BeforeRet;
goto LA10;
LA11: ;
Result_96215 = ((NU8) 6);
goto BeforeRet;
LA10: ;
LA8: ;
if (!!((X_96214 == X_96214))) goto LA14;
Result_96215 = ((NU8) 4);
goto BeforeRet;
LA14: ;
Result_96215 = ((NU8) 0);
goto BeforeRet;
BeforeRet: ;
return Result_96215;
}
N_NIMCALL(NI, Binom_96216)(NI N_96218, NI K_96219) {
NI Result_96220;
NI I_96247;
NI Res_96250;
Result_96220 = 0;
if (!(K_96219 <= 0)) goto LA2;
Result_96220 = 1;
goto BeforeRet;
LA2: ;
if (!(N_96218 < (NI32)(2 * K_96219))) goto LA5;
Result_96220 = Binom_96216(N_96218, (NI32)(N_96218 - K_96219));
goto BeforeRet;
LA5: ;
Result_96220 = N_96218;
I_96247 = 0;
Res_96250 = 0;
Res_96250 = 2;
while (1) {
if (!(Res_96250 <= K_96219)) goto LA7;
I_96247 = Res_96250;
Result_96220 = (NI32)((NI32)(Result_96220 * (NI32)((NI32)(N_96218 + 1) - I_96247)) / I_96247);
Res_96250 += 1;
} LA7: ;
BeforeRet: ;
return Result_96220;
}
N_NIMCALL(NI, Fac_96253)(NI N_96255) {
NI Result_96256;
NI I_96264;
NI Res_96267;
Result_96256 = 0;
Result_96256 = 1;
I_96264 = 0;
Res_96267 = 0;
Res_96267 = 2;
while (1) {
if (!(Res_96267 <= N_96255)) goto LA1;
I_96264 = Res_96267;
Result_96256 = (NI32)(Result_96256 * I_96264);
Res_96267 += 1;
} LA1: ;
return Result_96256;
}
N_NIMCALL(NIM_BOOL, Ispoweroftwo_96270)(NI X_96272) {
NIM_BOOL Result_96273;
Result_96273 = 0;
Result_96273 = ((NI32)(X_96272 & ((NI32)-(X_96272))) == X_96272);
goto BeforeRet;
BeforeRet: ;
return Result_96273;
}
N_NIMCALL(NI, Nextpoweroftwo_96276)(NI X_96278) {
NI Result_96279;
Result_96279 = 0;
Result_96279 = (NI32)(X_96278 - 1);
Result_96279 = (NI32)(Result_96279 | (NI32)((NU32)(Result_96279) >> (NU32)(16)));
Result_96279 = (NI32)(Result_96279 | (NI32)((NU32)(Result_96279) >> (NU32)(8)));
Result_96279 = (NI32)(Result_96279 | (NI32)((NU32)(Result_96279) >> (NU32)(4)));
Result_96279 = (NI32)(Result_96279 | (NI32)((NU32)(Result_96279) >> (NU32)(2)));
Result_96279 = (NI32)(Result_96279 | (NI32)((NU32)(Result_96279) >> (NU32)(1)));
Result_96279 += 1;
return Result_96279;
}
N_NIMCALL(NI, Countbits32_96413)(NI32 N_96415) {
NI Result_96416;
NI32 V_96417;
Result_96416 = 0;
V_96417 = 0;
V_96417 = N_96415;
V_96417 = (NI32)((NU32)(V_96417) - (NU32)((NI32)((NI32)((NU32)(V_96417) >> (NU32)(((NI32) 1))) & ((NI32) 1431655765))));
V_96417 = (NI32)((NU32)((NI32)(V_96417 & ((NI32) 858993459))) + (NU32)((NI32)((NI32)((NU32)(V_96417) >> (NU32)(((NI32) 2))) & ((NI32) 858993459))));
Result_96416 = ((NI) ((NI32)((NU32)((NI32)((NU32)((NI32)((NI32)((NU32)(V_96417) + (NU32)((NI32)((NU32)(V_96417) >> (NU32)(((NI32) 4))))) & ((NI32) 252645135))) * (NU32)(((NI32) 16843009)))) >> (NU32)(((NI32) 24)))));
return Result_96416;
}
N_NIMCALL(NF, Mean_96428)(NF* X_96431, NI X_96431Len0) {
NF Result_96432;
NF LOC1;
Result_96432 = 0;
LOC1 = Sum_96438(X_96431, X_96431Len0);
Result_96432 = (LOC1 / ((double) (X_96431Len0)));
return Result_96432;
}
N_NIMCALL(NF, Variance_96495)(NF* X_96498, NI X_96498Len0) {
NF Result_96499;
NF M_96500;
NI I_96508;
NI HEX3Atmp_96521;
NI Res_96523;
NF Diff_96509;
Result_96499 = 0;
Result_96499 = 0.00000;
M_96500 = 0;
M_96500 = Mean_96428(X_96498, X_96498Len0);
I_96508 = 0;
HEX3Atmp_96521 = 0;
HEX3Atmp_96521 = (X_96498Len0-1);
Res_96523 = 0;
Res_96523 = 0;
while (1) {
if (!(Res_96523 <= HEX3Atmp_96521)) goto LA1;
I_96508 = Res_96523;
Diff_96509 = 0;
Diff_96509 = (X_96498[I_96508] - M_96500);
Result_96499 = (Result_96499 + (Diff_96509 * Diff_96509));
Res_96523 += 1;
} LA1: ;
Result_96499 = (Result_96499 / ((double) (X_96498Len0)));
return Result_96499;
}
N_NIMCALL(NF, Log2_96540)(NF X_96542) {
NF Result_96543;
NF LOC1;
NF LOC2;
Result_96543 = 0;
LOC1 = log(X_96542);
LOC2 = log(2.00000);
Result_96543 = (LOC1 / LOC2);
goto BeforeRet;
BeforeRet: ;
return Result_96543;
}
N_NIMCALL(void, Randomize_96529)(void) {
NI32 LOC1;
LOC1 = time(NIM_NIL);
srand(LOC1);
}
N_NIMCALL(NI, Random_96526)(NI Max_96528) {
NI Result_96605;
NI32 LOC1;
Result_96605 = 0;
LOC1 = rand();
Result_96605 = (NI32)(((NI) (LOC1)) % Max_96528);
goto BeforeRet;
BeforeRet: ;
return Result_96605;
}
N_NIMCALL(void, Push_96811)(TY96802* S_96814, NF X_96815) {
(*S_96814).N += 1;
if (!((*S_96814).N == 1)) goto LA2;
(*S_96814).Oldm = X_96815;
(*S_96814).Mean = X_96815;
(*S_96814).Olds = 0.00000;
goto LA1;
LA2: ;
(*S_96814).Mean = ((*S_96814).Oldm + ((X_96815 - (*S_96814).Oldm) / ((double) ((*S_96814).N))));
(*S_96814).News = ((*S_96814).Olds + ((X_96815 - (*S_96814).Oldm) * (X_96815 - (*S_96814).Mean)));
(*S_96814).Oldm = (*S_96814).Mean;
(*S_96814).Olds = (*S_96814).News;
LA1: ;
(*S_96814).Sum = ((*S_96814).Sum + X_96815);
if (!(X_96815 < (*S_96814).Min)) goto LA5;
(*S_96814).Min = X_96815;
LA5: ;
if (!((*S_96814).Max < X_96815)) goto LA8;
(*S_96814).Max = X_96815;
LA8: ;
}
N_NIMCALL(NF, Variance_96830)(TY96802* S_96832) {
NF Result_96833;
Result_96833 = 0;
if (!(1 < (*S_96832).N)) goto LA2;
Result_96833 = ((*S_96832).News / ((double) ((NI32)((*S_96832).N - 1))));
LA2: ;
return Result_96833;
}
N_NIMCALL(NF, Standarddeviation_96836)(TY96802* S_96838) {
NF Result_96839;
NF LOC1;
Result_96839 = 0;
LOC1 = Variance_96830(S_96838);
Result_96839 = sqrt(LOC1);
return Result_96839;
}
N_NIMCALL(NF, Sum_96438)(NF* X_96442, NI X_96442Len0) {
NF Result_96443;
NF I_96479;
NI I_96492;
Result_96443 = 0;
I_96479 = 0;
I_96492 = 0;
I_96492 = 0;
while (1) {
if (!(I_96492 < X_96442Len0)) goto LA1;
I_96479 = X_96442[I_96492];
Result_96443 = (Result_96443 + I_96479);
I_96492 += 1;
} LA1: ;
return Result_96443;
}
N_NOINLINE(void, mathInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "math";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/math.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}

