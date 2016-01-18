/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu168462 Tinfocpu168462;
typedef struct Tinfoos168037 Tinfoos168037;
typedef struct Cell47505 Cell47505;
typedef struct TNimType TNimType;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct TNimNode TNimNode;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Tinfocpu168462 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu168462 TY168490[18];
struct Tinfoos168037 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef Tinfoos168037 TY168069[24];
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29639* TY29702[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29687  {
NI minlargeobj;
NI maxlargeobj;
TY29702 freesmallchunks;
Llchunk29681* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29641* freechunkslist;
Intset29614 chunkstarts;
Avlnode29685* root;
Avlnode29685* deleted;
Avlnode29685* last;
Avlnode29685* freeavlnodes;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29687 region;
Gcstat49814 stat;
};
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
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29618[16];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29618 bits;
};
struct  Basechunk29637  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29639  {
  Basechunk29637 Sup;
Smallchunk29639* next;
Smallchunk29639* prev;
Freecell29629* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29681  {
NI size;
NI acc;
Llchunk29681* next;
};
struct  Bigchunk29641  {
  Basechunk29637 Sup;
Bigchunk29641* next;
Bigchunk29641* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29618 bits;
};
typedef Avlnode29685* TY29692[2];
struct  Avlnode29685  {
TY29692 link;
NI key;
NI upperbound;
NI level;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
N_NIMCALL(NU8, nametocpu_168612)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NU8, nametoos_168609)(NimStringDesc* name);
N_NIMCALL(void, settarget_168623)(NU8 o, NU8 c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
STRING_LITERAL(TMP63, "i386", 4);
STRING_LITERAL(TMP64, "m68k", 4);
STRING_LITERAL(TMP65, "alpha", 5);
STRING_LITERAL(TMP66, "powerpc", 7);
STRING_LITERAL(TMP67, "powerpc64", 9);
STRING_LITERAL(TMP68, "powerpc64el", 11);
STRING_LITERAL(TMP69, "sparc", 5);
STRING_LITERAL(TMP70, "vm", 2);
STRING_LITERAL(TMP71, "ia64", 4);
STRING_LITERAL(TMP72, "amd64", 5);
STRING_LITERAL(TMP73, "mips", 4);
STRING_LITERAL(TMP74, "mipsel", 6);
STRING_LITERAL(TMP75, "arm", 3);
STRING_LITERAL(TMP76, "arm64", 5);
STRING_LITERAL(TMP77, "js", 2);
STRING_LITERAL(TMP78, "nimrodvm", 8);
STRING_LITERAL(TMP79, "avr", 3);
STRING_LITERAL(TMP80, "msp430", 6);
NIM_CONST TY168490 Cpu_168476 = {{((NimStringDesc*) &TMP63),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP64),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP65),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP66),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP67),
((NI) 64),
((NU8) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP68),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP69),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP70),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP71),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP72),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP73),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP74),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP75),
((NI) 32),
((NU8) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP76),
((NI) 64),
((NU8) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &TMP77),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP78),
((NI) 32),
((NU8) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &TMP79),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &TMP80),
((NI) 16),
((NU8) 0),
((NI) 32),
((NI) 16)}
}
;
STRING_LITERAL(TMP81, "DOS", 3);
STRING_LITERAL(TMP82, "..", 2);
STRING_LITERAL(TMP83, "$1.dll", 6);
STRING_LITERAL(TMP84, "/", 1);
STRING_LITERAL(TMP85, ".obj", 4);
STRING_LITERAL(TMP86, "\015\012", 2);
STRING_LITERAL(TMP87, ";", 1);
STRING_LITERAL(TMP88, "\\", 1);
STRING_LITERAL(TMP89, ".bat", 4);
STRING_LITERAL(TMP90, ".", 1);
STRING_LITERAL(TMP91, ".exe", 4);
STRING_LITERAL(TMP92, "Windows", 7);
STRING_LITERAL(TMP93, "OS2", 3);
STRING_LITERAL(TMP94, "Linux", 5);
STRING_LITERAL(TMP95, "lib$1.so", 8);
STRING_LITERAL(TMP96, ".o", 2);
STRING_LITERAL(TMP97, "\012", 1);
STRING_LITERAL(TMP98, ":", 1);
STRING_LITERAL(TMP99, ".sh", 3);
STRING_LITERAL(TMP100, "", 0);
STRING_LITERAL(TMP101, "MorphOS", 7);
STRING_LITERAL(TMP102, "SkyOS", 5);
STRING_LITERAL(TMP103, "Solaris", 7);
STRING_LITERAL(TMP104, "Irix", 4);
STRING_LITERAL(TMP105, "NetBSD", 6);
STRING_LITERAL(TMP106, "FreeBSD", 7);
STRING_LITERAL(TMP107, "OpenBSD", 7);
STRING_LITERAL(TMP108, "AIX", 3);
STRING_LITERAL(TMP109, "PalmOS", 6);
STRING_LITERAL(TMP110, "QNX", 3);
STRING_LITERAL(TMP111, "Amiga", 5);
STRING_LITERAL(TMP112, "$1.library", 10);
STRING_LITERAL(TMP113, "Atari", 5);
STRING_LITERAL(TMP114, ".tpp", 4);
STRING_LITERAL(TMP115, "Netware", 7);
STRING_LITERAL(TMP116, "$1.nlm", 6);
STRING_LITERAL(TMP117, ".nlm", 4);
STRING_LITERAL(TMP118, "MacOS", 5);
STRING_LITERAL(TMP119, "::", 2);
STRING_LITERAL(TMP120, "$1Lib", 5);
STRING_LITERAL(TMP121, "\015", 1);
STRING_LITERAL(TMP122, ",", 1);
STRING_LITERAL(TMP123, "MacOSX", 6);
STRING_LITERAL(TMP124, "lib$1.dylib", 11);
STRING_LITERAL(TMP125, "Haiku", 5);
STRING_LITERAL(TMP126, "VxWorks", 7);
STRING_LITERAL(TMP127, ".vxe", 4);
STRING_LITERAL(TMP128, "JS", 2);
STRING_LITERAL(TMP129, "NimrodVM", 8);
STRING_LITERAL(TMP130, "Standalone", 10);
NIM_CONST TY168069 Os_168055 = {{((NimStringDesc*) &TMP81),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP90),
2}
,
{((NimStringDesc*) &TMP92),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP90),
2}
,
{((NimStringDesc*) &TMP93),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP85),
((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP89),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP91),
((NimStringDesc*) &TMP90),
2}
,
{((NimStringDesc*) &TMP94),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP101),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP102),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP103),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP104),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP105),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP106),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP107),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP108),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP109),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
1}
,
{((NimStringDesc*) &TMP110),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
5}
,
{((NimStringDesc*) &TMP111),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP112),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
1}
,
{((NimStringDesc*) &TMP113),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP83),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP114),
((NimStringDesc*) &TMP90),
1}
,
{((NimStringDesc*) &TMP115),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP116),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP86),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP117),
((NimStringDesc*) &TMP90),
2}
,
{((NimStringDesc*) &TMP118),
((NimStringDesc*) &TMP119),
((NimStringDesc*) &TMP120),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP121),
((NimStringDesc*) &TMP122),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
2}
,
{((NimStringDesc*) &TMP123),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP124),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
13}
,
{((NimStringDesc*) &TMP125),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
13}
,
{((NimStringDesc*) &TMP126),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP87),
((NimStringDesc*) &TMP88),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP127),
((NimStringDesc*) &TMP90),
13}
,
{((NimStringDesc*) &TMP128),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
0}
,
{((NimStringDesc*) &TMP129),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
0}
,
{((NimStringDesc*) &TMP130),
((NimStringDesc*) &TMP82),
((NimStringDesc*) &TMP95),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP96),
((NimStringDesc*) &TMP97),
((NimStringDesc*) &TMP98),
((NimStringDesc*) &TMP84),
((NimStringDesc*) &TMP99),
((NimStringDesc*) &TMP90),
((NimStringDesc*) &TMP100),
((NimStringDesc*) &TMP90),
0}
}
;
STRING_LITERAL(TMP131, "linux", 5);
NU8 targetcpu_168601;
NU8 hostcpu_168602;
NU8 targetos_168603;
NU8 hostos_168604;
NI intsize_168615;
NI floatsize_168616;
NI ptrsize_168617;
NimStringDesc* tnl_168618;
extern Gcheap49818 gch_49859;

