/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY53011 TY53011;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY70241[220];
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
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NI, Findstr_70471)(NimStringDesc** A_70474, NI A_70474Len0, NimStringDesc* S_70475);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_23638, NimStringDesc* B_23639);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NU8, Whichkeyword_70468)(NimStringDesc* Id_70470);
N_NIMCALL(TY53011*, Getident_53016)(NimStringDesc* Identifier_53018);
N_NIMCALL(NU8, Whichkeyword_70465)(TY53011* Id_70467);
static N_INLINE(NI, chckRange)(NI I_4610, NI A_4611, NI B_4612);
N_NOINLINE(void, raiseRangeError)(NI64 Val_5418);
N_NIMCALL(void, Initspecials_70523)(void);
N_NIMCALL(TY53011*, Getident_53019)(NimStringDesc* Identifier_53021, NI H_53022);
N_NIMCALL(NI, Getnormalizedhash_43037)(NimStringDesc* S_43039);
STRING_LITERAL(TMP70245, "", 0);
STRING_LITERAL(TMP70246, "addr", 4);
STRING_LITERAL(TMP70247, "and", 3);
STRING_LITERAL(TMP70248, "as", 2);
STRING_LITERAL(TMP70249, "asm", 3);
STRING_LITERAL(TMP70250, "atomic", 6);
STRING_LITERAL(TMP70251, "bind", 4);
STRING_LITERAL(TMP70252, "block", 5);
STRING_LITERAL(TMP70253, "break", 5);
STRING_LITERAL(TMP70254, "case", 4);
STRING_LITERAL(TMP70255, "cast", 4);
STRING_LITERAL(TMP70256, "const", 5);
STRING_LITERAL(TMP70257, "continue", 8);
STRING_LITERAL(TMP70258, "converter", 9);
STRING_LITERAL(TMP70259, "discard", 7);
STRING_LITERAL(TMP70260, "distinct", 8);
STRING_LITERAL(TMP70261, "div", 3);
STRING_LITERAL(TMP70262, "elif", 4);
STRING_LITERAL(TMP70263, "else", 4);
STRING_LITERAL(TMP70264, "end", 3);
STRING_LITERAL(TMP70265, "enum", 4);
STRING_LITERAL(TMP70266, "except", 6);
STRING_LITERAL(TMP70267, "finally", 7);
STRING_LITERAL(TMP70268, "for", 3);
STRING_LITERAL(TMP70269, "from", 4);
STRING_LITERAL(TMP70270, "generic", 7);
STRING_LITERAL(TMP70271, "if", 2);
STRING_LITERAL(TMP70272, "implies", 7);
STRING_LITERAL(TMP70273, "import", 6);
STRING_LITERAL(TMP70274, "in", 2);
STRING_LITERAL(TMP70275, "include", 7);
STRING_LITERAL(TMP70276, "is", 2);
STRING_LITERAL(TMP70277, "isnot", 5);
STRING_LITERAL(TMP70278, "iterator", 8);
STRING_LITERAL(TMP70279, "lambda", 6);
STRING_LITERAL(TMP70280, "let", 3);
STRING_LITERAL(TMP70281, "macro", 5);
STRING_LITERAL(TMP70282, "method", 6);
STRING_LITERAL(TMP70283, "mod", 3);
STRING_LITERAL(TMP70284, "nil", 3);
STRING_LITERAL(TMP70285, "not", 3);
STRING_LITERAL(TMP70286, "notin", 5);
STRING_LITERAL(TMP70287, "object", 6);
STRING_LITERAL(TMP70288, "of", 2);
STRING_LITERAL(TMP70289, "or", 2);
STRING_LITERAL(TMP70290, "out", 3);
STRING_LITERAL(TMP70291, "proc", 4);
STRING_LITERAL(TMP70292, "ptr", 3);
STRING_LITERAL(TMP70293, "raise", 5);
STRING_LITERAL(TMP70294, "ref", 3);
STRING_LITERAL(TMP70295, "return", 6);
STRING_LITERAL(TMP70296, "shl", 3);
STRING_LITERAL(TMP70297, "shr", 3);
STRING_LITERAL(TMP70298, "template", 8);
STRING_LITERAL(TMP70299, "try", 3);
STRING_LITERAL(TMP70300, "tuple", 5);
STRING_LITERAL(TMP70301, "type", 4);
STRING_LITERAL(TMP70302, "var", 3);
STRING_LITERAL(TMP70303, "when", 4);
STRING_LITERAL(TMP70304, "while", 5);
STRING_LITERAL(TMP70305, "with", 4);
STRING_LITERAL(TMP70306, "without", 7);
STRING_LITERAL(TMP70307, "xor", 3);
STRING_LITERAL(TMP70308, "yield", 5);
STRING_LITERAL(TMP70309, ":", 1);
STRING_LITERAL(TMP70310, "=", 1);
STRING_LITERAL(TMP70311, ".", 1);
STRING_LITERAL(TMP70312, "..", 2);
STRING_LITERAL(TMP70313, "^", 1);
STRING_LITERAL(TMP70314, "*", 1);
STRING_LITERAL(TMP70315, "-", 1);
STRING_LITERAL(TMP70316, "magic", 5);
STRING_LITERAL(TMP70317, "typecheck", 9);
STRING_LITERAL(TMP70318, "final", 5);
STRING_LITERAL(TMP70319, "profiler", 8);
STRING_LITERAL(TMP70320, "objchecks", 9);
STRING_LITERAL(TMP70321, "importc", 7);
STRING_LITERAL(TMP70322, "exportc", 7);
STRING_LITERAL(TMP70323, "extern", 6);
STRING_LITERAL(TMP70324, "align", 5);
STRING_LITERAL(TMP70325, "nodecl", 6);
STRING_LITERAL(TMP70326, "pure", 4);
STRING_LITERAL(TMP70327, "volatile", 8);
STRING_LITERAL(TMP70328, "register", 8);
STRING_LITERAL(TMP70329, "sideeffect", 10);
STRING_LITERAL(TMP70330, "header", 6);
STRING_LITERAL(TMP70331, "nosideeffect", 12);
STRING_LITERAL(TMP70332, "noreturn", 8);
STRING_LITERAL(TMP70333, "merge", 5);
STRING_LITERAL(TMP70334, "lib", 3);
STRING_LITERAL(TMP70335, "dynlib", 6);
STRING_LITERAL(TMP70336, "compilerproc", 12);
STRING_LITERAL(TMP70337, "procvar", 7);
STRING_LITERAL(TMP70338, "fatal", 5);
STRING_LITERAL(TMP70339, "error", 5);
STRING_LITERAL(TMP70340, "warning", 7);
STRING_LITERAL(TMP70341, "hint", 4);
STRING_LITERAL(TMP70342, "line", 4);
STRING_LITERAL(TMP70343, "push", 4);
STRING_LITERAL(TMP70344, "pop", 3);
STRING_LITERAL(TMP70345, "define", 6);
STRING_LITERAL(TMP70346, "undef", 5);
STRING_LITERAL(TMP70347, "linedir", 7);
STRING_LITERAL(TMP70348, "stacktrace", 10);
STRING_LITERAL(TMP70349, "linetrace", 9);
STRING_LITERAL(TMP70350, "parallelbuild", 13);
STRING_LITERAL(TMP70351, "link", 4);
STRING_LITERAL(TMP70352, "compile", 7);
STRING_LITERAL(TMP70353, "linksys", 7);
STRING_LITERAL(TMP70354, "deprecated", 10);
STRING_LITERAL(TMP70355, "varargs", 7);
STRING_LITERAL(TMP70356, "byref", 5);
STRING_LITERAL(TMP70357, "callconv", 8);
STRING_LITERAL(TMP70358, "breakpoint", 10);
STRING_LITERAL(TMP70359, "debugger", 8);
STRING_LITERAL(TMP70360, "nimcall", 7);
STRING_LITERAL(TMP70361, "stdcall", 7);
STRING_LITERAL(TMP70362, "cdecl", 5);
STRING_LITERAL(TMP70363, "safecall", 8);
STRING_LITERAL(TMP70364, "syscall", 7);
STRING_LITERAL(TMP70365, "inline", 6);
STRING_LITERAL(TMP70366, "noinline", 8);
STRING_LITERAL(TMP70367, "fastcall", 8);
STRING_LITERAL(TMP70368, "closure", 7);
STRING_LITERAL(TMP70369, "noconv", 6);
STRING_LITERAL(TMP70370, "on", 2);
STRING_LITERAL(TMP70371, "off", 3);
STRING_LITERAL(TMP70372, "checks", 6);
STRING_LITERAL(TMP70373, "rangechecks", 11);
STRING_LITERAL(TMP70374, "boundchecks", 11);
STRING_LITERAL(TMP70375, "overflowchecks", 14);
STRING_LITERAL(TMP70376, "nilchecks", 9);
STRING_LITERAL(TMP70377, "floatchecks", 11);
STRING_LITERAL(TMP70378, "nanchecks", 9);
STRING_LITERAL(TMP70379, "infchecks", 9);
STRING_LITERAL(TMP70380, "assertions", 10);
STRING_LITERAL(TMP70381, "warnings", 8);
STRING_LITERAL(TMP70382, "w", 1);
STRING_LITERAL(TMP70383, "hints", 5);
STRING_LITERAL(TMP70384, "optimization", 12);
STRING_LITERAL(TMP70385, "speed", 5);
STRING_LITERAL(TMP70386, "size", 4);
STRING_LITERAL(TMP70387, "none", 4);
STRING_LITERAL(TMP70388, "path", 4);
STRING_LITERAL(TMP70389, "p", 1);
STRING_LITERAL(TMP70390, "d", 1);
STRING_LITERAL(TMP70391, "u", 1);
STRING_LITERAL(TMP70392, "debuginfo", 9);
STRING_LITERAL(TMP70393, "compileonly", 11);
STRING_LITERAL(TMP70394, "nolinking", 9);
STRING_LITERAL(TMP70395, "forcebuild", 10);
STRING_LITERAL(TMP70396, "f", 1);
STRING_LITERAL(TMP70397, "deadcodeelim", 12);
STRING_LITERAL(TMP70398, "safecode", 8);
STRING_LITERAL(TMP70399, "pragma", 6);
STRING_LITERAL(TMP70400, "compiletime", 11);
STRING_LITERAL(TMP70401, "gc", 2);
STRING_LITERAL(TMP70402, "refc", 4);
STRING_LITERAL(TMP70403, "boehm", 5);
STRING_LITERAL(TMP70404, "a", 1);
STRING_LITERAL(TMP70405, "opt", 3);
STRING_LITERAL(TMP70406, "o", 1);
STRING_LITERAL(TMP70407, "app", 3);
STRING_LITERAL(TMP70408, "console", 7);
STRING_LITERAL(TMP70409, "gui", 3);
STRING_LITERAL(TMP70410, "passc", 5);
STRING_LITERAL(TMP70411, "t", 1);
STRING_LITERAL(TMP70412, "passl", 5);
STRING_LITERAL(TMP70413, "l", 1);
STRING_LITERAL(TMP70414, "listcmd", 7);
STRING_LITERAL(TMP70415, "gendoc", 6);
STRING_LITERAL(TMP70416, "genmapping", 10);
STRING_LITERAL(TMP70417, "os", 2);
STRING_LITERAL(TMP70418, "cpu", 3);
STRING_LITERAL(TMP70419, "generate", 8);
STRING_LITERAL(TMP70420, "g", 1);
STRING_LITERAL(TMP70421, "c", 1);
STRING_LITERAL(TMP70422, "cpp", 3);
STRING_LITERAL(TMP70423, "borrow", 6);
STRING_LITERAL(TMP70424, "run", 3);
STRING_LITERAL(TMP70425, "r", 1);
STRING_LITERAL(TMP70426, "verbosity", 9);
STRING_LITERAL(TMP70427, "v", 1);
STRING_LITERAL(TMP70428, "help", 4);
STRING_LITERAL(TMP70429, "h", 1);
STRING_LITERAL(TMP70430, "symbolfiles", 11);
STRING_LITERAL(TMP70431, "fieldchecks", 11);
STRING_LITERAL(TMP70432, "x", 1);
STRING_LITERAL(TMP70433, "version", 7);
STRING_LITERAL(TMP70434, "advanced", 8);
STRING_LITERAL(TMP70435, "skipcfg", 7);
STRING_LITERAL(TMP70436, "skipprojcfg", 11);
STRING_LITERAL(TMP70437, "cc", 2);
STRING_LITERAL(TMP70438, "genscript", 9);
STRING_LITERAL(TMP70439, "checkpoint", 10);
STRING_LITERAL(TMP70440, "checkpoints", 11);
STRING_LITERAL(TMP70441, "nomain", 6);
STRING_LITERAL(TMP70442, "subschar", 8);
STRING_LITERAL(TMP70443, "acyclic", 7);
STRING_LITERAL(TMP70444, "index", 5);
STRING_LITERAL(TMP70445, "compiletoc", 10);
STRING_LITERAL(TMP70446, "compiletocpp", 12);
STRING_LITERAL(TMP70447, "compiletoecmascript", 19);
STRING_LITERAL(TMP70448, "compiletollvm", 13);
STRING_LITERAL(TMP70449, "pretty", 6);
STRING_LITERAL(TMP70450, "doc", 3);
STRING_LITERAL(TMP70451, "gendepend", 9);
STRING_LITERAL(TMP70452, "listdef", 7);
STRING_LITERAL(TMP70453, "check", 5);
STRING_LITERAL(TMP70454, "parse", 5);
STRING_LITERAL(TMP70455, "scan", 4);
STRING_LITERAL(TMP70456, "lazy", 4);
STRING_LITERAL(TMP70457, "rst2html", 8);
STRING_LITERAL(TMP70458, "rst2tex", 7);
STRING_LITERAL(TMP70459, "i", 1);
STRING_LITERAL(TMP70460, "write", 5);
STRING_LITERAL(TMP70461, "putenv", 6);
STRING_LITERAL(TMP70462, "prependenv", 10);
STRING_LITERAL(TMP70463, "appendenv", 9);
STRING_LITERAL(TMP70464, "threadvar", 9);
NIM_CONST TY70241 Specialwords_70240 = {((NimStringDesc*) &TMP70245),
((NimStringDesc*) &TMP70246),
((NimStringDesc*) &TMP70247),
((NimStringDesc*) &TMP70248),
((NimStringDesc*) &TMP70249),
((NimStringDesc*) &TMP70250),
((NimStringDesc*) &TMP70251),
((NimStringDesc*) &TMP70252),
((NimStringDesc*) &TMP70253),
((NimStringDesc*) &TMP70254),
((NimStringDesc*) &TMP70255),
((NimStringDesc*) &TMP70256),
((NimStringDesc*) &TMP70257),
((NimStringDesc*) &TMP70258),
((NimStringDesc*) &TMP70259),
((NimStringDesc*) &TMP70260),
((NimStringDesc*) &TMP70261),
((NimStringDesc*) &TMP70262),
((NimStringDesc*) &TMP70263),
((NimStringDesc*) &TMP70264),
((NimStringDesc*) &TMP70265),
((NimStringDesc*) &TMP70266),
((NimStringDesc*) &TMP70267),
((NimStringDesc*) &TMP70268),
((NimStringDesc*) &TMP70269),
((NimStringDesc*) &TMP70270),
((NimStringDesc*) &TMP70271),
((NimStringDesc*) &TMP70272),
((NimStringDesc*) &TMP70273),
((NimStringDesc*) &TMP70274),
((NimStringDesc*) &TMP70275),
((NimStringDesc*) &TMP70276),
((NimStringDesc*) &TMP70277),
((NimStringDesc*) &TMP70278),
((NimStringDesc*) &TMP70279),
((NimStringDesc*) &TMP70280),
((NimStringDesc*) &TMP70281),
((NimStringDesc*) &TMP70282),
((NimStringDesc*) &TMP70283),
((NimStringDesc*) &TMP70284),
((NimStringDesc*) &TMP70285),
((NimStringDesc*) &TMP70286),
((NimStringDesc*) &TMP70287),
((NimStringDesc*) &TMP70288),
((NimStringDesc*) &TMP70289),
((NimStringDesc*) &TMP70290),
((NimStringDesc*) &TMP70291),
((NimStringDesc*) &TMP70292),
((NimStringDesc*) &TMP70293),
((NimStringDesc*) &TMP70294),
((NimStringDesc*) &TMP70295),
((NimStringDesc*) &TMP70296),
((NimStringDesc*) &TMP70297),
((NimStringDesc*) &TMP70298),
((NimStringDesc*) &TMP70299),
((NimStringDesc*) &TMP70300),
((NimStringDesc*) &TMP70301),
((NimStringDesc*) &TMP70302),
((NimStringDesc*) &TMP70303),
((NimStringDesc*) &TMP70304),
((NimStringDesc*) &TMP70305),
((NimStringDesc*) &TMP70306),
((NimStringDesc*) &TMP70307),
((NimStringDesc*) &TMP70308),
((NimStringDesc*) &TMP70309),
((NimStringDesc*) &TMP70310),
((NimStringDesc*) &TMP70311),
((NimStringDesc*) &TMP70312),
((NimStringDesc*) &TMP70313),
((NimStringDesc*) &TMP70314),
((NimStringDesc*) &TMP70315),
((NimStringDesc*) &TMP70316),
((NimStringDesc*) &TMP70317),
((NimStringDesc*) &TMP70318),
((NimStringDesc*) &TMP70319),
((NimStringDesc*) &TMP70320),
((NimStringDesc*) &TMP70321),
((NimStringDesc*) &TMP70322),
((NimStringDesc*) &TMP70323),
((NimStringDesc*) &TMP70324),
((NimStringDesc*) &TMP70325),
((NimStringDesc*) &TMP70326),
((NimStringDesc*) &TMP70327),
((NimStringDesc*) &TMP70328),
((NimStringDesc*) &TMP70329),
((NimStringDesc*) &TMP70330),
((NimStringDesc*) &TMP70331),
((NimStringDesc*) &TMP70332),
((NimStringDesc*) &TMP70333),
((NimStringDesc*) &TMP70334),
((NimStringDesc*) &TMP70335),
((NimStringDesc*) &TMP70336),
((NimStringDesc*) &TMP70337),
((NimStringDesc*) &TMP70338),
((NimStringDesc*) &TMP70339),
((NimStringDesc*) &TMP70340),
((NimStringDesc*) &TMP70341),
((NimStringDesc*) &TMP70342),
((NimStringDesc*) &TMP70343),
((NimStringDesc*) &TMP70344),
((NimStringDesc*) &TMP70345),
((NimStringDesc*) &TMP70346),
((NimStringDesc*) &TMP70347),
((NimStringDesc*) &TMP70348),
((NimStringDesc*) &TMP70349),
((NimStringDesc*) &TMP70350),
((NimStringDesc*) &TMP70351),
((NimStringDesc*) &TMP70352),
((NimStringDesc*) &TMP70353),
((NimStringDesc*) &TMP70354),
((NimStringDesc*) &TMP70355),
((NimStringDesc*) &TMP70356),
((NimStringDesc*) &TMP70357),
((NimStringDesc*) &TMP70358),
((NimStringDesc*) &TMP70359),
((NimStringDesc*) &TMP70360),
((NimStringDesc*) &TMP70361),
((NimStringDesc*) &TMP70362),
((NimStringDesc*) &TMP70363),
((NimStringDesc*) &TMP70364),
((NimStringDesc*) &TMP70365),
((NimStringDesc*) &TMP70366),
((NimStringDesc*) &TMP70367),
((NimStringDesc*) &TMP70368),
((NimStringDesc*) &TMP70369),
((NimStringDesc*) &TMP70370),
((NimStringDesc*) &TMP70371),
((NimStringDesc*) &TMP70372),
((NimStringDesc*) &TMP70373),
((NimStringDesc*) &TMP70374),
((NimStringDesc*) &TMP70375),
((NimStringDesc*) &TMP70376),
((NimStringDesc*) &TMP70377),
((NimStringDesc*) &TMP70378),
((NimStringDesc*) &TMP70379),
((NimStringDesc*) &TMP70380),
((NimStringDesc*) &TMP70381),
((NimStringDesc*) &TMP70382),
((NimStringDesc*) &TMP70383),
((NimStringDesc*) &TMP70384),
((NimStringDesc*) &TMP70385),
((NimStringDesc*) &TMP70386),
((NimStringDesc*) &TMP70387),
((NimStringDesc*) &TMP70388),
((NimStringDesc*) &TMP70389),
((NimStringDesc*) &TMP70390),
((NimStringDesc*) &TMP70391),
((NimStringDesc*) &TMP70392),
((NimStringDesc*) &TMP70393),
((NimStringDesc*) &TMP70394),
((NimStringDesc*) &TMP70395),
((NimStringDesc*) &TMP70396),
((NimStringDesc*) &TMP70397),
((NimStringDesc*) &TMP70398),
((NimStringDesc*) &TMP70399),
((NimStringDesc*) &TMP70400),
((NimStringDesc*) &TMP70401),
((NimStringDesc*) &TMP70402),
((NimStringDesc*) &TMP70403),
((NimStringDesc*) &TMP70404),
((NimStringDesc*) &TMP70405),
((NimStringDesc*) &TMP70406),
((NimStringDesc*) &TMP70407),
((NimStringDesc*) &TMP70408),
((NimStringDesc*) &TMP70409),
((NimStringDesc*) &TMP70410),
((NimStringDesc*) &TMP70411),
((NimStringDesc*) &TMP70412),
((NimStringDesc*) &TMP70413),
((NimStringDesc*) &TMP70414),
((NimStringDesc*) &TMP70415),
((NimStringDesc*) &TMP70416),
((NimStringDesc*) &TMP70417),
((NimStringDesc*) &TMP70418),
((NimStringDesc*) &TMP70419),
((NimStringDesc*) &TMP70420),
((NimStringDesc*) &TMP70421),
((NimStringDesc*) &TMP70422),
((NimStringDesc*) &TMP70423),
((NimStringDesc*) &TMP70424),
((NimStringDesc*) &TMP70425),
((NimStringDesc*) &TMP70426),
((NimStringDesc*) &TMP70427),
((NimStringDesc*) &TMP70428),
((NimStringDesc*) &TMP70429),
((NimStringDesc*) &TMP70430),
((NimStringDesc*) &TMP70431),
((NimStringDesc*) &TMP70432),
((NimStringDesc*) &TMP70433),
((NimStringDesc*) &TMP70434),
((NimStringDesc*) &TMP70435),
((NimStringDesc*) &TMP70436),
((NimStringDesc*) &TMP70437),
((NimStringDesc*) &TMP70438),
((NimStringDesc*) &TMP70439),
((NimStringDesc*) &TMP70440),
((NimStringDesc*) &TMP70441),
((NimStringDesc*) &TMP70442),
((NimStringDesc*) &TMP70443),
((NimStringDesc*) &TMP70444),
((NimStringDesc*) &TMP70445),
((NimStringDesc*) &TMP70446),
((NimStringDesc*) &TMP70447),
((NimStringDesc*) &TMP70448),
((NimStringDesc*) &TMP70449),
((NimStringDesc*) &TMP70450),
((NimStringDesc*) &TMP70451),
((NimStringDesc*) &TMP70452),
((NimStringDesc*) &TMP70453),
((NimStringDesc*) &TMP70454),
((NimStringDesc*) &TMP70455),
((NimStringDesc*) &TMP70456),
((NimStringDesc*) &TMP70457),
((NimStringDesc*) &TMP70458),
((NimStringDesc*) &TMP70459),
((NimStringDesc*) &TMP70460),
((NimStringDesc*) &TMP70461),
((NimStringDesc*) &TMP70462),
((NimStringDesc*) &TMP70463),
((NimStringDesc*) &TMP70464)}
;
static N_INLINE(NI, addInt)(NI A_5803, NI B_5804) {
NI Result_5805;
NIM_BOOL LOC2;
Result_5805 = 0;
Result_5805 = (NI64)((NU64)(A_5803) + (NU64)(B_5804));
LOC2 = (0 <= (NI64)(Result_5805 ^ A_5803));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_5805 ^ B_5804));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5805;
}
N_NIMCALL(NI, Findstr_70471)(NimStringDesc** A_70474, NI A_70474Len0, NimStringDesc* S_70475) {
NI Result_70481;
NI I_70504;
NI HEX3Atmp_70508;
NI Res_70510;
NI LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "findStr";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_70481 = 0;
I_70504 = 0;
HEX3Atmp_70508 = 0;
F.line = 115;F.filename = "wordrecg.nim";
HEX3Atmp_70508 = (A_70474Len0-1);
Res_70510 = 0;
F.line = 1021;F.filename = "system.nim";
Res_70510 = 0;
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_70510 <= HEX3Atmp_70508)) goto LA1;
F.line = 1021;F.filename = "system.nim";
I_70504 = Res_70510;
F.line = 116;F.filename = "wordrecg.nim";
if ((NU)(I_70504) >= (NU)(A_70474Len0)) raiseIndexError();
LOC3 = nsuCmpIgnoreStyle(A_70474[I_70504], S_70475);
if (!(LOC3 == 0)) goto LA4;
F.line = 117;F.filename = "wordrecg.nim";
F.line = 117;F.filename = "wordrecg.nim";
Result_70481 = I_70504;
goto BeforeRet;
LA4: ;
F.line = 1024;F.filename = "system.nim";
Res_70510 = addInt(Res_70510, 1);
} LA1: ;
F.line = 118;F.filename = "wordrecg.nim";
Result_70481 = -1;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_70481;
}
N_NIMCALL(NU8, Whichkeyword_70468)(NimStringDesc* Id_70470) {
NU8 Result_70516;
TY53011* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "whichKeyword";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_70516 = 0;
F.line = 121;F.filename = "wordrecg.nim";
LOC1 = 0;
LOC1 = Getident_53016(Id_70470);
Result_70516 = Whichkeyword_70465(LOC1);
framePtr = framePtr->prev;
return Result_70516;
}
static N_INLINE(NI, chckRange)(NI I_4610, NI A_4611, NI B_4612) {
NI Result_5516;
NIM_BOOL LOC2;
Result_5516 = 0;
LOC2 = (A_4611 <= I_4610);
if (!(LOC2)) goto LA3;
LOC2 = (I_4610 <= B_4612);
LA3: ;
if (!LOC2) goto LA4;
Result_5516 = I_4610;
goto BeforeRet;
goto LA1;
LA4: ;
raiseRangeError(((NI64) (I_4610)));
LA1: ;
BeforeRet: ;
return Result_5516;
}
N_NIMCALL(NU8, Whichkeyword_70465)(TY53011* Id_70467) {
NU8 Result_70520;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "whichKeyword";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_70520 = 0;
F.line = 124;F.filename = "wordrecg.nim";
if (!((*Id_70467).Sup.Id < 0)) goto LA2;
F.line = 124;F.filename = "wordrecg.nim";
Result_70520 = ((NU8) 0);
goto LA1;
LA2: ;
F.line = 125;F.filename = "wordrecg.nim";
Result_70520 = ((NU8)chckRange((*Id_70467).Sup.Id, ((NU8) 0), ((NU8) 219)));
LA1: ;
framePtr = framePtr->prev;
return Result_70520;
}
N_NIMCALL(void, Initspecials_70523)(void) {
NU8 S_70563;
NU8 Res_70571;
NI LOC2;
TY53011* LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "initSpecials";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
S_70563 = 0;
Res_70571 = 0;
F.line = 1021;F.filename = "system.nim";
Res_70571 = ((NU8) 1);
F.line = 1022;F.filename = "system.nim";
while (1) {
if (!(Res_70571 <= ((NU8) 219))) goto LA1;
F.line = 1021;F.filename = "system.nim";
S_70563 = Res_70571;
F.line = 130;F.filename = "wordrecg.nim";
LOC2 = Getnormalizedhash_43037(Specialwords_70240[(S_70563)-0]);
LOC3 = 0;
LOC3 = Getident_53019(Specialwords_70240[(S_70563)-0], LOC2);
(*LOC3).Sup.Id = S_70563;
F.line = 1024;F.filename = "system.nim";
Res_70571 = addInt(Res_70571, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NOINLINE(void, wordrecgInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "wordrecg";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 132;F.filename = "wordrecg.nim";
Initspecials_70523();
framePtr = framePtr->prev;
}

