/*
 * Code for class EV_DRAWING_AREA_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1548_15123(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1548_15124(EIF_REFERENCE);
extern void F1548_15125(EIF_REFERENCE);
extern void F1548_15126(EIF_REFERENCE);
extern void F1548_15127(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1548_15128(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1548_15129(EIF_REFERENCE);
extern void F1548_15130(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15131(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15132(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15133(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15134(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15135(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15136(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15137(EIF_REFERENCE);
extern void F1548_15138(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1548_15139(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15140(EIF_REFERENCE);
extern void F1548_15141(EIF_REFERENCE);
extern void F1548_15142(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1548_15143(EIF_REFERENCE);
extern void F1548_15144(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1548_15145(EIF_REFERENCE);
extern void F1548_15146(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15147(EIF_REFERENCE);
extern void F1548_15148(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1548_15149(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15150(EIF_REFERENCE);
extern void F1548_15151(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1548_15152(EIF_REFERENCE);
extern void F1548_15153(EIF_REFERENCE);
extern void F1548_15154(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1548_15155(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1548_15156(EIF_REFERENCE);
extern void F1548_15157(EIF_REFERENCE);
extern void F1548_15158(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE F1548_15159_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15159(EIF_REFERENCE);
extern void EIF_Minit1548(void);
extern EIF_REFERENCE _A1248_324_3_4_5_6();
extern EIF_REFERENCE _A1548_510();

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DRAWING_AREA_IMP}.old_make */
void F1548_15123 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "old_make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 1, 21217);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21217);
	RTCC(arg1, 1547, l_feature_name, 1, RTWCT(9374, dtype, Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_interface_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9367, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("interface_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9374, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("base_make_called", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9384, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.make */
void F1548_15124 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21218);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21218);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11107, 0xF80004FF, 0); /* tooltip_repeater */
	tr1 = RTLNSMART(RTWCT(11107, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11107, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5886, 970))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9891, dtype))(Current, up1x);
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWA(9890, dtype));
	up1 = tp1;
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5221, 969))(Current, up1x, ub1x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11064, 0x40000000, 1); /* gc */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11087, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9864, "default_gdk_window", tr1))(tr1)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5794, 970))(Current, up1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(11064, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11063, dtype))(Current);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11100, dtype))(Current);
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(Current + RTWA(9890, dtype));
	up1 = tp1;
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10036, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10042, dtype))(Current, up1x, ur1x);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 11110, 0xF80000EE, 0); /* internal_tooltip */
	tr1 = RTLNSMART(RTWCT(11110, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11110, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9369, 1498))(Current);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9887, dtype))(Current);
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9889, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("is_initialized", EX_POST);
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9377, dtype))(Current)).it_i1);
		ui1_1 = ti1_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9383, dtype))(Current, ui1_1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui1_1
#undef ub1
}

/* {EV_DRAWING_AREA_IMP}.enable_double_buffering */
void F1548_15125 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_double_buffering";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21219);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21219);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10143, dtype))(Current)).it_p);
	up1 = tp1;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5222, 969))(Current, up1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ub1
}

/* {EV_DRAWING_AREA_IMP}.disable_double_buffering */
void F1548_15126 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_double_buffering";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21220);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21220);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10143, dtype))(Current)).it_p);
	up1 = tp1;
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5222, 969))(Current, up1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ub1
}

/* {EV_DRAWING_AREA_IMP}.on_pointer_enter_leave */
void F1548_15127 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_pointer_enter_leave";
	RTEX;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 1, 21221);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21221);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11101, dtype))(Current, ub1x);
	RTHOOK(2);
	ub1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10321, 1498))(Current, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ub1
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.update_tooltip */
void F1548_15128 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_tooltip";
	RTEX;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 1, 21222);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21222);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11109, dtype))(Current)).it_b);
	if (tb2) {
		tp1 = *(EIF_POINTER *)(Current + RTWA(11115, dtype));
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		tb1 = (EIF_BOOLEAN)(tp1 != tp2);
	}
	if (tb1) {
		RTHOOK(2);
		if (arg1) {
			RTHOOK(3);
			RTDBGAA(Current, dtype, 11108, 0x04000000, 1); /* show_tooltips_if_activated */
			*(EIF_BOOLEAN *)(Current + RTWA(11108, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 11102, 0x04000000, 1); /* reset_tooltip_position */
			*(EIF_BOOLEAN *)(Current + RTWA(11102, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11107, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11087, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(5,2);
			ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(9882, "tooltip_delay", tr2));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8460, "set_interval", tr1))(tr1, ui4_1x);
		} else {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 11108, 0x04000000, 1); /* show_tooltips_if_activated */
			*(EIF_BOOLEAN *)(Current + RTWA(11108, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11103, dtype))(Current);
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11107, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8460, "set_interval", tr1))(tr1, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.reset_tooltip_position */
EIF_TYPED_VALUE F1548_15129 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11102,Dtype(Current)));
	return r;
}


