//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the Blackfin target
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
inline SDValue Transform_HI16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 16, MVT::i16);

}
inline SDValue Transform_LO16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return CurDAG->getTargetConstant((unsigned short)N->getZExtValue(), MVT::i16);

}
inline SDValue Transform_trailingOnes_xform(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return CurDAG->getTargetConstant(N->getAPIntValue().countTrailingOnes(),
                                   MVT::i32);

}
inline SDValue Transform_trailingZeros_xform(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return CurDAG->getTargetConstant(N->getAPIntValue().countTrailingZeros(),
                                   MVT::i32);

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
inline bool Predicate_imm16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return isInt<16>(N->getSExtValue());
}
inline bool Predicate_imm17m2(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

    int64_t value = N->getSExtValue();
    return value % 2 == 0 && isInt<17>(value);

}
inline bool Predicate_imm18m4(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

    int64_t value = N->getSExtValue();
    return value % 4 == 0 && isInt<18>(value);

}
inline bool Predicate_imm3(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return isInt<3>(N->getSExtValue());
}
inline bool Predicate_imm7(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return isInt<7>(N->getSExtValue());
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
inline bool Predicate_uimm16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return isUint<16>(N->getZExtValue());
}
inline bool Predicate_uimm3(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return isUint<3>(N->getZExtValue());
}
inline bool Predicate_uimm4(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return isUint<4>(N->getZExtValue());
}
inline bool Predicate_uimm5(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return isUint<5>(N->getZExtValue());
}
inline bool Predicate_uimm5imask(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

    return isPowerOf2_32(~N->getZExtValue());

}
inline bool Predicate_uimm5m2(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

    uint64_t value = N->getZExtValue();
    return value % 2 == 0 && isUint<5>(value);

}
inline bool Predicate_uimm5mask(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

    return isPowerOf2_32(N->getZExtValue());

}
inline bool Predicate_uimm6m4(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

    uint64_t value = N->getZExtValue();
    return value % 4 == 0 && isUint<6>(value);

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
inline bool Predicate_ximm16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

    int64_t value = N->getSExtValue();
    return value < (1<<16) && value >= -(1<<15);

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


SDNode *Emit_0(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
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
SDNode *Select_BFISD_CALL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (BfinCall:isVoid (tglobaladdr:i32):$dst)
  // Emits: (CALLa:isVoid (tglobaladdr:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_0(N, BF::CALLa, 1);
    return Result;
  }

  // Pattern: (BfinCall:isVoid (texternalsym:i32):$dst)
  // Emits: (CALLa:isVoid (texternalsym:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_0(N, BF::CALLa, 1);
    return Result;
  }

  // Pattern: (BfinCall:isVoid P:i32:$func)
  // Emits: (CALLp:isVoid P:i32:$func)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_0(N, BF::CALLp, 1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_1(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 2 : 1);
}
SDNode *Select_BFISD_RET_FLAG(const SDValue &N) {
  SDNode *Result = Emit_1(N, BF::RTS);
  return Result;
}

