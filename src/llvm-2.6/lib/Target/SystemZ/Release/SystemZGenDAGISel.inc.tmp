//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the SystemZ target
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// Include standard, target-independent definitions and methods used
// by the instruction selector.
#include "llvm/CodeGen/DAGISelHeader.h"


// Node transformations.
inline SDValue Transform_HH16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: return bits 48-63.
  return getI16Imm((N->getZExtValue() & 0xFFFF000000000000ULL) >> 48);

}
inline SDValue Transform_HI32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: return bits 32-63.
  return getI32Imm(N->getZExtValue() >> 32);

}
inline SDValue Transform_HL16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: return bits 32-47.
  return getI16Imm((N->getZExtValue() & 0x0000FFFF00000000ULL) >> 32);

}
inline SDValue Transform_LH16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: return bits 16-31.
  return getI16Imm((N->getZExtValue() & 0x00000000FFFF0000ULL) >> 16);

}
inline SDValue Transform_LL16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: return low 16 bits.
  return getI16Imm(N->getZExtValue() & 0x000000000000FFFFULL);

}
inline SDValue Transform_LO32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: return low 32 bits.
  return getI32Imm(N->getZExtValue() & 0x00000000FFFFFFFFULL);

}
inline SDValue Transform_LO8(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: return low 8 bits.
  return getI8Imm(N->getZExtValue() & 0x00000000000000FFULL);

}