/* {EV_DRAWING_AREA_IMP}.update_tooltip_window */
void F1548_15130 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_tooltip_window";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc11);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_POINTER, &loc12);
	
	RTEAA(l_feature_name, 1547, Current, 12, 0, 21224);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21224);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11109, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(3, 0x40000000, 1, 0); /* loc3 */
		up1 = (EIF_INTEGER_32 *) &(loc5);
		up2 = (EIF_INTEGER_32 *) &(loc6);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5842, 970))(Current, up1x, up2x)).it_p);
		loc3 = (EIF_POINTER) tp1;
		RTHOOK(3);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(11115, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6134, 970))(Current, up1x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(4);
		tb1 = '\0';
		tb2 = '\0';
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11066, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc3 == tp1)) {
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(11108, dtype));
			tb2 = tb3;
		}
		if (tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10301, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(5);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11102, dtype));
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				up1 = loc3;
				up2 = (EIF_INTEGER_32 *) &(loc7);
				up3 = (EIF_INTEGER_32 *) &(loc8);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5843, 970))(Current, up1x, up2x, up3x)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(7);
				RTDBGAL(12, 0x40000000, 1, 0); /* loc12 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9915, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(3176, "item", tr1));
				loc12 = (EIF_POINTER) tp1;
				RTHOOK(8);
				up1 = loc1;
				up2 = loc12;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6024, 970))(Current, up1x, up2x);
				RTHOOK(9);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				up1 = loc12;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6126, 970))(Current, up1x)).it_i4);
				loc9 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(10);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				up1 = loc12;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6125, 970))(Current, up1x)).it_i4);
				loc10 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(11);
				RTDBGAL(11, 0xF800051E, 0, 0); /* loc11 */
				tr1 = RTLN(eif_new_type(1310, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(11,1);
				loc11 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(12);
				RTDBGAA(Current, dtype, 11104, 0x10000000, 1); /* tooltip_initial_x */
				*(EIF_INTEGER_32 *)(Current + RTWA(11104, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + loc5);
				RTHOOK(13);
				RTDBGAA(Current, dtype, 11105, 0x10000000, 1); /* tooltip_initial_y */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11106, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(11105, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) + ti4_1);
				RTHOOK(14);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11104, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8764, "width", loc11))(loc11)).it_i4);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + loc9) > ti4_2)) {
					RTHOOK(15);
					RTDBGAA(Current, dtype, 11104, 0x10000000, 1); /* tooltip_initial_x */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8764, "width", loc11))(loc11)).it_i4);
					*(EIF_INTEGER_32 *)(Current + RTWA(11104, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc9);
				}
				RTHOOK(16);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11105, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8765, "height", loc11))(loc11)).it_i4);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + loc10) > ti4_2)) {
					RTHOOK(17);
					RTDBGAA(Current, dtype, 11105, 0x10000000, 1); /* tooltip_initial_y */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11106, dtype))(Current)).it_i4);
					*(EIF_INTEGER_32 *)(Current + RTWA(11105, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc6) - loc10) - ti4_1);
				}
				RTHOOK(18);
				RTDBGAA(Current, dtype, 11102, 0x04000000, 1); /* reset_tooltip_position */
				*(EIF_BOOLEAN *)(Current + RTWA(11102, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(19);
			RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(20);
			RTDBGAA(Current, dtype, 11108, 0x04000000, 1); /* show_tooltips_if_activated */
			*(EIF_BOOLEAN *)(Current + RTWA(11108, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11107, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8460, "set_interval", tr1))(tr1, ui4_1x);
		}
		RTHOOK(22);
		tb1 = '\0';
		if (loc2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11110, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(22,1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(23);
			up1 = loc1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11104, dtype));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11105, dtype));
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5180, 969))(Current, up1x, ui4_1x, ui4_2x);
			RTHOOK(24);
			up1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6021, 970))(Current, up1x);
		} else {
			RTHOOK(25);
			up1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6010, 970))(Current, up1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef ui4_2
}