SDNode *Emit_2(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_BFISD_Wrapper_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (BfinWrapper:i32 (tglobaladdr:i32):$addr)
  // Emits: (LOAD32sym:i32 (tglobaladdr:i32):$addr)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_2(N, BF::LOAD32sym, MVT::i32);
    return Result;
  }

  // Pattern: (BfinWrapper:i32 (tjumptable:i32):$addr)
  // Emits: (LOAD32sym:i32 (tjumptable:i32):$addr)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetJumpTable) {
    SDNode *Result = Emit_2(N, BF::LOAD32sym, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_3(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Select_ISD_ADD_i16(const SDValue &N) {
  SDNode *Result = Emit_3(N, BF::ADD16, MVT::i16);
  return Result;
}

SDNode *Emit_4(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ISD_ADD_i32(const SDValue &N) {

  // Pattern: (add:i32 D:i32:$src1, (imm:i32)<<P:Predicate_imm7>>:$src2)
  // Emits: (ADDimm7:i32 D:i32:$src1, (imm:i32):$src2)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_imm7(N1.getNode())) {
      SDNode *Result = Emit_4(N, BF::ADDimm7, MVT::i32);
      return Result;
    }
  }

  // Pattern: (add:i32 D:i32:$src1, D:i32:$src2)
  // Emits: (ADD:i32 D:i32:$src1, D:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, BF::ADD, MVT::i32);
  return Result;
}

SDNode *Emit_5(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDC_i32(const SDValue &N) {
  SDNode *Result = Emit_5(N, BF::ADD, MVT::i32);
  return Result;
}

SDNode *Emit_6(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Emit_7(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_trailingOnes_xform(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_8(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  SDValue Tmp3(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp2), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp3);
}
SDNode *Select_ISD_AND_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {

        // Pattern: (and:i32 D:i32:$src, 255:i32)
        // Emits: (MOVEzext8:i32 D:i32:$src)
        // Pattern complexity = 8  cost = 1  size = 0
        if (CheckAndMask(N0, Tmp0, INT64_C(255))) {
          SDNode *Result = Emit_6(N, BF::MOVEzext8, MVT::i32);
          return Result;
        }

        // Pattern: (and:i32 D:i32:$src, 65535:i32)
        // Emits: (MOVEzext:i32 (EXTRACT_SUBREG:i16 D:i32:$src, 1:i32))
        // Pattern complexity = 8  cost = 2  size = 0
        if (CheckAndMask(N0, Tmp0, INT64_C(65535))) {
          SDNode *Result = Emit_8(N, TargetInstrInfo::EXTRACT_SUBREG, BF::MOVEzext, MVT::i16, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (and:i32 D:i32:$src1, (imm:i32)<<P:Predicate_uimm5imask>><<X:trailingOnes_xform>>:$src2)
    // Emits: (BITCLR:i32 D:i32:$src1, (trailingOnes_xform:i32 (imm:i32):$src2))
    // Pattern complexity = 7  cost = 1  size = 0
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_uimm5imask(N1.getNode())) {
      SDNode *Result = Emit_7(N, BF::BITCLR, MVT::i32);
      return Result;
    }
  }

  // Pattern: (and:i32 D:i32:$src1, D:i32:$src2)
  // Emits: (AND:i32 D:i32:$src1, D:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, BF::AND, MVT::i32);
  return Result;
}

SDNode *Emit_9(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1, Tmp2);
}
SDNode *Select_ISD_ANY_EXTEND_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_9(N, BF::MOVECC_zext, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_10(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, EVT VT0, EVT VT1, EVT VT2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp0(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(BF::D16LRegClassID, MVT::i32);
  SDValue Tmp3(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, N0, Tmp2), 0);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, VT2, Tmp0, Tmp3, Tmp4);
}
SDNode *Select_ISD_ANY_EXTEND_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (anyext:i32 JustCC:i32:$cc)
  // Emits: (MOVECC_zext:i32 JustCC:i32:$cc)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_2(N, BF::MOVECC_zext, MVT::i32);
    return Result;
  }

  // Pattern: (anyext:i32 D16L:i16:$src)
  // Emits: (INSERT_SUBREG:i32 (IMPLICIT_DEF:i32), (COPY_TO_REGCLASS:i16 D16L:i16:$src, D16L:i16), 1:i32)
  // Pattern complexity = 3  cost = 3  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_10(N, TargetInstrInfo::IMPLICIT_DEF, TargetInstrInfo::COPY_TO_REGCLASS, TargetInstrInfo::INSERT_SUBREG, MVT::i32, MVT::i16, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_11(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_11(N, BF::JUMPa);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_12(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, N2, Chain);
}
SDNode *Select_ISD_BRCOND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::BasicBlock &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_12(N, BF::JUMPcc);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BRIND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_11(N, BF::JUMPp);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_13(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
      SDNode *Result = Emit_13(N, BF::ADJCALLSTACKUP);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_14(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
    SDNode *Result = Emit_14(N, BF::ADJCALLSTACKDOWN);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_15(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1);
}
SDNode *Select_ISD_CTPOP_i32(const SDValue &N) {
  SDNode *Result = Emit_15(N, BF::ONES, BF::MOVEzext, MVT::i16, MVT::i32);
  return Result;
}

SDNode *Emit_16(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i16);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Select_ISD_Constant_i16(const SDValue &N) {
  if (Predicate_ximm16(N.getNode())) {
    SDNode *Result = Emit_16(N, BF::LOAD16i_d16, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_17(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Select_ISD_Constant_i32(const SDValue &N) {

  // Pattern: (imm:i32)<<P:Predicate_imm7>>:$src
  // Emits: (LOADimm7:i32 (imm:i32):$src)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_imm7(N.getNode())) {
    SDNode *Result = Emit_17(N, BF::LOADimm7, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32)<<P:Predicate_uimm16>>:$src
  // Emits: (LOADuimm16:i32 (imm:i32):$src)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_uimm16(N.getNode())) {
    SDNode *Result = Emit_17(N, BF::LOADuimm16, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32)<<P:Predicate_imm16>>:$src
  // Emits: (LOADimm16:i32 (imm:i32):$src)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_imm16(N.getNode())) {
    SDNode *Result = Emit_17(N, BF::LOADimm16, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32):$src
  // Emits: (LOAD32imm:i32 (imm:i32):$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_17(N, BF::LOAD32imm, MVT::i32);
  return Result;
}

SDNode *Emit_18(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Chain);
}
SDNode *Select_ISD_INTRINSIC_VOID(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (intrinsic_void:isVoid 139:iPTR)
    // Emits: (IDLE:isVoid)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(139)) {
      SDNode *Result = Emit_18(N, BF::IDLE);
      return Result;
    }

    // Pattern: (intrinsic_void:isVoid 138:iPTR)
    // Emits: (CSYNC:isVoid)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(138)) {
      SDNode *Result = Emit_18(N, BF::CSYNC);
      return Result;
    }

    // Pattern: (intrinsic_void:isVoid 140:iPTR)
    // Emits: (SSYNC:isVoid)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(140)) {
      SDNode *Result = Emit_18(N, BF::SSYNC);
      return Result;
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Emit_19(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_20(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, N1, LSI_N, Chain);
}
SDNode *Emit_21(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, MVT::Other, N1, LSI_N, Chain), 0);
  Chain = SDValue(Tmp1.getNode(), 1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, MVT::Other, Tmp1, Tmp2, Chain);
}
SDNode *Emit_22(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N10, Tmp1, LSI_N, Chain };
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, MVT::Other, Ops0, 4), 0);
  Chain = SDValue(Tmp2.getNode(), 1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, MVT::Other, Tmp2, Tmp3, Chain);
}
SDNode *Select_ISD_LOAD_i16(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {

    // Pattern: (ld:i16 ADDRspii:i32:$mem)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LOAD16fi:i16 ADDRspii:i32:$mem)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectADDRspii(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_19(N, BF::LOAD16fi, MVT::i16, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i16 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm16>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
    // Emits: (EXTRACT_SUBREG:i16 (LOAD32p_imm16_8z:i32 P:i32:$ptr, (imm:i32):$off), 1:i32)
    // Pattern complexity = 11  cost = 2  size = 0
    if (Predicate_extload(N.getNode()) &&
        Predicate_extloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_imm16(N11.getNode()) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_22(N, BF::LOAD32p_imm16_8z, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i16);
          return Result;
        }
      }
    }

    // Pattern: (ld:i16 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm16>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (EXTRACT_SUBREG:i16 (LOAD32p_imm16_8z:i32 P:i32:$ptr, (imm:i32):$off), 1:i32)
    // Pattern complexity = 11  cost = 2  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_imm16(N11.getNode()) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_22(N, BF::LOAD32p_imm16_8z, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i16);
          return Result;
        }
      }
    }

    // Pattern: (ld:i16 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm16>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
    // Emits: (EXTRACT_SUBREG:i16 (LOAD32p_imm16_8s:i32 P:i32:$ptr, (imm:i32):$off), 1:i32)
    // Pattern complexity = 11  cost = 2  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_imm16(N11.getNode()) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_22(N, BF::LOAD32p_imm16_8s, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i16);
          return Result;
        }
      }
    }

    // Pattern: (ld:i16 PI:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LOAD16pi:i16 PI:i32:$ptr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, BF::LOAD16pi, MVT::i16);
        return Result;
      }
    }

    // Pattern: (ld:i16 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
    // Emits: (EXTRACT_SUBREG:i16 (LOAD32p_8z:i32 P:i32:$ptr), 1:i32)
    // Pattern complexity = 4  cost = 2  size = 0
    if (Predicate_extload(N.getNode()) &&
        Predicate_extloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_21(N, BF::LOAD32p_8z, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i16);
        return Result;
      }
    }

    // Pattern: (ld:i16 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (EXTRACT_SUBREG:i16 (LOAD32p_8z:i32 P:i32:$ptr), 1:i32)
    // Pattern complexity = 4  cost = 2  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_21(N, BF::LOAD32p_8z, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i16);
        return Result;
      }
    }

    // Pattern: (ld:i16 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
    // Emits: (EXTRACT_SUBREG:i16 (LOAD32p_8s:i32 P:i32:$ptr), 1:i32)
    // Pattern complexity = 4  cost = 2  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_21(N, BF::LOAD32p_8s, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i16);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_23(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N10, Tmp1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_LOAD_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      {
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectADDRspii(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {

          // Pattern: (ld:i32 ADDRspii:i32:$mem)<<P:Predicate_unindexedload>><<P:Predicate_load>>
          // Emits: (LOAD32fi:i32 ADDRspii:i32:$mem)
          // Pattern complexity = 13  cost = 1  size = 0
          {
            SDNode *Result = Emit_19(N, BF::LOAD32fi, MVT::i32, CPTmpN1_0, CPTmpN1_1);
            return Result;
          }

          // Pattern: (ld:i32 ADDRspii:i32:$mem)<<P:Predicate_unindexedload>><<P:Predicate_load>>
          // Emits: (LOAD8fi:i32 ADDRspii:i32:$mem)
          // Pattern complexity = 13  cost = 1  size = 0
          SDNode *Result = Emit_19(N, BF::LOAD8fi, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant) {

          // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_uimm6m4>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_load>>
          // Emits: (LOAD32p_uimm6m4:i32 P:i32:$ptr, (imm:i32):$off)
          // Pattern complexity = 11  cost = 1  size = 0
          if (Predicate_uimm6m4(N11.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_23(N, BF::LOAD32p_uimm6m4, MVT::i32);
            return Result;
          }

          // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm18m4>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_load>>
          // Emits: (LOAD32p_imm18m4:i32 P:i32:$ptr, (imm:i32):$off)
          // Pattern complexity = 11  cost = 1  size = 0
          if (Predicate_imm18m4(N11.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_23(N, BF::LOAD32p_imm18m4, MVT::i32);
            return Result;
          }
        }
      }
    }
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant) {

          // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_uimm5m2>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
          // Emits: (LOAD32p_uimm5m2_16z:i32 P:i32:$ptr, (imm:i32):$off)
          // Pattern complexity = 11  cost = 1  size = 0
          if (Predicate_uimm5m2(N11.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_23(N, BF::LOAD32p_uimm5m2_16z, MVT::i32);
            return Result;
          }

          // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm17m2>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
          // Emits: (LOAD32p_imm17m2_16z:i32 P:i32:$ptr, (imm:i32):$off)
          // Pattern complexity = 11  cost = 1  size = 0
          if (Predicate_imm17m2(N11.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_23(N, BF::LOAD32p_imm17m2_16z, MVT::i32);
            return Result;
          }
        }
      }
    }
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant) {

          // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_uimm5m2>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
          // Emits: (LOAD32p_uimm5m2_16s:i32 P:i32:$ptr, (imm:i32):$off)
          // Pattern complexity = 11  cost = 1  size = 0
          if (Predicate_uimm5m2(N11.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_23(N, BF::LOAD32p_uimm5m2_16s, MVT::i32);
            return Result;
          }

          // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm17m2>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
          // Emits: (LOAD32p_imm17m2_16s:i32 P:i32:$ptr, (imm:i32):$off)
          // Pattern complexity = 11  cost = 1  size = 0
          if (Predicate_imm17m2(N11.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_23(N, BF::LOAD32p_imm17m2_16s, MVT::i32);
            return Result;
          }
        }
      }
    }

    // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm16>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (LOAD32p_imm16_8z:i32 P:i32:$ptr, (imm:i32):$off)
    // Pattern complexity = 11  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_imm16(N11.getNode()) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_23(N, BF::LOAD32p_imm16_8z, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm16>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
    // Emits: (LOAD32p_imm16_8s:i32 P:i32:$ptr, (imm:i32):$off)
    // Pattern complexity = 11  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_imm16(N11.getNode()) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_23(N, BF::LOAD32p_imm16_8s, MVT::i32);
          return Result;
        }
      }
    }
    if (Predicate_extload(N.getNode())) {

      // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm16>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
      // Emits: (LOAD32p_imm16_8z:i32 P:i32:$ptr, (imm:i32):$off)
      // Pattern complexity = 11  cost = 1  size = 0
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::ADD) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::Constant &&
              Predicate_imm16(N11.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_23(N, BF::LOAD32p_imm16_8z, MVT::i32);
            return Result;
          }
        }
      }
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::ADD) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::Constant) {

            // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_uimm5m2>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
            // Emits: (LOAD32p_uimm5m2_16z:i32 P:i32:$ptr, (imm:i32):$off)
            // Pattern complexity = 11  cost = 1  size = 0
            if (Predicate_uimm5m2(N11.getNode()) &&
                N1.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_23(N, BF::LOAD32p_uimm5m2_16z, MVT::i32);
              return Result;
            }

            // Pattern: (ld:i32 (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm17m2>>:$off))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
            // Emits: (LOAD32p_imm17m2_16z:i32 P:i32:$ptr, (imm:i32):$off)
            // Pattern complexity = 11  cost = 1  size = 0
            if (Predicate_imm17m2(N11.getNode()) &&
                N1.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_23(N, BF::LOAD32p_imm17m2_16z, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (ld:i32 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LOAD32p:i32 P:i32:$ptr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, BF::LOAD32p, MVT::i32);
        return Result;
      }
    }

    // Pattern: (ld:i32 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
    // Emits: (LOAD32p_16z:i32 P:i32:$ptr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, BF::LOAD32p_16z, MVT::i32);
        return Result;
      }
    }

    // Pattern: (ld:i32 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
    // Emits: (LOAD32p_16s:i32 P:i32:$ptr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, BF::LOAD32p_16s, MVT::i32);
        return Result;
      }
    }

    // Pattern: (ld:i32 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (LOAD32p_8z:i32 P:i32:$ptr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, BF::LOAD32p_8z, MVT::i32);
        return Result;
      }
    }

    // Pattern: (ld:i32 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
    // Emits: (LOAD32p_8s:i32 P:i32:$ptr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, BF::LOAD32p_8s, MVT::i32);
        return Result;
      }
    }
    if (Predicate_extload(N.getNode())) {

      // Pattern: (ld:i32 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
      // Emits: (LOAD32p_16z:i32 P:i32:$ptr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, BF::LOAD32p_16z, MVT::i32);
          return Result;
        }
      }

      // Pattern: (ld:i32 P:i32:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
      // Emits: (LOAD32p_8z:i32 P:i32:$ptr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, BF::LOAD32p_8z, MVT::i32);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_MUL_i16(const SDValue &N) {
  SDNode *Result = Emit_3(N, BF::MUL16, MVT::i16);
  return Result;
}

