/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode214790 Tnode214790;
typedef struct Ttype214828 Ttype214828;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym214822 Tsym214822;
typedef struct Tident189012 Tident189012;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Tlib214808 Tlib214808;
typedef struct Intset211035 Intset211035;
typedef struct Trunk211031 Trunk211031;
typedef struct Trunkseq211033 Trunkseq211033;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY214913 TY214913;
struct  Tlineinfo182337  {
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
struct  Tnode214790  {
Ttype214828* typ;
Tlineinfo182337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym214822* sym;
} S4;
struct {Tident189012* ident;
} S5;
struct {Tnodeseq214784* sons;
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
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
};
struct  Tsym214822  {
  Tidobj189006 Sup;
NU8 kind;
union{
struct {Ttypeseq214824* typeinstcache;
Tscope214816* typscope;
} S1;
struct {TY214925* procinstcache;
Tsym214822* gcunsafetyreason;
} S2;
struct {TY214925* usedgenerics;
Tstrtable214794 tab;
} S3;
struct {Tsym214822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype214828* typ;
Tident189012* name;
Tlineinfo182337 info;
Tsym214822* owner;
NU32 flags;
Tnode214790* ast;
NU32 options;
NI position;
NI offset;
Tloc214804 loc;
Tlib214808* annex;
Tnode214790* constraint;
};
struct  Intset211035  {
NI counter;
NI max;
Trunk211031* head;
Trunkseq211033* data;
};
struct  Ttype214828  {
  Tidobj189006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq214824* sons;
Tnode214790* n;
Tsym214822* owner;
Tsym214822* sym;
Tsym214822* destructor;
Tsym214822* deepcopy;
Tsym214822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc214804 loc;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
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
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
};
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib214808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj169006* name;
Tnode214790* path;
};
typedef NI TY29618[16];
struct  Trunk211031  {
Trunk211031* next;
NI key;
TY29618 bits;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct Trunkseq211033 {
  TGenericSeq Sup;
  Trunk211031* data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartof_415321)(Ttype214828* a, Ttype214828* b);
N_NIMCALL(void, initintset_211885)(Intset211035* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartofaux_415008)(Ttype214828* a, Ttype214828* b, Intset211035* marker);
N_NIMCALL(NIM_BOOL, containsorincl_211862)(Intset211035* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_246404)(Ttype214828* x, Ttype214828* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, ispartofaux_415014)(Tnode214790* n, Ttype214828* b, Intset211035* marker);
N_NIMCALL(NI, sonslen_217351)(Tnode214790* n);
N_NIMCALL(Tnode214790*, lastson_217364)(Tnode214790* n);
N_NIMCALL(void, internalerror_187113)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_187100)(Tlineinfo182337 info, NimStringDesc* errmsg);
N_NIMCALL(Ttype214828*, lastson_217377)(Ttype214828* n);
N_NIMCALL(NI, sonslen_217327)(Ttype214828* n);
N_NIMCALL(NU8, ispartof_415328)(Tnode214790* a, Tnode214790* b);
static N_INLINE(Tnode214790*, HEX5BHEX5D_215238)(Tnode214790* n, NI i);
static N_INLINE(NI, len_215059)(Tnode214790* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_239361)(Tnode214790* n);
N_NIMCALL(NIM_BOOL, samevalue_221189)(Tnode214790* a, Tnode214790* b);
STRING_LITERAL(TMP3360, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3361, "isPartOfAux()", 13);

N_NIMCALL(NU8, ispartofaux_415014)(Tnode214790* n, Ttype214828* b, Intset211035* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_415032;
			NI HEX3Atmp_415237;
			NI LOC3;
			NI res_415240;
			i_415032 = 0;
			HEX3Atmp_415237 = 0;
			LOC3 = 0;
			LOC3 = sonslen_217351(n);
			HEX3Atmp_415237 = (NI)(LOC3 - ((NI) 1));
			res_415240 = ((NI) 0);
			{
				while (1) {
					if (!(res_415240 <= HEX3Atmp_415237)) goto LA5;
					i_415032 = res_415240;
					result = ispartofaux_415014((*n).kindU.S6.sons->data[i_415032], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_415240 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		result = ispartofaux_415014((*n).kindU.S6.sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_415222;
			NI HEX3Atmp_415245;
			NI LOC16;
			NI res_415248;
			i_415222 = 0;
			HEX3Atmp_415245 = 0;
			LOC16 = 0;
			LOC16 = sonslen_217351(n);
			HEX3Atmp_415245 = (NI)(LOC16 - ((NI) 1));
			res_415248 = ((NI) 1);
			{
				while (1) {
					if (!(res_415248 <= HEX3Atmp_415245)) goto LA18;
					i_415222 = res_415248;
					switch ((*(*n).kindU.S6.sons->data[i_415222]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode214790* LOC20;
						LOC20 = 0;
						LOC20 = lastson_217364((*n).kindU.S6.sons->data[i_415222]);
						result = ispartofaux_415014(LOC20, b, marker);
						{
							if (!(result == ((NU8) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_187113(((NimStringDesc*) &TMP3360));
					}
					break;
					}
					res_415248 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		result = ispartofaux_415008((*(*n).kindU.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
		internalerror_187100((*n).info, ((NimStringDesc*) &TMP3361));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartofaux_415008)(Ttype214828* a, Ttype214828* b, Intset211035* marker) {
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
		LOC9 = containsorincl_211862(marker, (*a).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_246404(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a).kind) {
	case ((NU8) 17):
	{
		result = ispartofaux_415008((*a).sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 0))) goto LA20;
			result = ispartofaux_415014((*a).n, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		Ttype214828* LOC23;
		LOC23 = 0;
		LOC23 = lastson_217377(a);
		result = ispartofaux_415008(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_415303;
			NI HEX3Atmp_415314;
			NI LOC26;
			NI res_415317;
			i_415303 = 0;
			HEX3Atmp_415314 = 0;
			LOC26 = 0;
			LOC26 = sonslen_217327(a);
			HEX3Atmp_415314 = (NI)(LOC26 - ((NI) 1));
			res_415317 = ((NI) 0);
			{
				while (1) {
					if (!(res_415317 <= HEX3Atmp_415314)) goto LA28;
					i_415303 = res_415317;
					result = ispartofaux_415008((*a).sons->data[i_415303], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_415317 += ((NI) 1);
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

N_NIMCALL(NU8, ispartof_415321)(Ttype214828* a, Ttype214828* b) {
	NU8 result;
	Intset211035 marker;
	result = 0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initintset_211885((&marker));
	result = ispartofaux_415008(b, a, (&marker));
	return result;
}

static N_INLINE(Tnode214790*, HEX5BHEX5D_215238)(Tnode214790* n, NI i) {
	Tnode214790* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

static N_INLINE(NI, len_215059)(Tnode214790* n) {
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

N_NIMCALL(NU8, ispartof_415328)(Tnode214790* a, Tnode214790* b) {
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
					LOC18 = ispartof_415321((*(*a).kindU.S4.sym).typ, (*(*b).kindU.S4.sym).typ);
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
			Tnode214790* LOC22;
			Tnode214790* LOC23;
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_215238(a, ((NI) 0));
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_215238(b, ((NI) 0));
			result = ispartof_415328(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_215059(a);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_215059(b);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode214790* LOC37;
					Tnode214790* LOC39;
					Tnode214790* x;
					Tnode214790* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_215238(a, ((NI) 1));
					LOC35 = isdeepconstexpr_239361(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_215238(b, ((NI) 1));
					LOC34 = isdeepconstexpr_239361(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode214790* LOC44;
						Tnode214790* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_215238(a, ((NI) 1));
						if (!((*LOC44).kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_215238(a, ((NI) 1));
						x = HEX5BHEX5D_215238(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_215238(a, ((NI) 1));
					}
					LA42: ;
					{
						Tnode214790* LOC51;
						Tnode214790* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_215238(b, ((NI) 1));
						if (!((*LOC51).kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_215238(b, ((NI) 1));
						y = HEX5BHEX5D_215238(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_215238(b, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_221189(x, y);
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
						LOC69 = ispartof_415321((*a).typ, (*b).typ);
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
			Tnode214790* LOC73;
			Tnode214790* LOC74;
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_215238(a, ((NI) 0));
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_215238(b, ((NI) 0));
			result = ispartof_415328(LOC73, LOC74);
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				{
					Tnode214790* LOC81;
					Tnode214790* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_215238(a, ((NI) 1));
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_215238(b, ((NI) 1));
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
			Tnode214790* LOC86;
			Tnode214790* LOC87;
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_215238(a, ((NI) 0));
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_215238(b, ((NI) 0));
			result = ispartof_415328(LOC86, LOC87);
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_415321((*a).typ, (*b).typ);
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
			Tnode214790* LOC98;
			Tnode214790* LOC99;
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_215238(a, ((NI) 1));
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_215238(b, ((NI) 1));
			result = ispartof_415328(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			Tnode214790* LOC101;
			Tnode214790* LOC102;
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_215238(a, ((NI) 0));
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_215238(b, ((NI) 0));
			result = ispartof_415328(LOC101, LOC102);
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
			Tnode214790* LOC106;
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_215238(b, ((NI) 0));
			result = ispartof_415328(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			{
				NU8 LOC110;
				Tnode214790* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_415321((*a).typ, (*b).typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_215238(b, ((NI) 0));
				result = ispartof_415328(a, LOC113);
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
			Tnode214790* LOC119;
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_215238(b, ((NI) 1));
			result = ispartof_415328(a, LOC119);
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
				Tnode214790* LOC122;
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_215238(a, ((NI) 0));
				result = ispartof_415328(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				Tnode214790* LOC124;
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_215238(a, ((NI) 1));
				result = ispartof_415328(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				{
					NU8 LOC128;
					Tnode214790* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_415321((*a).typ, (*b).typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_215238(a, ((NI) 0));
					result = ispartof_415328(LOC131, b);
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