/* {EV_DRAWING_AREA_IMP}.tooltip_initial_x */
EIF_TYPED_VALUE F1548_15131 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11104,Dtype(Current)));
	return r;
}


/* {EV_DRAWING_AREA_IMP}.tooltip_initial_y */
EIF_TYPED_VALUE F1548_15132 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11105,Dtype(Current)));
	return r;
}


/* {EV_DRAWING_AREA_IMP}.tooltip_window_y_offset */
EIF_TYPED_VALUE F1548_15133 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tooltip_window_y_offset";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21227);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21227);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5249, 969))(Current)).it_p);
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5137, 969))(Current, up1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_DRAWING_AREA_IMP}.tooltip_repeater */
EIF_TYPED_VALUE F1548_15134 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11107,Dtype(Current)));
	return r;
}


/* {EV_DRAWING_AREA_IMP}.show_tooltips_if_activated */
EIF_TYPED_VALUE F1548_15135 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11108,Dtype(Current)));
	return r;
}


/* {EV_DRAWING_AREA_IMP}.tooltips_pointer */
EIF_TYPED_VALUE F1548_15136 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(11115,Dtype(Current)));
	return r;
}


/* {EV_DRAWING_AREA_IMP}.needs_custom_tooltip_implementation */
EIF_TYPED_VALUE F1548_15137 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "needs_custom_tooltip_implementation";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21231);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21231);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, 970))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5640, 970))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 12L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_DRAWING_AREA_IMP}.set_tooltip */
void F1548_15138 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_tooltip";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1547, Current, 3, 1, 21232);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21232);
	RTCC(arg1, 1547, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tooltip_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11115, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 == tp2)) {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11109, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 11115, 0x40000000, 1); /* tooltips_pointer */
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5991, 970))(Current)).it_p);
			*(EIF_POINTER *)(Current + RTWA(11115, dtype)) = (EIF_POINTER) tp1;
			RTHOOK(5);
			tp1 = *(EIF_POINTER *)(Current + RTWA(11115, dtype));
			up1 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5990, 970))(Current, up1x);
			RTHOOK(6);
			RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(11115, dtype));
			up1 = tp1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6134, 970))(Current, up1x)).it_p);
			loc2 = (EIF_POINTER) tp1;
			RTHOOK(7);
			up1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5638, 970))(Current)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6033, 970))(Current, up1x, ui4_1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11107, 0xF80004FF, 0); /* tooltip_repeater */
			tr1 = RTLNSMART(RTWCT(11107, dtype, dftype).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(8,1);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11107, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11107, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8458, "actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(9,2);
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,0,186,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1548_510, (EIF_POINTER)(0),11103, 0, 0, 1, -1, tr1, 0);
			}
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", tr2))(tr2, ur1x);
		} else {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 11115, 0x40000000, 1); /* tooltips_pointer */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11087, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(9843, "tooltips", tr1));
			*(EIF_POINTER *)(Current + RTWA(11115, dtype)) = (EIF_POINTER) tp1;
		}
	}
	RTHOOK(11);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11109, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(12);
		RTDBGAA(Current, dtype, 11110, 0xF80000EE, 0); /* internal_tooltip */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4701, "as_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11110, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(13);
		RTDBGAL(3, 0xF80004DA, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11087, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11110, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9872, "c_string_from_eiffel_string", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(14);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(11115, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5138, 969))(Current, up1x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(15);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(11115, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6134, 970))(Current, up1x)).it_p);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(16);
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8197, "item", loc3));
		up2 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5921, 970))(Current, up1x, up2x);
		RTHOOK(17);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6010, 970))(Current, up1x);
		RTHOOK(18);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", arg1))(arg1)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10299, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(19);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11101, dtype))(Current, ub1x);
		} else {
			RTHOOK(20);
			ub1 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11101, dtype))(Current, ub1x);
		}
	} else {
		RTHOOK(21);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10142, 1498))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.tooltip */