SDNode *Emit_24(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N10);
}
SDNode *Select_ISD_MUL_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (mul:i32 (sext:i32 D16:i16:$src1), (sext:i32 D16:i16:$src2))
    // Emits: (MULhh32s:i32 D16:i16:$src1, D16:i16:$src2)
    // Pattern complexity = 9  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SIGN_EXTEND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SIGN_EXTEND) {
        SDValue N10 = N1.getOperand(0);
        if (N00.getNode()->getValueType(0) == MVT::i16 &&
            N10.getNode()->getValueType(0) == MVT::i16) {
          SDNode *Result = Emit_24(N, BF::MULhh32s, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (mul:i32 (zext:i32 D16:i16:$src1), (zext:i32 D16:i16:$src2))
    // Emits: (MULhh32u:i32 D16:i16:$src1, D16:i16:$src2)
    // Pattern complexity = 9  cost = 1  size = 0
    if (N0.getOpcode() == ISD::ZERO_EXTEND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ZERO_EXTEND) {
        SDValue N10 = N1.getOperand(0);
        if (N00.getNode()->getValueType(0) == MVT::i16 &&
            N10.getNode()->getValueType(0) == MVT::i16) {
          SDNode *Result = Emit_24(N, BF::MULhh32u, MVT::i32);
          return Result;
        }
      }
    }
  }

  // Pattern: (mul:i32 D:i32:$src1, D:i32:$src2)
  // Emits: (MUL32:i32 D:i32:$src1, D:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, BF::MUL32, MVT::i32);
  return Result;
}

