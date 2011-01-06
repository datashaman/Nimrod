/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY101006 TY101006;
typedef struct TY101002 TY101002;
typedef struct TY51547 TY51547;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY89031 TY89031;
typedef struct TY51525 TY51525;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY51551 TY51551;
typedef struct TY50011 TY50011;
typedef struct TY43532 TY43532;
typedef struct TY51529 TY51529;
typedef struct TY51527 TY51527;
typedef struct TY51539 TY51539;
typedef struct TY48008 TY48008;
typedef struct TY51543 TY51543;
typedef struct TY51519 TY51519;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10990 TY10990;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY8004 TY8004;
typedef struct TY10988 TY10988;
typedef struct TY35221 TY35221;
typedef struct TY89029 TY89029;
typedef struct TY55223 TY55223;
typedef struct TY55221 TY55221;
typedef struct TY55219 TY55219;
typedef struct TY51563 TY51563;
typedef struct TY51561 TY51561;
typedef struct TY51559 TY51559;
typedef struct TY51549 TY51549;
typedef struct TY39013 TY39013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef N_NIMCALL_PTR(TY101002*, TY101007) (TY51547* Module_101008, NimStringDesc* Filename_101009);
typedef N_NIMCALL_PTR(TY101002*, TY101012) (TY51547* Module_101013, NimStringDesc* Filename_101014, TY89031* Rd_101015);
typedef N_NIMCALL_PTR(TY51525*, TY101018) (TY101002* P_101019, TY51525* N_101020);
typedef N_NIMCALL_PTR(TY51525*, TY101023) (TY101002* P_101024, TY51525* Toplevelstmt_101025);
struct TY101006 {
TY101007 Open;
TY101012 Opencached;
TY101018 Close;
TY101023 Process;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY50005 {
  TNimObject Sup;
NI Id;
};
struct TY43532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY51529 {
TNimType* m_type;
NI Counter;
TY51527* Data;
};
struct TY51539 {
NU8 K;
NU8 S;
NU8 Flags;
TY51551* T;
TY48008* R;
NI A;
};
struct TY51547 {
  TY50005 Sup;
NU8 Kind;
NU8 Magic;
TY51551* Typ;
TY50011* Name;
TY43532 Info;
TY51547* Owner;
NU32 Flags;
TY51529 Tab;
TY51525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY51539 Loc;
TY51543* Annex;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
};
struct TY51525 {
TY51551* Typ;
NimStringDesc* Comment;
TY43532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY51547* Sym;
} S4;
struct {TY50011* Ident;
} S5;
struct {TY51519* Sons;
} S6;
} KindU;
};
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY8004 {
void* Debuginfo;
NI32 Lockcount;
NI32 Recursioncount;
NI Owningthread;
NI Locksemaphore;
NI32 Reserved;
};
struct TY10988 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10990 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
TY8004 Cyclerootslock;
TY8004 Zctlock;
TY10988 Stat;
};
struct TY101002 {
  TNimObject Sup;
};
struct TY55219 {
NI Key;
NI Val;
};
struct TY55223 {
NI Counter;
TY55221* Data;
};
struct TY89029 {
NI Lastidxkey;
NI Lastidxval;
TY55223 Tab;
TY48008* R;
NI Offset;
};
struct TY51559 {
TY50005* Key;
TNimObject* Val;
};
struct TY51563 {
NI Counter;
TY51561* Data;
};
struct TY89031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY35221* Moddeps;
TY35221* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY89029 Index;
TY89029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY51563 Syms;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY51551 {
  TY50005 Sup;
NU8 Kind;
TY51549* Sons;
TY51525* N;
NU8 Flags;
NU8 Callconv;
TY51547* Owner;
TY51547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY51539 Loc;
};
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY51543 {
  TY39013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY48008* Name;
TY51525* Path;
};
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY51527 {
  TGenericSeq Sup;
  TY51547* data[SEQ_DECL_SIZE];
};
struct TY51519 {
  TGenericSeq Sup;
  TY51525* data[SEQ_DECL_SIZE];
};
struct TY35221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY55221 {
  TGenericSeq Sup;
  TY55219 data[SEQ_DECL_SIZE];
};
struct TY51561 {
  TGenericSeq Sup;
  TY51559 data[SEQ_DECL_SIZE];
};
struct TY51549 {
  TGenericSeq Sup;
  TY51551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initpass_101031)(TY101006* P_101034);