EIF_TYPED_VALUE F1548_15139 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tooltip";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21233);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21233);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11109, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0xF80000EE, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11110, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0xF80000EE, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10141, 1498))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {EV_DRAWING_AREA_IMP}.internal_tooltip */
EIF_TYPED_VALUE F1548_15140 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11110,Dtype(Current)));
	return r;
}


/* {EV_DRAWING_AREA_IMP}.redraw */
void F1548_15141 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "redraw";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21235);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21235);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10975, dtype))(Current)).it_i4);
	ui4_3 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10976, dtype))(Current)).it_i4);
	ui4_4 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11016, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
}

/* {EV_DRAWING_AREA_IMP}.redraw_rectangle */
void F1548_15142 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "redraw_rectangle";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1547, Current, 2, 4, 21236);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21236);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11066, dtype))(Current)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(2);
	tb1 = '\0';
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9904, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10299, dtype))(Current)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11087, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9871, "reusable_rectangle_struct", tr1))(tr1)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(4);
		up1 = loc1;
		ui4_1 = arg3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5443, 969))(Current, up1x, ui4_1x);
		RTHOOK(5);
		up1 = loc1;
		ui4_1 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5442, 969))(Current, up1x, ui4_1x);
		RTHOOK(6);
		up1 = loc1;
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5444, 969))(Current, up1x, ui4_1x);
		RTHOOK(7);
		up1 = loc1;
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5445, 969))(Current, up1x, ui4_1x);
		RTHOOK(8);
		up1 = loc2;
		up2 = loc1;
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5223, 969))(Current, up1x, up2x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.clear_and_redraw */
void F1548_15143 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clear_and_redraw";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21237);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21237);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10994, dtype))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10993, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_DRAWING_AREA_IMP}.clear_and_redraw_rectangle */
void F1548_15144 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "clear_and_redraw_rectangle";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 4, 21238);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21238);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10995, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(2);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11016, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.flush */
void F1548_15145 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "flush";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21239);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21239);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10290, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_DRAWING_AREA_IMP}.update_if_needed */
void F1548_15146 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_if_needed";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21240);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21240);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_DRAWING_AREA_IMP}.get_drawable */
EIF_TYPED_VALUE F1548_15147 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_drawable";
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21241);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21241);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9890, dtype));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_DRAWING_AREA_IMP}.release_drawable */
void F1548_15148 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "release_drawable";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 1, 21242);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21242);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.drawable */
EIF_TYPED_VALUE F1548_15149 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "drawable";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21243);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21243);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9890, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6142, 970))(Current, up1x)).it_p);
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
}

/* {EV_DRAWING_AREA_IMP}.mask */
EIF_TYPED_VALUE F1548_15150 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "mask";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21244);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21244);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_DRAWING_AREA_IMP}.call_expose_actions */
void F1548_15151 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "call_expose_actions";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 4, 21245);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21245);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6950, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6950, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,186,218,218,218,218,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 5, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg3;
		((EIF_TYPED_VALUE *)tr2+4)->it_i4 = arg4;
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.lose_focus */
void F1548_15152 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lose_focus";
	RTEX;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21246);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21246);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11101, dtype))(Current, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ub1
}

/* {EV_DRAWING_AREA_IMP}.internal_set_focus */
void F1548_15153 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_set_focus";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 1547, Current, 1, 0, 21247);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21247);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10143, dtype))(Current)).it_p);
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6121, 970))(Current, up1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5718, 970))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_and(ti4_1,ui4_1);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_2 != ((EIF_INTEGER_32) 0L));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10143, dtype))(Current)).it_p);
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5718, 970))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5642, 970))(Current, up1x, ui4_1x);
	}
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9924, 1498))(Current);
	RTHOOK(5);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(6);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10143, dtype))(Current)).it_p);
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5718, 970))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5644, 970))(Current, up1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
}

