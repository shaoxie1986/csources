/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 Sha1digest191003[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 Sha1state191402[5];
typedef NU32 Sha1buffer191404[80];
N_NIMCALL(void, securehash_191011)(NimStringDesc* str, Sha1digest191003* Result);
N_NIMCALL(void, sha1_191008)(NimStringDesc* src, Sha1digest191003* Result);
N_NIMCALL(void, init_191417)(NU32* result);
N_NIMCALL(void, innerhash_191421)(NU32* state, NU32* w);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(NimStringDesc*, readfile_15666)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_191093)(Sha1digest191003 x, Sha1digest191003 y);
N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
STRING_LITERAL(TMP1797, "", 0);
extern TNimType NTI116; /* uint8 */
TNimType NTI191003; /* Sha1Digest */

N_NIMCALL(void, init_191417)(NU32* result) {
	result[(((NI) 0))- 0] = ((NU32) 1732584193);
	result[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result[(((NI) 3))- 0] = ((NU32) 271733878);
	result[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
}

N_NIMCALL(void, innerhash_191421)(NU32* state, NU32* w) {
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	NU32 e;
	NI round;
	unsigned int v_192457;
	unsigned int v_192468;
	unsigned int v_192479;
	unsigned int v_192490;
	unsigned int v_192501;
	a = state[(((NI) 0))- 0];
	b = state[(((NI) 1))- 0];
	c = state[(((NI) 2))- 0];
	d = state[(((NI) 3))- 0];
	e = state[(((NI) 4))- 0];
	round = ((NI) 0);
	{
		while (1) {
			unsigned int t_191507;
			if (!(round < ((NI) 16))) goto LA2;
			t_191507 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)(b & c) | (unsigned int)((unsigned int)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_191507;
			round += ((NI) 1);
		} LA2: ;
	}
	{
		while (1) {
			unsigned int t_191643;
			if (!(round < ((NI) 20))) goto LA4;
			w[(round)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_191643 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)(b & c) | (unsigned int)((unsigned int)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_191643;
			round += ((NI) 1);
		} LA4: ;
	}
	{
		while (1) {
			unsigned int t_191844;
			if (!(round < ((NI) 40))) goto LA6;
			w[(round)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_191844 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) 1859775393)))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_191844;
			round += ((NI) 1);
		} LA6: ;
	}
	{
		while (1) {
			unsigned int t_192072;
			if (!(round < ((NI) 60))) goto LA8;
			w[(round)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_192072 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)((unsigned int)(b & c) | (unsigned int)(b & d)) | (unsigned int)(c & d))))) + (NU32)(e))) + (NU32)(((NU32) IL64(2400959708))))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_192072;
			round += ((NI) 1);
		} LA8: ;
	}
	{
		while (1) {
			unsigned int t_192274;
			if (!(round < ((NI) 80))) goto LA10;
			w[(round)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_192274 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a) << (NU64)(((NI) 5))) | (NU32)((NU64)(a) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) IL64(3395469782))))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU64)(b) << (NU64)(((NI) 30))) | (NU32)((NU64)(b) >> (NU64)(((NI) 2))));
			b = a;
			a = t_192274;
			round += ((NI) 1);
		} LA10: ;
	}
	v_192457 = (unsigned int)((NU32)(state[(((NI) 0))- 0]) + (NU32)(a));
	state[(((NI) 0))- 0] = v_192457;
	v_192468 = (unsigned int)((NU32)(state[(((NI) 1))- 0]) + (NU32)(b));
	state[(((NI) 1))- 0] = v_192468;
	v_192479 = (unsigned int)((NU32)(state[(((NI) 2))- 0]) + (NU32)(c));
	state[(((NI) 2))- 0] = v_192479;
	v_192490 = (unsigned int)((NU32)(state[(((NI) 3))- 0]) + (NU32)(d));
	state[(((NI) 3))- 0] = v_192490;
	v_192501 = (unsigned int)((NU32)(state[(((NI) 4))- 0]) + (NU32)(e));
	state[(((NI) 4))- 0] = v_192501;
}