N_NIMCALL(TY101002*, Verboseopen_183008)(TY51547* S_183010, NimStringDesc* Filename_183011);
N_NIMCALL(void, Rawmessage_43553)(NU8 Msg_43555, NimStringDesc* Arg_43556);
N_NIMCALL(TY51525*, Verboseprocess_183015)(TY101002* Context_183017, TY51525* N_183018);
N_NIMCALL(void, Internalerror_43571)(NimStringDesc* Errmsg_43573);
N_NIMCALL(void, Limessage_43562)(TY43532 Info_43564, NU8 Msg_43565, NimStringDesc* Arg_43566);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19203);
N_NIMCALL(TY51525*, Cleanup_183039)(TY101002* C_183041, TY51525* N_183042);
N_NIMCALL(NI, Sonslen_51803)(TY51525* N_51805);
N_NIMCALL(TY51547*, Getmodule_55206)(TY51547* S_55208);
N_NIMCALL(NIM_BOOL, Astneeded_101041)(TY51547* S_101043);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
STRING_LITERAL(TMP193929, "logpass: context is not nil", 27);
extern NI Gverbosity_42083;
extern NI Gid_51692;
extern NU32 Gglobaloptions_42077;
extern TY10990 Gch_11010;
N_NIMCALL(TY101002*, Verboseopen_183008)(TY51547* S_183010, NimStringDesc* Filename_183011) {
TY101002* Result_183012;
Result_183012 = 0;
Result_183012 = NIM_NIL;
if (!(0 < Gverbosity_42083)) goto LA2;
Rawmessage_43553(((NU8) 230), (*(*S_183010).Name).S);
LA2: ;
return Result_183012;
}
N_NIMCALL(TY51525*, Verboseprocess_183015)(TY101002* Context_183017, TY51525* N_183018) {
TY51525* Result_183019;
NimStringDesc* LOC7;
Result_183019 = 0;
Result_183019 = N_183018;
if (!!((Context_183017 == NIM_NIL))) goto LA2;
Internalerror_43571(((NimStringDesc*) &TMP193929));
LA2: ;
if (!(Gverbosity_42083 == 3)) goto LA5;
LOC7 = 0;
LOC7 = nimIntToStr(Gid_51692);
Limessage_43562((*N_183018).Info, ((NU8) 230), LOC7);
LA5: ;
return Result_183019;
}
N_NIMCALL(TY101006, Verbosepass_183004)(void) {
TY101006 Result_183037;
memset((void*)&Result_183037, 0, sizeof(Result_183037));
Initpass_101031(&Result_183037);
Result_183037.Open = Verboseopen_183008;
Result_183037.Process = Verboseprocess_183015;
return Result_183037;
}
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11414))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
return Result_11415;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7607;
Result_7607 = 0;
(*Memloc_3004) += X_3005;
Result_7607 = (*Memloc_3004);
return Result_7607;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7806;
Result_7806 = 0;
(*Memloc_3009) -= X_3010;
Result_7806 = (*Memloc_3009);
return Result_7806;
}
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403) {
Addzct_11401(&Gch_11010.Zct, C_12403);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019) {
TY10602* C_13020;
NI LOC4;
TY10602* C_13022;
NI LOC9;
if (!!((Src_13019 == NIM_NIL))) goto LA2;
C_13020 = 0;
C_13020 = Usrtocell_11412(Src_13019);
LOC4 = Atomicinc_3001(&(*C_13020).Refcount, 8);
LA2: ;
if (!!(((*Dest_13018) == NIM_NIL))) goto LA6;
C_13022 = 0;
C_13022 = Usrtocell_11412((*Dest_13018));
LOC9 = Atomicdec_3006(&(*C_13022).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
N_NIMCALL(TY51525*, Cleanup_183039)(TY101002* C_183041, TY51525* N_183042) {
TY51525* Result_183043;
TY51547* S_183044;
NI I_183078;
NI HEX3Atmp_183160;
NI LOC4;
NI Res_183162;
TY51525* LOC6;
NIM_BOOL LOC11;
TY51547* LOC12;
NIM_BOOL LOC14;
Result_183043 = 0;
S_183044 = 0;
Result_183043 = N_183042;
if (!((Gglobaloptions_42077 &(1<<((((NU8) 4))&31)))!=0)) goto LA2;
goto BeforeRet;
LA2: ;
switch ((*N_183042).Kind) {
case ((NU8) 101):
I_183078 = 0;
HEX3Atmp_183160 = 0;
LOC4 = Sonslen_51803(N_183042);
HEX3Atmp_183160 = (NI64)(LOC4 - 1);
Res_183162 = 0;
Res_183162 = 0;
while (1) {
if (!(Res_183162 <= HEX3Atmp_183160)) goto LA5;
I_183078 = Res_183162;
LOC6 = 0;
LOC6 = Cleanup_183039(C_183041, (*N_183042).KindU.S6.Sons->data[I_183078]);
Res_183162 += 1;
} LA5: ;
break;
case ((NU8) 69):
case ((NU8) 70):
if (!((*(*N_183042).KindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA8;
S_183044 = (*(*N_183042).KindU.S6.Sons->data[0]).KindU.S4.Sym;
LOC12 = 0;
LOC12 = Getmodule_55206(S_183044);
LOC11 = !((((*LOC12).Flags &(1<<((((NU8) 28))&31)))!=0));
if (!(LOC11)) goto LA13;
LOC14 = Astneeded_101041(S_183044);
LOC11 = !(LOC14);
LA13: ;
if (!LOC11) goto LA15;
asgnRefNoCycle((void**) &(*(*S_183044).Ast).KindU.S6.Sons->data[4], NIM_NIL);
LA15: ;
LA8: ;
break;
default:
break;
}
BeforeRet: ;
return Result_183043;
}
N_NIMCALL(TY101006, Cleanuppass_183006)(void) {
TY101006 Result_183167;
memset((void*)&Result_183167, 0, sizeof(Result_183167));
Initpass_101031(&Result_183167);
Result_183167.Process = Cleanup_183039;
Result_183167.Close = Cleanup_183039;
return Result_183167;
}
N_NOINLINE(void, passauxInit)(void) {
}
