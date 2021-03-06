/*
 * Copyright (C) 2014  absurdworlds
 *
 * License LGPLv3 or later:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef aw_meta_pp_foldr_h
#define aw_meta_pp_foldr_h
#include "apply_n.h"

#define FR_1(OP,  DO, X, ...)  DO(X)
#define FR_2(OP,  DO, X, ...)  OP(DO(X), FR_1(OP,  DO, __VA_ARGS__))
#define FR_3(OP,  DO, X, ...)  OP(DO(X), FR_2(OP,  DO, __VA_ARGS__))
#define FR_4(OP,  DO, X, ...)  OP(DO(X), FR_3(OP,  DO, __VA_ARGS__))
#define FR_5(OP,  DO, X, ...)  OP(DO(X), FR_4(OP,  DO, __VA_ARGS__))
#define FR_6(OP,  DO, X, ...)  OP(DO(X), FR_5(OP,  DO, __VA_ARGS__))
#define FR_7(OP,  DO, X, ...)  OP(DO(X), FR_6(OP,  DO, __VA_ARGS__))
#define FR_8(OP,  DO, X, ...)  OP(DO(X), FR_7(OP,  DO, __VA_ARGS__))
#define FR_9(OP,  DO, X, ...)  OP(DO(X), FR_8(OP,  DO, __VA_ARGS__))
#define FR_10(OP, DO, X, ...)  OP(DO(X), FR_9(OP,  DO, __VA_ARGS__))
#define FR_11(OP, DO, X, ...)  OP(DO(X), FR_10(OP, DO, __VA_ARGS__))
#define FR_12(OP, DO, X, ...)  OP(DO(X), FR_11(OP, DO, __VA_ARGS__))
#define FR_13(OP, DO, X, ...)  OP(DO(X), FR_12(OP, DO, __VA_ARGS__))
#define FR_14(OP, DO, X, ...)  OP(DO(X), FR_13(OP, DO, __VA_ARGS__))
#define FR_15(OP, DO, X, ...)  OP(DO(X), FR_14(OP, DO, __VA_ARGS__))
#define FR_16(OP, DO, X, ...)  OP(DO(X), FR_15(OP, DO, __VA_ARGS__))
#define FR_17(OP, DO, X, ...)  OP(DO(X), FR_16(OP, DO, __VA_ARGS__))
#define FR_18(OP, DO, X, ...)  OP(DO(X), FR_17(OP, DO, __VA_ARGS__))
#define FR_19(OP, DO, X, ...)  OP(DO(X), FR_18(OP, DO, __VA_ARGS__))
#define FR_20(OP, DO, X, ...)  OP(DO(X), FR_19(OP, DO, __VA_ARGS__))
#define FR_21(OP, DO, X, ...)  OP(DO(X), FR_20(OP, DO, __VA_ARGS__))
#define FR_22(OP, DO, X, ...)  OP(DO(X), FR_21(OP, DO, __VA_ARGS__))
#define FR_23(OP, DO, X, ...)  OP(DO(X), FR_22(OP, DO, __VA_ARGS__))
#define FR_24(OP, DO, X, ...)  OP(DO(X), FR_23(OP, DO, __VA_ARGS__))
#define FR_25(OP, DO, X, ...)  OP(DO(X), FR_24(OP, DO, __VA_ARGS__))
#define FR_26(OP, DO, X, ...)  OP(DO(X), FR_25(OP, DO, __VA_ARGS__))
#define FR_27(OP, DO, X, ...)  OP(DO(X), FR_26(OP, DO, __VA_ARGS__))
#define FR_28(OP, DO, X, ...)  OP(DO(X), FR_27(OP, DO, __VA_ARGS__))
#define FR_29(OP, DO, X, ...)  OP(DO(X), FR_28(OP, DO, __VA_ARGS__))
#define FR_30(OP, DO, X, ...)  OP(DO(X), FR_29(OP, DO, __VA_ARGS__))
#define FR_31(OP, DO, X, ...)  OP(DO(X), FR_30(OP, DO, __VA_ARGS__))
#define FR_32(OP, DO, X, ...)  OP(DO(X), FR_31(OP, DO, __VA_ARGS__))
#define FR_33(OP, DO, X, ...)  OP(DO(X), FR_32(OP, DO, __VA_ARGS__))
#define FR_34(OP, DO, X, ...)  OP(DO(X), FR_33(OP, DO, __VA_ARGS__))
#define FR_35(OP, DO, X, ...)  OP(DO(X), FR_34(OP, DO, __VA_ARGS__))
#define FR_36(OP, DO, X, ...)  OP(DO(X), FR_35(OP, DO, __VA_ARGS__))
#define FR_37(OP, DO, X, ...)  OP(DO(X), FR_36(OP, DO, __VA_ARGS__))
#define FR_38(OP, DO, X, ...)  OP(DO(X), FR_37(OP, DO, __VA_ARGS__))
#define FR_39(OP, DO, X, ...)  OP(DO(X), FR_38(OP, DO, __VA_ARGS__))
#define FR_40(OP, DO, X, ...)  OP(DO(X), FR_39(OP, DO, __VA_ARGS__))
#define FR_41(OP, DO, X, ...)  OP(DO(X), FR_40(OP, DO, __VA_ARGS__))
#define FR_42(OP, DO, X, ...)  OP(DO(X), FR_41(OP, DO, __VA_ARGS__))
#define FR_43(OP, DO, X, ...)  OP(DO(X), FR_42(OP, DO, __VA_ARGS__))
#define FR_44(OP, DO, X, ...)  OP(DO(X), FR_43(OP, DO, __VA_ARGS__))
#define FR_45(OP, DO, X, ...)  OP(DO(X), FR_44(OP, DO, __VA_ARGS__))
#define FR_46(OP, DO, X, ...)  OP(DO(X), FR_45(OP, DO, __VA_ARGS__))
#define FR_47(OP, DO, X, ...)  OP(DO(X), FR_46(OP, DO, __VA_ARGS__))
#define FR_48(OP, DO, X, ...)  OP(DO(X), FR_47(OP, DO, __VA_ARGS__))
#define FR_49(OP, DO, X, ...)  OP(DO(X), FR_48(OP, DO, __VA_ARGS__))
#define FR_50(OP, DO, X, ...)  OP(DO(X), FR_49(OP, DO, __VA_ARGS__))
#define FR_51(OP, DO, X, ...)  OP(DO(X), FR_50(OP, DO, __VA_ARGS__))
#define FR_52(OP, DO, X, ...)  OP(DO(X), FR_51(OP, DO, __VA_ARGS__))
#define FR_53(OP, DO, X, ...)  OP(DO(X), FR_52(OP, DO, __VA_ARGS__))
#define FR_54(OP, DO, X, ...)  OP(DO(X), FR_53(OP, DO, __VA_ARGS__))
#define FR_55(OP, DO, X, ...)  OP(DO(X), FR_54(OP, DO, __VA_ARGS__))
#define FR_56(OP, DO, X, ...)  OP(DO(X), FR_55(OP, DO, __VA_ARGS__))
#define FR_57(OP, DO, X, ...)  OP(DO(X), FR_56(OP, DO, __VA_ARGS__))
#define FR_58(OP, DO, X, ...)  OP(DO(X), FR_57(OP, DO, __VA_ARGS__))
#define FR_59(OP, DO, X, ...)  OP(DO(X), FR_58(OP, DO, __VA_ARGS__))
#define FR_60(OP, DO, X, ...)  OP(DO(X), FR_59(OP, DO, __VA_ARGS__))
#define FR_61(OP, DO, X, ...)  OP(DO(X), FR_60(OP, DO, __VA_ARGS__))
#define FR_62(OP, DO, X, ...)  OP(DO(X), FR_61(OP, DO, __VA_ARGS__))
#define FR_63(OP, DO, X, ...)  OP(DO(X), FR_62(OP, DO, __VA_ARGS__))
#define FR_64(OP, DO, X, ...)  OP(DO(X), FR_63(OP, DO, __VA_ARGS__))
#define FR_65(OP, DO, X, ...)  OP(DO(X), FR_64(OP, DO, __VA_ARGS__))
#define FR_66(OP, DO, X, ...)  OP(DO(X), FR_65(OP, DO, __VA_ARGS__))
#define FR_67(OP, DO, X, ...)  OP(DO(X), FR_66(OP, DO, __VA_ARGS__))
#define FR_68(OP, DO, X, ...)  OP(DO(X), FR_67(OP, DO, __VA_ARGS__))
#define FR_69(OP, DO, X, ...)  OP(DO(X), FR_68(OP, DO, __VA_ARGS__))
#define FR_70(OP, DO, X, ...)  OP(DO(X), FR_69(OP, DO, __VA_ARGS__))
#define FR_71(OP, DO, X, ...)  OP(DO(X), FR_70(OP, DO, __VA_ARGS__))
#define FR_72(OP, DO, X, ...)  OP(DO(X), FR_71(OP, DO, __VA_ARGS__))
#define FR_73(OP, DO, X, ...)  OP(DO(X), FR_72(OP, DO, __VA_ARGS__))
#define FR_74(OP, DO, X, ...)  OP(DO(X), FR_73(OP, DO, __VA_ARGS__))
#define FR_75(OP, DO, X, ...)  OP(DO(X), FR_74(OP, DO, __VA_ARGS__))
#define FR_76(OP, DO, X, ...)  OP(DO(X), FR_75(OP, DO, __VA_ARGS__))
#define FR_77(OP, DO, X, ...)  OP(DO(X), FR_76(OP, DO, __VA_ARGS__))
#define FR_78(OP, DO, X, ...)  OP(DO(X), FR_77(OP, DO, __VA_ARGS__))
#define FR_79(OP, DO, X, ...)  OP(DO(X), FR_78(OP, DO, __VA_ARGS__))
#define FR_80(OP, DO, X, ...)  OP(DO(X), FR_79(OP, DO, __VA_ARGS__))
#define FR_81(OP, DO, X, ...)  OP(DO(X), FR_80(OP, DO, __VA_ARGS__))
#define FR_82(OP, DO, X, ...)  OP(DO(X), FR_81(OP, DO, __VA_ARGS__))
#define FR_83(OP, DO, X, ...)  OP(DO(X), FR_82(OP, DO, __VA_ARGS__))
#define FR_84(OP, DO, X, ...)  OP(DO(X), FR_83(OP, DO, __VA_ARGS__))
#define FR_85(OP, DO, X, ...)  OP(DO(X), FR_84(OP, DO, __VA_ARGS__))
#define FR_86(OP, DO, X, ...)  OP(DO(X), FR_85(OP, DO, __VA_ARGS__))
#define FR_87(OP, DO, X, ...)  OP(DO(X), FR_86(OP, DO, __VA_ARGS__))
#define FR_88(OP, DO, X, ...)  OP(DO(X), FR_87(OP, DO, __VA_ARGS__))
#define FR_89(OP, DO, X, ...)  OP(DO(X), FR_88(OP, DO, __VA_ARGS__))
#define FR_90(OP, DO, X, ...)  OP(DO(X), FR_89(OP, DO, __VA_ARGS__))
#define FR_91(OP, DO, X, ...)  OP(DO(X), FR_90(OP, DO, __VA_ARGS__))
#define FR_92(OP, DO, X, ...)  OP(DO(X), FR_91(OP, DO, __VA_ARGS__))
#define FR_93(OP, DO, X, ...)  OP(DO(X), FR_92(OP, DO, __VA_ARGS__))
#define FR_94(OP, DO, X, ...)  OP(DO(X), FR_93(OP, DO, __VA_ARGS__))
#define FR_95(OP, DO, X, ...)  OP(DO(X), FR_94(OP, DO, __VA_ARGS__))
#define FR_96(OP, DO, X, ...)  OP(DO(X), FR_95(OP, DO, __VA_ARGS__))
#define FR_97(OP, DO, X, ...)  OP(DO(X), FR_96(OP, DO, __VA_ARGS__))
#define FR_98(OP, DO, X, ...)  OP(DO(X), FR_97(OP, DO, __VA_ARGS__))
#define FR_99(OP, DO, X, ...)  OP(DO(X), FR_98(OP, DO, __VA_ARGS__))
#define FR_100(OP, DO, X, ...) OP(DO(X), FR_99(OP, DO, __VA_ARGS__))

#define FOLD_RIGHT(OP,NAME,...) \
	APPLY( SUFFIX_N(FR_,__VA_ARGS__), OP, NAME, __VA_ARGS__)

#define FOLDR(OP,...) \
	FOLD_RIGHT( OP, EXPAND, __VA_ARGS__)
#endif//aw_meta_pp_foldr_h
