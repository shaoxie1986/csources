/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NIM_CHAR TY221015[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, hexchar_221051)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, encodevintaux_221191)(NI x, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, encodevbiggestintaux_221164)(NI64 x, NimStringDesc** result);
STRING_LITERAL(TMP1070, "", 0);
STRING_LITERAL(TMP1078, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP3926, "NAN", 3);
STRING_LITERAL(TMP3927, "0.0", 3);
STRING_LITERAL(TMP3928, "INF", 3);
STRING_LITERAL(TMP3929, "-INF", 4);

N_NIMCALL(NI, decodevint_221265)(NCSTRING s, NI* pos) {
	NI result;
	NI i_221272;
	NI sign_221274;
	result = 0;
	i_221272 = (*pos);
	sign_221274 = ((NI) -1);
	{
		if (!((NU8)(s[i_221272]) == (NU8)(45))) goto LA3;
		i_221272 += ((NI) 1);
		sign_221274 = ((NI) 1);
	}
	LA3: ;
	result = ((NI) 0);
	{
		while (1) {
			switch (((NU8)(s[i_221272]))) {
			case 48 ... 57:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) (((NU8)(s[i_221272])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_221272])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_221272])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_221272])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_221272 += ((NI) 1);
		}
	} LA5: ;
	result = (NI)((NU32)((NI)(result * sign_221274)) - (NU32)(((NI) 5)));
	(*pos) = i_221272;
	return result;
}

N_NIMCALL(void, hexchar_221051)(NIM_CHAR c, NI* xi) {
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(((NI) 4))) | ((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 48)))));
	}
	break;
	case 97 ... 102:
	{
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 97)))) + ((NI) 10)))));
	}
	break;
	case 65 ... 70:
	{
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 65)))) + ((NI) 10)))));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, decodestr_221111)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	result = 0;
	i = (*pos);
	result = copyString(((NimStringDesc*) &TMP1070));
	{
		while (1) {
			switch (((NU8)(s[i]))) {
			case 92:
			{
				NI xi;
				i += ((NI) 3);
				xi = ((NI) 0);
				hexchar_221051(s[(NI)(i - ((NI) 2))], (&xi));
				hexchar_221051(s[(NI)(i - ((NI) 1))], (&xi));
				result = addChar(result, ((NIM_CHAR) (((NI) (xi)))));
			}
			break;
			case 97 ... 122:
			case 65 ... 90:
			case 48 ... 57:
			case 95:
			{
				result = addChar(result, s[i]);
				i += ((NI) 1);
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*pos) = i;
	return result;
}

N_NIMCALL(NI64, decodevbiggestint_221500)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i_221507;
	NI sign_221509;
	result = 0;
	i_221507 = (*pos);
	sign_221509 = ((NI) -1);
	{
		if (!((NU8)(s[i_221507]) == (NU8)(45))) goto LA3;
		i_221507 += ((NI) 1);
		sign_221509 = ((NI) 1);
	}
	LA3: ;
	result = IL64(0);
	{
		while (1) {
			switch (((NU8)(s[i_221507]))) {
			case 48 ... 57:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) (((NU8)(s[i_221507])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_221507])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_221507])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_221507])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_221507 += ((NI) 1);
		}
	} LA5: ;
	result = (NI64)((NU64)((NI64)(result * ((NI64) (sign_221509)))) - (NU64)(IL64(5)));
	(*pos) = i_221507;
	return result;
}