N_NIMCALL(void, sha1_191008)(NimStringDesc* src, Sha1digest191003* Result) {
	Sha1state191402 state_192598;
	Sha1buffer191404 w_192600;
	NI bytelen_192602;
	NI endoffullblocks_192604;
	NI endcurrentblock_192606;
	NI currentblock_192608;
	NI lastblockbytes_192612;
	memset((void*)state_192598, 0, sizeof(state_192598));
	init_191417(state_192598);
	memset((void*)w_192600, 0, sizeof(w_192600));
	bytelen_192602 = (src ? src->Sup.len : 0);
	endoffullblocks_192604 = (NI)(bytelen_192602 - ((NI) 64));
	endcurrentblock_192606 = ((NI) 0);
	currentblock_192608 = ((NI) 0);
	{
		while (1) {
			NI i_192610;
			if (!(currentblock_192608 <= endoffullblocks_192604)) goto LA2;
			endcurrentblock_192606 = (NI)(currentblock_192608 + ((NI) 64));
			i_192610 = ((NI) 0);
			{
				while (1) {
					if (!(currentblock_192608 < endcurrentblock_192606)) goto LA4;
					w_192600[(i_192610)- 0] = (unsigned int)((unsigned int)((unsigned int)(((NU32) (((NU8)(src->data[(NI)(currentblock_192608 + ((NI) 3))])))) | (NU32)((NU32)(((NU32) (((NU8)(src->data[(NI)(currentblock_192608 + ((NI) 2))]))))) << (NU32)(((NU32) 8)))) | (NU32)((NU32)(((NU32) (((NU8)(src->data[(NI)(currentblock_192608 + ((NI) 1))]))))) << (NU32)(((NU32) 16)))) | (NU32)((NU32)(((NU32) (((NU8)(src->data[currentblock_192608]))))) << (NU32)(((NU32) 24))));
					currentblock_192608 += ((NI) 4);
					i_192610 += ((NI) 1);
				} LA4: ;
			}
			innerhash_191421(state_192598, w_192600);
		} LA2: ;
	}
	endcurrentblock_192606 = (NI)(bytelen_192602 - currentblock_192608);
	zeroMem(((void*) (w_192600)), ((NI) 64));
	lastblockbytes_192612 = ((NI) 0);
	{
		while (1) {
			NU32 value_192614;
			if (!(lastblockbytes_192612 < endcurrentblock_192606)) goto LA6;
			value_192614 = (NU32)((NU32)(((NU32) (((NU8)(src->data[(NI)(lastblockbytes_192612 + currentblock_192608)]))))) << (NU32)((NU32)((NU64)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_192612 & ((NI) 3))))))) << (NU64)(((NI) 3)))));
			w_192600[((NI)((NU64)(lastblockbytes_192612) >> (NU64)(((NI) 2))))- 0] = (unsigned int)(w_192600[((NI)((NU64)(lastblockbytes_192612) >> (NU64)(((NI) 2))))- 0] | value_192614);
			lastblockbytes_192612 += ((NI) 1);
		} LA6: ;
	}
	w_192600[((NI)((NU64)(lastblockbytes_192612) >> (NU64)(((NI) 2))))- 0] = (unsigned int)(w_192600[((NI)((NU64)(lastblockbytes_192612) >> (NU64)(((NI) 2))))- 0] | (NU32)((NU32)(((NU32) 128)) << (NU32)((NU32)((NU64)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_192612 & ((NI) 3))))))) << (NU64)(((NI) 3))))));
	{
		if (!(((NI) 56) <= endcurrentblock_192606)) goto LA9;
		innerhash_191421(state_192598, w_192600);
		zeroMem(((void*) (w_192600)), ((NI) 64));
	}
	LA9: ;
	w_192600[(((NI) 15))- 0] = (NU32)((NU64)(((NU32) (bytelen_192602))) << (NU64)(((NI) 3)));
	innerhash_191421(state_192598, w_192600);
	{
		NI i_192616;
		NI res_192832;
		i_192616 = 0;
		res_192832 = ((NI) 0);
		{
			while (1) {
				if (!(res_192832 <= ((NI) 19))) goto LA13;
				i_192616 = res_192832;
				(*Result)[(i_192616)- 0] = ((NU8) ((NI)((NI)((NU64)(((NI) (state_192598[((NI)((NU64)(i_192616) >> (NU64)(((NI) 2))))- 0]))) >> (NU64)((NI)((NI)(((NI) 3) - ((NI) ((NI)(i_192616 & ((NI) 3))))) * ((NI) 8)))) & ((NI) 255))));
				res_192832 += ((NI) 1);
			} LA13: ;
		}
	}
}

N_NIMCALL(void, securehash_191011)(NimStringDesc* str, Sha1digest191003* Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI191003));
	sha1_191008(str, Result);
}

N_NIMCALL(void, securehashfile_191016)(NimStringDesc* filename, Sha1digest191003* Result) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = readfile_15666(filename);
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI191003));
	securehash_191011(LOC1, Result);
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_191087)(Sha1digest191003 a, Sha1digest191003 b) {
	NIM_BOOL result;
	result = 0;
	result = HEX3DHEX3D_191093(a, b);
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, parsesecurehash_191058)(NimStringDesc* hash, Sha1digest191003* Result) {
	{
		NI i_191079;
		NI res_191083;
		i_191079 = 0;
		res_191083 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				NI LOC5;
				if (!(res_191083 <= ((NI) 19))) goto LA3;
				i_191079 = res_191083;
				LOC4 = 0;
				LOC4 = rawNewString(2);
appendChar(LOC4, hash->data[(NI)(i_191079 * ((NI) 2))]);
appendChar(LOC4, hash->data[(NI)((NI)(i_191079 * ((NI) 2)) + ((NI) 1))]);
				LOC5 = 0;
				LOC5 = nsuParseHexInt(LOC4);
				(*Result)[(i_191079)- 0] = ((NU8) (LOC5));
				res_191083 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_191020)(Sha1digest191003 self) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP1797));
	{
		NU8 v_191050;
		Sha1digest191003 HEX3Atmp_191054;
		NI i_191057;
		v_191050 = 0;
		memset((void*)HEX3Atmp_191054, 0, sizeof(HEX3Atmp_191054));
		memcpy((void*)HEX3Atmp_191054, (NIM_CONST void*)self, sizeof(Sha1digest191003));
		i_191057 = ((NI) 0);
		{
			if (!(((NI) (i_191057)) <= ((NI) 19))) goto LA4;
			{
				while (1) {
					NimStringDesc* LOC8;
					v_191050 = HEX3Atmp_191054[(i_191057)- 0];
					LOC8 = 0;
					LOC8 = nsuToHex(((NI64) (((NI) (v_191050)))), ((NI) 2));
					result = resizeString(result, LOC8->Sup.len + 0);
appendString(result, LOC8);
					{
						if (!(((NI) 19) <= ((NI) (i_191057)))) goto LA11;
						goto LA6;
					}
					LA11: ;
					i_191057 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_securehashInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_securehashDatInit000)(void) {
NTI191003.size = sizeof(Sha1digest191003);
NTI191003.kind = 16;
NTI191003.base = (&NTI116);
NTI191003.flags = 3;
}