SDNode *Select_ISD_MULHS_i16(const SDValue &N) {
  SDNode *Result = Emit_3(N, BF::MULHS16, MVT::i16);
  return Result;
}

SDNode *Emit_25(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_trailingZeros_xform(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_26(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N10);
}
SDNode *Emit_27(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N00);
}
SDNode *Select_ISD_OR_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::SHL) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (or:i32 (shl:i32 D:i32:$src1, 24:i32), (srl:i32 D:i32:$src2, 8:i32))
        // Emits: (ALIGN8:i32 D:i32:$src1, D:i32:$src2)
        // Pattern complexity = 19  cost = 1  size = 0
        if (CN1 == INT64_C(24)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::SRL) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(8) &&
                  N01.getNode()->getValueType(0) == MVT::i32 &&
                  N11.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_26(N, BF::ALIGN8, MVT::i32);
                return Result;
              }
            }
          }
        }

        // Pattern: (or:i32 (shl:i32 D:i32:$src1, 16:i32), (srl:i32 D:i32:$src2, 16:i32))
        // Emits: (ALIGN16:i32 D:i32:$src1, D:i32:$src2)
        // Pattern complexity = 19  cost = 1  size = 0
        if (CN1 == INT64_C(16)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::SRL) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(16) &&
                  N01.getNode()->getValueType(0) == MVT::i32 &&
                  N11.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_26(N, BF::ALIGN16, MVT::i32);
                return Result;
              }
            }
          }
        }

        // Pattern: (or:i32 (shl:i32 D:i32:$src1, 8:i32), (srl:i32 D:i32:$src2, 24:i32))
        // Emits: (ALIGN24:i32 D:i32:$src1, D:i32:$src2)
        // Pattern complexity = 19  cost = 1  size = 0
        if (CN1 == INT64_C(8)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::SRL) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(24) &&
                  N01.getNode()->getValueType(0) == MVT::i32 &&
                  N11.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_26(N, BF::ALIGN24, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SRL) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (or:i32 (srl:i32 D:i32:$src2, 8:i32), (shl:i32 D:i32:$src1, 24:i32))
        // Emits: (ALIGN8:i32 D:i32:$src1, D:i32:$src2)
        // Pattern complexity = 19  cost = 1  size = 0
        if (CN1 == INT64_C(8)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::SHL) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(24) &&
                  N01.getNode()->getValueType(0) == MVT::i32 &&
                  N11.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_27(N, BF::ALIGN8, MVT::i32);
                return Result;
              }
            }
          }
        }

        // Pattern: (or:i32 (srl:i32 D:i32:$src2, 16:i32), (shl:i32 D:i32:$src1, 16:i32))
        // Emits: (ALIGN16:i32 D:i32:$src1, D:i32:$src2)
        // Pattern complexity = 19  cost = 1  size = 0
        if (CN1 == INT64_C(16)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::SHL) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(16) &&
                  N01.getNode()->getValueType(0) == MVT::i32 &&
                  N11.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_27(N, BF::ALIGN16, MVT::i32);
                return Result;
              }
            }
          }
        }

        // Pattern: (or:i32 (srl:i32 D:i32:$src2, 24:i32), (shl:i32 D:i32:$src1, 8:i32))
        // Emits: (ALIGN24:i32 D:i32:$src1, D:i32:$src2)
        // Pattern complexity = 19  cost = 1  size = 0
        if (CN1 == INT64_C(24)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::SHL) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(8) &&
                  N01.getNode()->getValueType(0) == MVT::i32 &&
                  N11.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_27(N, BF::ALIGN24, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }

    // Pattern: (or:i32 D:i32:$src1, (imm:i32)<<P:Predicate_uimm5mask>><<X:trailingZeros_xform>>:$src2)
    // Emits: (BITSET:i32 D:i32:$src1, (trailingZeros_xform:i32 (imm:i32):$src2))
    // Pattern complexity = 7  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_uimm5mask(N1.getNode())) {
      SDNode *Result = Emit_25(N, BF::BITSET, MVT::i32);
      return Result;
    }
  }

  // Pattern: (or:i32 D:i32:$src1, D:i32:$src2)
  // Emits: (OR:i32 D:i32:$src1, D:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, BF::OR, MVT::i32);
  return Result;
}