// Predicate functions.
inline bool Predicate_atomic_cmp_swap_16(SDNode *N) {

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_atomic_cmp_swap_32(SDNode *N) {

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_atomic_cmp_swap_64(SDNode *N) {

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

}
inline bool Predicate_atomic_cmp_swap_8(SDNode *N) {

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_atomic_load_add_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_add_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_add_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_add_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_and_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_and_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_and_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_and_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_max_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_max_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_max_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_max_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_min_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_min_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_min_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_min_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_nand_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_nand_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_nand_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_nand_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_or_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_or_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_or_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_or_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_sub_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_sub_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_sub_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_sub_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_umax_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_umax_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_umax_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_umax_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_umin_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_umin_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_umin_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_umin_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_xor_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_xor_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_xor_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_xor_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_swap_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_swap_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_swap_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_swap_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_cvtff(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_FF;
    
}
inline bool Predicate_cvtfs(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_FS;
    
}
inline bool Predicate_cvtfu(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_FU;
    
}
inline bool Predicate_cvtsf(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_SF;
    
}
inline bool Predicate_cvtss(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_SS;
    
}
inline bool Predicate_cvtsu(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_SU;
    
}
inline bool Predicate_cvtuf(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_UF;
    
}
inline bool Predicate_cvtus(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_US;
    
}
inline bool Predicate_cvtuu(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_UU;
    
}
inline bool Predicate_extload(SDNode *N) {

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

}
inline bool Predicate_extloadf32(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

}
inline bool Predicate_extloadf64(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f64;

}
inline bool Predicate_extloadi1(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_extloadi16(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_extloadi32(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_extloadi8(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_fpimm0(SDNode *inN) {
  ConstantFPSDNode *N = cast<ConstantFPSDNode>(inN);

  return N->isExactlyValue(+0.0);

}
inline bool Predicate_fpimmneg0(SDNode *inN) {
  ConstantFPSDNode *N = cast<ConstantFPSDNode>(inN);

  return N->isExactlyValue(-0.0);

}
inline bool Predicate_i32immSExt16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i32immSExt16 predicate - True if the 32-bit immediate fits in a 16-bit
  // sign extended field.
  return (int32_t)N->getZExtValue() == (int16_t)N->getZExtValue();

}
inline bool Predicate_i32immSExt8(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i32immSExt8 predicate - True if the 32-bit immediate fits in a 8-bit
  // sign extended field.
  return (int32_t)N->getZExtValue() == (int8_t)N->getZExtValue();

}
inline bool Predicate_i32lh16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i32lh16 predicate - true if the 32-bit immediate has only bits 16-31 set.
  return ((N->getZExtValue() & 0x00000000FFFF0000ULL) == N->getZExtValue());

}
inline bool Predicate_i32lh16c(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i32lh16c predicate - true if the 32-bit immediate has all rightmost 16
  //  bits set.
  return ((N->getZExtValue() | 0x000000000000FFFFULL) == N->getZExtValue());

}
inline bool Predicate_i32ll16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i32ll16 predicate - true if the 32-bit immediate has only rightmost 16
  // bits set.
  return ((N->getZExtValue() & 0x000000000000FFFFULL) == N->getZExtValue());

}
inline bool Predicate_i32ll16c(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i32ll16c predicate - true if the 32-bit immediate has all bits 16-31 set.
  return ((N->getZExtValue() | 0x00000000FFFF0000ULL) == N->getZExtValue());

}
inline bool Predicate_i64hh16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
  
  // i64hh16 predicate - true if the 64-bit immediate has only bits 48-63 set.
  return ((N->getZExtValue() & 0xFFFF000000000000ULL) == N->getZExtValue());

}
inline bool Predicate_i64hh16c(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
  
  // i64hh16c predicate - true if the 64-bit immediate has only bits 48-63 set.
  return ((N->getZExtValue() | 0x0000FFFFFFFFFFFFULL) == N->getZExtValue());

}
inline bool Predicate_i64hi32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i64hi32 predicate - true if the 64-bit immediate has only bits 32-63 set.
  return ((N->getZExtValue() & 0xFFFFFFFF00000000ULL) == N->getZExtValue());

}
inline bool Predicate_i64hi32c(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i64hi32 predicate - true if the 64-bit immediate has only bits 32-63 set.
  return ((N->getZExtValue() | 0x00000000FFFFFFFFULL) == N->getZExtValue());

}
inline bool Predicate_i64hl16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
  
  // i64hl16 predicate - true if the 64-bit immediate has only bits 32-47 set.
  return ((N->getZExtValue() & 0x0000FFFF00000000ULL) == N->getZExtValue());

}
inline bool Predicate_i64hl16c(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
  
  // i64hl16c predicate - true if the 64-bit immediate has only bits 32-47 set.
  return ((N->getZExtValue() | 0xFFFF0000FFFFFFFFULL) == N->getZExtValue());

}
inline bool Predicate_i64immSExt32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i64immSExt32 predicate - True if the 64-bit immediate fits in a 32-bit
  // sign extended field.
  return (int64_t)N->getZExtValue() == (int32_t)N->getZExtValue();

}
inline bool Predicate_i64immZExt32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i64immZExt32 predicate - True if the 64-bit immediate fits in a 32-bit
  // zero extended field.
  return (uint64_t)N->getZExtValue() == (uint32_t)N->getZExtValue();

}
inline bool Predicate_i64lh16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
  
  // i64lh16 predicate - true if the 64-bit immediate has only bits 16-31 set.
  return ((N->getZExtValue() & 0x00000000FFFF0000ULL) == N->getZExtValue());

}
inline bool Predicate_i64lh16c(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
  
  // i64lh16c predicate - true if the 64-bit immediate has only bits 16-31 set.
  return ((N->getZExtValue() | 0xFFFFFFFF0000FFFFULL) == N->getZExtValue());

}
inline bool Predicate_i64ll16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
  
  // i64ll16 predicate - true if the 64-bit immediate has only rightmost 16
  // bits set.
  return ((N->getZExtValue() & 0x000000000000FFFFULL) == N->getZExtValue());

}
inline bool Predicate_i64ll16c(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
  
  // i64ll16c predicate - true if the 64-bit immediate has only rightmost 16
  // bits set.
  return ((N->getZExtValue() | 0xFFFFFFFFFFFF0000ULL) == N->getZExtValue());

}
inline bool Predicate_i64lo32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i64lo32 predicate - true if the 64-bit immediate has only rightmost 32
  // bits set.
  return ((N->getZExtValue() & 0x00000000FFFFFFFFULL) == N->getZExtValue());

}
inline bool Predicate_i64lo32c(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // i64lo32 predicate - true if the 64-bit immediate has only rightmost 32
  // bits set.
  return ((N->getZExtValue() | 0xFFFFFFFF00000000ULL) == N->getZExtValue());

}
inline bool Predicate_immAllOnes(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 return N->isAllOnesValue(); 
}
inline bool Predicate_immAllOnesV(SDNode *N) {

  return ISD::isBuildVectorAllOnes(N);

}
inline bool Predicate_immAllOnesV_bc(SDNode *N) {

  return ISD::isBuildVectorAllOnes(N);

}
inline bool Predicate_immAllZerosV(SDNode *N) {

  return ISD::isBuildVectorAllZeros(N);

}
inline bool Predicate_immAllZerosV_bc(SDNode *N) {

  return ISD::isBuildVectorAllZeros(N);

}
inline bool Predicate_immSExt16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // immSExt16 predicate - true if the immediate fits in a 16-bit sign extended
  // field.
  if (N->getValueType(0) == MVT::i64) {
    uint64_t val = N->getZExtValue();
    return ((int64_t)val == (int16_t)val);
  } else if (N->getValueType(0) == MVT::i32) {
    uint32_t val = N->getZExtValue();
    return ((int32_t)val == (int16_t)val);
  }

  return false;

}
inline bool Predicate_immSExt32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // immSExt32 predicate - true if the immediate fits in a 32-bit sign extended
  // field.
  uint64_t val = N->getZExtValue();
  return ((int64_t)val == (int32_t)val);

}
inline bool Predicate_istore(SDNode *N) {

  return !cast<StoreSDNode>(N)->isTruncatingStore();

}
inline bool Predicate_itruncstore(SDNode *N) {

  return cast<StoreSDNode>(N)->isTruncatingStore();

}
inline bool Predicate_load(SDNode *N) {

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

}
inline bool Predicate_post_store(SDNode *N) {

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::POST_INC || AM == ISD::POST_DEC;

}
inline bool Predicate_post_truncst(SDNode *N) {

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::POST_INC || AM == ISD::POST_DEC;

}
inline bool Predicate_post_truncstf32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::f32;

}
inline bool Predicate_post_truncsti1(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_post_truncsti16(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_post_truncsti32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_post_truncsti8(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_pre_store(SDNode *N) {

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

}
inline bool Predicate_pre_truncst(SDNode *N) {

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

}
inline bool Predicate_pre_truncstf32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::f32;

}
inline bool Predicate_pre_truncsti1(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_pre_truncsti16(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_pre_truncsti32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_pre_truncsti8(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_sextload(SDNode *N) {

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

}
inline bool Predicate_sextloadi1(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_sextloadi16(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_sextloadi32(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_sextloadi8(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_store(SDNode *N) {

  return !cast<StoreSDNode>(N)->isTruncatingStore();

}
inline bool Predicate_truncstore(SDNode *N) {

  return cast<StoreSDNode>(N)->isTruncatingStore();

}
inline bool Predicate_truncstoref32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::f32;

}
inline bool Predicate_truncstoref64(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::f64;

}
inline bool Predicate_truncstorei16(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_truncstorei32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_truncstorei8(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_unindexedload(SDNode *N) {

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

}
inline bool Predicate_unindexedstore(SDNode *N) {

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

}
inline bool Predicate_vtFP(SDNode *inN) {
  VTSDNode *N = cast<VTSDNode>(inN);
 return N->getVT().isFloatingPoint(); 
}
inline bool Predicate_vtInt(SDNode *inN) {
  VTSDNode *N = cast<VTSDNode>(inN);
 return N->getVT().isInteger(); 
}
inline bool Predicate_zextload(SDNode *N) {

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

}
inline bool Predicate_zextloadi1(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_zextloadi16(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_zextloadi32(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_zextloadi8(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

}


SDNode *Emit_0(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N0, N1);
}
SDNode *Emit_1(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1, SDValue &CPTmpN11_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, MVT::Other, Ops0, 6);
  ReplaceUses(SDValue(N1.getNode(), 1), SDValue(ResNode, 2));
  return ResNode;
}
SDNode *Emit_2(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_LL16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N0, Tmp2);
}
SDNode *Emit_3(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N0, Tmp1);
}
SDNode *Emit_4(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1, SDValue &CPTmpN01_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N0 = CurDAG->getMemOperand(cast<MemSDNode>(N0)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2, LSI_N0, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, MVT::Other, Ops0, 6);
  ReplaceUses(SDValue(N0.getNode(), 1), SDValue(ResNode, 2));
  return ResNode;
}
SDNode *Select_ISD_ADD_i32(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (ADD32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::ADD32rm, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (add:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (ADD32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::ADD32rm, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (add:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (ADD32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::ADD32rmy, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (add:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (ADD32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::ADD32rmy, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (add:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_immSExt16>><<X:LL16>>:$src2)
      // Emits: (ADD32ri16:i32 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immSExt16(N1.getNode())) {
        SDNode *Result = Emit_2(N, SystemZ::ADD32ri16, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GR32:i32:$src1, (imm:i32):$src2)
      // Emits: (ADD32ri:i32 GR32:i32:$src1, (imm:i32):$src2)
      // Pattern complexity = 6  cost = 1  size = 0
      SDNode *Result = Emit_3(N, SystemZ::ADD32ri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (add:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (ADD32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SystemZ::ADD32rr, MVT::i32);
  return Result;
}

SDNode *Emit_5(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN_0, SDValue &CPTmpN_1, SDValue &CPTmpN_2) DISABLE_INLINE {
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, CPTmpN_0, CPTmpN_1, CPTmpN_2);
}
SDNode *Emit_6(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_LL16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N0, Tmp2);
}
SDNode *Emit_7(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_LO32(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N0, Tmp2);
}
SDNode *Select_ISD_ADD_i64(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (ADD64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::ADD64rm, MVT::i64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (add:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1)
    // Emits: (ADD64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::ADD64rm, MVT::i64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: laaddr:i64:$src
  // Emits: (LA64r:i64 laaddr:i64:$src)
  // Pattern complexity = 13  cost = 1  size = 0
  {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;
    SDValue CPTmpN_2;
    if (SelectLAAddr(N, N, CPTmpN_0, CPTmpN_1, CPTmpN_2)) {
      SDNode *Result = Emit_5(N, SystemZ::LA64r, MVT::i64, CPTmpN_0, CPTmpN_1, CPTmpN_2);
      return Result;
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src2)
      // Emits: (ADD64ri16:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immSExt16(N1.getNode())) {
        SDNode *Result = Emit_6(N, SystemZ::ADD64ri16, MVT::i64);
        return Result;
      }

      // Pattern: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src2)
      // Emits: (ADD64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immSExt32(N1.getNode())) {
        SDNode *Result = Emit_7(N, SystemZ::ADD64ri32, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (add:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (ADD64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SystemZ::ADD64rr, MVT::i64);
  return Result;
}

SDNode *Emit_8(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_9(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDC_i32(const SDValue &N) {

  // Pattern: (addc:i32 GR32:i32:$src1, (imm:i32):$src2)
  // Emits: (ADC32ri:i32 GR32:i32:$src1, (imm:i32):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_9(N, SystemZ::ADC32ri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (addc:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (ADC32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_8(N, SystemZ::ADC32rr, MVT::i32);
  return Result;
}

SDNode *Emit_10(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_LO32(Tmp1.getNode());
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp2);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDC_i64(const SDValue &N) {

  // Pattern: (addc:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src2)
  // Emits: (ADC64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immSExt32(N1.getNode())) {
      SDNode *Result = Emit_10(N, SystemZ::ADC64ri32, MVT::i64);
      return Result;
    }
  }

  // Pattern: (addc:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (ADC64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_8(N, SystemZ::ADC64rr, MVT::i64);
  return Result;
}

SDNode *Emit_11(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, MVT::Flag, N0, N1, InFlag);
  InFlag = SDValue(ResNode, 2);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDE_i32(const SDValue &N) {
  SDNode *Result = Emit_11(N, SystemZ::ADDE32rr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_ADDE_i64(const SDValue &N) {
  SDNode *Result = Emit_11(N, SystemZ::ADDE64rr, MVT::i64);
  return Result;
}

SDNode *Emit_12(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_13(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_LL16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_14(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_LH16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_15(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ISD_AND_i32(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (AND32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::AND32rm, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (and:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (AND32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::AND32rm, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (and:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (AND32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::AND32rmy, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (and:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (AND32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::AND32rmy, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (and:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32ll16c>><<X:LL16>>:$src2)
      // Emits: (AND32rill16:i32 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i32ll16c(N1.getNode())) {
        SDNode *Result = Emit_13(N, SystemZ::AND32rill16, MVT::i32);
        return Result;
      }

      // Pattern: (and:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32lh16c>><<X:LH16>>:$src2)
      // Emits: (AND32rilh16:i32 GR32:i32:$src1, (LH16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i32lh16c(N1.getNode())) {
        SDNode *Result = Emit_14(N, SystemZ::AND32rilh16, MVT::i32);
        return Result;
      }

      // Pattern: (and:i32 GR32:i32:$src1, (imm:i32):$src2)
      // Emits: (AND32ri:i32 GR32:i32:$src1, (imm:i32):$src2)
      // Pattern complexity = 6  cost = 1  size = 0
      SDNode *Result = Emit_15(N, SystemZ::AND32ri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (and:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (AND32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::AND32rr, MVT::i32);
  return Result;
}

SDNode *Emit_16(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_LL16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_17(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_LH16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_18(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_HL16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_19(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_HH16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_20(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_LO32(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_21(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_HI32(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Select_ISD_AND_i64(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (AND64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::AND64rm, MVT::i64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (and:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1)
    // Emits: (AND64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::AND64rm, MVT::i64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64ll16c>><<X:LL16>>:$src2)
      // Emits: (AND64rill16:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64ll16c(N1.getNode())) {
        SDNode *Result = Emit_16(N, SystemZ::AND64rill16, MVT::i64);
        return Result;
      }

      // Pattern: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lh16c>><<X:LH16>>:$src2)
      // Emits: (AND64rilh16:i64 GR64:i64:$src1, (LH16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64lh16c(N1.getNode())) {
        SDNode *Result = Emit_17(N, SystemZ::AND64rilh16, MVT::i64);
        return Result;
      }

      // Pattern: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hl16c>><<X:HL16>>:$src2)
      // Emits: (AND64rihl16:i64 GR64:i64:$src1, (HL16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64hl16c(N1.getNode())) {
        SDNode *Result = Emit_18(N, SystemZ::AND64rihl16, MVT::i64);
        return Result;
      }

      // Pattern: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hh16c>><<X:HH16>>:$src2)
      // Emits: (AND64rihh16:i64 GR64:i64:$src1, (HH16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64hh16c(N1.getNode())) {
        SDNode *Result = Emit_19(N, SystemZ::AND64rihh16, MVT::i64);
        return Result;
      }

      // Pattern: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lo32c>><<X:LO32>>:$src2)
      // Emits: (AND64rilo32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64lo32c(N1.getNode())) {
        SDNode *Result = Emit_20(N, SystemZ::AND64rilo32, MVT::i64);
        return Result;
      }

      // Pattern: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hi32c>><<X:HI32>>:$src2)
      // Emits: (AND64rihi32:i64 GR64:i64:$src1, (HI32:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64hi32c(N1.getNode())) {
        SDNode *Result = Emit_21(N, SystemZ::AND64rihi32, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (and:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (AND64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::AND64rr, MVT::i64);
  return Result;
}

SDNode *Emit_22(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp0(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp0, N0, Tmp2);
}
SDNode *Select_ISD_ANY_EXTEND_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_22(N, TargetInstrInfo::IMPLICIT_DEF, TargetInstrInfo::INSERT_SUBREG, MVT::i64, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_23(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_BIT_CONVERT_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_23(N, SystemZ::FBCONVG64, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BIT_CONVERT_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_23(N, SystemZ::FBCONVF64, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_24(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_24(N, SystemZ::JMP);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BRIND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_24(N, SystemZ::JMPr);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_25(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1, SDValue &CPTmpN01_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue LSI_N0 = CurDAG->getMemOperand(cast<MemSDNode>(N0)->getMemOperand());
  SDValue Ops0[] = { CPTmpN01_0, CPTmpN01_1, CPTmpN01_2, LSI_N0, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
  ReplaceUses(SDValue(N0.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Select_ISD_BSWAP_i32(const SDValue &N) {

  // Pattern: (bswap:i32 (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (BSWAP32rm:i32 rriaddr:i64:$src)
  // Pattern complexity = 19  cost = 1  size = 0
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse()) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2) &&
            N01.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_25(N, SystemZ::BSWAP32rm, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (bswap:i32 GR32:i32:$src)
  // Emits: (BSWAP32rr:i32 GR32:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_23(N, SystemZ::BSWAP32rr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_BSWAP_i64(const SDValue &N) {

  // Pattern: (bswap:i64 (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (BSWAP64rm:i64 rriaddr:i64:$src)
  // Pattern complexity = 19  cost = 1  size = 0
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse()) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2) &&
            N01.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_25(N, SystemZ::BSWAP64rm, MVT::i64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (bswap:i64 GR64:i64:$src)
  // Emits: (BSWAP64rr:i64 GR64:i64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_23(N, SystemZ::BSWAP64rr, MVT::i64);
  return Result;
}

SDNode *Emit_26(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { N1, N2, Chain, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, HasInFlag ? 4 : 3);
  Chain = SDValue(ResNode, 0);
  InFlag = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    InFlag,
    SDValue(Chain.getNode(), Chain.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_ISD_CALLSEQ_END(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::TargetConstant) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::TargetConstant) {
      SDNode *Result = Emit_26(N, SystemZ::ADJCALLSTACKUP);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_27(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, N1, Chain);
  Chain = SDValue(ResNode, 0);
  SDValue InFlag(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    InFlag,
    SDValue(Chain.getNode(), Chain.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_ISD_CALLSEQ_START(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::TargetConstant) {
    SDNode *Result = Emit_27(N, SystemZ::ADJCALLSTACKDOWN);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_28(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x3ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1, Tmp2);
}
SDNode *Select_ISD_CTLZ_i64(const SDValue &N) {
  SDNode *Result = Emit_28(N, SystemZ::FLOGR64, TargetInstrInfo::EXTRACT_SUBREG, MVT::v2i64, MVT::i64);
  return Result;
}

SDNode *Emit_29(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_LL16(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_30(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp0), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1, Tmp2);
}
SDNode *Select_ISD_Constant_i32(const SDValue &N) {

  // Pattern: (imm:i32)<<P:Predicate_immSExt16>><<X:LL16>>:$src
  // Emits: (MOV32ri16:i32 (LL16:i32 (imm:i32):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immSExt16(N.getNode())) {
    SDNode *Result = Emit_29(N, SystemZ::MOV32ri16, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32):$src
  // Emits: (EXTRACT_SUBREG:i32 (MOV64ri32:i64 (imm:i64):$src), 1:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  SDNode *Result = Emit_30(N, SystemZ::MOV64ri32, TargetInstrInfo::EXTRACT_SUBREG, MVT::i64, MVT::i32);
  return Result;
}

SDNode *Emit_31(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_LL16(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_32(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_LH16(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_33(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_HL16(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_34(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_HH16(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_35(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_LO32(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_36(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_HI32(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_37(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_HI32(Tmp0.getNode());
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp1), 0);
  SDValue Tmp3 = Transform_LO32(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Select_ISD_Constant_i64(const SDValue &N) {

  // Pattern: (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src
  // Emits: (MOV64ri16:i64 (LL16:i64 (imm:i64):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immSExt16(N.getNode())) {
    SDNode *Result = Emit_31(N, SystemZ::MOV64ri16, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_i64ll16>><<X:LL16>>:$src
  // Emits: (MOV64rill16:i64 (LL16:i64 (imm:i64):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_i64ll16(N.getNode())) {
    SDNode *Result = Emit_31(N, SystemZ::MOV64rill16, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_i64lh16>><<X:LH16>>:$src
  // Emits: (MOV64rilh16:i64 (LH16:i64 (imm:i64):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_i64lh16(N.getNode())) {
    SDNode *Result = Emit_32(N, SystemZ::MOV64rilh16, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_i64hl16>><<X:HL16>>:$src
  // Emits: (MOV64rihl16:i64 (HL16:i64 (imm:i64):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_i64hl16(N.getNode())) {
    SDNode *Result = Emit_33(N, SystemZ::MOV64rihl16, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_i64hh16>><<X:HH16>>:$src
  // Emits: (MOV64rihh16:i64 (HH16:i64 (imm:i64):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_i64hh16(N.getNode())) {
    SDNode *Result = Emit_34(N, SystemZ::MOV64rihh16, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src
  // Emits: (MOV64ri32:i64 (LO32:i64 (imm:i64):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immSExt32(N.getNode())) {
    SDNode *Result = Emit_35(N, SystemZ::MOV64ri32, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_i64lo32>><<X:LO32>>:$src
  // Emits: (MOV64rilo32:i64 (LO32:i64 (imm:i64):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_i64lo32(N.getNode())) {
    SDNode *Result = Emit_35(N, SystemZ::MOV64rilo32, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_i64hi32>><<X:HI32>>:$src
  // Emits: (MOV64rihi32:i64 (HI32:i64 (imm:i64):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_i64hi32(N.getNode())) {
    SDNode *Result = Emit_36(N, SystemZ::MOV64rihi32, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64):$imm
  // Emits: (OR64rilo32:i64 (MOV64rihi32:i64 (HI32:i64 (imm:i64):$imm)), (LO32:i64 (imm:i64):$imm))
  // Pattern complexity = 3  cost = 2  size = 0
  SDNode *Result = Emit_37(N, SystemZ::MOV64rihi32, SystemZ::OR64rilo32, MVT::i64, MVT::i64);
  return Result;
}

SDNode *Emit_38(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0);
}
SDNode *Emit_39(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue Tmp0(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp0);
}
SDNode *Select_ISD_ConstantFP_f32(const SDValue &N) {

  // Pattern: (fpimm:f32)<<P:Predicate_fpimm0>>
  // Emits: (LD_Fp032:f32)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_fpimm0(N.getNode())) {
    SDNode *Result = Emit_38(N, SystemZ::LD_Fp032, MVT::f32);
    return Result;
  }

  // Pattern: (fpimm:f32)<<P:Predicate_fpimmneg0>>
  // Emits: (FNEG32rr:f32 (LD_Fp032:f32))
  // Pattern complexity = 4  cost = 2  size = 0
  if (Predicate_fpimmneg0(N.getNode())) {
    SDNode *Result = Emit_39(N, SystemZ::LD_Fp032, SystemZ::FNEG32rr, MVT::f32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ConstantFP_f64(const SDValue &N) {

  // Pattern: (fpimm:f64)<<P:Predicate_fpimm0>>
  // Emits: (LD_Fp064:f64)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_fpimm0(N.getNode())) {
    SDNode *Result = Emit_38(N, SystemZ::LD_Fp064, MVT::f64);
    return Result;
  }

  // Pattern: (fpimm:f64)<<P:Predicate_fpimmneg0>>
  // Emits: (FNEG64rr:f64 (LD_Fp064:f64))
  // Pattern complexity = 4  cost = 2  size = 0
  if (Predicate_fpimmneg0(N.getNode())) {
    SDNode *Result = Emit_39(N, SystemZ::LD_Fp064, SystemZ::FNEG64rr, MVT::f64, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_40(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N0);
}
SDNode *Select_ISD_FABS_f32(const SDValue &N) {
  SDNode *Result = Emit_40(N, SystemZ::FABS32rr, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FABS_f64(const SDValue &N) {
  SDNode *Result = Emit_40(N, SystemZ::FABS64rr, MVT::f64);
  return Result;
}

SDNode *Emit_41(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N00, N01);
}
SDNode *Emit_42(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN001_0, SDValue &CPTmpN001_1, SDValue &CPTmpN001_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue Chain00 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N00 = CurDAG->getMemOperand(cast<MemSDNode>(N00)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN001_0, CPTmpN001_1, CPTmpN001_2, N01, LSI_N00, Chain00 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 7);
  ReplaceUses(SDValue(N00.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Emit_43(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N10, N11);
}
SDNode *Emit_44(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN011_0, SDValue &CPTmpN011_1, SDValue &CPTmpN011_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue Chain01 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N01 = CurDAG->getMemOperand(cast<MemSDNode>(N01)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN011_0, CPTmpN011_1, CPTmpN011_2, N00, LSI_N01, Chain01 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 7);
  ReplaceUses(SDValue(N01.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Emit_45(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1, SDValue &CPTmpN101_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN101_0, CPTmpN101_1, CPTmpN101_2, N11, LSI_N10, Chain10 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 7);
  ReplaceUses(SDValue(N10.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Emit_46(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1, SDValue &CPTmpN111_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN111_0, CPTmpN111_1, CPTmpN111_2, N10, LSI_N11, Chain11 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 7);
  ReplaceUses(SDValue(N11.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Select_ISD_FADD_f32(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FMUL &&
        N0.hasOneUse()) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (fadd:f32 (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src3), FP32:f32:$src1)
      // Emits: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
      // Pattern complexity = 22  cost = 1  size = 0
      if (N00.getOpcode() == ISD::LOAD &&
          N00.hasOneUse() &&
          IsLegalAndProfitableToFold(N00.getNode(), N0.getNode(), N.getNode())) {
        SDValue Chain00 = N00.getOperand(0);
        if (Predicate_unindexedload(N00.getNode()) &&
            Predicate_load(N00.getNode())) {
          SDValue N001 = N00.getOperand(1);
          SDValue CPTmpN001_0;
          SDValue CPTmpN001_1;
          SDValue CPTmpN001_2;
          if (SelectAddrRRI12(N, N001, CPTmpN001_0, CPTmpN001_1, CPTmpN001_2)) {
            SDValue N01 = N0.getOperand(1);
            SDValue N1 = N.getOperand(1);
            if (N001.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_42(N, SystemZ::FMADD32rm, MVT::f32, CPTmpN001_0, CPTmpN001_1, CPTmpN001_2);
              return Result;
            }
          }
        }
      }

      // Pattern: (fadd:f32 (fmul:f32 FP32:f32:$src3, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP32:f32:$src1)
      // Emits: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
      // Pattern complexity = 22  cost = 1  size = 0
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::LOAD &&
          N01.hasOneUse() &&
          IsLegalAndProfitableToFold(N01.getNode(), N0.getNode(), N.getNode())) {
        SDValue Chain01 = N01.getOperand(0);
        if (Predicate_unindexedload(N01.getNode()) &&
            Predicate_load(N01.getNode())) {
          SDValue N011 = N01.getOperand(1);
          SDValue CPTmpN011_0;
          SDValue CPTmpN011_1;
          SDValue CPTmpN011_2;
          if (SelectAddrRRI12(N, N011, CPTmpN011_0, CPTmpN011_1, CPTmpN011_2)) {
            SDValue N1 = N.getOperand(1);
            if (N011.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_44(N, SystemZ::FMADD32rm, MVT::f32, CPTmpN011_0, CPTmpN011_1, CPTmpN011_2);
              return Result;
            }
          }
        }
      }
    }
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::FMUL &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);

        // Pattern: (fadd:f32 FP32:f32:$src1, (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src3))
        // Emits: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
        // Pattern complexity = 22  cost = 1  size = 0
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode())) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            SDValue CPTmpN101_2;
            if (SelectAddrRRI12(N, N101, CPTmpN101_0, CPTmpN101_1, CPTmpN101_2)) {
              SDValue N11 = N1.getOperand(1);
              if (N101.getNode()->getValueType(0) == MVT::i64) {
                SDNode *Result = Emit_45(N, SystemZ::FMADD32rm, MVT::f32, CPTmpN101_0, CPTmpN101_1, CPTmpN101_2);
                return Result;
              }
            }
          }
        }

        // Pattern: (fadd:f32 FP32:f32:$src1, (fmul:f32 FP32:f32:$src3, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>))
        // Emits: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
        // Pattern complexity = 22  cost = 1  size = 0
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::LOAD &&
            N11.hasOneUse() &&
            IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode())) {
          SDValue Chain11 = N11.getOperand(0);
          if (Predicate_unindexedload(N11.getNode()) &&
              Predicate_load(N11.getNode())) {
            SDValue N111 = N11.getOperand(1);
            SDValue CPTmpN111_0;
            SDValue CPTmpN111_1;
            SDValue CPTmpN111_2;
            if (SelectAddrRRI12(N, N111, CPTmpN111_0, CPTmpN111_1, CPTmpN111_2) &&
                N111.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_46(N, SystemZ::FMADD32rm, MVT::f32, CPTmpN111_0, CPTmpN111_1, CPTmpN111_2);
              return Result;
            }
          }
        }
      }

      // Pattern: (fadd:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
      // Emits: (FADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
      // Pattern complexity = 19  cost = 1  size = 0
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::FADD32rm, MVT::f32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (fadd:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src1)
    // Emits: (FADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::FADD32rm, MVT::f32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fadd:f32 (fmul:f32 FP32:f32:$src2, FP32:f32:$src3), FP32:f32:$src1)
    // Emits: (FMADD32rr:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_41(N, SystemZ::FMADD32rr, MVT::f32);
      return Result;
    }

    // Pattern: (fadd:f32 FP32:f32:$src1, (fmul:f32 FP32:f32:$src2, FP32:f32:$src3))
    // Emits: (FMADD32rr:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_43(N, SystemZ::FMADD32rr, MVT::f32);
      return Result;
    }
  }

  // Pattern: (fadd:f32 FP32:f32:$src1, FP32:f32:$src2)
  // Emits: (FADD32rr:f32 FP32:f32:$src1, FP32:f32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SystemZ::FADD32rr, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FADD_f64(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FMUL &&
        N0.hasOneUse()) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (fadd:f64 (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src3), FP64:f64:$src1)
      // Emits: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
      // Pattern complexity = 22  cost = 1  size = 0
      if (N00.getOpcode() == ISD::LOAD &&
          N00.hasOneUse() &&
          IsLegalAndProfitableToFold(N00.getNode(), N0.getNode(), N.getNode())) {
        SDValue Chain00 = N00.getOperand(0);
        if (Predicate_unindexedload(N00.getNode()) &&
            Predicate_load(N00.getNode())) {
          SDValue N001 = N00.getOperand(1);
          SDValue CPTmpN001_0;
          SDValue CPTmpN001_1;
          SDValue CPTmpN001_2;
          if (SelectAddrRRI12(N, N001, CPTmpN001_0, CPTmpN001_1, CPTmpN001_2)) {
            SDValue N01 = N0.getOperand(1);
            SDValue N1 = N.getOperand(1);
            if (N001.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_42(N, SystemZ::FMADD64rm, MVT::f64, CPTmpN001_0, CPTmpN001_1, CPTmpN001_2);
              return Result;
            }
          }
        }
      }

      // Pattern: (fadd:f64 (fmul:f64 FP64:f64:$src3, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP64:f64:$src1)
      // Emits: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
      // Pattern complexity = 22  cost = 1  size = 0
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::LOAD &&
          N01.hasOneUse() &&
          IsLegalAndProfitableToFold(N01.getNode(), N0.getNode(), N.getNode())) {
        SDValue Chain01 = N01.getOperand(0);
        if (Predicate_unindexedload(N01.getNode()) &&
            Predicate_load(N01.getNode())) {
          SDValue N011 = N01.getOperand(1);
          SDValue CPTmpN011_0;
          SDValue CPTmpN011_1;
          SDValue CPTmpN011_2;
          if (SelectAddrRRI12(N, N011, CPTmpN011_0, CPTmpN011_1, CPTmpN011_2)) {
            SDValue N1 = N.getOperand(1);
            if (N011.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_44(N, SystemZ::FMADD64rm, MVT::f64, CPTmpN011_0, CPTmpN011_1, CPTmpN011_2);
              return Result;
            }
          }
        }
      }
    }
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::FMUL &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);

        // Pattern: (fadd:f64 FP64:f64:$src1, (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src3))
        // Emits: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
        // Pattern complexity = 22  cost = 1  size = 0
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode())) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            SDValue CPTmpN101_2;
            if (SelectAddrRRI12(N, N101, CPTmpN101_0, CPTmpN101_1, CPTmpN101_2)) {
              SDValue N11 = N1.getOperand(1);
              if (N101.getNode()->getValueType(0) == MVT::i64) {
                SDNode *Result = Emit_45(N, SystemZ::FMADD64rm, MVT::f64, CPTmpN101_0, CPTmpN101_1, CPTmpN101_2);
                return Result;
              }
            }
          }
        }

        // Pattern: (fadd:f64 FP64:f64:$src1, (fmul:f64 FP64:f64:$src3, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>))
        // Emits: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
        // Pattern complexity = 22  cost = 1  size = 0
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::LOAD &&
            N11.hasOneUse() &&
            IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode())) {
          SDValue Chain11 = N11.getOperand(0);
          if (Predicate_unindexedload(N11.getNode()) &&
              Predicate_load(N11.getNode())) {
            SDValue N111 = N11.getOperand(1);
            SDValue CPTmpN111_0;
            SDValue CPTmpN111_1;
            SDValue CPTmpN111_2;
            if (SelectAddrRRI12(N, N111, CPTmpN111_0, CPTmpN111_1, CPTmpN111_2) &&
                N111.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_46(N, SystemZ::FMADD64rm, MVT::f64, CPTmpN111_0, CPTmpN111_1, CPTmpN111_2);
              return Result;
            }
          }
        }
      }

      // Pattern: (fadd:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
      // Emits: (FADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
      // Pattern complexity = 19  cost = 1  size = 0
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::FADD64rm, MVT::f64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (fadd:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src1)
    // Emits: (FADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::FADD64rm, MVT::f64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fadd:f64 (fmul:f64 FP64:f64:$src2, FP64:f64:$src3), FP64:f64:$src1)
    // Emits: (FMADD64rr:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_41(N, SystemZ::FMADD64rr, MVT::f64);
      return Result;
    }

    // Pattern: (fadd:f64 FP64:f64:$src1, (fmul:f64 FP64:f64:$src2, FP64:f64:$src3))
    // Emits: (FMADD64rr:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_43(N, SystemZ::FMADD64rr, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fadd:f64 FP64:f64:$src1, FP64:f64:$src2)
  // Emits: (FADD64rr:f64 FP64:f64:$src1, FP64:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SystemZ::FADD64rr, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FCOPYSIGN_f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::f32) {
    SDNode *Result = Emit_12(N, SystemZ::FCOPYSIGN32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FCOPYSIGN_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_12(N, SystemZ::FCOPYSIGN64, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_47(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1, SDValue &CPTmpN11_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 6);
  ReplaceUses(SDValue(N1.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Select_ISD_FDIV_f32(const SDValue &N) {

  // Pattern: (fdiv:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (FDIV32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
  // Pattern complexity = 19  cost = 1  size = 0
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::LOAD &&
        N1.hasOneUse() &&
        IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain1 = N1.getOperand(0);
      if (Predicate_unindexedload(N1.getNode()) &&
          Predicate_load(N1.getNode())) {
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        SDValue CPTmpN11_1;
        SDValue CPTmpN11_2;
        if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
            N11.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_47(N, SystemZ::FDIV32rm, MVT::f32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (fdiv:f32 FP32:f32:$src1, FP32:f32:$src2)
  // Emits: (FDIV32rr:f32 FP32:f32:$src1, FP32:f32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::FDIV32rr, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FDIV_f64(const SDValue &N) {

  // Pattern: (fdiv:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (FDIV64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
  // Pattern complexity = 19  cost = 1  size = 0
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::LOAD &&
        N1.hasOneUse() &&
        IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain1 = N1.getOperand(0);
      if (Predicate_unindexedload(N1.getNode()) &&
          Predicate_load(N1.getNode())) {
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        SDValue CPTmpN11_1;
        SDValue CPTmpN11_2;
        if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
            N11.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_47(N, SystemZ::FDIV64rm, MVT::f64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (fdiv:f64 FP64:f64:$src1, FP64:f64:$src2)
  // Emits: (FDIV64rr:f64 FP64:f64:$src1, FP64:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::FDIV64rr, MVT::f64);
  return Result;
}

SDNode *Emit_48(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1, SDValue &CPTmpN01_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N0 = CurDAG->getMemOperand(cast<MemSDNode>(N0)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2, LSI_N0, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 6);
  ReplaceUses(SDValue(N0.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Select_ISD_FMUL_f32(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fmul:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (FMUL32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_47(N, SystemZ::FMUL32rm, MVT::f32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src1)
    // Emits: (FMUL32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_48(N, SystemZ::FMUL32rm, MVT::f32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (fmul:f32 FP32:f32:$src1, FP32:f32:$src2)
  // Emits: (FMUL32rr:f32 FP32:f32:$src1, FP32:f32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::FMUL32rr, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FMUL_f64(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fmul:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (FMUL64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_47(N, SystemZ::FMUL64rm, MVT::f64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src1)
    // Emits: (FMUL64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_48(N, SystemZ::FMUL64rm, MVT::f64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (fmul:f64 FP64:f64:$src1, FP64:f64:$src2)
  // Emits: (FMUL64rr:f64 FP64:f64:$src1, FP64:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::FMUL64rr, MVT::f64);
  return Result;
}

SDNode *Emit_49(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N00);
}
SDNode *Select_ISD_FNEG_f32(const SDValue &N) {

  // Pattern: (fneg:f32 (fabs:f32 FP32:f32:$src))
  // Emits: (FNABS32rr:f32 FP32:f32:$src)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FABS) {
      SDNode *Result = Emit_49(N, SystemZ::FNABS32rr, MVT::f32);
      return Result;
    }
  }

  // Pattern: (fneg:f32 FP32:f32:$src)
  // Emits: (FNEG32rr:f32 FP32:f32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_40(N, SystemZ::FNEG32rr, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FNEG_f64(const SDValue &N) {

  // Pattern: (fneg:f64 (fabs:f64 FP64:f64:$src))
  // Emits: (FNABS64rr:f64 FP64:f64:$src)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FABS) {
      SDNode *Result = Emit_49(N, SystemZ::FNABS64rr, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fneg:f64 FP64:f64:$src)
  // Emits: (FNEG64rr:f64 FP64:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_40(N, SystemZ::FNEG64rr, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FP_EXTEND_f64(const SDValue &N) {

  // Pattern: (fextend:f64 (ld:f32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (FEXT32m64:f64 rriaddr12:i64:$src)
  // Pattern complexity = 19  cost = 1  size = 0
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse()) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2) &&
            N01.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_25(N, SystemZ::FEXT32m64, MVT::f64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (fextend:f64 FP32:f32:$src)
  // Emits: (FEXT32r64:f64 FP32:f32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_23(N, SystemZ::FEXT32r64, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FP_ROUND_f32(const SDValue &N) {
  SDNode *Result = Emit_23(N, SystemZ::FROUND64r32, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FP_TO_SINT_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (fp_to_sint:i32 FP32:f32:$src)
  // Emits: (FCONVGR32:i32 FP32:f32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f32) {
    SDNode *Result = Emit_40(N, SystemZ::FCONVGR32, MVT::i32);
    return Result;
  }

  // Pattern: (fp_to_sint:i32 FP64:f64:$src)
  // Emits: (FCONVGR32r64:i32 FP64:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_40(N, SystemZ::FCONVGR32r64, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FP_TO_SINT_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (fp_to_sint:i64 FP32:f32:$src)
  // Emits: (FCONVGR64r32:i64 FP32:f32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f32) {
    SDNode *Result = Emit_40(N, SystemZ::FCONVGR64r32, MVT::i64);
    return Result;
  }

  // Pattern: (fp_to_sint:i64 FP64:f64:$src)
  // Emits: (FCONVGR64:i64 FP64:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_40(N, SystemZ::FCONVGR64, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSQRT_f32(const SDValue &N) {

  // Pattern: (fsqrt:f32 (ld:f32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (FSQRT32rm:f32 rriaddr12:i64:$src)
  // Pattern complexity = 19  cost = 1  size = 0
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse()) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2) &&
            N01.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_25(N, SystemZ::FSQRT32rm, MVT::f32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (fsqrt:f32 FP32:f32:$src)
  // Emits: (FSQRT32rr:f32 FP32:f32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_23(N, SystemZ::FSQRT32rr, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSQRT_f64(const SDValue &N) {

  // Pattern: (fsqrt:f64 (ld:f64 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (FSQRT64rm:f64 rriaddr12:i64:$src)
  // Pattern complexity = 19  cost = 1  size = 0
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse()) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2) &&
            N01.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_25(N, SystemZ::FSQRT64rm, MVT::f64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (fsqrt:f64 FP64:f64:$src)
  // Emits: (FSQRT64rr:f64 FP64:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_23(N, SystemZ::FSQRT64rr, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FSUB_f32(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FMUL &&
        N0.hasOneUse()) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (fsub:f32 (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src3), FP32:f32:$src1)
      // Emits: (FMSUB32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
      // Pattern complexity = 22  cost = 1  size = 0
      if (N00.getOpcode() == ISD::LOAD &&
          N00.hasOneUse() &&
          IsLegalAndProfitableToFold(N00.getNode(), N0.getNode(), N.getNode())) {
        SDValue Chain00 = N00.getOperand(0);
        if (Predicate_unindexedload(N00.getNode()) &&
            Predicate_load(N00.getNode())) {
          SDValue N001 = N00.getOperand(1);
          SDValue CPTmpN001_0;
          SDValue CPTmpN001_1;
          SDValue CPTmpN001_2;
          if (SelectAddrRRI12(N, N001, CPTmpN001_0, CPTmpN001_1, CPTmpN001_2)) {
            SDValue N01 = N0.getOperand(1);
            SDValue N1 = N.getOperand(1);
            if (N001.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_42(N, SystemZ::FMSUB32rm, MVT::f32, CPTmpN001_0, CPTmpN001_1, CPTmpN001_2);
              return Result;
            }
          }
        }
      }

      // Pattern: (fsub:f32 (fmul:f32 FP32:f32:$src3, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP32:f32:$src1)
      // Emits: (FMSUB32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
      // Pattern complexity = 22  cost = 1  size = 0
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::LOAD &&
          N01.hasOneUse() &&
          IsLegalAndProfitableToFold(N01.getNode(), N0.getNode(), N.getNode())) {
        SDValue Chain01 = N01.getOperand(0);
        if (Predicate_unindexedload(N01.getNode()) &&
            Predicate_load(N01.getNode())) {
          SDValue N011 = N01.getOperand(1);
          SDValue CPTmpN011_0;
          SDValue CPTmpN011_1;
          SDValue CPTmpN011_2;
          if (SelectAddrRRI12(N, N011, CPTmpN011_0, CPTmpN011_1, CPTmpN011_2)) {
            SDValue N1 = N.getOperand(1);
            if (N011.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_44(N, SystemZ::FMSUB32rm, MVT::f32, CPTmpN011_0, CPTmpN011_1, CPTmpN011_2);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (fsub:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (FSUB32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::LOAD &&
        N1.hasOneUse() &&
        IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain1 = N1.getOperand(0);
      if (Predicate_unindexedload(N1.getNode()) &&
          Predicate_load(N1.getNode())) {
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        SDValue CPTmpN11_1;
        SDValue CPTmpN11_2;
        if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
            N11.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_1(N, SystemZ::FSUB32rm, MVT::f32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (fsub:f32 (fmul:f32 FP32:f32:$src2, FP32:f32:$src3), FP32:f32:$src1)
  // Emits: (FMSUB32rr:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_41(N, SystemZ::FMSUB32rr, MVT::f32);
      return Result;
    }
  }

  // Pattern: (fsub:f32 FP32:f32:$src1, FP32:f32:$src2)
  // Emits: (FSUB32rr:f32 FP32:f32:$src1, FP32:f32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SystemZ::FSUB32rr, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSUB_f64(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FMUL &&
        N0.hasOneUse()) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (fsub:f64 (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src3), FP64:f64:$src1)
      // Emits: (FMSUB64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
      // Pattern complexity = 22  cost = 1  size = 0
      if (N00.getOpcode() == ISD::LOAD &&
          N00.hasOneUse() &&
          IsLegalAndProfitableToFold(N00.getNode(), N0.getNode(), N.getNode())) {
        SDValue Chain00 = N00.getOperand(0);
        if (Predicate_unindexedload(N00.getNode()) &&
            Predicate_load(N00.getNode())) {
          SDValue N001 = N00.getOperand(1);
          SDValue CPTmpN001_0;
          SDValue CPTmpN001_1;
          SDValue CPTmpN001_2;
          if (SelectAddrRRI12(N, N001, CPTmpN001_0, CPTmpN001_1, CPTmpN001_2)) {
            SDValue N01 = N0.getOperand(1);
            SDValue N1 = N.getOperand(1);
            if (N001.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_42(N, SystemZ::FMSUB64rm, MVT::f64, CPTmpN001_0, CPTmpN001_1, CPTmpN001_2);
              return Result;
            }
          }
        }
      }

      // Pattern: (fsub:f64 (fmul:f64 FP64:f64:$src3, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP64:f64:$src1)
      // Emits: (FMSUB64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
      // Pattern complexity = 22  cost = 1  size = 0
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::LOAD &&
          N01.hasOneUse() &&
          IsLegalAndProfitableToFold(N01.getNode(), N0.getNode(), N.getNode())) {
        SDValue Chain01 = N01.getOperand(0);
        if (Predicate_unindexedload(N01.getNode()) &&
            Predicate_load(N01.getNode())) {
          SDValue N011 = N01.getOperand(1);
          SDValue CPTmpN011_0;
          SDValue CPTmpN011_1;
          SDValue CPTmpN011_2;
          if (SelectAddrRRI12(N, N011, CPTmpN011_0, CPTmpN011_1, CPTmpN011_2)) {
            SDValue N1 = N.getOperand(1);
            if (N011.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_44(N, SystemZ::FMSUB64rm, MVT::f64, CPTmpN011_0, CPTmpN011_1, CPTmpN011_2);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (fsub:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (FSUB64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::LOAD &&
        N1.hasOneUse() &&
        IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain1 = N1.getOperand(0);
      if (Predicate_unindexedload(N1.getNode()) &&
          Predicate_load(N1.getNode())) {
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        SDValue CPTmpN11_1;
        SDValue CPTmpN11_2;
        if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
            N11.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_1(N, SystemZ::FSUB64rm, MVT::f64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (fsub:f64 (fmul:f64 FP64:f64:$src2, FP64:f64:$src3), FP64:f64:$src1)
  // Emits: (FMSUB64rr:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_41(N, SystemZ::FMSUB64rr, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fsub:f64 FP64:f64:$src1, FP64:f64:$src2)
  // Emits: (FSUB64rr:f64 FP64:f64:$src1, FP64:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SystemZ::FSUB64rr, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FrameIndex_i64(const SDValue &N) {
  SDValue CPTmpN_0;
  SDValue CPTmpN_1;
  SDValue CPTmpN_2;
  if (SelectLAAddr(N, N, CPTmpN_0, CPTmpN_1, CPTmpN_2)) {
    SDNode *Result = Emit_5(N, SystemZ::LA64r, MVT::i64, CPTmpN_0, CPTmpN_1, CPTmpN_2);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_50(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1, SDValue &CPTmpN1_2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, CPTmpN1_2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_LOAD_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {

    // Pattern: (ld:i32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (MOV32rm:i32 rriaddr12:i64:$src)
    // Pattern complexity = 17  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      SDValue CPTmpN1_2;
      if (SelectAddrRRI12(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
          N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_50(N, SystemZ::MOV32rm, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
        return Result;
      }
    }

    // Pattern: (ld:i32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
    // Emits: (MOVSX32rm16:i32 rriaddr12:i64:$src)
    // Pattern complexity = 17  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      SDValue CPTmpN1_2;
      if (SelectAddrRRI12(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
          N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_50(N, SystemZ::MOVSX32rm16, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
        return Result;
      }
    }

    // Pattern: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (MOV32rmy:i32 rriaddr:i64:$src)
    // Pattern complexity = 16  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      SDValue CPTmpN1_2;
      if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
          N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_50(N, SystemZ::MOV32rmy, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
        return Result;
      }
    }
    if (Predicate_sextload(N.getNode())) {

      // Pattern: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
      // Emits: (MOVSX32rm8:i32 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_sextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVSX32rm8, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
      // Emits: (MOVSX32rm16y:i32 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_sextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVSX32rm16y, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
    }
    if (Predicate_zextload(N.getNode())) {

      // Pattern: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
      // Emits: (MOVZX32rm8:i32 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_zextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX32rm8, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
      // Emits: (MOVZX32rm16:i32 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_zextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX32rm16, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
    }
    if (Predicate_extload(N.getNode())) {

      // Pattern: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
      // Emits: (MOVZX32rm8:i32 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX32rm8, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
      // Emits: (MOVZX32rm16:i32 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX32rm16, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {

    // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (MOV64rm:i64 rriaddr:i64:$src)
    // Pattern complexity = 16  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      SDValue CPTmpN1_2;
      if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
          N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_50(N, SystemZ::MOV64rm, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
        return Result;
      }
    }
    if (Predicate_sextload(N.getNode())) {

      // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
      // Emits: (MOVSX64rm8:i64 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_sextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVSX64rm8, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
      // Emits: (MOVSX64rm16:i64 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_sextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVSX64rm16, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>
      // Emits: (MOVSX64rm32:i64 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_sextloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVSX64rm32, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
    }
    if (Predicate_zextload(N.getNode())) {

      // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
      // Emits: (MOVZX64rm8:i64 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_zextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX64rm8, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
      // Emits: (MOVZX64rm16:i64 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_zextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX64rm16, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>
      // Emits: (MOVZX64rm32:i64 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_zextloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX64rm32, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
    }
    if (Predicate_extload(N.getNode())) {

      // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
      // Emits: (MOVZX64rm8:i64 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX64rm8, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
      // Emits: (MOVZX64rm16:i64 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX64rm16, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>>
      // Emits: (MOVZX64rm32:i64 rriaddr:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_extloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_50(N, SystemZ::MOVZX64rm32, MVT::i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_f32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode()) &&
      Predicate_load(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    SDValue CPTmpN1_2;

    // Pattern: (ld:f32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (FMOV32rm:f32 rriaddr12:i64:$src)
    // Pattern complexity = 16  cost = 1  size = 0
    if (SelectAddrRRI12(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
        N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_50(N, SystemZ::FMOV32rm, MVT::f32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
      return Result;
    }

    // Pattern: (ld:f32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (FMOV32rmy:f32 rriaddr:i64:$src)
    // Pattern complexity = 16  cost = 1  size = 0
    if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
        N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_50(N, SystemZ::FMOV32rmy, MVT::f32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_f64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode()) &&
      Predicate_load(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    SDValue CPTmpN1_2;

    // Pattern: (ld:f64 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (FMOV64rm:f64 rriaddr12:i64:$src)
    // Pattern complexity = 16  cost = 1  size = 0
    if (SelectAddrRRI12(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
        N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_50(N, SystemZ::FMOV64rm, MVT::f64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
      return Result;
    }

    // Pattern: (ld:f64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (FMOV64rmy:f64 rriaddr:i64:$src)
    // Pattern complexity = 16  cost = 1  size = 0
    if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
        N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_50(N, SystemZ::FMOV64rmy, MVT::f64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_v2i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode()) &&
      Predicate_load(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    SDValue CPTmpN1_2;

    // Pattern: (ld:v2i32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (MOV64Prm:v2i32 rriaddr12:i64:$src)
    // Pattern complexity = 16  cost = 1  size = 0
    if (SelectAddrRRI12(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
        N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_50(N, SystemZ::MOV64Prm, MVT::v2i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
      return Result;
    }

    // Pattern: (ld:v2i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (MOV64Prmy:v2i32 rriaddr:i64:$src)
    // Pattern complexity = 16  cost = 1  size = 0
    if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
        N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_50(N, SystemZ::MOV64Prmy, MVT::v2i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_v2i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode()) &&
      Predicate_load(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    SDValue CPTmpN1_2;
    if (SelectAddrRRI20(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
        N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_50(N, SystemZ::MOV128rm, MVT::v2i64, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_MUL_i32(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (mul:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (MUL32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_47(N, SystemZ::MUL32rm, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (mul:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (MUL32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_48(N, SystemZ::MUL32rm, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (mul:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (MUL32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_47(N, SystemZ::MUL32rmy, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (mul:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (MUL32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_48(N, SystemZ::MUL32rmy, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (mul:i32 GR32:i32:$src1, (imm:i32):$src2)
  // Emits: (MUL32ri:i32 GR32:i32:$src1, (imm:i32):$src2)
  // Pattern complexity = 8  cost = 1  size = 0
  if ((Subtarget.isZ10())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_15(N, SystemZ::MUL32ri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (mul:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32immSExt16>><<X:LL16>>:$src2)
  // Emits: (MUL32ri16:i32 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_i32immSExt16(N1.getNode())) {
      SDNode *Result = Emit_13(N, SystemZ::MUL32ri16, MVT::i32);
      return Result;
    }
  }

  // Pattern: (mul:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (MUL32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::MUL32rr, MVT::i32);
  return Result;
}

SDNode *Emit_51(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N10);
}
SDNode *Emit_52(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N00);
}
SDNode *Select_ISD_MUL_i64(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (mul:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (MUL64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_47(N, SystemZ::MUL64rm, MVT::i64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (mul:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1)
    // Emits: (MUL64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_48(N, SystemZ::MUL64rm, MVT::i64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (mul:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64immSExt32>><<X:LO32>>:$src2)
  // Emits: (MUL64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
  // Pattern complexity = 9  cost = 1  size = 0
  if ((Subtarget.isZ10())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_i64immSExt32(N1.getNode())) {
      SDNode *Result = Emit_20(N, SystemZ::MUL64ri32, MVT::i64);
      return Result;
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);

      // Pattern: (mul:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src2)
      // Emits: (MUL64ri16:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_immSExt16(N1.getNode())) {
        SDNode *Result = Emit_16(N, SystemZ::MUL64ri16, MVT::i64);
        return Result;
      }

      // Pattern: (mul:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2))
      // Emits: (MULSX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N1.getOpcode() == ISD::SIGN_EXTEND) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_51(N, SystemZ::MULSX64rr32, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (mul:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1)
    // Emits: (MULSX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SIGN_EXTEND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N1 = N.getOperand(1);
      if (N00.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_52(N, SystemZ::MULSX64rr32, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (mul:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (MUL64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::MUL64rr, MVT::i64);
  return Result;
}

SDNode *Emit_53(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, unsigned Opc3, EVT VT0, EVT VT1, EVT VT2, EVT VT3) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp0(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x2ULL, MVT::i32);
  SDValue Tmp3(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp0, N0, Tmp2), 0);
  SDValue Tmp5(CurDAG->getTargetNode(Opc2, N.getDebugLoc(), VT2, Tmp3, N1), 0);
  SDValue Tmp6 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc3, VT3, Tmp5, Tmp6);
}
SDNode *Select_ISD_MULHS_i32(const SDValue &N) {
  SDNode *Result = Emit_53(N, TargetInstrInfo::IMPLICIT_DEF, TargetInstrInfo::INSERT_SUBREG, SystemZ::MUL64rrP, TargetInstrInfo::EXTRACT_SUBREG, MVT::v2i32, MVT::v2i32, MVT::v2i32, MVT::i32);
  return Result;
}

SDNode *Select_ISD_MULHU_i32(const SDValue &N) {
  SDNode *Result = Emit_53(N, TargetInstrInfo::IMPLICIT_DEF, TargetInstrInfo::INSERT_SUBREG, SystemZ::UMUL64rrP, TargetInstrInfo::EXTRACT_SUBREG, MVT::v2i32, MVT::v2i32, MVT::v2i32, MVT::i32);
  return Result;
}

SDNode *Emit_54(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, unsigned Opc3, EVT VT0, EVT VT1, EVT VT2, EVT VT3) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp0(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x4ULL, MVT::i32);
  SDValue Tmp3(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp0, N0, Tmp2), 0);
  SDValue Tmp5(CurDAG->getTargetNode(Opc2, N.getDebugLoc(), VT2, Tmp3, N1), 0);
  SDValue Tmp6 = CurDAG->getTargetConstant(0x3ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc3, VT3, Tmp5, Tmp6);
}
SDNode *Select_ISD_MULHU_i64(const SDValue &N) {
  SDNode *Result = Emit_54(N, TargetInstrInfo::IMPLICIT_DEF, TargetInstrInfo::INSERT_SUBREG, SystemZ::UMUL128rrP, TargetInstrInfo::EXTRACT_SUBREG, MVT::v2i64, MVT::v2i64, MVT::v2i64, MVT::i64);
  return Result;
}

SDNode *Select_ISD_OR_i32(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (or:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (OR32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::OR32rm, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (or:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (OR32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::OR32rm, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (or:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (OR32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::OR32rmy, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (or:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (OR32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::OR32rmy, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (or:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32ll16>><<X:LL16>>:$src2)
      // Emits: (OR32ri16:i32 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i32ll16(N1.getNode())) {
        SDNode *Result = Emit_13(N, SystemZ::OR32ri16, MVT::i32);
        return Result;
      }

      // Pattern: (or:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32lh16>><<X:LH16>>:$src2)
      // Emits: (OR32ri16h:i32 GR32:i32:$src1, (LH16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i32lh16(N1.getNode())) {
        SDNode *Result = Emit_14(N, SystemZ::OR32ri16h, MVT::i32);
        return Result;
      }

      // Pattern: (or:i32 GR32:i32:$src1, (imm:i32):$src2)
      // Emits: (OR32ri:i32 GR32:i32:$src1, (imm:i32):$src2)
      // Pattern complexity = 6  cost = 1  size = 0
      SDNode *Result = Emit_15(N, SystemZ::OR32ri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (or:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (OR32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::OR32rr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_OR_i64(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (or:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (OR64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::OR64rm, MVT::i64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (or:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1)
    // Emits: (OR64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::OR64rm, MVT::i64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: laaddr:i64:$src
  // Emits: (LA64r:i64 laaddr:i64:$src)
  // Pattern complexity = 13  cost = 1  size = 0
  {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;
    SDValue CPTmpN_2;
    if (SelectLAAddr(N, N, CPTmpN_0, CPTmpN_1, CPTmpN_2)) {
      SDNode *Result = Emit_5(N, SystemZ::LA64r, MVT::i64, CPTmpN_0, CPTmpN_1, CPTmpN_2);
      return Result;
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64ll16>><<X:LL16>>:$src2)
      // Emits: (OR64rill16:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64ll16(N1.getNode())) {
        SDNode *Result = Emit_16(N, SystemZ::OR64rill16, MVT::i64);
        return Result;
      }

      // Pattern: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lh16>><<X:LH16>>:$src2)
      // Emits: (OR64rilh16:i64 GR64:i64:$src1, (LH16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64lh16(N1.getNode())) {
        SDNode *Result = Emit_17(N, SystemZ::OR64rilh16, MVT::i64);
        return Result;
      }

      // Pattern: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hl16>><<X:HL16>>:$src2)
      // Emits: (OR64rihl16:i64 GR64:i64:$src1, (HL16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64hl16(N1.getNode())) {
        SDNode *Result = Emit_18(N, SystemZ::OR64rihl16, MVT::i64);
        return Result;
      }

      // Pattern: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hh16>><<X:HH16>>:$src2)
      // Emits: (OR64rihh16:i64 GR64:i64:$src1, (HH16:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64hh16(N1.getNode())) {
        SDNode *Result = Emit_19(N, SystemZ::OR64rihh16, MVT::i64);
        return Result;
      }

      // Pattern: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lo32>><<X:LO32>>:$src2)
      // Emits: (OR64rilo32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64lo32(N1.getNode())) {
        SDNode *Result = Emit_20(N, SystemZ::OR64rilo32, MVT::i64);
        return Result;
      }

      // Pattern: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hi32>><<X:HI32>>:$src2)
      // Emits: (OR64rihi32:i64 GR64:i64:$src1, (HI32:i64 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_i64hi32(N1.getNode())) {
        SDNode *Result = Emit_21(N, SystemZ::OR64rihi32, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (or:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (OR64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::OR64rr, MVT::i64);
  return Result;
}

SDNode *Emit_55(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, CPTmpN1_0, CPTmpN1_1);
}
SDNode *Select_ISD_ROTL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrRI12Only(N, N1, CPTmpN1_0, CPTmpN1_1) &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_55(N, SystemZ::ROTL32rri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ROTL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrRI(N, N1, CPTmpN1_0, CPTmpN1_1) &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_55(N, SystemZ::ROTL64rri, MVT::i64, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SHL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrRI12Only(N, N1, CPTmpN1_0, CPTmpN1_1) &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_55(N, SystemZ::SHL32rri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SHL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrRI(N, N1, CPTmpN1_0, CPTmpN1_1) &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_55(N, SystemZ::SHL64rri, MVT::i64, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SIGN_EXTEND_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_23(N, SystemZ::MOVSX64rr32, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_56(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sext_inreg:i32 GR32:i32:$src, i8:Other)
  // Emits: (MOVSX32rr8:i32 GR32:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_56(N, SystemZ::MOVSX32rr8, MVT::i32);
    return Result;
  }

  // Pattern: (sext_inreg:i32 GR32:i32:$src, i16:Other)
  // Emits: (MOVSX32rr16:i32 GR32:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
    SDNode *Result = Emit_56(N, SystemZ::MOVSX32rr16, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_57(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp1), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sext_inreg:i64 GR64:i64:$src, i8:Other)
  // Emits: (MOVSX64rr8:i64 GR64:i64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_56(N, SystemZ::MOVSX64rr8, MVT::i64);
    return Result;
  }

  // Pattern: (sext_inreg:i64 GR64:i64:$src, i16:Other)
  // Emits: (MOVSX64rr16:i64 GR64:i64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
    SDNode *Result = Emit_56(N, SystemZ::MOVSX64rr16, MVT::i64);
    return Result;
  }

  // Pattern: (sext_inreg:i64 GR64:i64:$src, i32:Other)
  // Emits: (MOVSX64rr32:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, 1:i32))
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
    SDNode *Result = Emit_57(N, TargetInstrInfo::EXTRACT_SUBREG, SystemZ::MOVSX64rr32, MVT::i32, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SINT_TO_FP_f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (sint_to_fp:f32 GR32:i32:$src)
  // Emits: (FCONVFP32:f32 GR32:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_40(N, SystemZ::FCONVFP32, MVT::f32);
    return Result;
  }

  // Pattern: (sint_to_fp:f32 GR64:i64:$src)
  // Emits: (FCONVFP32r64:f32 GR64:i64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_40(N, SystemZ::FCONVFP32r64, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SINT_TO_FP_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (sint_to_fp:f64 GR32:i32:$src)
  // Emits: (FCONVFP64r32:f64 GR32:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_40(N, SystemZ::FCONVFP64r32, MVT::f64);
    return Result;
  }

  // Pattern: (sint_to_fp:f64 GR64:i64:$src)
  // Emits: (FCONVFP64:f64 GR64:i64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_40(N, SystemZ::FCONVFP64, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_58(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N0, CPTmpN1_0, CPTmpN1_1);
}
SDNode *Select_ISD_SRA_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrRI12Only(N, N1, CPTmpN1_0, CPTmpN1_1) &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_58(N, SystemZ::SRA32rri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRA_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrRI(N, N1, CPTmpN1_0, CPTmpN1_1) &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_58(N, SystemZ::SRA64rri, MVT::i64, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrRI12Only(N, N1, CPTmpN1_0, CPTmpN1_1) &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_55(N, SystemZ::SRL32rri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrRI(N, N1, CPTmpN1_0, CPTmpN1_1) &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_55(N, SystemZ::SRL64rri, MVT::i64, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_59(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1, SDValue &CPTmpN2_2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, CPTmpN2_2, N1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 6);
}
SDNode *Emit_60(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_LO8(Tmp1.getNode());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, Tmp2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_61(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_LL16(Tmp1.getNode());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, Tmp2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_62(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_LL16(Tmp1.getNode());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, Tmp2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_63(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1, SDValue &CPTmpN2_2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, CPTmpN2_2, N10, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 6);
}
SDNode *Select_ISD_STORE(const SDValue &N) {
  if ((Subtarget.isZ10())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedstore(N.getNode())) {

      // Pattern: (st:isVoid (imm:i32)<<P:Predicate_i32immSExt16>><<X:LL16>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (MOV16mi:isVoid riaddr12:i64:$dst, (LL16:i32 (imm:i32):$src))
      // Pattern complexity = 19  cost = 1  size = 0
      if (Predicate_truncstore(N.getNode()) &&
          Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::Constant &&
            Predicate_i32immSExt16(N1.getNode())) {
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          if (SelectAddrRI12(N, N2, CPTmpN2_0, CPTmpN2_1) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_61(N, SystemZ::MOV16mi, CPTmpN2_0, CPTmpN2_1);
            return Result;
          }
        }
      }
      if (Predicate_store(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::Constant &&
            Predicate_immSExt16(N1.getNode())) {
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          if (SelectAddrRI12(N, N2, CPTmpN2_0, CPTmpN2_1)) {

            // Pattern: (st:isVoid (imm:i32)<<P:Predicate_immSExt16>><<X:LL16>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
            // Emits: (MOV32mi16:isVoid riaddr12:i64:$dst, (LL16:i32 (imm:i32):$src))
            // Pattern complexity = 19  cost = 1  size = 0
            if (N1.getNode()->getValueType(0) == MVT::i32 &&
                N2.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_61(N, SystemZ::MOV32mi16, CPTmpN2_0, CPTmpN2_1);
              return Result;
            }

            // Pattern: (st:isVoid (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
            // Emits: (MOV64mi16:isVoid riaddr12:i64:$dst, (LL16:i64 (imm:i64):$src))
            // Pattern complexity = 19  cost = 1  size = 0
            if (N1.getNode()->getValueType(0) == MVT::i64 &&
                N2.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_62(N, SystemZ::MOV64mi16, CPTmpN2_0, CPTmpN2_1);
              return Result;
            }
          }
        }
      }
    }
  }
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedstore(N.getNode())) {
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::BSWAP) {
        SDValue N10 = N1.getOperand(0);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2)) {

          // Pattern: (st:isVoid (bswap:i32 GR32:i32:$src), rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (BSWAP32mr:isVoid rriaddr:i64:$dst, GR32:i32:$src)
          // Pattern complexity = 19  cost = 1  size = 0
          if (N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_63(N, SystemZ::BSWAP32mr, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
            return Result;
          }

          // Pattern: (st:isVoid (bswap:i64 GR64:i64:$src), rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (BSWAP64mr:isVoid rriaddr:i64:$dst, GR64:i64:$src)
          // Pattern complexity = 19  cost = 1  size = 0
          if (N1.getNode()->getValueType(0) == MVT::i64 &&
              N2.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_63(N, SystemZ::BSWAP64mr, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (st:isVoid (imm:i32)<<P:Predicate_i32immSExt8>><<X:LO8>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
    // Emits: (MOV8mi:isVoid riaddr12:i64:$dst, (LO8:i32 (imm:i32):$src))
    // Pattern complexity = 18  cost = 1  size = 0
    if (Predicate_truncstore(N.getNode()) &&
        Predicate_truncstorei8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_i32immSExt8(N1.getNode())) {
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrRI12(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_60(N, SystemZ::MOV8mi, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }

    // Pattern: (st:isVoid GR32:i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
    // Emits: (MOV32mr:isVoid rriaddr12:i64:$dst, GR32:i32:$src)
    // Pattern complexity = 17  cost = 1  size = 0
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      SDValue CPTmpN2_2;
      if (SelectAddrRRI12(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
          N1.getNode()->getValueType(0) == MVT::i32 &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_59(N, SystemZ::MOV32mr, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
        return Result;
      }
    }
    if (Predicate_truncstore(N.getNode())) {
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);

        // Pattern: (st:isVoid (imm:i32)<<P:Predicate_i32immSExt8>><<X:LO8>>:$src, riaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
        // Emits: (MOV8miy:isVoid riaddr:i64:$dst, (LO8:i32 (imm:i32):$src))
        // Pattern complexity = 17  cost = 1  size = 0
        if (N1.getOpcode() == ISD::Constant &&
            Predicate_i32immSExt8(N1.getNode())) {
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          if (SelectAddrRI(N, N2, CPTmpN2_0, CPTmpN2_1) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_60(N, SystemZ::MOV8miy, CPTmpN2_0, CPTmpN2_1);
            return Result;
          }
        }

        // Pattern: (st:isVoid GR32:i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
        // Emits: (MOV32m8r:isVoid rriaddr12:i64:$dst, GR32:i32:$src)
        // Pattern complexity = 17  cost = 1  size = 0
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI12(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV32m8r, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }

      // Pattern: (st:isVoid GR32:i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (MOV32m16r:isVoid rriaddr12:i64:$dst, GR32:i32:$src)
      // Pattern complexity = 17  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI12(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV32m16r, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }

      // Pattern: (st:isVoid GR64:i64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (MOV64m8r:isVoid rriaddr12:i64:$dst, GR64:i64:$src)
      // Pattern complexity = 17  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI12(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV64m8r, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }

      // Pattern: (st:isVoid GR64:i64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (MOV64m16r:isVoid rriaddr12:i64:$dst, GR64:i64:$src)
      // Pattern complexity = 17  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI12(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV64m16r, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }

      // Pattern: (st:isVoid GR64:i64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>>
      // Emits: (MOV64m32r:isVoid rriaddr12:i64:$dst, GR64:i64:$src)
      // Pattern complexity = 17  cost = 1  size = 0
      if (Predicate_truncstorei32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI12(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV64m32r, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      SDValue CPTmpN2_2;
      if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2)) {

        // Pattern: (st:isVoid GR32:i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (MOV32mry:isVoid rriaddr:i64:$dst, GR32:i32:$src)
        // Pattern complexity = 16  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV32mry, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }

        // Pattern: (st:isVoid GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (MOV64mr:isVoid rriaddr:i64:$dst, GR64:i64:$src)
        // Pattern complexity = 16  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV64mr, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }

      // Pattern: (st:isVoid GR64P:v2i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (MOV64Pmr:isVoid rriaddr12:i64:$dst, GR64P:v2i32:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (SelectAddrRRI12(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
          N1.getNode()->getValueType(0) == MVT::v2i32 &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_59(N, SystemZ::MOV64Pmr, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
        return Result;
      }
      if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2)) {

        // Pattern: (st:isVoid GR64P:v2i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (MOV64Pmry:isVoid rriaddr:i64:$dst, GR64P:v2i32:$src)
        // Pattern complexity = 16  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::v2i32 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV64Pmry, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }

        // Pattern: (st:isVoid GR128:v2i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (MOV128mr:isVoid rriaddr:i64:$dst, GR128:v2i64:$src)
        // Pattern complexity = 16  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::v2i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV128mr, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }
    }
    if (Predicate_truncstore(N.getNode())) {

      // Pattern: (st:isVoid GR32:i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (MOV32m8ry:isVoid rriaddr:i64:$dst, GR32:i32:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV32m8ry, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }

      // Pattern: (st:isVoid GR32:i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (MOV32m16ry:isVoid rriaddr:i64:$dst, GR32:i32:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV32m16ry, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }

      // Pattern: (st:isVoid GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (MOV64m8ry:isVoid rriaddr:i64:$dst, GR64:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV64m8ry, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }

      // Pattern: (st:isVoid GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (MOV64m16ry:isVoid rriaddr:i64:$dst, GR64:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV64m16ry, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }

      // Pattern: (st:isVoid GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>>
      // Emits: (MOV64m32ry:isVoid rriaddr:i64:$dst, GR64:i64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_truncstorei32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_59(N, SystemZ::MOV64m32ry, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      SDValue CPTmpN2_2;

      // Pattern: (st:isVoid FP32:f32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (FMOV32mr:isVoid rriaddr12:i64:$dst, FP32:f32:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (SelectAddrRRI12(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
          N1.getNode()->getValueType(0) == MVT::f32 &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_59(N, SystemZ::FMOV32mr, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
        return Result;
      }

      // Pattern: (st:isVoid FP32:f32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (FMOV32mry:isVoid rriaddr:i64:$dst, FP32:f32:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
          N1.getNode()->getValueType(0) == MVT::f32 &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_59(N, SystemZ::FMOV32mry, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
        return Result;
      }

      // Pattern: (st:isVoid FP64:f64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (FMOV64mr:isVoid rriaddr12:i64:$dst, FP64:f64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (SelectAddrRRI12(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
          N1.getNode()->getValueType(0) == MVT::f64 &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_59(N, SystemZ::FMOV64mr, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
        return Result;
      }

      // Pattern: (st:isVoid FP64:f64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (FMOV64mry:isVoid rriaddr:i64:$dst, FP64:f64:$src)
      // Pattern complexity = 16  cost = 1  size = 0
      if (SelectAddrRRI20(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
          N1.getNode()->getValueType(0) == MVT::f64 &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_59(N, SystemZ::FMOV64mry, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_64(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N1);
}
SDNode *Select_ISD_SUB_i32(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::LOAD &&
        N1.hasOneUse() &&
        IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain1 = N1.getOperand(0);
      if (Predicate_unindexedload(N1.getNode()) &&
          Predicate_load(N1.getNode())) {
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        SDValue CPTmpN11_1;
        SDValue CPTmpN11_2;

        // Pattern: (sub:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
        // Emits: (SUB32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
        // Pattern complexity = 20  cost = 1  size = 0
        if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
            N11.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_1(N, SystemZ::SUB32rm, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
          return Result;
        }

        // Pattern: (sub:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
        // Emits: (SUB32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
        // Pattern complexity = 19  cost = 1  size = 0
        if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
            N11.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_1(N, SystemZ::SUB32rmy, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
          return Result;
        }
      }
    }
  }

  // Pattern: (sub:i32 0:i32, GR32:i32:$src)
  // Emits: (NEG32rr:i32 GR32:i32:$src)
  // Pattern complexity = 8  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_64(N, SystemZ::NEG32rr, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (sub:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (SUB32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::SUB32rr, MVT::i32);
  return Result;
}

SDNode *Emit_65(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i64, N10);
}
SDNode *Select_ISD_SUB_i64(const SDValue &N) {

  // Pattern: (sub:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (SUB64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
  // Pattern complexity = 19  cost = 1  size = 0
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::LOAD &&
        N1.hasOneUse() &&
        IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain1 = N1.getOperand(0);
      if (Predicate_unindexedload(N1.getNode()) &&
          Predicate_load(N1.getNode())) {
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        SDValue CPTmpN11_1;
        SDValue CPTmpN11_2;
        if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
            N11.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_1(N, SystemZ::SUB64rm, MVT::i64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
          return Result;
        }
      }
    }
  }

  // Pattern: laaddr:i64:$src
  // Emits: (LA64r:i64 laaddr:i64:$src)
  // Pattern complexity = 13  cost = 1  size = 0
  {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;
    SDValue CPTmpN_2;
    if (SelectLAAddr(N, N, CPTmpN_0, CPTmpN_1, CPTmpN_2)) {
      SDNode *Result = Emit_5(N, SystemZ::LA64r, MVT::i64, CPTmpN_0, CPTmpN_1, CPTmpN_2);
      return Result;
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {

        // Pattern: (sub:i64 0:i64, (sext:i64 GR32:i32:$src))
        // Emits: (NEG64rr32:i64 GR32:i32:$src)
        // Pattern complexity = 11  cost = 1  size = 0
        {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::SIGN_EXTEND) {
            SDValue N10 = N1.getOperand(0);
            if (N10.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_65(N, SystemZ::NEG64rr32, MVT::i64);
              return Result;
            }
          }
        }

        // Pattern: (sub:i64 0:i64, GR64:i64:$src)
        // Emits: (NEG64rr:i64 GR64:i64:$src)
        // Pattern complexity = 8  cost = 1  size = 0
        SDNode *Result = Emit_64(N, SystemZ::NEG64rr, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (sub:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (SUB64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::SUB64rr, MVT::i64);
  return Result;
}

SDNode *Select_ISD_SUBC_i32(const SDValue &N) {

  // Pattern: (subc:i32 GR32:i32:$src1, (imm:i32):$src2)
  // Emits: (SBC32ri:i32 GR32:i32:$src1, (imm:i32):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_9(N, SystemZ::SBC32ri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (subc:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (SBC32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_8(N, SystemZ::SBC32rr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SUBC_i64(const SDValue &N) {

  // Pattern: (subc:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src2)
  // Emits: (SBC64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immSExt32(N1.getNode())) {
      SDNode *Result = Emit_10(N, SystemZ::SBC64ri32, MVT::i64);
      return Result;
    }
  }

  // Pattern: (subc:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (SBC64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_8(N, SystemZ::SBC64rr, MVT::i64);
  return Result;
}

SDNode *Select_ISD_SUBE_i32(const SDValue &N) {
  SDNode *Result = Emit_11(N, SystemZ::SUBE32rr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SUBE_i64(const SDValue &N) {
  SDNode *Result = Emit_11(N, SystemZ::SUBE64rr, MVT::i64);
  return Result;
}

SDNode *Emit_66(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ISD_TRUNCATE_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_66(N, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_XOR_i32(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (XOR32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::XOR32rm, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (xor:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (XOR32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
    // Pattern complexity = 20  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI12(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::XOR32rm, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (xor:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (XOR32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::XOR32rmy, MVT::i32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (xor:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1)
    // Emits: (XOR32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::XOR32rmy, MVT::i32, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (xor:i32 GR32:i32:$src1, (imm:i32):$src2)
  // Emits: (XOR32ri:i32 GR32:i32:$src1, (imm:i32):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_15(N, SystemZ::XOR32ri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (xor:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (XOR32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::XOR32rr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_XOR_i64(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (XOR64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::LOAD &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        if (Predicate_unindexedload(N1.getNode()) &&
            Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_1(N, SystemZ::XOR64rm, MVT::i64, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (xor:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1)
    // Emits: (XOR64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        SDValue CPTmpN01_2;
        if (SelectAddrRRI20(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
          SDValue N1 = N.getOperand(1);
          if (N01.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_4(N, SystemZ::XOR64rm, MVT::i64, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (xor:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (XOR64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, SystemZ::XOR64rr, MVT::i64);
  return Result;
}

SDNode *Select_ISD_ZERO_EXTEND_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_23(N, SystemZ::MOVZX64rr32, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_67(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue InFlag = N.getOperand(3);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain, InFlag);
}
SDNode *Select_SystemZISD_BRCOND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDValue N2 = N.getOperand(2);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N2);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 0:i8)
      // Emits: (JO:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, SystemZ::JO);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 1:i8)
      // Emits: (JH:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(1)) {
        SDNode *Result = Emit_67(N, SystemZ::JH);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 2:i8)
      // Emits: (JNLE:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(2)) {
        SDNode *Result = Emit_67(N, SystemZ::JNLE);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 3:i8)
      // Emits: (JL:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(3)) {
        SDNode *Result = Emit_67(N, SystemZ::JL);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 4:i8)
      // Emits: (JNHE:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(4)) {
        SDNode *Result = Emit_67(N, SystemZ::JNHE);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 5:i8)
      // Emits: (JLH:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(5)) {
        SDNode *Result = Emit_67(N, SystemZ::JLH);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 6:i8)
      // Emits: (JNE:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(6)) {
        SDNode *Result = Emit_67(N, SystemZ::JNE);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 7:i8)
      // Emits: (JE:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(7)) {
        SDNode *Result = Emit_67(N, SystemZ::JE);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 8:i8)
      // Emits: (JNLH:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(8)) {
        SDNode *Result = Emit_67(N, SystemZ::JNLH);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 9:i8)
      // Emits: (JHE:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(9)) {
        SDNode *Result = Emit_67(N, SystemZ::JHE);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 10:i8)
      // Emits: (JNL:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(10)) {
        SDNode *Result = Emit_67(N, SystemZ::JNL);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 11:i8)
      // Emits: (JLE:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(11)) {
        SDNode *Result = Emit_67(N, SystemZ::JLE);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 12:i8)
      // Emits: (JNH:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(12)) {
        SDNode *Result = Emit_67(N, SystemZ::JNH);
        return Result;
      }

      // Pattern: (SystemZbrcond:isVoid (bb:Other):$dst, 13:i8)
      // Emits: (JNO:isVoid (bb:Other):$dst)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(13)) {
        SDNode *Result = Emit_67(N, SystemZ::JNO);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_68(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  Ops0.push_back(Tmp0);
  for (unsigned i = NumInputRootOps + 1, e = N.getNumOperands()-(HasInFlag?1:0); i != e; ++i) {
    Ops0.push_back(N.getOperand(i));
  }
  Ops0.push_back(Chain);
  if (HasInFlag)
    Ops0.push_back(InFlag);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, &Ops0[0], Ops0.size());
  Chain = SDValue(ResNode, 0);
  InFlag = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    InFlag,
    SDValue(Chain.getNode(), Chain.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_69(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  Ops0.push_back(N1);
  for (unsigned i = NumInputRootOps + 1, e = N.getNumOperands()-(HasInFlag?1:0); i != e; ++i) {
    Ops0.push_back(N.getOperand(i));
  }
  Ops0.push_back(Chain);
  if (HasInFlag)
    Ops0.push_back(InFlag);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, &Ops0[0], Ops0.size());
  Chain = SDValue(ResNode, 0);
  InFlag = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    InFlag,
    SDValue(Chain.getNode(), Chain.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_SystemZISD_CALL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (SystemZcall:isVoid (imm:iPTR):$dst)
  // Emits: (CALLi:isVoid (imm:i64):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_68(N, SystemZ::CALLi, 1);
    return Result;
  }

  // Pattern: (SystemZcall:isVoid (tglobaladdr:i64):$dst)
  // Emits: (CALLi:isVoid (tglobaladdr:i64):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_69(N, SystemZ::CALLi, 1);
    return Result;
  }

  // Pattern: (SystemZcall:isVoid (texternalsym:i64):$dst)
  // Emits: (CALLi:isVoid (texternalsym:i64):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_69(N, SystemZ::CALLi, 1);
    return Result;
  }

  // Pattern: (SystemZcall:isVoid ADDR64:i64:$dst)
  // Emits: (CALLr:isVoid ADDR64:i64:$dst)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_69(N, SystemZ::CALLr, 1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_70(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i64, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_71(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i64, MVT::Flag, N0, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_72(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_LO32(Tmp1.getNode());
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i64, MVT::Flag, N0, Tmp2);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_73(const SDValue &N, unsigned Opc0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1, SDValue &CPTmpN11_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i64, MVT::Other, MVT::Flag, Ops0, 6);
  SDValue InFlag(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_SystemZISD_CMP(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::LOAD &&
        N1.hasOneUse() &&
        IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain1 = N1.getOperand(0);
      if (Predicate_unindexedload(N1.getNode()) &&
          Predicate_load(N1.getNode())) {
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        SDValue CPTmpN11_1;
        SDValue CPTmpN11_2;

        // Pattern: (SystemZcmp:isVoid GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
        // Emits: (CMP32rm:isVoid GR32:i32:$src1, rriaddr12:i64:$src2)
        // Pattern complexity = 20  cost = 1  size = 0
        if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
            N0.getNode()->getValueType(0) == MVT::i32 &&
            N11.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_73(N, SystemZ::CMP32rm, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
          return Result;
        }
        if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2)) {

          // Pattern: (SystemZcmp:isVoid GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
          // Emits: (CMP32rmy:isVoid GR32:i32:$src1, rriaddr:i64:$src2)
          // Pattern complexity = 19  cost = 1  size = 0
          if (N0.getNode()->getValueType(0) == MVT::i32 &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_73(N, SystemZ::CMP32rmy, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }

          // Pattern: (SystemZcmp:isVoid GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
          // Emits: (CMP64rm:isVoid GR64:i64:$src1, rriaddr:i64:$src2)
          // Pattern complexity = 19  cost = 1  size = 0
          if (N0.getNode()->getValueType(0) == MVT::i64 &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_73(N, SystemZ::CMP64rm, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
        if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2)) {

          // Pattern: (SystemZcmp:isVoid FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
          // Emits: (FCMP32rm:isVoid FP32:f32:$src1, rriaddr12:i64:$src2)
          // Pattern complexity = 19  cost = 1  size = 0
          if (N0.getNode()->getValueType(0) == MVT::f32 &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_73(N, SystemZ::FCMP32rm, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }

          // Pattern: (SystemZcmp:isVoid FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
          // Emits: (FCMP64rm:isVoid FP64:f64:$src1, rriaddr12:i64:$src2)
          // Pattern complexity = 19  cost = 1  size = 0
          if (N0.getNode()->getValueType(0) == MVT::f64 &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_73(N, SystemZ::FCMP64rm, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }
  }
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {

    // Pattern: (SystemZcmp:isVoid GR64:i64:$src1, (imm:i64)<<P:Predicate_i64immSExt32>><<X:LO32>>:$src2)
    // Emits: (CMP64ri32:isVoid GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_i64immSExt32(N1.getNode()) &&
        N0.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_72(N, SystemZ::CMP64ri32);
      return Result;
    }

    // Pattern: (SystemZcmp:isVoid GR32:i32:$src1, (imm:i32):$src2)
    // Emits: (CMP32ri:isVoid GR32:i32:$src1, (imm:i32):$src2)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_71(N, SystemZ::CMP32ri);
      return Result;
    }
  }

  // Pattern: (SystemZcmp:isVoid GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (CMP32rr:isVoid GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_70(N, SystemZ::CMP32rr);
    return Result;
  }

  // Pattern: (SystemZcmp:isVoid GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (CMP64rr:isVoid GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_70(N, SystemZ::CMP64rr);
    return Result;
  }

  // Pattern: (SystemZcmp:isVoid FP32:f32:$src1, FP32:f32:$src2)
  // Emits: (FCMP32rr:isVoid FP32:f32:$src1, FP32:f32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f32) {
    SDNode *Result = Emit_70(N, SystemZ::FCMP32rr);
    return Result;
  }

  // Pattern: (SystemZcmp:isVoid FP64:f64:$src1, FP64:f64:$src2)
  // Emits: (FCMP64rr:isVoid FP64:f64:$src1, FP64:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_70(N, SystemZ::FCMP64rr);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SystemZISD_PCRelativeWrapper_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (SystemZpcrelwrapper:i64 (tglobaladdr:i64):$src)
  // Emits: (LA64rm:i64 (tglobaladdr:i64):$src)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_23(N, SystemZ::LA64rm, MVT::i64);
    return Result;
  }

  // Pattern: (SystemZpcrelwrapper:i64 (tconstpool:i64):$src)
  // Emits: (LA64rm:i64 (tconstpool:i64):$src)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDNode *Result = Emit_23(N, SystemZ::LA64rm, MVT::i64);
    return Result;
  }

  // Pattern: (SystemZpcrelwrapper:i64 (tjumptable:i64):$src)
  // Emits: (LA64rm:i64 (tjumptable:i64):$src)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetJumpTable) {
    SDNode *Result = Emit_23(N, SystemZ::LA64rm, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_74(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 2 : 1);
}
SDNode *Select_SystemZISD_RET_FLAG(const SDValue &N) {
  SDNode *Result = Emit_74(N, SystemZ::RET);
  return Result;
}

SDNode *Emit_75(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { N0, N1, Tmp2, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_SystemZISD_SELECT_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_75(N, SystemZ::Select32, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SystemZISD_SELECT_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_75(N, SystemZ::Select64, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SystemZISD_SELECT_f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_75(N, SystemZ::SelectF32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SystemZISD_SELECT_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_75(N, SystemZ::SelectF64, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_76(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i64, MVT::Flag, N0, N10);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Select_SystemZISD_UCMP(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::LOAD &&
        N1.hasOneUse() &&
        IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain1 = N1.getOperand(0);
      if (Predicate_unindexedload(N1.getNode())) {
        if (Predicate_load(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;

          // Pattern: (SystemZucmp:isVoid GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
          // Emits: (UCMP32rm:isVoid GR32:i32:$src1, rriaddr12:i64:$src2)
          // Pattern complexity = 20  cost = 1  size = 0
          if (SelectAddrRRI12(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N0.getNode()->getValueType(0) == MVT::i32 &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_73(N, SystemZ::UCMP32rm, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2)) {

            // Pattern: (SystemZucmp:isVoid GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
            // Emits: (UCMP32rmy:isVoid GR32:i32:$src1, rriaddr:i64:$src2)
            // Pattern complexity = 19  cost = 1  size = 0
            if (N0.getNode()->getValueType(0) == MVT::i32 &&
                N11.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_73(N, SystemZ::UCMP32rmy, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
              return Result;
            }

            // Pattern: (SystemZucmp:isVoid GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
            // Emits: (UCMP64rm:isVoid GR64:i64:$src1, rriaddr:i64:$src2)
            // Pattern complexity = 19  cost = 1  size = 0
            if (N0.getNode()->getValueType(0) == MVT::i64 &&
                N11.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_73(N, SystemZ::UCMP64rm, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
              return Result;
            }
          }
        }

        // Pattern: (SystemZucmp:isVoid GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>)
        // Emits: (CMPSX64rm32:isVoid GR64:i64:$src1, rriaddr:i64:$src2)
        // Pattern complexity = 19  cost = 1  size = 0
        if (Predicate_sextload(N1.getNode()) &&
            Predicate_sextloadi32(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N0.getNode()->getValueType(0) == MVT::i64 &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_73(N, SystemZ::CMPSX64rm32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }

        // Pattern: (SystemZucmp:isVoid GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>)
        // Emits: (UCMPZX64rm32:isVoid GR64:i64:$src1, rriaddr:i64:$src2)
        // Pattern complexity = 19  cost = 1  size = 0
        if (Predicate_zextload(N1.getNode()) &&
            Predicate_zextloadi32(N1.getNode())) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectAddrRRI20(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2) &&
              N0.getNode()->getValueType(0) == MVT::i64 &&
              N11.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_73(N, SystemZ::UCMPZX64rm32, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }
  }
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {

    // Pattern: (SystemZucmp:isVoid GR64:i64:$src1, (imm:i64)<<P:Predicate_i64immZExt32>><<X:LO32>>:$src2)
    // Emits: (UCMP64ri32:isVoid GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_i64immZExt32(N1.getNode()) &&
        N0.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_72(N, SystemZ::UCMP64ri32);
      return Result;
    }

    // Pattern: (SystemZucmp:isVoid GR32:i32:$src1, (imm:i32):$src2)
    // Emits: (UCMP32ri:isVoid GR32:i32:$src1, (imm:i32):$src2)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_71(N, SystemZ::UCMP32ri);
      return Result;
    }
  }

  // Pattern: (SystemZucmp:isVoid GR64:i64:$src1, (sext:i64 GR32:i32:$src2))
  // Emits: (CMPSX64rr32:isVoid GR64:i64:$src1, GR32:i32:$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::SIGN_EXTEND) {
    SDValue N10 = N1.getOperand(0);
    if (N0.getNode()->getValueType(0) == MVT::i64 &&
        N10.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_76(N, SystemZ::CMPSX64rr32);
      return Result;
    }
  }

  // Pattern: (SystemZucmp:isVoid GR64:i64:$src1, (zext:i64 GR32:i32:$src2))
  // Emits: (UCMPZX64rr32:isVoid GR64:i64:$src1, GR32:i32:$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::ZERO_EXTEND) {
    SDValue N10 = N1.getOperand(0);
    if (N0.getNode()->getValueType(0) == MVT::i64 &&
        N10.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_76(N, SystemZ::UCMPZX64rr32);
      return Result;
    }
  }

  // Pattern: (SystemZucmp:isVoid GR32:i32:$src1, GR32:i32:$src2)
  // Emits: (UCMP32rr:isVoid GR32:i32:$src1, GR32:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_70(N, SystemZ::UCMP32rr);
    return Result;
  }

  // Pattern: (SystemZucmp:isVoid GR64:i64:$src1, GR64:i64:$src2)
  // Emits: (UCMP64rr:isVoid GR64:i64:$src1, GR64:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_70(N, SystemZ::UCMP64rr);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_INLINEASM(SDValue N) {
  std::vector<SDValue> Ops(N.getNode()->op_begin(), N.getNode()->op_end());
  SelectInlineAsmMemoryOperands(Ops);

  std::vector<EVT> VTs;
  VTs.push_back(MVT::Other);
  VTs.push_back(MVT::Flag);
  SDValue New = CurDAG->getNode(ISD::INLINEASM, N.getDebugLoc(), VTs, &Ops[0], Ops.size());
  return New.getNode();
}

SDNode *Select_UNDEF(const SDValue &N) {
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::IMPLICIT_DEF,
                              N.getValueType());
}

SDNode *Select_DBG_LABEL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  unsigned C = cast<LabelSDNode>(N)->getLabelID();
  SDValue Tmp = CurDAG->getTargetConstant(C, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::DBG_LABEL,
                              MVT::Other, Tmp, Chain);
}

SDNode *Select_EH_LABEL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  unsigned C = cast<LabelSDNode>(N)->getLabelID();
  SDValue Tmp = CurDAG->getTargetConstant(C, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::EH_LABEL,
                              MVT::Other, Tmp, Chain);
}

SDNode *Select_DECLARE(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (!isa<FrameIndexSDNode>(N1) || !isa<GlobalAddressSDNode>(N2)) {
    CannotYetSelect(N);
  }
  int FI = cast<FrameIndexSDNode>(N1)->getIndex();
  GlobalValue *GV = cast<GlobalAddressSDNode>(N2)->getGlobal();
  SDValue Tmp1 = CurDAG->getTargetFrameIndex(FI, TLI.getPointerTy());
  SDValue Tmp2 = CurDAG->getTargetGlobalAddress(GV, TLI.getPointerTy());
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::DECLARE,
                              MVT::Other, Tmp1, Tmp2, Chain);
}

// The main instruction selector code.
SDNode *SelectCode(SDValue N) {
  MVT::SimpleValueType NVT = N.getNode()->getValueType(0).getSimpleVT().SimpleTy;
  switch (N.getOpcode()) {
  default:
    assert(!N.isMachineOpcode() && "Node already selected!");
    break;
  case ISD::EntryToken:       // These nodes remain the same.
  case ISD::MEMOPERAND:
  case ISD::BasicBlock:
  case ISD::Register:
  case ISD::HANDLENODE:
  case ISD::TargetConstant:
  case ISD::TargetConstantFP:
  case ISD::TargetConstantPool:
  case ISD::TargetFrameIndex:
  case ISD::TargetExternalSymbol:
  case ISD::TargetJumpTable:
  case ISD::TargetGlobalTLSAddress:
  case ISD::TargetGlobalAddress:
  case ISD::TokenFactor:
  case ISD::CopyFromReg:
  case ISD::CopyToReg: {
    return NULL;
  }
  case ISD::AssertSext:
  case ISD::AssertZext: {
    ReplaceUses(N, N.getOperand(0));
    return NULL;
  }
  case ISD::INLINEASM: return Select_INLINEASM(N);
  case ISD::DBG_LABEL: return Select_DBG_LABEL(N);
  case ISD::EH_LABEL: return Select_EH_LABEL(N);
  case ISD::DECLARE: return Select_DECLARE(N);
  case ISD::UNDEF: return Select_UNDEF(N);
  case ISD::ADD: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADD_i32(N);
    case MVT::i64:
      return Select_ISD_ADD_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADDC_i32(N);
    case MVT::i64:
      return Select_ISD_ADDC_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDE: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADDE_i32(N);
    case MVT::i64:
      return Select_ISD_ADDE_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::AND: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_AND_i32(N);
    case MVT::i64:
      return Select_ISD_AND_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ANY_EXTEND: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_ANY_EXTEND_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::BIT_CONVERT: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_BIT_CONVERT_i64(N);
    case MVT::f64:
      return Select_ISD_BIT_CONVERT_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::BR: {
    return Select_ISD_BR(N);
    break;
  }
  case ISD::BRIND: {
    return Select_ISD_BRIND(N);
    break;
  }
  case ISD::BSWAP: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_BSWAP_i32(N);
    case MVT::i64:
      return Select_ISD_BSWAP_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::CALLSEQ_END: {
    return Select_ISD_CALLSEQ_END(N);
    break;
  }
  case ISD::CALLSEQ_START: {
    return Select_ISD_CALLSEQ_START(N);
    break;
  }
  case ISD::CTLZ: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_CTLZ_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::Constant: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_Constant_i32(N);
    case MVT::i64:
      return Select_ISD_Constant_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ConstantFP: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_ConstantFP_f32(N);
    case MVT::f64:
      return Select_ISD_ConstantFP_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FABS: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FABS_f32(N);
    case MVT::f64:
      return Select_ISD_FABS_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FADD: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FADD_f32(N);
    case MVT::f64:
      return Select_ISD_FADD_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FCOPYSIGN: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FCOPYSIGN_f32(N);
    case MVT::f64:
      return Select_ISD_FCOPYSIGN_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FDIV: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FDIV_f32(N);
    case MVT::f64:
      return Select_ISD_FDIV_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FMUL: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FMUL_f32(N);
    case MVT::f64:
      return Select_ISD_FMUL_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FNEG: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FNEG_f32(N);
    case MVT::f64:
      return Select_ISD_FNEG_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FP_EXTEND: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_FP_EXTEND_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FP_ROUND: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FP_ROUND_f32(N);
    default:
      break;
    }
    break;
  }
  case ISD::FP_TO_SINT: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_FP_TO_SINT_i32(N);
    case MVT::i64:
      return Select_ISD_FP_TO_SINT_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FSQRT: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FSQRT_f32(N);
    case MVT::f64:
      return Select_ISD_FSQRT_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FSUB: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FSUB_f32(N);
    case MVT::f64:
      return Select_ISD_FSUB_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FrameIndex: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_FrameIndex_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::LOAD: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_LOAD_i32(N);
    case MVT::i64:
      return Select_ISD_LOAD_i64(N);
    case MVT::f32:
      return Select_ISD_LOAD_f32(N);
    case MVT::f64:
      return Select_ISD_LOAD_f64(N);
    case MVT::v2i32:
      return Select_ISD_LOAD_v2i32(N);
    case MVT::v2i64:
      return Select_ISD_LOAD_v2i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::MUL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_MUL_i32(N);
    case MVT::i64:
      return Select_ISD_MUL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::MULHS: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_MULHS_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::MULHU: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_MULHU_i32(N);
    case MVT::i64:
      return Select_ISD_MULHU_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::OR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_OR_i32(N);
    case MVT::i64:
      return Select_ISD_OR_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ROTL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ROTL_i32(N);
    case MVT::i64:
      return Select_ISD_ROTL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SHL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SHL_i32(N);
    case MVT::i64:
      return Select_ISD_SHL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SIGN_EXTEND: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_SIGN_EXTEND_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SIGN_EXTEND_INREG: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SIGN_EXTEND_INREG_i32(N);
    case MVT::i64:
      return Select_ISD_SIGN_EXTEND_INREG_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SINT_TO_FP: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_SINT_TO_FP_f32(N);
    case MVT::f64:
      return Select_ISD_SINT_TO_FP_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRA: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SRA_i32(N);
    case MVT::i64:
      return Select_ISD_SRA_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SRL_i32(N);
    case MVT::i64:
      return Select_ISD_SRL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::STORE: {
    return Select_ISD_STORE(N);
    break;
  }
  case ISD::SUB: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUB_i32(N);
    case MVT::i64:
      return Select_ISD_SUB_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUBC_i32(N);
    case MVT::i64:
      return Select_ISD_SUBC_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBE: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUBE_i32(N);
    case MVT::i64:
      return Select_ISD_SUBE_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::TRUNCATE: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_TRUNCATE_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::XOR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_XOR_i32(N);
    case MVT::i64:
      return Select_ISD_XOR_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ZERO_EXTEND: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_ZERO_EXTEND_i64(N);
    default:
      break;
    }
    break;
  }
  case SystemZISD::BRCOND: {
    return Select_SystemZISD_BRCOND(N);
    break;
  }
  case SystemZISD::CALL: {
    return Select_SystemZISD_CALL(N);
    break;
  }
  case SystemZISD::CMP: {
    return Select_SystemZISD_CMP(N);
    break;
  }
  case SystemZISD::PCRelativeWrapper: {
    switch (NVT) {
    case MVT::i64:
      return Select_SystemZISD_PCRelativeWrapper_i64(N);
    default:
      break;
    }
    break;
  }
  case SystemZISD::RET_FLAG: {
    return Select_SystemZISD_RET_FLAG(N);
    break;
  }
  case SystemZISD::SELECT: {
    switch (NVT) {
    case MVT::i32:
      return Select_SystemZISD_SELECT_i32(N);
    case MVT::i64:
      return Select_SystemZISD_SELECT_i64(N);
    case MVT::f32:
      return Select_SystemZISD_SELECT_f32(N);
    case MVT::f64:
      return Select_SystemZISD_SELECT_f64(N);
    default:
      break;
    }
    break;
  }
  case SystemZISD::UCMP: {
    return Select_SystemZISD_UCMP(N);
    break;
  }
  } // end of big switch.

  if (N.getOpcode() != ISD::INTRINSIC_W_CHAIN &&
      N.getOpcode() != ISD::INTRINSIC_WO_CHAIN &&
      N.getOpcode() != ISD::INTRINSIC_VOID) {
    CannotYetSelect(N);
  } else {
    CannotYetSelectIntrinsic(N);
  }
  return NULL;
}

void CannotYetSelect(SDValue N) DISABLE_INLINE {
  std::string msg;
  raw_string_ostream Msg(msg);
  Msg << "Cannot yet select: ";
  N.getNode()->print(Msg, CurDAG);
  llvm_report_error(Msg.str());
}

void CannotYetSelectIntrinsic(SDValue N) DISABLE_INLINE {
  cerr << "Cannot yet select: ";
  unsigned iid = cast<ConstantSDNode>(N.getOperand(N.getOperand(0).getValueType() == MVT::Other))->getZExtValue();
 llvm_report_error("Cannot yet select: intrinsic %" +
Intrinsic::getName((Intrinsic::ID)iid));
}

