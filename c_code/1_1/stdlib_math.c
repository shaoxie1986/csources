/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 32

#include "nimbase.h"
#include <math.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix

N_NIMCALL(NF, log2_ofkAe2ROmA188x6KIGzcDA)(NF x) {
	NF result;
	NF T1_;
	NF T2_;
{	result = (NF)0;
	T1_ = (NF)0;
	T1_ = log(x);
	T2_ = (NF)0;
	T2_ = log(2.0000000000000000e+00);
	result = ((NF)(T1_) / (NF)(T2_));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NF, round_FL9bhksfuQsfLDCxRHuknsg)(NF x, NI places) {
	NF result;
	result = (NF)0;
	{
		if (!(places == ((NI) 0))) goto LA3_;
		result = round(x);
	}
	goto LA1_;
	LA3_: ;
	{
		NF mult;
		NF T6_;
		mult = pow(1.0000000000000000e+01, ((NF) (places)));
		T6_ = (NF)0;
		T6_ = round(((NF)(x) * (NF)(mult)));
		result = ((NF)(T6_) / (NF)(mult));
	}
	LA1_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x) {
	NIM_BOOL result;
	NIM_BOOL T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI) 0) < x);
	if (!(T1_)) goto LA2_;
	T1_ = ((NI)(x & (NI)(x - ((NI) 1))) == ((NI) 0));
	LA2_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NI, nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI) 1));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 16))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 8))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 4))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 2))));
	result = (NI)(result | (NI)((NU32)(result) >> (NU32)(((NI) 1))));
	result += ((NI) ((NI)(((NI) 1) + ((NI) ((x <= ((NI) 0)))))));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void) {
}

