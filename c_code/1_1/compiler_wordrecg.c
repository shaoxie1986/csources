/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tident191012 Tident191012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj191006 Tidobj191006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY198333[261];
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj191006  {
  TNimObject Sup;
NI id;
};
struct  Tident191012  {
  Tidobj191006 Sup;
NimStringDesc* s;
Tident191012* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, initspecials_198370)(void);
N_NIMCALL(Tident191012*, getident_191445)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_140892)(NimStringDesc* x);
N_NIMCALL(NU16, whichkeyword_198362)(Tident191012* id);
N_NIMCALL(Tident191012*, getident_191441)(NimStringDesc* identifier);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
STRING_LITERAL(TMP535, "", 0);
STRING_LITERAL(TMP536, "addr", 4);
STRING_LITERAL(TMP537, "and", 3);
STRING_LITERAL(TMP538, "as", 2);
STRING_LITERAL(TMP539, "asm", 3);
STRING_LITERAL(TMP540, "atomic", 6);
STRING_LITERAL(TMP541, "bind", 4);
STRING_LITERAL(TMP542, "block", 5);
STRING_LITERAL(TMP543, "break", 5);
STRING_LITERAL(TMP544, "case", 4);
STRING_LITERAL(TMP545, "cast", 4);
STRING_LITERAL(TMP546, "concept", 7);
STRING_LITERAL(TMP547, "const", 5);
STRING_LITERAL(TMP548, "continue", 8);
STRING_LITERAL(TMP549, "converter", 9);
STRING_LITERAL(TMP550, "defer", 5);
STRING_LITERAL(TMP551, "discard", 7);
STRING_LITERAL(TMP552, "distinct", 8);
STRING_LITERAL(TMP553, "div", 3);
STRING_LITERAL(TMP554, "do", 2);
STRING_LITERAL(TMP555, "elif", 4);
STRING_LITERAL(TMP556, "else", 4);
STRING_LITERAL(TMP557, "end", 3);
STRING_LITERAL(TMP558, "enum", 4);
STRING_LITERAL(TMP559, "except", 6);
STRING_LITERAL(TMP560, "export", 6);
STRING_LITERAL(TMP561, "finally", 7);
STRING_LITERAL(TMP562, "for", 3);
STRING_LITERAL(TMP563, "from", 4);
STRING_LITERAL(TMP564, "func", 4);
STRING_LITERAL(TMP565, "generic", 7);
STRING_LITERAL(TMP566, "if", 2);
STRING_LITERAL(TMP567, "import", 6);
STRING_LITERAL(TMP568, "in", 2);
STRING_LITERAL(TMP569, "include", 7);
STRING_LITERAL(TMP570, "interface", 9);
STRING_LITERAL(TMP571, "is", 2);
STRING_LITERAL(TMP572, "isnot", 5);
STRING_LITERAL(TMP573, "iterator", 8);
STRING_LITERAL(TMP574, "let", 3);
STRING_LITERAL(TMP575, "macro", 5);
STRING_LITERAL(TMP576, "method", 6);
STRING_LITERAL(TMP577, "mixin", 5);
STRING_LITERAL(TMP578, "mod", 3);
STRING_LITERAL(TMP579, "nil", 3);
STRING_LITERAL(TMP580, "not", 3);
STRING_LITERAL(TMP581, "notin", 5);
STRING_LITERAL(TMP582, "object", 6);
STRING_LITERAL(TMP583, "of", 2);
STRING_LITERAL(TMP584, "or", 2);
STRING_LITERAL(TMP585, "out", 3);
STRING_LITERAL(TMP586, "proc", 4);
STRING_LITERAL(TMP587, "ptr", 3);
STRING_LITERAL(TMP588, "raise", 5);
STRING_LITERAL(TMP589, "ref", 3);
STRING_LITERAL(TMP590, "return", 6);
STRING_LITERAL(TMP591, "shl", 3);
STRING_LITERAL(TMP592, "shr", 3);
STRING_LITERAL(TMP593, "static", 6);
STRING_LITERAL(TMP594, "template", 8);
STRING_LITERAL(TMP595, "try", 3);
STRING_LITERAL(TMP596, "tuple", 5);
STRING_LITERAL(TMP597, "type", 4);
STRING_LITERAL(TMP598, "using", 5);
STRING_LITERAL(TMP599, "var", 3);
STRING_LITERAL(TMP600, "when", 4);
STRING_LITERAL(TMP601, "while", 5);
STRING_LITERAL(TMP602, "with", 4);
STRING_LITERAL(TMP603, "without", 7);
STRING_LITERAL(TMP604, "xor", 3);
STRING_LITERAL(TMP605, "yield", 5);
STRING_LITERAL(TMP606, ":", 1);
STRING_LITERAL(TMP607, "::", 2);
STRING_LITERAL(TMP608, "=", 1);
STRING_LITERAL(TMP609, ".", 1);
STRING_LITERAL(TMP610, "..", 2);
STRING_LITERAL(TMP611, "*", 1);
STRING_LITERAL(TMP612, "-", 1);
STRING_LITERAL(TMP613, "magic", 5);
STRING_LITERAL(TMP614, "thread", 6);
STRING_LITERAL(TMP615, "final", 5);
STRING_LITERAL(TMP616, "profiler", 8);
STRING_LITERAL(TMP617, "objchecks", 9);
STRING_LITERAL(TMP618, "destroy", 7);
STRING_LITERAL(TMP619, "immediate", 9);
STRING_LITERAL(TMP620, "constructor", 11);
STRING_LITERAL(TMP621, "destructor", 10);
STRING_LITERAL(TMP622, "delegator", 9);
STRING_LITERAL(TMP623, "override", 8);
STRING_LITERAL(TMP624, "importcpp", 9);
STRING_LITERAL(TMP625, "importobjc", 10);
STRING_LITERAL(TMP626, "importcompilerproc", 18);
STRING_LITERAL(TMP627, "importc", 7);
STRING_LITERAL(TMP628, "exportc", 7);
STRING_LITERAL(TMP629, "exportnims", 10);
STRING_LITERAL(TMP630, "incompletestruct", 16);
STRING_LITERAL(TMP631, "requiresinit", 12);
STRING_LITERAL(TMP632, "align", 5);
STRING_LITERAL(TMP633, "nodecl", 6);
STRING_LITERAL(TMP634, "pure", 4);
STRING_LITERAL(TMP635, "sideeffect", 10);
STRING_LITERAL(TMP636, "header", 6);
STRING_LITERAL(TMP637, "nosideeffect", 12);
STRING_LITERAL(TMP638, "gcsafe", 6);
STRING_LITERAL(TMP639, "noreturn", 8);
STRING_LITERAL(TMP640, "merge", 5);
STRING_LITERAL(TMP641, "lib", 3);
STRING_LITERAL(TMP642, "dynlib", 6);
STRING_LITERAL(TMP643, "compilerproc", 12);
STRING_LITERAL(TMP644, "procvar", 7);
STRING_LITERAL(TMP645, "base", 4);
STRING_LITERAL(TMP646, "fatal", 5);
STRING_LITERAL(TMP647, "error", 5);
STRING_LITERAL(TMP648, "warning", 7);
STRING_LITERAL(TMP649, "hint", 4);
STRING_LITERAL(TMP650, "line", 4);
STRING_LITERAL(TMP651, "push", 4);
STRING_LITERAL(TMP652, "pop", 3);
STRING_LITERAL(TMP653, "define", 6);
STRING_LITERAL(TMP654, "undef", 5);
STRING_LITERAL(TMP655, "linedir", 7);
STRING_LITERAL(TMP656, "stacktrace", 10);
STRING_LITERAL(TMP657, "linetrace", 9);
STRING_LITERAL(TMP658, "link", 4);
STRING_LITERAL(TMP659, "compile", 7);
STRING_LITERAL(TMP660, "linksys", 7);
STRING_LITERAL(TMP661, "deprecated", 10);
STRING_LITERAL(TMP662, "varargs", 7);
STRING_LITERAL(TMP663, "callconv", 8);
STRING_LITERAL(TMP664, "breakpoint", 10);
STRING_LITERAL(TMP665, "debugger", 8);
STRING_LITERAL(TMP666, "nimcall", 7);
STRING_LITERAL(TMP667, "stdcall", 7);
STRING_LITERAL(TMP668, "cdecl", 5);
STRING_LITERAL(TMP669, "safecall", 8);
STRING_LITERAL(TMP670, "syscall", 7);
STRING_LITERAL(TMP671, "inline", 6);
STRING_LITERAL(TMP672, "noinline", 8);
STRING_LITERAL(TMP673, "fastcall", 8);
STRING_LITERAL(TMP674, "closure", 7);
STRING_LITERAL(TMP675, "noconv", 6);
STRING_LITERAL(TMP676, "on", 2);
STRING_LITERAL(TMP677, "off", 3);
STRING_LITERAL(TMP678, "checks", 6);
STRING_LITERAL(TMP679, "rangechecks", 11);
STRING_LITERAL(TMP680, "boundchecks", 11);
STRING_LITERAL(TMP681, "overflowchecks", 14);
STRING_LITERAL(TMP682, "nilchecks", 9);
STRING_LITERAL(TMP683, "floatchecks", 11);
STRING_LITERAL(TMP684, "nanchecks", 9);
STRING_LITERAL(TMP685, "infchecks", 9);
STRING_LITERAL(TMP686, "assertions", 10);
STRING_LITERAL(TMP687, "patterns", 8);
STRING_LITERAL(TMP688, "warnings", 8);
STRING_LITERAL(TMP689, "hints", 5);
STRING_LITERAL(TMP690, "optimization", 12);
STRING_LITERAL(TMP691, "raises", 6);
STRING_LITERAL(TMP692, "writes", 6);
STRING_LITERAL(TMP693, "reads", 5);
STRING_LITERAL(TMP694, "size", 4);
STRING_LITERAL(TMP695, "effects", 7);
STRING_LITERAL(TMP696, "tags", 4);
STRING_LITERAL(TMP697, "deadcodeelim", 12);
STRING_LITERAL(TMP698, "safecode", 8);
STRING_LITERAL(TMP699, "noforward", 9);
STRING_LITERAL(TMP700, "norewrite", 9);
STRING_LITERAL(TMP701, "pragma", 6);
STRING_LITERAL(TMP702, "compiletime", 11);
STRING_LITERAL(TMP703, "noinit", 6);
STRING_LITERAL(TMP704, "passc", 5);
STRING_LITERAL(TMP705, "passl", 5);
STRING_LITERAL(TMP706, "borrow", 6);
STRING_LITERAL(TMP707, "discardable", 11);
STRING_LITERAL(TMP708, "fieldchecks", 11);
STRING_LITERAL(TMP709, "watchpoint", 10);
STRING_LITERAL(TMP710, "subschar", 8);
STRING_LITERAL(TMP711, "acyclic", 7);
STRING_LITERAL(TMP712, "shallow", 7);
STRING_LITERAL(TMP713, "unroll", 6);
STRING_LITERAL(TMP714, "linearscanend", 13);
STRING_LITERAL(TMP715, "computedgoto", 12);
STRING_LITERAL(TMP716, "injectstmt", 10);
STRING_LITERAL(TMP717, "experimental", 12);
STRING_LITERAL(TMP718, "write", 5);
STRING_LITERAL(TMP719, "gensym", 6);
STRING_LITERAL(TMP720, "inject", 6);
STRING_LITERAL(TMP721, "dirty", 5);
STRING_LITERAL(TMP722, "inheritable", 11);
STRING_LITERAL(TMP723, "threadvar", 9);
STRING_LITERAL(TMP724, "emit", 4);
STRING_LITERAL(TMP725, "asmnostackframe", 15);
STRING_LITERAL(TMP726, "implicitstatic", 14);
STRING_LITERAL(TMP727, "global", 6);
STRING_LITERAL(TMP728, "codegendecl", 11);
STRING_LITERAL(TMP729, "unchecked", 9);
STRING_LITERAL(TMP730, "guard", 5);
STRING_LITERAL(TMP731, "locks", 5);
STRING_LITERAL(TMP732, "auto", 4);
STRING_LITERAL(TMP733, "bool", 4);
STRING_LITERAL(TMP734, "catch", 5);
STRING_LITERAL(TMP735, "char", 4);
STRING_LITERAL(TMP736, "class", 5);
STRING_LITERAL(TMP737, "const_cast", 10);
STRING_LITERAL(TMP738, "default", 7);
STRING_LITERAL(TMP739, "delete", 6);
STRING_LITERAL(TMP740, "double", 6);
STRING_LITERAL(TMP741, "dynamic_cast", 12);
STRING_LITERAL(TMP742, "explicit", 8);
STRING_LITERAL(TMP743, "extern", 6);
STRING_LITERAL(TMP744, "false", 5);
STRING_LITERAL(TMP745, "float", 5);
STRING_LITERAL(TMP746, "friend", 6);
STRING_LITERAL(TMP747, "goto", 4);
STRING_LITERAL(TMP748, "int", 3);
STRING_LITERAL(TMP749, "long", 4);
STRING_LITERAL(TMP750, "mutable", 7);
STRING_LITERAL(TMP751, "namespace", 9);
STRING_LITERAL(TMP752, "new", 3);
STRING_LITERAL(TMP753, "operator", 8);
STRING_LITERAL(TMP754, "private", 7);
STRING_LITERAL(TMP755, "protected", 9);
STRING_LITERAL(TMP756, "public", 6);
STRING_LITERAL(TMP757, "register", 8);
STRING_LITERAL(TMP758, "reinterpret_cast", 16);
STRING_LITERAL(TMP759, "short", 5);
STRING_LITERAL(TMP760, "signed", 6);
STRING_LITERAL(TMP761, "sizeof", 6);
STRING_LITERAL(TMP762, "static_cast", 11);
STRING_LITERAL(TMP763, "struct", 6);
STRING_LITERAL(TMP764, "switch", 6);
STRING_LITERAL(TMP765, "this", 4);
STRING_LITERAL(TMP766, "throw", 5);
STRING_LITERAL(TMP767, "true", 4);
STRING_LITERAL(TMP768, "typedef", 7);
STRING_LITERAL(TMP769, "typeid", 6);
STRING_LITERAL(TMP770, "typename", 8);
STRING_LITERAL(TMP771, "union", 5);
STRING_LITERAL(TMP772, "packed", 6);
STRING_LITERAL(TMP773, "unsigned", 8);
STRING_LITERAL(TMP774, "virtual", 7);
STRING_LITERAL(TMP775, "void", 4);
STRING_LITERAL(TMP776, "volatile", 8);
STRING_LITERAL(TMP777, "wchar_t", 7);
STRING_LITERAL(TMP778, "alignas", 7);
STRING_LITERAL(TMP779, "alignof", 7);
STRING_LITERAL(TMP780, "constexpr", 9);
STRING_LITERAL(TMP781, "decltype", 8);
STRING_LITERAL(TMP782, "nullptr", 7);
STRING_LITERAL(TMP783, "noexcept", 8);
STRING_LITERAL(TMP784, "thread_local", 12);
STRING_LITERAL(TMP785, "static_assert", 13);
STRING_LITERAL(TMP786, "char16_t", 8);
STRING_LITERAL(TMP787, "char32_t", 8);
STRING_LITERAL(TMP788, "stdin", 5);
STRING_LITERAL(TMP789, "stdout", 6);
STRING_LITERAL(TMP790, "stderr", 6);
STRING_LITERAL(TMP791, "inout", 5);
STRING_LITERAL(TMP792, "bycopy", 6);
STRING_LITERAL(TMP793, "byref", 5);
STRING_LITERAL(TMP794, "oneway", 6);
STRING_LITERAL(TMP795, "bitsize", 7);
NIM_CONST TY198333 specialwords_198329 = {((NimStringDesc*) &TMP535),
((NimStringDesc*) &TMP536),
((NimStringDesc*) &TMP537),
((NimStringDesc*) &TMP538),
((NimStringDesc*) &TMP539),
((NimStringDesc*) &TMP540),
((NimStringDesc*) &TMP541),
((NimStringDesc*) &TMP542),
((NimStringDesc*) &TMP543),
((NimStringDesc*) &TMP544),
((NimStringDesc*) &TMP545),
((NimStringDesc*) &TMP546),
((NimStringDesc*) &TMP547),
((NimStringDesc*) &TMP548),
((NimStringDesc*) &TMP549),
((NimStringDesc*) &TMP550),
((NimStringDesc*) &TMP551),
((NimStringDesc*) &TMP552),
((NimStringDesc*) &TMP553),
((NimStringDesc*) &TMP554),
((NimStringDesc*) &TMP555),
((NimStringDesc*) &TMP556),
((NimStringDesc*) &TMP557),
((NimStringDesc*) &TMP558),
((NimStringDesc*) &TMP559),
((NimStringDesc*) &TMP560),
((NimStringDesc*) &TMP561),
((NimStringDesc*) &TMP562),
((NimStringDesc*) &TMP563),
((NimStringDesc*) &TMP564),
((NimStringDesc*) &TMP565),
((NimStringDesc*) &TMP566),
((NimStringDesc*) &TMP567),
((NimStringDesc*) &TMP568),
((NimStringDesc*) &TMP569),
((NimStringDesc*) &TMP570),
((NimStringDesc*) &TMP571),
((NimStringDesc*) &TMP572),
((NimStringDesc*) &TMP573),
((NimStringDesc*) &TMP574),
((NimStringDesc*) &TMP575),
((NimStringDesc*) &TMP576),
((NimStringDesc*) &TMP577),
((NimStringDesc*) &TMP578),
((NimStringDesc*) &TMP579),
((NimStringDesc*) &TMP580),
((NimStringDesc*) &TMP581),
((NimStringDesc*) &TMP582),
((NimStringDesc*) &TMP583),
((NimStringDesc*) &TMP584),
((NimStringDesc*) &TMP585),
((NimStringDesc*) &TMP586),
((NimStringDesc*) &TMP587),
((NimStringDesc*) &TMP588),
((NimStringDesc*) &TMP589),
((NimStringDesc*) &TMP590),
((NimStringDesc*) &TMP591),
((NimStringDesc*) &TMP592),
((NimStringDesc*) &TMP593),
((NimStringDesc*) &TMP594),
((NimStringDesc*) &TMP595),
((NimStringDesc*) &TMP596),
((NimStringDesc*) &TMP597),
((NimStringDesc*) &TMP598),
((NimStringDesc*) &TMP599),
((NimStringDesc*) &TMP600),
((NimStringDesc*) &TMP601),
((NimStringDesc*) &TMP602),
((NimStringDesc*) &TMP603),
((NimStringDesc*) &TMP604),
((NimStringDesc*) &TMP605),
((NimStringDesc*) &TMP606),
((NimStringDesc*) &TMP607),
((NimStringDesc*) &TMP608),
((NimStringDesc*) &TMP609),
((NimStringDesc*) &TMP610),
((NimStringDesc*) &TMP611),
((NimStringDesc*) &TMP612),
((NimStringDesc*) &TMP613),
((NimStringDesc*) &TMP614),
((NimStringDesc*) &TMP615),
((NimStringDesc*) &TMP616),
((NimStringDesc*) &TMP617),
((NimStringDesc*) &TMP618),
((NimStringDesc*) &TMP619),
((NimStringDesc*) &TMP620),
((NimStringDesc*) &TMP621),
((NimStringDesc*) &TMP622),
((NimStringDesc*) &TMP623),
((NimStringDesc*) &TMP624),
((NimStringDesc*) &TMP625),
((NimStringDesc*) &TMP626),
((NimStringDesc*) &TMP627),
((NimStringDesc*) &TMP628),
((NimStringDesc*) &TMP629),
((NimStringDesc*) &TMP630),
((NimStringDesc*) &TMP631),
((NimStringDesc*) &TMP632),
((NimStringDesc*) &TMP633),
((NimStringDesc*) &TMP634),
((NimStringDesc*) &TMP635),
((NimStringDesc*) &TMP636),
((NimStringDesc*) &TMP637),
((NimStringDesc*) &TMP638),
((NimStringDesc*) &TMP639),
((NimStringDesc*) &TMP640),
((NimStringDesc*) &TMP641),
((NimStringDesc*) &TMP642),
((NimStringDesc*) &TMP643),
((NimStringDesc*) &TMP644),
((NimStringDesc*) &TMP645),
((NimStringDesc*) &TMP646),
((NimStringDesc*) &TMP647),
((NimStringDesc*) &TMP648),
((NimStringDesc*) &TMP649),
((NimStringDesc*) &TMP650),
((NimStringDesc*) &TMP651),
((NimStringDesc*) &TMP652),
((NimStringDesc*) &TMP653),
((NimStringDesc*) &TMP654),
((NimStringDesc*) &TMP655),
((NimStringDesc*) &TMP656),
((NimStringDesc*) &TMP657),
((NimStringDesc*) &TMP658),
((NimStringDesc*) &TMP659),
((NimStringDesc*) &TMP660),
((NimStringDesc*) &TMP661),
((NimStringDesc*) &TMP662),
((NimStringDesc*) &TMP663),
((NimStringDesc*) &TMP664),
((NimStringDesc*) &TMP665),
((NimStringDesc*) &TMP666),
((NimStringDesc*) &TMP667),
((NimStringDesc*) &TMP668),
((NimStringDesc*) &TMP669),
((NimStringDesc*) &TMP670),
((NimStringDesc*) &TMP671),
((NimStringDesc*) &TMP672),
((NimStringDesc*) &TMP673),
((NimStringDesc*) &TMP674),
((NimStringDesc*) &TMP675),
((NimStringDesc*) &TMP676),
((NimStringDesc*) &TMP677),
((NimStringDesc*) &TMP678),
((NimStringDesc*) &TMP679),
((NimStringDesc*) &TMP680),
((NimStringDesc*) &TMP681),
((NimStringDesc*) &TMP682),
((NimStringDesc*) &TMP683),
((NimStringDesc*) &TMP684),
((NimStringDesc*) &TMP685),
((NimStringDesc*) &TMP686),
((NimStringDesc*) &TMP687),
((NimStringDesc*) &TMP688),
((NimStringDesc*) &TMP689),
((NimStringDesc*) &TMP690),
((NimStringDesc*) &TMP691),
((NimStringDesc*) &TMP692),
((NimStringDesc*) &TMP693),
((NimStringDesc*) &TMP694),
((NimStringDesc*) &TMP695),
((NimStringDesc*) &TMP696),
((NimStringDesc*) &TMP697),
((NimStringDesc*) &TMP698),
((NimStringDesc*) &TMP699),
((NimStringDesc*) &TMP700),
((NimStringDesc*) &TMP701),
((NimStringDesc*) &TMP702),
((NimStringDesc*) &TMP703),
((NimStringDesc*) &TMP704),
((NimStringDesc*) &TMP705),
((NimStringDesc*) &TMP706),
((NimStringDesc*) &TMP707),
((NimStringDesc*) &TMP708),
((NimStringDesc*) &TMP709),
((NimStringDesc*) &TMP710),
((NimStringDesc*) &TMP711),
((NimStringDesc*) &TMP712),
((NimStringDesc*) &TMP713),
((NimStringDesc*) &TMP714),
((NimStringDesc*) &TMP715),
((NimStringDesc*) &TMP716),
((NimStringDesc*) &TMP717),
((NimStringDesc*) &TMP718),
((NimStringDesc*) &TMP719),
((NimStringDesc*) &TMP720),
((NimStringDesc*) &TMP721),
((NimStringDesc*) &TMP722),
((NimStringDesc*) &TMP723),
((NimStringDesc*) &TMP724),
((NimStringDesc*) &TMP725),
((NimStringDesc*) &TMP726),
((NimStringDesc*) &TMP727),
((NimStringDesc*) &TMP728),
((NimStringDesc*) &TMP729),
((NimStringDesc*) &TMP730),
((NimStringDesc*) &TMP731),
((NimStringDesc*) &TMP732),
((NimStringDesc*) &TMP733),
((NimStringDesc*) &TMP734),
((NimStringDesc*) &TMP735),
((NimStringDesc*) &TMP736),
((NimStringDesc*) &TMP737),
((NimStringDesc*) &TMP738),
((NimStringDesc*) &TMP739),
((NimStringDesc*) &TMP740),
((NimStringDesc*) &TMP741),
((NimStringDesc*) &TMP742),
((NimStringDesc*) &TMP743),
((NimStringDesc*) &TMP744),
((NimStringDesc*) &TMP745),
((NimStringDesc*) &TMP746),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP751),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP754),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP757),
((NimStringDesc*) &TMP758),
((NimStringDesc*) &TMP759),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP767),
((NimStringDesc*) &TMP768),
((NimStringDesc*) &TMP769),
((NimStringDesc*) &TMP770),
((NimStringDesc*) &TMP771),
((NimStringDesc*) &TMP772),
((NimStringDesc*) &TMP773),
((NimStringDesc*) &TMP774),
((NimStringDesc*) &TMP775),
((NimStringDesc*) &TMP776),
((NimStringDesc*) &TMP777),
((NimStringDesc*) &TMP778),
((NimStringDesc*) &TMP779),
((NimStringDesc*) &TMP780),
((NimStringDesc*) &TMP781),
((NimStringDesc*) &TMP782),
((NimStringDesc*) &TMP783),
((NimStringDesc*) &TMP784),
((NimStringDesc*) &TMP785),
((NimStringDesc*) &TMP786),
((NimStringDesc*) &TMP787),
((NimStringDesc*) &TMP788),
((NimStringDesc*) &TMP789),
((NimStringDesc*) &TMP790),
((NimStringDesc*) &TMP791),
((NimStringDesc*) &TMP792),
((NimStringDesc*) &TMP793),
((NimStringDesc*) &TMP794),
((NimStringDesc*) &TMP795)}
;

