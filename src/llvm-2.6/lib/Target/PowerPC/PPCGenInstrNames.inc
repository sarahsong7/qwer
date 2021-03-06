//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace PPC {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    DBG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    DECLARE	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    ADD4	= 11,
    ADD8	= 12,
    ADDC	= 13,
    ADDC8	= 14,
    ADDE	= 15,
    ADDE8	= 16,
    ADDI	= 17,
    ADDI8	= 18,
    ADDIC	= 19,
    ADDICo	= 20,
    ADDIS	= 21,
    ADDIS8	= 22,
    ADDME	= 23,
    ADDME8	= 24,
    ADDZE	= 25,
    ADDZE8	= 26,
    ADJCALLSTACKDOWN	= 27,
    ADJCALLSTACKUP	= 28,
    AND	= 29,
    AND8	= 30,
    ANDC	= 31,
    ANDC8	= 32,
    ANDISo	= 33,
    ANDISo8	= 34,
    ANDIo	= 35,
    ANDIo8	= 36,
    ATOMIC_CMP_SWAP_I16	= 37,
    ATOMIC_CMP_SWAP_I32	= 38,
    ATOMIC_CMP_SWAP_I64	= 39,
    ATOMIC_CMP_SWAP_I8	= 40,
    ATOMIC_LOAD_ADD_I16	= 41,
    ATOMIC_LOAD_ADD_I32	= 42,
    ATOMIC_LOAD_ADD_I64	= 43,
    ATOMIC_LOAD_ADD_I8	= 44,
    ATOMIC_LOAD_AND_I16	= 45,
    ATOMIC_LOAD_AND_I32	= 46,
    ATOMIC_LOAD_AND_I64	= 47,
    ATOMIC_LOAD_AND_I8	= 48,
    ATOMIC_LOAD_NAND_I16	= 49,
    ATOMIC_LOAD_NAND_I32	= 50,
    ATOMIC_LOAD_NAND_I64	= 51,
    ATOMIC_LOAD_NAND_I8	= 52,
    ATOMIC_LOAD_OR_I16	= 53,
    ATOMIC_LOAD_OR_I32	= 54,
    ATOMIC_LOAD_OR_I64	= 55,
    ATOMIC_LOAD_OR_I8	= 56,
    ATOMIC_LOAD_SUB_I16	= 57,
    ATOMIC_LOAD_SUB_I32	= 58,
    ATOMIC_LOAD_SUB_I64	= 59,
    ATOMIC_LOAD_SUB_I8	= 60,
    ATOMIC_LOAD_XOR_I16	= 61,
    ATOMIC_LOAD_XOR_I32	= 62,
    ATOMIC_LOAD_XOR_I64	= 63,
    ATOMIC_LOAD_XOR_I8	= 64,
    ATOMIC_SWAP_I16	= 65,
    ATOMIC_SWAP_I32	= 66,
    ATOMIC_SWAP_I64	= 67,
    ATOMIC_SWAP_I8	= 68,
    B	= 69,
    BCC	= 70,
    BCTR	= 71,
    BCTRL8_Darwin	= 72,
    BCTRL8_ELF	= 73,
    BCTRL_Darwin	= 74,
    BCTRL_SVR4	= 75,
    BL8_Darwin	= 76,
    BL8_ELF	= 77,
    BLA8_Darwin	= 78,
    BLA8_ELF	= 79,
    BLA_Darwin	= 80,
    BLA_SVR4	= 81,
    BLR	= 82,
    BL_Darwin	= 83,
    BL_SVR4	= 84,
    CMPD	= 85,
    CMPDI	= 86,
    CMPLD	= 87,
    CMPLDI	= 88,
    CMPLW	= 89,
    CMPLWI	= 90,
    CMPW	= 91,
    CMPWI	= 92,
    CNTLZD	= 93,
    CNTLZW	= 94,
    CREQV	= 95,
    CROR	= 96,
    CRSET	= 97,
    DCBA	= 98,
    DCBF	= 99,
    DCBI	= 100,
    DCBST	= 101,
    DCBT	= 102,
    DCBTST	= 103,
    DCBZ	= 104,
    DCBZL	= 105,
    DIVD	= 106,
    DIVDU	= 107,
    DIVW	= 108,
    DIVWU	= 109,
    DSS	= 110,
    DSSALL	= 111,
    DST	= 112,
    DST64	= 113,
    DSTST	= 114,
    DSTST64	= 115,
    DSTSTT	= 116,
    DSTSTT64	= 117,
    DSTT	= 118,
    DSTT64	= 119,
    DWARF_LOC	= 120,
    DYNALLOC	= 121,
    DYNALLOC8	= 122,
    EQV	= 123,
    EQV8	= 124,
    EXTSB	= 125,
    EXTSB8	= 126,
    EXTSH	= 127,
    EXTSH8	= 128,
    EXTSW	= 129,
    EXTSW_32	= 130,
    EXTSW_32_64	= 131,
    FABSD	= 132,
    FABSS	= 133,
    FADD	= 134,
    FADDS	= 135,
    FADDrtz	= 136,
    FCFID	= 137,
    FCMPUD	= 138,
    FCMPUS	= 139,
    FCTIDZ	= 140,
    FCTIWZ	= 141,
    FDIV	= 142,
    FDIVS	= 143,
    FMADD	= 144,
    FMADDS	= 145,
    FMRD	= 146,
    FMRS	= 147,
    FMRSD	= 148,
    FMSUB	= 149,
    FMSUBS	= 150,
    FMUL	= 151,
    FMULS	= 152,
    FNABSD	= 153,
    FNABSS	= 154,
    FNEGD	= 155,
    FNEGS	= 156,
    FNMADD	= 157,
    FNMADDS	= 158,
    FNMSUB	= 159,
    FNMSUBS	= 160,
    FRSP	= 161,
    FSELD	= 162,
    FSELS	= 163,
    FSQRT	= 164,
    FSQRTS	= 165,
    FSUB	= 166,
    FSUBS	= 167,
    LA	= 168,
    LBZ	= 169,
    LBZ8	= 170,
    LBZU	= 171,
    LBZU8	= 172,
    LBZX	= 173,
    LBZX8	= 174,
    LD	= 175,
    LDARX	= 176,
    LDU	= 177,
    LDX	= 178,
    LDtoc	= 179,
    LFD	= 180,
    LFDU	= 181,
    LFDX	= 182,
    LFS	= 183,
    LFSU	= 184,
    LFSX	= 185,
    LHA	= 186,
    LHA8	= 187,
    LHAU	= 188,
    LHAU8	= 189,
    LHAX	= 190,
    LHAX8	= 191,
    LHBRX	= 192,
    LHZ	= 193,
    LHZ8	= 194,
    LHZU	= 195,
    LHZU8	= 196,
    LHZX	= 197,
    LHZX8	= 198,
    LI	= 199,
    LI8	= 200,
    LIS	= 201,
    LIS8	= 202,
    LVEBX	= 203,
    LVEHX	= 204,
    LVEWX	= 205,
    LVSL	= 206,
    LVSR	= 207,
    LVX	= 208,
    LVXL	= 209,
    LWA	= 210,
    LWARX	= 211,
    LWAX	= 212,
    LWBRX	= 213,
    LWZ	= 214,
    LWZ8	= 215,
    LWZU	= 216,
    LWZU8	= 217,
    LWZX	= 218,
    LWZX8	= 219,
    MCRF	= 220,
    MFCR	= 221,
    MFCTR	= 222,
    MFCTR8	= 223,
    MFFS	= 224,
    MFLR	= 225,
    MFLR8	= 226,
    MFOCRF	= 227,
    MFVRSAVE	= 228,
    MFVSCR	= 229,
    MTCRF	= 230,
    MTCTR	= 231,
    MTCTR8	= 232,
    MTFSB0	= 233,
    MTFSB1	= 234,
    MTFSF	= 235,
    MTLR	= 236,
    MTLR8	= 237,
    MTVRSAVE	= 238,
    MTVSCR	= 239,
    MULHD	= 240,
    MULHDU	= 241,
    MULHW	= 242,
    MULHWU	= 243,
    MULLD	= 244,
    MULLI	= 245,
    MULLW	= 246,
    MovePCtoLR	= 247,
    MovePCtoLR8	= 248,
    NAND	= 249,
    NAND8	= 250,
    NEG	= 251,
    NEG8	= 252,
    NOP	= 253,
    NOR	= 254,
    NOR8	= 255,
    OR	= 256,
    OR4To8	= 257,
    OR8	= 258,
    OR8To4	= 259,
    ORC	= 260,
    ORC8	= 261,
    ORI	= 262,
    ORI8	= 263,
    ORIS	= 264,
    ORIS8	= 265,
    RLDCL	= 266,
    RLDICL	= 267,
    RLDICR	= 268,
    RLDIMI	= 269,
    RLWIMI	= 270,
    RLWINM	= 271,
    RLWINMo	= 272,
    RLWNM	= 273,
    SELECT_CC_F4	= 274,
    SELECT_CC_F8	= 275,
    SELECT_CC_I4	= 276,
    SELECT_CC_I8	= 277,
    SELECT_CC_VRRC	= 278,
    SLD	= 279,
    SLW	= 280,
    SPILL_CR	= 281,
    SRAD	= 282,
    SRADI	= 283,
    SRAW	= 284,
    SRAWI	= 285,
    SRD	= 286,
    SRW	= 287,
    STB	= 288,
    STB8	= 289,
    STBU	= 290,
    STBU8	= 291,
    STBX	= 292,
    STBX8	= 293,
    STD	= 294,
    STDCX	= 295,
    STDU	= 296,
    STDUX	= 297,
    STDX	= 298,
    STDX_32	= 299,
    STD_32	= 300,
    STFD	= 301,
    STFDU	= 302,
    STFDX	= 303,
    STFIWX	= 304,
    STFS	= 305,
    STFSU	= 306,
    STFSX	= 307,
    STH	= 308,
    STH8	= 309,
    STHBRX	= 310,
    STHU	= 311,
    STHU8	= 312,
    STHX	= 313,
    STHX8	= 314,
    STVEBX	= 315,
    STVEHX	= 316,
    STVEWX	= 317,
    STVX	= 318,
    STVXL	= 319,
    STW	= 320,
    STW8	= 321,
    STWBRX	= 322,
    STWCX	= 323,
    STWU	= 324,
    STWU8	= 325,
    STWUX	= 326,
    STWX	= 327,
    STWX8	= 328,
    SUBF	= 329,
    SUBF8	= 330,
    SUBFC	= 331,
    SUBFC8	= 332,
    SUBFE	= 333,
    SUBFE8	= 334,
    SUBFIC	= 335,
    SUBFIC8	= 336,
    SUBFME	= 337,
    SUBFME8	= 338,
    SUBFZE	= 339,
    SUBFZE8	= 340,
    SYNC	= 341,
    TAILB	= 342,
    TAILB8	= 343,
    TAILBA	= 344,
    TAILBA8	= 345,
    TAILBCTR	= 346,
    TAILBCTR8	= 347,
    TCRETURNai	= 348,
    TCRETURNai8	= 349,
    TCRETURNdi	= 350,
    TCRETURNdi8	= 351,
    TCRETURNri	= 352,
    TCRETURNri8	= 353,
    TRAP	= 354,
    UPDATE_VRSAVE	= 355,
    VADDCUW	= 356,
    VADDFP	= 357,
    VADDSBS	= 358,
    VADDSHS	= 359,
    VADDSWS	= 360,
    VADDUBM	= 361,
    VADDUBS	= 362,
    VADDUHM	= 363,
    VADDUHS	= 364,
    VADDUWM	= 365,
    VADDUWS	= 366,
    VAND	= 367,
    VANDC	= 368,
    VAVGSB	= 369,
    VAVGSH	= 370,
    VAVGSW	= 371,
    VAVGUB	= 372,
    VAVGUH	= 373,
    VAVGUW	= 374,
    VCFSX	= 375,
    VCFUX	= 376,
    VCMPBFP	= 377,
    VCMPBFPo	= 378,
    VCMPEQFP	= 379,
    VCMPEQFPo	= 380,
    VCMPEQUB	= 381,
    VCMPEQUBo	= 382,
    VCMPEQUH	= 383,
    VCMPEQUHo	= 384,
    VCMPEQUW	= 385,
    VCMPEQUWo	= 386,
    VCMPGEFP	= 387,
    VCMPGEFPo	= 388,
    VCMPGTFP	= 389,
    VCMPGTFPo	= 390,
    VCMPGTSB	= 391,
    VCMPGTSBo	= 392,
    VCMPGTSH	= 393,
    VCMPGTSHo	= 394,
    VCMPGTSW	= 395,
    VCMPGTSWo	= 396,
    VCMPGTUB	= 397,
    VCMPGTUBo	= 398,
    VCMPGTUH	= 399,
    VCMPGTUHo	= 400,
    VCMPGTUW	= 401,
    VCMPGTUWo	= 402,
    VCTSXS	= 403,
    VCTUXS	= 404,
    VEXPTEFP	= 405,
    VLOGEFP	= 406,
    VMADDFP	= 407,
    VMAXFP	= 408,
    VMAXSB	= 409,
    VMAXSH	= 410,
    VMAXSW	= 411,
    VMAXUB	= 412,
    VMAXUH	= 413,
    VMAXUW	= 414,
    VMHADDSHS	= 415,
    VMHRADDSHS	= 416,
    VMINFP	= 417,
    VMINSB	= 418,
    VMINSH	= 419,
    VMINSW	= 420,
    VMINUB	= 421,
    VMINUH	= 422,
    VMINUW	= 423,
    VMLADDUHM	= 424,
    VMRGHB	= 425,
    VMRGHH	= 426,
    VMRGHW	= 427,
    VMRGLB	= 428,
    VMRGLH	= 429,
    VMRGLW	= 430,
    VMSUMMBM	= 431,
    VMSUMSHM	= 432,
    VMSUMSHS	= 433,
    VMSUMUBM	= 434,
    VMSUMUHM	= 435,
    VMSUMUHS	= 436,
    VMULESB	= 437,
    VMULESH	= 438,
    VMULEUB	= 439,
    VMULEUH	= 440,
    VMULOSB	= 441,
    VMULOSH	= 442,
    VMULOUB	= 443,
    VMULOUH	= 444,
    VNMSUBFP	= 445,
    VNOR	= 446,
    VOR	= 447,
    VPERM	= 448,
    VPKPX	= 449,
    VPKSHSS	= 450,
    VPKSHUS	= 451,
    VPKSWSS	= 452,
    VPKSWUS	= 453,
    VPKUHUM	= 454,
    VPKUHUS	= 455,
    VPKUWUM	= 456,
    VPKUWUS	= 457,
    VREFP	= 458,
    VRFIM	= 459,
    VRFIN	= 460,
    VRFIP	= 461,
    VRFIZ	= 462,
    VRLB	= 463,
    VRLH	= 464,
    VRLW	= 465,
    VRSQRTEFP	= 466,
    VSEL	= 467,
    VSL	= 468,
    VSLB	= 469,
    VSLDOI	= 470,
    VSLH	= 471,
    VSLO	= 472,
    VSLW	= 473,
    VSPLTB	= 474,
    VSPLTH	= 475,
    VSPLTISB	= 476,
    VSPLTISH	= 477,
    VSPLTISW	= 478,
    VSPLTW	= 479,
    VSR	= 480,
    VSRAB	= 481,
    VSRAH	= 482,
    VSRAW	= 483,
    VSRB	= 484,
    VSRH	= 485,
    VSRO	= 486,
    VSRW	= 487,
    VSUBCUW	= 488,
    VSUBFP	= 489,
    VSUBSBS	= 490,
    VSUBSHS	= 491,
    VSUBSWS	= 492,
    VSUBUBM	= 493,
    VSUBUBS	= 494,
    VSUBUHM	= 495,
    VSUBUHS	= 496,
    VSUBUWM	= 497,
    VSUBUWS	= 498,
    VSUM2SWS	= 499,
    VSUM4SBS	= 500,
    VSUM4SHS	= 501,
    VSUM4UBS	= 502,
    VSUMSWS	= 503,
    VUPKHPX	= 504,
    VUPKHSB	= 505,
    VUPKHSH	= 506,
    VUPKLPX	= 507,
    VUPKLSB	= 508,
    VUPKLSH	= 509,
    VXOR	= 510,
    V_SET0	= 511,
    XOR	= 512,
    XOR8	= 513,
    XORI	= 514,
    XORI8	= 515,
    XORIS	= 516,
    XORIS8	= 517,
    INSTRUCTION_LIST_END = 518
  };
}
} // End llvm namespace 