/* {EV_DRAWING_AREA_IMP}.on_key_event */
void F1548_15154 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "on_key_event";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 3, 21248);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21248);
	if (arg1) {
		RTCC(arg1, 1547, l_feature_name, 1, eif_new_type(1555, 0x00), 0x00);
	}
	if (arg2) {
		RTCC(arg2, 1547, l_feature_name, 2, eif_new_type(238, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11101, dtype))(Current, ub1x);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ub1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10318, 1498))(Current, ur1x, ur2x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.call_button_event_actions */
void F1548_15155 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "call_button_event_actions";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_r8
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r8 = * (EIF_REAL_64 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_REAL64,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 9, 21249);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21249);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11101, dtype))(Current, ub1x);
	RTHOOK(2);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5045, 964))(Current)).it_i4);
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10143, dtype))(Current)).it_p);
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6121, 970))(Current, up1x)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5702, 970))(Current)).it_i4);
		ui4_1 = ti4_2;
		ti4_2 = eif_bit_and(ti4_1,ui4_1);
		tb3 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L));
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg4 <= ((EIF_INTEGER_32) 3L)));
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11022, dtype));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10304, dtype))(Current);
	}
	RTHOOK(4);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	ur8_1 = arg5;
	ur8_2 = arg6;
	ur8_3 = arg7;
	ui4_5 = arg8;
	ui4_6 = arg9;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10277, 1498))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x, ui4_5x, ui4_6x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ub1
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.destroy */
void F1548_15156 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21250);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21250);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11101, dtype))(Current, ub1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9371, 1498))(Current);
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11064, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9904, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(11064, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5813, 970))(Current, up1x);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 11064, 0x40000000, 1); /* gc */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9904, dtype))(Current)).it_p);
		*(EIF_POINTER *)(Current + RTWA(11064, dtype)) = (EIF_POINTER) tp1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_in_destroy_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9386, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("is_destroyed_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9372, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ub1
}

/* {EV_DRAWING_AREA_IMP}.dispose */
void F1548_15157 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21251);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21251);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11064, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9904, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(11064, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11096, dtype))(Current, up1x);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 11064, 0x40000000, 1); /* gc */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9904, dtype))(Current)).it_p);
		*(EIF_POINTER *)(Current + RTWA(11064, dtype)) = (EIF_POINTER) tp1;
	}
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3145, 1498))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("object_freed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3417, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {EV_DRAWING_AREA_IMP}.init_expose_actions */
void F1548_15158 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "init_expose_actions";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur1);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLR(9,tr6);
	RTLR(10,ur2);
	RTLR(11,tr7);
	RTLR(12,tr8);
	RTLR(13,ur3);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1547, Current, 1, 1, 21252);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTAOMS(15157,1);
	RTDBGEAA(1547, Current, 21252);
	RTCC(arg1, 1547, l_feature_name, 1, RTWCT(6949, dtype, dftype), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000579, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11087, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9794, "gtk_marshal", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10143, dtype))(Current)).it_p);
	up1 = tp1;
	tr2 = RTLN(eif_new_type(1242, 0x00).id);
	RTCOMS(tr3,15157,0,"expose-event",12,1736732276);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8200, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,2);
	ur1 = RTCCL(tr2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,186,0xFF01,1247,227,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9794, "gtk_marshal", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	tp2 = *(EIF_POINTER *)(Current + RTWA(9890, dtype));
	((EIF_TYPED_VALUE *)tr3+2)->it_p = tp2;
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	*((EIF_INTEGER_32 *)tr5+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr5+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr5+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr5+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr5)))(tr5).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,4,186,218,218,218,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr6= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1248_324_3_4_5_6, (EIF_POINTER)(0),8222, tr4, 0, 1, -1, tr3, 4);
	}
	ur2 = RTCCL(tr6);
	tr7 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9794, "gtk_marshal", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,3);
	tr8 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8299, "expose_translate_agent", tr7))(tr7)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur3 = RTCCL(tr8);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8294, "signal_connect", tr1))(tr1, up1x, ur1x, ur2x, ur3x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_DRAWING_AREA_IMP}.interface */
static EIF_TYPED_VALUE F1548_15159_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1547, Current, 0, 0, 21253);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21253);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1548_15159 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9374,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(9374, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1548_15159_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9374,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1548 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