SDNode *Emit_28(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N2, N1, N0);
}
SDNode *Select_ISD_SELECT_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_28(N, BF::MOVEcc, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_29(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_30(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_31(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Emit_32(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i32);
  SDValue Tmp4 = Transform_trailingZeros_xform(Tmp3.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp4);
}
SDNode *Emit_33(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N0);
}
SDNode *Select_ISD_SETCC_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::AND) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    if (N01.getOpcode() == ISD::Constant &&
        Predicate_uimm5mask(N01.getNode())) {
      SDValue N1 = N.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDValue N2 = N.getOperand(2);

          // Pattern: (setcc:i32 (and:i32 D:i32:$src1, (imm:i32)<<P:Predicate_uimm5mask>><<X:trailingZeros_xform>>:$src2), 0:i32, SETNE:Other)
          // Emits: (BITTST:i32 D:i32:$src1, (trailingZeros_xform:i32 (imm:i32):$src2))
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE &&
              N0.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_32(N, BF::BITTST, MVT::i32);
            return Result;
          }

          // Pattern: (setcc:i32 (and:i32 D:i32:$src1, (imm:i32)<<P:Predicate_uimm5mask>><<X:trailingZeros_xform>>:$src2), 0:i32, SETEQ:Other)
          // Emits: (NBITTST:i32 D:i32:$src1, (trailingZeros_xform:i32 (imm:i32):$src2))
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ &&
              N0.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_32(N, BF::NBITTST, MVT::i32);
            return Result;
          }
        }
      }
    }
  }
  SDValue N1 = N.getOperand(1);

  // Pattern: (setcc:i32 D:i32:$src, 0:i32, SETNE:Other)
  // Emits: (MOVECC_nz:i32 D:i32:$src)
  // Pattern complexity = 8  cost = 1  size = 0
  {
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDValue N2 = N.getOperand(2);
        if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE &&
            N0.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_31(N, BF::MOVECC_nz, MVT::i32);
          return Result;
        }
      }
    }
  }
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_imm3(N1.getNode())) {
    SDValue N2 = N.getOperand(2);

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETEQ:Other)
    // Emits: (SETEQri:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETEQri, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETNE:Other)
    // Emits: (SETEQri_not:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETEQri_not, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETLT:Other)
    // Emits: (SETLTri:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLT &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETLTri, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETGE:Other)
    // Emits: (SETLTri_not:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGE &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETLTri_not, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETLE:Other)
    // Emits: (SETLEri:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLE &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETLEri, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETGT:Other)
    // Emits: (SETLEri_not:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGT &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETLEri_not, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETULT:Other)
    // Emits: (SETULTri:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULT &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETULTri, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETUGE:Other)
    // Emits: (SETULTri_not:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETULTri_not, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETULE:Other)
    // Emits: (SETULEri:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULE &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETULEri, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 DP:i32:$a, (imm:i32)<<P:Predicate_imm3>>:$b, SETUGT:Other)
    // Emits: (SETULEri_not:i32 DP:i32:$a, (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGT &&
        N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_30(N, BF::SETULEri_not, MVT::i32);
      return Result;
    }
  }
  SDValue N2 = N.getOperand(2);

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETEQ:Other)
  // Emits: (SETEQdd:i32 D:i32:$a, D:i32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_29(N, BF::SETEQdd, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETLT:Other)
  // Emits: (SETLTdd:i32 D:i32:$a, D:i32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_29(N, BF::SETLTdd, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETLE:Other)
  // Emits: (SETLEdd:i32 D:i32:$a, D:i32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_29(N, BF::SETLEdd, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETULT:Other)
  // Emits: (SETULTdd:i32 D:i32:$a, D:i32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_29(N, BF::SETULTdd, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETULE:Other)
  // Emits: (SETULEdd:i32 D:i32:$a, D:i32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_29(N, BF::SETULEdd, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETNE:Other)
  // Emits: (SETNEdd:i32 D:i32:$a, D:i32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_29(N, BF::SETNEdd, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETGT:Other)
  // Emits: (SETLTdd:i32 D:i32:$b, D:i32:$a)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_33(N, BF::SETLTdd, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETGE:Other)
  // Emits: (SETLEdd:i32 D:i32:$b, D:i32:$a)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_33(N, BF::SETLEdd, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETUGT:Other)
  // Emits: (SETULTdd:i32 D:i32:$b, D:i32:$a)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_33(N, BF::SETULTdd, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 D:i32:$a, D:i32:$b, SETUGE:Other)
  // Emits: (SETULEdd:i32 D:i32:$b, D:i32:$a)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_33(N, BF::SETULEdd, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_34(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i16);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ISD_SHL_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (shl:i16 D16:i16:$src, (imm:i16)<<P:Predicate_uimm4>>:$amount)
  // Emits: (SLL16i:i16 D16:i16:$src, (imm:i16):$amount)
  // Pattern complexity = 7  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_uimm4(N1.getNode()) &&
      N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_34(N, BF::SLL16i, MVT::i16);
    return Result;
  }

  // Pattern: (shl:i16 D16:i16:$src, D16L:i16:$amount)
  // Emits: (SLL16r:i16 D16:i16:$src, D16L:i16:$amount)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_3(N, BF::SLL16r, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SHL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (shl:i32 D:i32:$src, (imm:i16)<<P:Predicate_uimm5>>:$amount)
  // Emits: (SLLi:i32 D:i32:$src, (imm:i16):$amount)
  // Pattern complexity = 7  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_uimm5(N1.getNode()) &&
      N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_34(N, BF::SLLi, MVT::i32);
    return Result;
  }

  // Pattern: (shl:i32 D:i32:$src, D:i32:$amount)
  // Emits: (SLLr:i32 D:i32:$src, D:i32:$amount)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, BF::SLLr, MVT::i32);
    return Result;
  }

  // Pattern: (shl:i32 D:i32:$src, D16L:i16:$amount)
  // Emits: (SLLr16:i32 D:i32:$src, D16L:i16:$amount)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_3(N, BF::SLLr16, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_35(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, EVT VT0, EVT VT1, EVT VT2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  SDValue Tmp2(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, VT2, Tmp2, Tmp3);
}
SDNode *Select_ISD_SIGN_EXTEND_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_35(N, BF::MOVECC_zext, BF::NEG, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i32, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SIGN_EXTEND_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (sext:i32 D16L:i16:$src)
  // Emits: (MOVEsext:i32 D16L:i16:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_2(N, BF::MOVEsext, MVT::i32);
    return Result;
  }

  // Pattern: (sext:i32 JustCC:i32:$cc)
  // Emits: (NEG:i32 (MOVECC_zext:i32 JustCC:i32:$cc))
  // Pattern complexity = 3  cost = 2  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_15(N, BF::MOVECC_zext, BF::NEG, MVT::i32, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_36(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, unsigned Opc3, EVT VT0, EVT VT1, EVT VT2, EVT VT3) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp0(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  SDValue Tmp3(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp0, N0, Tmp2), 0);
  SDValue Tmp4(CurDAG->getTargetNode(Opc2, N.getDebugLoc(), VT2, Tmp3), 0);
  SDValue Tmp5 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc3, VT3, Tmp4, Tmp5);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_36(N, TargetInstrInfo::IMPLICIT_DEF, TargetInstrInfo::INSERT_SUBREG, BF::MOVEsext8, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i32, MVT::i32, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_37(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp1), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sext_inreg:i32 D:i32:$src, i8:Other)
  // Emits: (MOVEsext8:i32 D:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_6(N, BF::MOVEsext8, MVT::i32);
    return Result;
  }

  // Pattern: (sext_inreg:i32 D:i32:$src, i16:Other)
  // Emits: (MOVEsext:i32 (EXTRACT_SUBREG:i16 D:i32:$src, 1:i32))
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
    SDNode *Result = Emit_37(N, TargetInstrInfo::EXTRACT_SUBREG, BF::MOVEsext, MVT::i16, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRA_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_uimm4(N1.getNode()) &&
      N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_34(N, BF::SRA16i, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_38(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N11);
}
SDNode *Select_ISD_SRA_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sra:i32 D:i32:$src, (sub:i16 0:i16, D16L:i16:$amount))
  // Emits: (SLAr16:i32 D:i32:$src, D16L:i16:$amount)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N1.getOpcode() == ISD::SUB) {
    SDValue N10 = N1.getOperand(0);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDValue N11 = N1.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i16) {
          SDNode *Result = Emit_38(N, BF::SLAr16, MVT::i32);
          return Result;
        }
      }
    }
  }

  // Pattern: (sra:i32 D:i32:$src, (imm:i16)<<P:Predicate_uimm5>>:$amount)
  // Emits: (SRAi:i32 D:i32:$src, (imm:i16):$amount)
  // Pattern complexity = 7  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_uimm5(N1.getNode()) &&
      N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_34(N, BF::SRAi, MVT::i32);
    return Result;
  }

  // Pattern: (sra:i32 D:i32:$src, D:i32:$amount)
  // Emits: (SRAr:i32 D:i32:$src, D:i32:$amount)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, BF::SRAr, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRL_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (srl:i16 D16:i16:$src, (sub:i16 0:i16, D16L:i16:$amount))
  // Emits: (SLA16r:i16 D16:i16:$src, D16L:i16:$amount)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N1.getOpcode() == ISD::SUB) {
    SDValue N10 = N1.getOperand(0);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDValue N11 = N1.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i16) {
          SDNode *Result = Emit_38(N, BF::SLA16r, MVT::i16);
          return Result;
        }
      }
    }
  }

  // Pattern: (srl:i16 D16:i16:$src, (imm:i16)<<P:Predicate_uimm4>>:$amount)
  // Emits: (SRL16i:i16 D16:i16:$src, (imm:i16):$amount)
  // Pattern complexity = 7  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_uimm4(N1.getNode()) &&
      N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_34(N, BF::SRL16i, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (srl:i32 D:i32:$src, (imm:i16)<<P:Predicate_uimm5>>:$amount)
  // Emits: (SRLi:i32 D:i32:$src, (imm:i16):$amount)
  // Pattern complexity = 7  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_uimm5(N1.getNode()) &&
      N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_34(N, BF::SRLi, MVT::i32);
    return Result;
  }

  // Pattern: (srl:i32 D:i32:$src, D:i32:$amount)
  // Emits: (SRLr:i32 D:i32:$src, D:i32:$amount)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, BF::SRLr, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_39(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_40(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N30 = N3.getOperand(0);
  SDValue N31 = N3.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_41(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N2, N3, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_STORE_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_istore(N.getNode()) &&
      Predicate_post_store(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);
    if (N3.getOpcode() == ISD::SUB) {
      SDValue N30 = N3.getOperand(0);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N30);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDValue N31 = N3.getOperand(1);
          ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N31);
          if (Tmp2) {
            int64_t CN3 = Tmp2->getSExtValue();

            // Pattern: (ist:i32 DP:i32:$val, P:i32:$ptr, (sub:iPTR 0:iPTR, 4:iPTR))<<P:Predicate_istore>><<P:Predicate_post_store>>
            // Emits: (STORE32p_dec:i32 DP:i32:$val, P:i32:$ptr)
            // Pattern complexity = 17  cost = 1  size = 0
            if (CN3 == INT64_C(4) &&
                N1.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_40(N, BF::STORE32p_dec, MVT::i32);
              return Result;
            }

            // Pattern: (ist:i32 D16:i16:$val, I:i32:$ptr, (sub:iPTR 0:iPTR, 2:iPTR))<<P:Predicate_istore>><<P:Predicate_post_store>>
            // Emits: (STORE16i_dec:i32 D16:i16:$val, I:i32:$ptr)
            // Pattern complexity = 17  cost = 1  size = 0
            if (CN3 == INT64_C(2) &&
                N1.getNode()->getValueType(0) == MVT::i16) {
              SDNode *Result = Emit_40(N, BF::STORE16i_dec, MVT::i32);
              return Result;
            }

            // Pattern: (ist:i32 D:i32:$val, P:i32:$ptr, (sub:iPTR 0:iPTR, 1:iPTR))<<P:Predicate_istore>><<P:Predicate_post_store>>
            // Emits: (STORE8p_dec:i32 D:i32:$val, P:i32:$ptr)
            // Pattern complexity = 17  cost = 1  size = 0
            if (CN3 == INT64_C(1) &&
                N1.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_40(N, BF::STORE8p_dec, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N3);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (ist:i32 DP:i32:$val, P:i32:$ptr, 4:iPTR)<<P:Predicate_istore>><<P:Predicate_post_store>>
        // Emits: (STORE32p_inc:i32 DP:i32:$val, P:i32:$ptr)
        // Pattern complexity = 9  cost = 1  size = 0
        if (CN1 == INT64_C(4) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_39(N, BF::STORE32p_inc, MVT::i32);
          return Result;
        }

        // Pattern: (ist:i32 D16:i16:$val, I:i32:$ptr, 2:iPTR)<<P:Predicate_istore>><<P:Predicate_post_store>>
        // Emits: (STORE16i_inc:i32 D16:i16:$val, I:i32:$ptr)
        // Pattern complexity = 9  cost = 1  size = 0
        if (CN1 == INT64_C(2) &&
            N1.getNode()->getValueType(0) == MVT::i16) {
          SDNode *Result = Emit_39(N, BF::STORE16i_inc, MVT::i32);
          return Result;
        }

        // Pattern: (ist:i32 D:i32:$val, P:i32:$ptr, 1:iPTR)<<P:Predicate_istore>><<P:Predicate_post_store>>
        // Emits: (STORE8p_inc:i32 D:i32:$val, P:i32:$ptr)
        // Pattern complexity = 9  cost = 1  size = 0
        if (CN1 == INT64_C(1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_39(N, BF::STORE8p_inc, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (ist:i32 D:i32:$val, P:i32:$ptr, P:i32:$off)<<P:Predicate_istore>><<P:Predicate_post_store>>
    // Emits: (STORE32p_post:i32 D:i32:$val, P:i32:$ptr, P:i32:$off)
    // Pattern complexity = 4  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i32 &&
        N3.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_41(N, BF::STORE32p_post, MVT::i32);
      return Result;
    }

    // Pattern: (ist:i32 D16:i16:$val, P:i32:$ptr, P:i32:$off)<<P:Predicate_istore>><<P:Predicate_post_store>>
    // Emits: (STORE16p_post:i32 D16:i16:$val, P:i32:$ptr, P:i32:$off)
    // Pattern complexity = 4  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i16 &&
        N3.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_41(N, BF::STORE16p_post, MVT::i32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_42(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_43(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_44(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N20 = N2.getOperand(0);
  SDValue N21 = N2.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N21)->getZExtValue()), MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N20, Tmp2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_45(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(BF::DRegClassID, MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N1, Tmp1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  SDValue Tmp4(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp2, Tmp3), 0);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops2[] = { Tmp4, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, MVT::Other, Ops2, 4);
}
SDNode *Emit_46(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp3 = CurDAG->getTargetConstant(BF::DRegClassID, MVT::i32);
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10, Tmp3), 0);
  SDValue Tmp5 = CurDAG->getTargetConstant(0x2ULL, MVT::i32);
  SDValue Tmp6(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp4, Tmp5), 0);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops2[] = { Tmp6, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, MVT::Other, Ops2, 4);
}
SDNode *Emit_47(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, unsigned Opc3, EVT VT0, EVT VT1, EVT VT2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(BF::D16LRegClassID, MVT::i32);
  SDValue Tmp3(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, N1, Tmp2), 0);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  SDValue Tmp5(CurDAG->getTargetNode(Opc2, N.getDebugLoc(), VT2, Tmp0, Tmp3, Tmp4), 0);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops3[] = { Tmp5, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc3, MVT::Other, Ops3, 4);
}
SDNode *Select_ISD_STORE(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedstore(N.getNode())) {
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectADDRspii(N, N2, CPTmpN2_0, CPTmpN2_1)) {

        // Pattern: (st:isVoid DP:i32:$val, ADDRspii:i32:$mem)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STORE32fi:isVoid DP:i32:$val, ADDRspii:i32:$mem)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_43(N, BF::STORE32fi, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid D16:i16:$val, ADDRspii:i32:$mem)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STORE16fi:isVoid D16:i16:$val, ADDRspii:i32:$mem)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::i16 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_43(N, BF::STORE16fi, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid AnyCC:i32:$val, ADDRspii:i32:$mem)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STORE8fi:isVoid AnyCC:i32:$val, ADDRspii:i32:$mem)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_43(N, BF::STORE8fi, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }

    // Pattern: (st:isVoid (srl:i32 D:i32:$val, 16:i16), PI:i32:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
    // Emits: (STORE16pi:isVoid (EXTRACT_SUBREG:i16 (COPY_TO_REGCLASS:i32 D:i32:$val, D:i32), 2:i32), PI:i32:$ptr)
    // Pattern complexity = 12  cost = 3  size = 0
    if (Predicate_truncstore(N.getNode()) &&
        Predicate_truncstorei16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SRL) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N2 = N.getOperand(2);
            if (N1.getNode()->getValueType(0) == MVT::i32 &&
                N11.getNode()->getValueType(0) == MVT::i16 &&
                N2.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_46(N, TargetInstrInfo::COPY_TO_REGCLASS, TargetInstrInfo::EXTRACT_SUBREG, BF::STORE16pi, MVT::i32, MVT::i16);
              return Result;
            }
          }
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::ADD) {
        SDValue N20 = N2.getOperand(0);
        SDValue N21 = N2.getOperand(1);
        if (N21.getOpcode() == ISD::Constant) {

          // Pattern: (st:isVoid DP:i32:$val, (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_uimm6m4>>:$off))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (STORE32p_uimm6m4:isVoid DP:i32:$val, P:i32:$ptr, (imm:i32):$off)
          // Pattern complexity = 11  cost = 1  size = 0
          if (Predicate_uimm6m4(N21.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_44(N, BF::STORE32p_uimm6m4);
            return Result;
          }

          // Pattern: (st:isVoid DP:i32:$val, (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm18m4>>:$off))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (STORE32p_imm18m4:isVoid DP:i32:$val, P:i32:$ptr, (imm:i32):$off)
          // Pattern complexity = 11  cost = 1  size = 0
          if (Predicate_imm18m4(N21.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_44(N, BF::STORE32p_imm18m4);
            return Result;
          }
        }
      }
    }

    // Pattern: (st:isVoid D:i32:$val, (add:i32 P:i32:$ptr, (imm:i32)<<P:Predicate_imm16>>:$off))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
    // Emits: (STORE8p_imm16:isVoid D:i32:$val, P:i32:$ptr, (imm:i32):$off)
    // Pattern complexity = 11  cost = 1  size = 0
    if (Predicate_truncstore(N.getNode()) &&
        Predicate_truncstorei8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::ADD) {
        SDValue N20 = N2.getOperand(0);
        SDValue N21 = N2.getOperand(1);
        if (N21.getOpcode() == ISD::Constant &&
            Predicate_imm16(N21.getNode()) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_44(N, BF::STORE8p_imm16);
          return Result;
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);

      // Pattern: (st:isVoid DP:i32:$val, P:i32:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STORE32p:isVoid DP:i32:$val, P:i32:$ptr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::i32 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_42(N, BF::STORE32p);
        return Result;
      }

      // Pattern: (st:isVoid D16:i16:$val, PI:i32:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STORE16pi:isVoid D16:i16:$val, PI:i32:$ptr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::i16 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_42(N, BF::STORE16pi);
        return Result;
      }
    }
    if (Predicate_truncstore(N.getNode())) {

      // Pattern: (st:isVoid D:i32:$val, P:i32:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (STORE8p:isVoid D:i32:$val, P:i32:$ptr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_42(N, BF::STORE8p);
          return Result;
        }
      }

      // Pattern: (st:isVoid D:i32:$val, PI:i32:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (STORE16pi:isVoid (EXTRACT_SUBREG:i16 (COPY_TO_REGCLASS:i32 D:i32:$val, D:i32), 1:i32), PI:i32:$ptr)
      // Pattern complexity = 4  cost = 3  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_45(N, TargetInstrInfo::COPY_TO_REGCLASS, TargetInstrInfo::EXTRACT_SUBREG, BF::STORE16pi, MVT::i32, MVT::i16);
          return Result;
        }
      }

      // Pattern: (st:isVoid D16L:i16:$val, P:i32:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (STORE8p:isVoid (INSERT_SUBREG:i32 (IMPLICIT_DEF:i32), (COPY_TO_REGCLASS:i16 D16L:i16:$val, D16L:i16), 1:i32), P:i32:$ptr)
      // Pattern complexity = 4  cost = 4  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N1.getNode()->getValueType(0) == MVT::i16 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_47(N, TargetInstrInfo::IMPLICIT_DEF, TargetInstrInfo::COPY_TO_REGCLASS, TargetInstrInfo::INSERT_SUBREG, BF::STORE8p, MVT::i32, MVT::i16, MVT::i32);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SUB_i16(const SDValue &N) {
  SDNode *Result = Emit_3(N, BF::SUB16, MVT::i16);
  return Result;
}