N_NIMCALL(void, initspecials_198370)(void) {
	{
		NU16 s_198414;
		NI res_198426;
		s_198414 = 0;
		res_198426 = ((NI) 1);
		{
			while (1) {
				NI LOC4;
				Tident191012* LOC5;
				if (!(res_198426 <= ((NI) 260))) goto LA3;
				s_198414 = ((NU16) (res_198426));
				LOC4 = 0;
				LOC4 = hashignorestyle_140892(specialwords_198329[(s_198414)- 0]);
				LOC5 = 0;
				LOC5 = getident_191445(specialwords_198329[(s_198414)- 0], LOC4);
				(*LOC5).Sup.id = ((NI) (s_198414));
				res_198426 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NU16, whichkeyword_198362)(Tident191012* id) {
	NU16 result;
	result = 0;
	{
		if (!((*id).Sup.id < ((NI) 0))) goto LA3;
		result = ((NU16) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU16) ((*id).Sup.id));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU16, whichkeyword_198366)(NimStringDesc* id) {
	NU16 result;
	Tident191012* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_191441(id);
	result = whichkeyword_198362(LOC1);
	return result;
}

N_NIMCALL(NI, findstr_198336)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
{	result = 0;
	{
		NI i_198353;
		NI HEX3Atmp_198355;
		NI res_198358;
		i_198353 = 0;
		HEX3Atmp_198355 = 0;
		HEX3Atmp_198355 = (aLen0-1);
		res_198358 = ((NI) 0);
		{
			while (1) {
				if (!(res_198358 <= HEX3Atmp_198355)) goto LA3;
				i_198353 = res_198358;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(a[i_198353], s);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_198353;
					goto BeforeRet;
				}
				LA7: ;
				res_198358 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgInit000)(void) {
	initspecials_198370();
}

NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgDatInit000)(void) {
}

