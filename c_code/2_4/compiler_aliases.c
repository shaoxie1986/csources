/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode215790 Tnode215790;
typedef struct Ttype215828 Ttype215828;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym215822 Tsym215822;
typedef struct Tident190012 Tident190012;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct Tidobj190006 Tidobj190006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct Tscope215816 Tscope215816;
typedef struct TY215925 TY215925;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Tlib215808 Tlib215808;
typedef struct Intset212035 Intset212035;
typedef struct Trunk212031 Trunk212031;
typedef struct Trunkseq212033 Trunkseq212033;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY215913 TY215913;
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode215790  {
Ttype215828* typ;
Tlineinfo183337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym215822* sym;
} S4;
struct {Tident190012* ident;
} S5;
struct {Tnodeseq215784* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable215794  {
NI counter;
Tsymseq215792* data;
};
struct  Tloc215804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype215828* t;
Ropeobj170006* r;
Ropeobj170006* heaproot;
};
struct  Tsym215822  {
  Tidobj190006 Sup;
NU8 kind;
union{
struct {Ttypeseq215824* typeinstcache;
Tscope215816* typscope;
} S1;
struct {TY215925* procinstcache;
Tsym215822* gcunsafetyreason;
} S2;
struct {TY215925* usedgenerics;
Tstrtable215794 tab;
} S3;
struct {Tsym215822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype215828* typ;
Tident190012* name;
Tlineinfo183337 info;
Tsym215822* owner;
NU32 flags;
Tnode215790* ast;
NU32 options;
NI position;
NI offset;
Tloc215804 loc;
Tlib215808* annex;
Tnode215790* constraint;
};
struct  Intset212035  {
NI counter;
NI max;
Trunk212031* head;
Trunkseq212033* data;
};
struct  Ttype215828  {
  Tidobj190006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq215824* sons;
Tnode215790* n;
Tsym215822* owner;
Tsym215822* sym;
Tsym215822* destructor;
Tsym215822* deepcopy;
Tsym215822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc215804 loc;
};
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
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
struct  Tscope215816  {
NI depthlevel;
Tstrtable215794 symbols;
Tnodeseq215784* usingsyms;
Tscope215816* parent;
};
struct  Ropeobj170006  {
  TNimObject Sup;
Ropeobj170006* left;
Ropeobj170006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib215808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj170006* name;
Tnode215790* path;
};
typedef NI TY29618[16];
struct  Trunk212031  {
Trunk212031* next;
NI key;
TY29618 bits;
};
struct  Tinstantiation215812  {
Tsym215822* sym;
Ttypeseq215824* concretetypes;
TY215913* usedby;
NI compilesid;
};
struct Tnodeseq215784 {
  TGenericSeq Sup;
  Tnode215790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq215824 {
  TGenericSeq Sup;
  Ttype215828* data[SEQ_DECL_SIZE];
};
struct TY215925 {
  TGenericSeq Sup;
  Tinstantiation215812* data[SEQ_DECL_SIZE];
};
struct Tsymseq215792 {
  TGenericSeq Sup;
  Tsym215822* data[SEQ_DECL_SIZE];
};
struct Trunkseq212033 {
  TGenericSeq Sup;
  Trunk212031* data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartof_416321)(Ttype215828* a, Ttype215828* b);
N_NIMCALL(void, initintset_212885)(Intset212035* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartofaux_416008)(Ttype215828* a, Ttype215828* b, Intset212035* marker);
N_NIMCALL(NIM_BOOL, containsorincl_212862)(Intset212035* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_247404)(Ttype215828* x, Ttype215828* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, ispartofaux_416014)(Tnode215790* n, Ttype215828* b, Intset212035* marker);
N_NIMCALL(NI, sonslen_218351)(Tnode215790* n);
N_NIMCALL(Tnode215790*, lastson_218364)(Tnode215790* n);
N_NIMCALL(void, internalerror_188113)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_188100)(Tlineinfo183337 info, NimStringDesc* errmsg);
N_NIMCALL(Ttype215828*, lastson_218377)(Ttype215828* n);
N_NIMCALL(NI, sonslen_218327)(Ttype215828* n);
N_NIMCALL(NU8, ispartof_416328)(Tnode215790* a, Tnode215790* b);
static N_INLINE(Tnode215790*, HEX5BHEX5D_216238)(Tnode215790* n, NI i);
static N_INLINE(NI, len_216059)(Tnode215790* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_240361)(Tnode215790* n);
N_NIMCALL(NIM_BOOL, samevalue_222189)(Tnode215790* a, Tnode215790* b);
STRING_LITERAL(TMP3362, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3363, "isPartOfAux()", 13);

N_NIMCALL(NU8, ispartofaux_416014)(Tnode215790* n, Ttype215828* b, Intset212035* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_416032;
			NI HEX3Atmp_416237;
			NI LOC3;
			NI res_416240;
			i_416032 = 0;
			HEX3Atmp_416237 = 0;
			LOC3 = 0;
			LOC3 = sonslen_218351(n);
			HEX3Atmp_416237 = (NI)(LOC3 - ((NI) 1));
			res_416240 = ((NI) 0);
			{
				while (1) {
					if (!(res_416240 <= HEX3Atmp_416237)) goto LA5;
					i_416032 = res_416240;
					result = ispartofaux_416014((*n).kindU.S6.sons->data[i_416032], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_416240 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		result = ispartofaux_416014((*n).kindU.S6.sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_416222;
			NI HEX3Atmp_416245;
			NI LOC16;
			NI res_416248;
			i_416222 = 0;
			HEX3Atmp_416245 = 0;
			LOC16 = 0;
			LOC16 = sonslen_218351(n);
			HEX3Atmp_416245 = (NI)(LOC16 - ((NI) 1));
			res_416248 = ((NI) 1);
			{
				while (1) {
					if (!(res_416248 <= HEX3Atmp_416245)) goto LA18;
					i_416222 = res_416248;
					switch ((*(*n).kindU.S6.sons->data[i_416222]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode215790* LOC20;
						LOC20 = 0;
						LOC20 = lastson_218364((*n).kindU.S6.sons->data[i_416222]);
						result = ispartofaux_416014(LOC20, b, marker);
						{
							if (!(result == ((NU8) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_188113(((NimStringDesc*) &TMP3362));
					}
					break;
					}
					res_416248 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		result = ispartofaux_416008((*(*n).kindU.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
		internalerror_188100((*n).info, ((NimStringDesc*) &TMP3363));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartofaux_416008)(Ttype215828* a, Ttype215828* b, Intset212035* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = containsorincl_212862(marker, (*a).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_247404(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a).kind) {
	case ((NU8) 17):
	{
		result = ispartofaux_416008((*a).sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 0))) goto LA20;
			result = ispartofaux_416014((*a).n, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		Ttype215828* LOC23;
		LOC23 = 0;
		LOC23 = lastson_218377(a);
		result = ispartofaux_416008(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_416303;
			NI HEX3Atmp_416314;
			NI LOC26;
			NI res_416317;
			i_416303 = 0;
			HEX3Atmp_416314 = 0;
			LOC26 = 0;
			LOC26 = sonslen_218327(a);
			HEX3Atmp_416314 = (NI)(LOC26 - ((NI) 1));
			res_416317 = ((NI) 0);
			{
				while (1) {
					if (!(res_416317 <= HEX3Atmp_416314)) goto LA28;
					i_416303 = res_416317;
					result = ispartofaux_416008((*a).sons->data[i_416303], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_416317 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartof_416321)(Ttype215828* a, Ttype215828* b) {
	NU8 result;
	Intset212035 marker;
	result = 0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initintset_212885((&marker));
	result = ispartofaux_416008(b, a, (&marker));
	return result;
}

static N_INLINE(Tnode215790*, HEX5BHEX5D_216238)(Tnode215790* n, NI i) {
	Tnode215790* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

static N_INLINE(NI, len_216059)(Tnode215790* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, ispartof_416328)(Tnode215790* a, Tnode215790* b) {
	NU8 result;
	result = 0;
	{
		if (!((*a).kind == (*b).kind)) goto LA3;
		switch ((*a).kind) {
		case ((NU8) 3):
		{
			{
				if (!((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id)) goto LA8;
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				LOC11 = 0;
				LOC11 = ((4384 &(1U<<((NU)((*(*a).kindU.S4.sym).kind)&31U)))!=0);
				if (LOC11) goto LA12;
				LOC11 = ((4384 &(1U<<((NU)((*(*b).kindU.S4.sym).kind)&31U)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					NU8 LOC18;
					LOC18 = 0;
					LOC18 = ispartof_416321((*(*a).kindU.S4.sym).typ, (*(*b).kindU.S4.sym).typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			Tnode215790* LOC22;
			Tnode215790* LOC23;
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_216238(a, ((NI) 0));
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_216238(b, ((NI) 0));
			result = ispartof_416328(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_216059(a);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_216059(b);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode215790* LOC37;
					Tnode215790* LOC39;
					Tnode215790* x;
					Tnode215790* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_216238(a, ((NI) 1));
					LOC35 = isdeepconstexpr_240361(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_216238(b, ((NI) 1));
					LOC34 = isdeepconstexpr_240361(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode215790* LOC44;
						Tnode215790* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_216238(a, ((NI) 1));
						if (!((*LOC44).kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_216238(a, ((NI) 1));
						x = HEX5BHEX5D_216238(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_216238(a, ((NI) 1));
					}
					LA42: ;
					{
						Tnode215790* LOC51;
						Tnode215790* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_216238(b, ((NI) 1));
						if (!((*LOC51).kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_216238(b, ((NI) 1));
						y = HEX5BHEX5D_216238(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_216238(b, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_222189(x, y);
						if (!LOC58) goto LA59;
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result == ((NU8) 2)))) goto LA65;
					{
						NU8 LOC69;
						LOC69 = 0;
						LOC69 = ispartof_416321((*a).typ, (*b).typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			Tnode215790* LOC73;
			Tnode215790* LOC74;
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_216238(a, ((NI) 0));
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_216238(b, ((NI) 0));
			result = ispartof_416328(LOC73, LOC74);
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				{
					Tnode215790* LOC81;
					Tnode215790* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_216238(a, ((NI) 1));
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_216238(b, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			Tnode215790* LOC86;
			Tnode215790* LOC87;
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_216238(a, ((NI) 0));
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_216238(b, ((NI) 0));
			result = ispartof_416328(LOC86, LOC87);
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_416321((*a).typ, (*b).typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			Tnode215790* LOC98;
			Tnode215790* LOC99;
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_216238(a, ((NI) 1));
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_216238(b, ((NI) 1));
			result = ispartof_416328(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			Tnode215790* LOC101;
			Tnode215790* LOC102;
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_216238(a, ((NI) 0));
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_216238(b, ((NI) 0));
			result = ispartof_416328(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		switch ((*b).kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		case ((NU8) 64):
		{
			Tnode215790* LOC106;
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_216238(b, ((NI) 0));
			result = ispartof_416328(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			{
				NU8 LOC110;
				Tnode215790* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_416321((*a).typ, (*b).typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_216238(b, ((NI) 0));
				result = ispartof_416328(a, LOC113);
				{
					if (!(result == ((NU8) 0))) goto LA116;
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			Tnode215790* LOC119;
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_216238(b, ((NI) 1));
			result = ispartof_416328(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			switch ((*a).kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			case ((NU8) 64):
			{
				Tnode215790* LOC122;
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_216238(a, ((NI) 0));
				result = ispartof_416328(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				Tnode215790* LOC124;
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_216238(a, ((NI) 1));
				result = ispartof_416328(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				{
					NU8 LOC128;
					Tnode215790* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_416321((*a).typ, (*b).typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_216238(a, ((NI) 0));
					result = ispartof_416328(LOC131, b);
					{
						if (!(result == ((NU8) 0))) goto LA134;
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit000)(void) {
}