SDNode *Emit_48(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1);
}
SDNode *Select_ISD_SUB_i32(const SDValue &N) {

  // Pattern: (sub:i32 0:i32, D:i32:$src)
  // Emits: (NEG:i32 D:i32:$src)
  // Pattern complexity = 8  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_48(N, BF::NEG, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (sub:i32 D:i32:$src1, D:i32:$src2)
  // Emits: (SUB:i32 D:i32:$src1, D:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, BF::SUB, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SUBC_i32(const SDValue &N) {
  SDNode *Result = Emit_5(N, BF::SUB, MVT::i32);
  return Result;
}

SDNode *Emit_49(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00);
}
SDNode *Emit_50(const SDValue &N, unsigned Opc0, unsigned Opc1, EVT VT0, EVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1 = CurDAG->getTargetConstant(BF::DRegClassID, MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Select_ISD_TRUNCATE_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (trunc:i16 (ctpop:i32 D:i32:$src))
  // Emits: (ONES:i16 D:i32:$src)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::CTPOP) {
    SDValue N00 = N0.getOperand(0);
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_49(N, BF::ONES, MVT::i16);
      return Result;
    }
  }

  // Pattern: (trunc:i16 D:i32:$src)
  // Emits: (EXTRACT_SUBREG:i16 (COPY_TO_REGCLASS:i32 D:i32:$src, D:i32), 1:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_50(N, TargetInstrInfo::COPY_TO_REGCLASS, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_XOR_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (xor:i32 D:i32:$src, (imm:i32)<<P:Predicate_immAllOnes>>)
      // Emits: (NOT:i32 D:i32:$src)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immAllOnes(N1.getNode())) {
        SDNode *Result = Emit_6(N, BF::NOT, MVT::i32);
        return Result;
      }

      // Pattern: (xor:i32 D:i32:$src1, (imm:i32)<<P:Predicate_uimm5mask>><<X:trailingZeros_xform>>:$src2)
      // Emits: (BITTGL:i32 D:i32:$src1, (trailingZeros_xform:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_uimm5mask(N1.getNode())) {
        SDNode *Result = Emit_25(N, BF::BITTGL, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (xor:i32 D:i32:$src1, D:i32:$src2)
  // Emits: (XOR:i32 D:i32:$src1, D:i32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, BF::XOR, MVT::i32);
  return Result;
}