N_NIMCALL(NU8, nametocpu_168612)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_169414;
		NI res_169419;
		i_169414 = 0;
		res_169419 = ((NI) 1);
		{
			while (1) {
				if (!(res_169419 <= ((NI) 18))) goto LA3;
				i_169414 = ((NU8) (res_169419));
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Cpu_168476[(i_169414)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_169414;
					goto BeforeRet;
				}
				LA7: ;
				res_169419 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, nametoos_168609)(NimStringDesc* name) {
	NU8 result;
{	result = 0;
	{
		NU8 i_169214;
		NI res_169219;
		i_169214 = 0;
		res_169219 = ((NI) 1);
		{
			while (1) {
				if (!(res_169219 <= ((NI) 24))) goto LA3;
				i_169214 = ((NU8) (res_169219));
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(name, Os_168055[(i_169214)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_169214;
					goto BeforeRet;
				}
				LA7: ;
				res_169219 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47505* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
}

N_NIMCALL(void, settarget_168623)(NU8 o, NU8 c) {
	NimStringDesc* LOC1;
	targetcpu_168601 = c;
	targetos_168603 = o;
	intsize_168615 = (NI)(Cpu_168476[(c)- 1].Field1 / ((NI) 8));
	floatsize_168616 = (NI)(Cpu_168476[(c)- 1].Field3 / ((NI) 8));
	ptrsize_168617 = (NI)(Cpu_168476[(c)- 1].Field4 / ((NI) 8));
	LOC1 = 0;
	LOC1 = tnl_168618; tnl_168618 = copyStringRC1(Os_168055[(o)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit000)(void) {
	hostcpu_168602 = nametocpu_168612(((NimStringDesc*) &TMP63));
	hostos_168604 = nametoos_168609(((NimStringDesc*) &TMP131));
	settarget_168623(hostos_168604, hostcpu_168602);
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit000)(void) {
}