N_NIMCALL(void, encodevintaux_221191)(NI x, NimStringDesc** result) {
	NIM_CHAR d_221197;
	NI v_221199;
	NI rem_221201;
	NI idx_221203;
	d_221197 = 0;
	v_221199 = x;
	rem_221201 = (NI)(v_221199 % ((NI) 190));
	{
		if (!(((NI) (rem_221201)) < ((NI) 0))) goto LA3;
		(*result) = addChar((*result), 45);
		v_221199 = ((NI32)-((NI)(v_221199 / ((NI) 190))));
		rem_221201 = ((NI32)-(((NI) (rem_221201))));
	}
	goto LA1;
	LA3: ;
	{
		v_221199 = (NI)(v_221199 / ((NI) 190));
	}
	LA1: ;
	idx_221203 = ((NI) (rem_221201));
	{
		if (!(idx_221203 < ((NI) 62))) goto LA8;
		d_221197 = ((NimStringDesc*) &TMP1078)->data[idx_221203];
	}
	goto LA6;
	LA8: ;
	{
		d_221197 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_221203 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_221199 == ((NI) 0)))) goto LA13;
		encodevintaux_221191(v_221199, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_221197);
}

N_NIMCALL(void, encodevint_221212)(NI x, NimStringDesc** result) {
	encodevintaux_221191((NI)((NU32)(x) + (NU32)(((NI) 5))), result);
}

N_NIMCALL(NimStringDesc*, tostrmaxprecision_221009)(NF f) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!((f == f))) goto LA3;
		result = copyString(((NimStringDesc*) &TMP3926));
	}
	goto LA1;
	LA3: ;
	{
		if (!(f == 0.0)) goto LA6;
		result = copyString(((NimStringDesc*) &TMP3927));
	}
	goto LA1;
	LA6: ;
	{
		if (!(f == ((NF)(5.0000000000000000e-01) * (NF)(f)))) goto LA9;
		{
			if (!(0.0 < f)) goto LA13;
			result = copyString(((NimStringDesc*) &TMP3928));
		}
		goto LA11;
		LA13: ;
		{
			result = copyString(((NimStringDesc*) &TMP3929));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY221015 buf;
		memset((void*)buf, 0, sizeof(buf));
		sprintf(((NCSTRING) (buf)), "%#.16e", f);
		result = cstrToNimstr(((NCSTRING) (buf)));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, encodestr_221018)(NimStringDesc* s, NimStringDesc** result) {
	{
		NI i_221034;
		NI HEX3Atmp_221044;
		NI res_221047;
		i_221034 = 0;
		HEX3Atmp_221044 = 0;
		HEX3Atmp_221044 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res_221047 = ((NI) 0);
		{
			while (1) {
				if (!(res_221047 <= HEX3Atmp_221044)) goto LA3;
				i_221034 = res_221047;
				switch (((NU8)(s->data[i_221034]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					(*result) = addChar((*result), s->data[i_221034]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					LOC6 = 0;
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_221034])))), ((NI) 2));
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result) = resizeString((*result), LOC6->Sup.len + 0);
appendString((*result), LOC6);
				}
				break;
				}
				res_221047 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, encodevbiggestintaux_221164)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d_221170;
	NI64 v_221172;
	NI64 rem_221174;
	NI idx_221176;
	d_221170 = 0;
	v_221172 = x;
	rem_221174 = (NI64)(v_221172 % IL64(190));
	{
		if (!(((NI) (rem_221174)) < ((NI) 0))) goto LA3;
		(*result) = addChar((*result), 45);
		v_221172 = -((NI64)(v_221172 / IL64(190)));
		rem_221174 = -(((NI64) (rem_221174)));
	}
	goto LA1;
	LA3: ;
	{
		v_221172 = (NI64)(v_221172 / IL64(190));
	}
	LA1: ;
	idx_221176 = ((NI) (rem_221174));
	{
		if (!(idx_221176 < ((NI) 62))) goto LA8;
		d_221170 = ((NimStringDesc*) &TMP1078)->data[idx_221176];
	}
	goto LA6;
	LA8: ;
	{
		d_221170 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_221176 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_221172 == IL64(0)))) goto LA13;
		encodevbiggestintaux_221164(v_221172, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_221170);
}

N_NIMCALL(void, encodevbiggestint_221186)(NI64 x, NimStringDesc** result) {
	encodevbiggestintaux_221164((NI64)((NU64)(x) + (NU64)(IL64(5))), result);
}
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit000)(void) {
}