SDNode *Select_ISD_ZERO_EXTEND_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_9(N, BF::MOVECC_zext, TargetInstrInfo::EXTRACT_SUBREG, MVT::i32, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ZERO_EXTEND_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (zext:i32 D16L:i16:$src)
  // Emits: (MOVEzext:i32 D16L:i16:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_2(N, BF::MOVEzext, MVT::i32);
    return Result;
  }

  // Pattern: (zext:i32 JustCC:i32:$cc)
  // Emits: (MOVECC_zext:i32 JustCC:i32:$cc)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_2(N, BF::MOVECC_zext, MVT::i32);
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
  case BFISD::CALL: {
    return Select_BFISD_CALL(N);
    break;
  }
  case BFISD::RET_FLAG: {
    return Select_BFISD_RET_FLAG(N);
    break;
  }
  case BFISD::Wrapper: {
    switch (NVT) {
    case MVT::i32:
      return Select_BFISD_Wrapper_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADD: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_ADD_i16(N);
    case MVT::i32:
      return Select_ISD_ADD_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADDC_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::AND: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_AND_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::ANY_EXTEND: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_ANY_EXTEND_i16(N);
    case MVT::i32:
      return Select_ISD_ANY_EXTEND_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::BR: {
    return Select_ISD_BR(N);
    break;
  }
  case ISD::BRCOND: {
    return Select_ISD_BRCOND(N);
    break;
  }
  case ISD::BRIND: {
    return Select_ISD_BRIND(N);
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
  case ISD::CTPOP: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_CTPOP_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::Constant: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_Constant_i16(N);
    case MVT::i32:
      return Select_ISD_Constant_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::INTRINSIC_VOID: {
    return Select_ISD_INTRINSIC_VOID(N);
    break;
  }
  case ISD::LOAD: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_LOAD_i16(N);
    case MVT::i32:
      return Select_ISD_LOAD_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::MUL: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_MUL_i16(N);
    case MVT::i32:
      return Select_ISD_MUL_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::MULHS: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_MULHS_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::OR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_OR_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SELECT: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SELECT_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SETCC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SETCC_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SHL: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_SHL_i16(N);
    case MVT::i32:
      return Select_ISD_SHL_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SIGN_EXTEND: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_SIGN_EXTEND_i16(N);
    case MVT::i32:
      return Select_ISD_SIGN_EXTEND_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SIGN_EXTEND_INREG: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_SIGN_EXTEND_INREG_i16(N);
    case MVT::i32:
      return Select_ISD_SIGN_EXTEND_INREG_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRA: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_SRA_i16(N);
    case MVT::i32:
      return Select_ISD_SRA_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRL: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_SRL_i16(N);
    case MVT::i32:
      return Select_ISD_SRL_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::STORE: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_STORE_i32(N);
    default:
      return Select_ISD_STORE(N);
      break;
    }
    break;
  }
  case ISD::SUB: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_SUB_i16(N);
    case MVT::i32:
      return Select_ISD_SUB_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUBC_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::TRUNCATE: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_TRUNCATE_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::XOR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_XOR_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::ZERO_EXTEND: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_ZERO_EXTEND_i16(N);
    case MVT::i32:
      return Select_ISD_ZERO_EXTEND_i32(N);
    default:
      break;
    }
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

