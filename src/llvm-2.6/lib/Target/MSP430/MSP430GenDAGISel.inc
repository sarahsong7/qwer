//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the MSP430 target
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
inline bool Predicate_def8(SDNode *N) {

  return N->getOpcode() != ISD::TRUNCATE &&
         N->getOpcode() != TargetInstrInfo::EXTRACT_SUBREG &&
         N->getOpcode() != ISD::CopyFromReg;

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
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, N0, N1);
}
SDNode *Emit_1(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN11_0, CPTmpN11_1, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, MVT::Other, Ops0, 5);
  ReplaceUses(SDValue(N1.getNode(), 1), SDValue(ResNode, 2));
  return ResNode;
}
SDNode *Emit_2(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, N0, Tmp1);
}
SDNode *Emit_3(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N0 = CurDAG->getMemOperand(cast<MemSDNode>(N0)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN01_0, CPTmpN01_1, LSI_N0, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, MVT::Other, Ops0, 5);
  ReplaceUses(SDValue(N0.getNode(), 1), SDValue(ResNode, 2));
  return ResNode;
}
SDNode *Select_ISD_ADD_i8(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i8 GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (ADD8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_1(N, MSP430::ADD8rm, MVT::i8, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (add:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src1)
    // Emits: (ADD8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_3(N, MSP430::ADD8rm, MVT::i8, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (add:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Emits: (ADD8ri:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_2(N, MSP430::ADD8ri, MVT::i8);
      return Result;
    }
  }

  // Pattern: (add:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (ADD8rr:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, MSP430::ADD8rr, MVT::i8);
  return Result;
}

SDNode *Emit_4(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i16);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, N0, Tmp1);
}
SDNode *Emit_5(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N10);
}
SDNode *Emit_6(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N00);
}
SDNode *Select_ISD_ADD_i16(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i16 GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (ADD16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_1(N, MSP430::ADD16rm, MVT::i16, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (add:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src1)
    // Emits: (ADD16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_3(N, MSP430::ADD16rm, MVT::i16, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == MSP430ISD::Wrapper) {
        SDValue N10 = N1.getOperand(0);

        // Pattern: (add:i16 GR16:i16:$src1, (MSP430Wrapper:i16 (tglobaladdr:i16):$src2))
        // Emits: (ADD16ri:i16 GR16:i16:$src1, (tglobaladdr:i16):$src2)
        // Pattern complexity = 9  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetGlobalAddress) {
          SDNode *Result = Emit_5(N, MSP430::ADD16ri, MVT::i16);
          return Result;
        }

        // Pattern: (add:i16 GR16:i16:$src1, (MSP430Wrapper:i16 (texternalsym:i16):$src2))
        // Emits: (ADD16ri:i16 GR16:i16:$src1, (texternalsym:i16):$src2)
        // Pattern complexity = 9  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetExternalSymbol) {
          SDNode *Result = Emit_5(N, MSP430::ADD16ri, MVT::i16);
          return Result;
        }
      }
    }
    if (N0.getOpcode() == MSP430ISD::Wrapper) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i16 (MSP430Wrapper:i16 (tglobaladdr:i16):$src2), GR16:i16:$src1)
      // Emits: (ADD16ri:i16 GR16:i16:$src1, (tglobaladdr:i16):$src2)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetGlobalAddress) {
        SDNode *Result = Emit_6(N, MSP430::ADD16ri, MVT::i16);
        return Result;
      }

      // Pattern: (add:i16 (MSP430Wrapper:i16 (texternalsym:i16):$src2), GR16:i16:$src1)
      // Emits: (ADD16ri:i16 GR16:i16:$src1, (texternalsym:i16):$src2)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetExternalSymbol) {
        SDNode *Result = Emit_6(N, MSP430::ADD16ri, MVT::i16);
        return Result;
      }
    }

    // Pattern: (add:i16 GR16:i16:$src1, (imm:i16):$src2)
    // Emits: (ADD16ri:i16 GR16:i16:$src1, (imm:i16):$src2)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_4(N, MSP430::ADD16ri, MVT::i16);
      return Result;
    }
  }

  // Pattern: (add:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (ADD16rr:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, MSP430::ADD16rr, MVT::i16);
  return Result;
}

SDNode *Emit_7(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_8(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN11_0, CPTmpN11_1, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, MVT::Flag, Ops0, 5);
  SDValue InFlag(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 1)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_9(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_10(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N0 = CurDAG->getMemOperand(cast<MemSDNode>(N0)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN01_0, CPTmpN01_1, LSI_N0, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, MVT::Flag, Ops0, 5);
  SDValue InFlag(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N0.getNode(), 1),
    SDValue(N.getNode(), 1)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_ISD_ADDC_i8(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (addc:i8 GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (ADD8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_8(N, MSP430::ADD8rm, MVT::i8, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (addc:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src1)
    // Emits: (ADD8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_10(N, MSP430::ADD8rm, MVT::i8, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (addc:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Emits: (ADD8ri:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_9(N, MSP430::ADD8ri, MVT::i8);
      return Result;
    }
  }

  // Pattern: (addc:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (ADD8rr:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_7(N, MSP430::ADD8rr, MVT::i8);
  return Result;
}

SDNode *Emit_11(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i16);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDC_i16(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (addc:i16 GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (ADD16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_8(N, MSP430::ADD16rm, MVT::i16, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (addc:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src1)
    // Emits: (ADD16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_10(N, MSP430::ADD16rm, MVT::i16, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (addc:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Emits: (ADD16ri:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_11(N, MSP430::ADD16ri, MVT::i16);
      return Result;
    }
  }

  // Pattern: (addc:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (ADD16rr:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_7(N, MSP430::ADD16rr, MVT::i16);
  return Result;
}

SDNode *Emit_12(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, MVT::Flag, N0, N1, InFlag);
  InFlag = SDValue(ResNode, 2);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_13(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, MVT::Flag, N0, Tmp1, InFlag);
  InFlag = SDValue(ResNode, 2);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_14(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN11_0, CPTmpN11_1, LSI_N1, Chain1, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 6);
  InFlag = SDValue(ResNode, 3);
  const SDValue Froms[] = {
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 1)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 2),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_15(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDValue LSI_N0 = CurDAG->getMemOperand(cast<MemSDNode>(N0)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN01_0, CPTmpN01_1, LSI_N0, Chain0, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 6);
  InFlag = SDValue(ResNode, 3);
  const SDValue Froms[] = {
    SDValue(N0.getNode(), 1),
    SDValue(N.getNode(), 1)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 2),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_ISD_ADDE_i8(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (adde:i8 GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (ADC8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_14(N, MSP430::ADC8rm, MVT::i8, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (adde:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src1)
    // Emits: (ADC8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_15(N, MSP430::ADC8rm, MVT::i8, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (adde:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Emits: (ADC8ri:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_13(N, MSP430::ADC8ri, MVT::i8);
      return Result;
    }
  }

  // Pattern: (adde:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (ADC8rr:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, MSP430::ADC8rr, MVT::i8);
  return Result;
}

SDNode *Emit_16(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i16);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, MVT::Flag, N0, Tmp1, InFlag);
  InFlag = SDValue(ResNode, 2);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDE_i16(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (adde:i16 GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (ADC16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_14(N, MSP430::ADC16rm, MVT::i16, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (adde:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src1)
    // Emits: (ADC16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_15(N, MSP430::ADC16rm, MVT::i16, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (adde:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Emits: (ADC16ri:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_16(N, MSP430::ADC16ri, MVT::i16);
      return Result;
    }
  }

  // Pattern: (adde:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (ADC16rr:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, MSP430::ADC16rr, MVT::i16);
  return Result;
}

SDNode *Select_ISD_AND_i8(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i8 GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (AND8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_1(N, MSP430::AND8rm, MVT::i8, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (and:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src1)
    // Emits: (AND8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_3(N, MSP430::AND8rm, MVT::i8, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (and:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Emits: (AND8ri:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_2(N, MSP430::AND8ri, MVT::i8);
      return Result;
    }
  }

  // Pattern: (and:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (AND8rr:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, MSP430::AND8rr, MVT::i8);
  return Result;
}

SDNode *Select_ISD_AND_i16(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i16 GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (AND16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_1(N, MSP430::AND16rm, MVT::i16, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (and:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src1)
    // Emits: (AND16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_3(N, MSP430::AND16rm, MVT::i16, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (and:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Emits: (AND16ri:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_4(N, MSP430::AND16ri, MVT::i16);
      return Result;
    }
  }

  // Pattern: (and:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (AND16rr:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, MSP430::AND16rr, MVT::i16);
  return Result;
}

SDNode *Emit_17(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN0_0, SDValue &CPTmpN0_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_ANY_EXTEND_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue CPTmpN0_0;
  SDValue CPTmpN0_1;
  if (SelectAddr(N, N0, CPTmpN0_0, CPTmpN0_1)) {
    SDNode *Result = Emit_17(N, MSP430::MOVZX16rr8, MVT::i16, CPTmpN0_0, CPTmpN0_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_18(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_18(N, MSP430::JMP);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_19(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_BSWAP_i16(const SDValue &N) {
  SDNode *Result = Emit_19(N, MSP430::SWPB16r, MVT::i16);
  return Result;
}

SDNode *Emit_20(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
      SDNode *Result = Emit_20(N, MSP430::ADJCALLSTACKUP);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_21(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
    SDNode *Result = Emit_21(N, MSP430::ADJCALLSTACKDOWN);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_22(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i8);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Select_ISD_Constant_i8(const SDValue &N) {
  SDNode *Result = Emit_22(N, MSP430::MOV8ri, MVT::i8);
  return Result;
}

SDNode *Emit_23(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i16);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Select_ISD_Constant_i16(const SDValue &N) {
  SDNode *Result = Emit_23(N, MSP430::MOV16ri, MVT::i16);
  return Result;
}

SDNode *Emit_24(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_LOAD_i8(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode()) &&
      Predicate_load(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_24(N, MSP430::MOV8rm, MVT::i8, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_i16(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {

    // Pattern: (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (MOV16rm:i16 addr:i16:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_24(N, MSP430::MOV16rm, MVT::i16, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (MOVZX16rm8:i16 addr:i16:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_24(N, MSP430::MOVZX16rm8, MVT::i16, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
    // Emits: (MOVZX16rm8:i16 addr:i16:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_extload(N.getNode()) &&
        Predicate_extloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_24(N, MSP430::MOVZX16rm8, MVT::i16, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_25(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_26(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_27(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN11_0, CPTmpN11_1, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
  ReplaceUses(SDValue(N1.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Emit_28(const SDValue &N, unsigned Opc0, EVT VT0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N0 = CurDAG->getMemOperand(cast<MemSDNode>(N0)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN01_0, CPTmpN01_1, LSI_N0, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
  ReplaceUses(SDValue(N0.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Select_ISD_OR_i8(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (or:i8 GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (OR8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_27(N, MSP430::OR8rm, MVT::i8, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (or:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src1)
    // Emits: (OR8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_28(N, MSP430::OR8rm, MVT::i8, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (or:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Emits: (OR8ri:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_26(N, MSP430::OR8ri, MVT::i8);
      return Result;
    }
  }

  // Pattern: (or:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (OR8rr:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_25(N, MSP430::OR8rr, MVT::i8);
  return Result;
}

SDNode *Emit_29(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i16);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ISD_OR_i16(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (or:i16 GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (OR16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_27(N, MSP430::OR16rm, MVT::i16, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (or:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src1)
    // Emits: (OR16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_28(N, MSP430::OR16rm, MVT::i16, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (or:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Emits: (OR16ri:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_29(N, MSP430::OR16ri, MVT::i16);
      return Result;
    }
  }

  // Pattern: (or:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (OR16rr:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_25(N, MSP430::OR16rr, MVT::i16);
  return Result;
}

SDNode *Emit_30(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, N0);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_30(N, MSP430::SEXT16r, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_31(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, Tmp1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_32(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i16);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, Tmp1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_33(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, N1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_34(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, N11, LSI_N, LSI_N10, Chain10 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, Ops0, 6);
  Chain10 = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_35(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i8);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, Tmp1, LSI_N, LSI_N10, Chain10 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, Ops0, 6);
  Chain10 = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_36(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i16);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, Tmp1, LSI_N, LSI_N10, Chain10 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, Ops0, 6);
  Chain10 = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_37(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  if (Chain10.getNode() != N11.getNode()) {
    InChains.push_back(Chain10);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1, LSI_N, LSI_N10, LSI_N11, Chain11 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, Ops0, 8);
  Chain11 = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N11.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    SDValue(ResNode, 1),
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_38(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue InFlag = N1.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, N11, LSI_N, LSI_N10, Chain10, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 7);
  Chain10 = SDValue(ResNode, 1);
  InFlag = SDValue(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag,
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_39(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i8);
  SDValue InFlag = N1.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, Tmp1, LSI_N, LSI_N10, Chain10, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 7);
  Chain10 = SDValue(ResNode, 1);
  InFlag = SDValue(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag,
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_40(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i16);
  SDValue InFlag = N1.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, Tmp1, LSI_N, LSI_N10, Chain10, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 7);
  Chain10 = SDValue(ResNode, 1);
  InFlag = SDValue(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag,
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_41(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  if (Chain10.getNode() != N11.getNode()) {
    InChains.push_back(Chain10);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue InFlag = N1.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1, LSI_N, LSI_N10, LSI_N11, Chain11, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 9);
  Chain11 = SDValue(ResNode, 1);
  InFlag = SDValue(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N11.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    SDValue(ResNode, 1),
    InFlag,
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 4);
  return ResNode;
}
SDNode *Emit_42(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, N10, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_43(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, N11, LSI_N, LSI_N10, Chain10 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 6);
  Chain10 = SDValue(ResNode, 0);
  SDValue InFlag(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    InFlag,
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_44(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  if (Chain10.getNode() != N11.getNode()) {
    InChains.push_back(Chain10);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1, LSI_N, LSI_N10, LSI_N11, Chain11 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 8);
  Chain11 = SDValue(ResNode, 0);
  SDValue InFlag(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N11.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    SDValue(ResNode, 0),
    InFlag,
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 4);
  return ResNode;
}
SDNode *Emit_45(const SDValue &N, unsigned Opc0, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N11.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { CPTmpN111_0, CPTmpN111_1, N10, LSI_N, LSI_N11, Chain11 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, Ops0, 6);
  Chain11 = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N11.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_46(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  if (Chain10.getNode() != N11.getNode()) {
    InChains.push_back(Chain10);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { CPTmpN111_0, CPTmpN111_1, CPTmpN101_0, CPTmpN101_1, LSI_N, LSI_N10, LSI_N11, Chain11 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, Ops0, 8);
  Chain11 = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N11.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    SDValue(ResNode, 1),
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_47(const SDValue &N, unsigned Opc0, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N11.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue InFlag = N1.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { CPTmpN111_0, CPTmpN111_1, N10, LSI_N, LSI_N11, Chain11, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 7);
  Chain11 = SDValue(ResNode, 1);
  InFlag = SDValue(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N11.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag,
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_48(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  if (Chain10.getNode() != N11.getNode()) {
    InChains.push_back(Chain10);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue InFlag = N1.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { CPTmpN111_0, CPTmpN111_1, CPTmpN101_0, CPTmpN101_1, LSI_N, LSI_N10, LSI_N11, Chain11, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 9);
  Chain11 = SDValue(ResNode, 1);
  InFlag = SDValue(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N11.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    SDValue(ResNode, 1),
    InFlag,
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 4);
  return ResNode;
}
SDNode *Emit_49(const SDValue &N, unsigned Opc0, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N11.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { CPTmpN111_0, CPTmpN111_1, N10, LSI_N, LSI_N11, Chain11 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 6);
  Chain11 = SDValue(ResNode, 0);
  SDValue InFlag(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N11.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    InFlag,
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_50(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0, SDValue &CPTmpN101_1, SDValue &CPTmpN111_0, SDValue &CPTmpN111_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  if (Chain10.getNode() != N11.getNode()) {
    InChains.push_back(Chain10);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue LSI_N10 = CurDAG->getMemOperand(cast<MemSDNode>(N10)->getMemOperand());
  SDValue LSI_N11 = CurDAG->getMemOperand(cast<MemSDNode>(N11)->getMemOperand());
  SDValue Ops0[] = { CPTmpN111_0, CPTmpN111_1, CPTmpN101_0, CPTmpN101_1, LSI_N, LSI_N10, LSI_N11, Chain11 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 8);
  Chain11 = SDValue(ResNode, 0);
  SDValue InFlag(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N11.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    SDValue(ResNode, 0),
    InFlag,
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 4);
  return ResNode;
}
SDNode *Select_ISD_STORE(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedstore(N.getNode()) &&
        Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N101 == N2) {

                      // Pattern: (st:isVoid (add:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADD8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_37(N, MSP430::ADD8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (add:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADD16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_37(N, MSP430::ADD16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADDE &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N101 == N2) {

                      // Pattern: (st:isVoid (adde:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADC8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_41(N, MSP430::ADC8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (adde:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADC16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_41(N, MSP430::ADC16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::AND &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N101 == N2) {

                      // Pattern: (st:isVoid (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (AND8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_37(N, MSP430::AND8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (AND16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_37(N, MSP430::AND16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::XOR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N101 == N2) {

                      // Pattern: (st:isVoid (xor:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (XOR8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_37(N, MSP430::XOR8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (xor:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (XOR16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_37(N, MSP430::XOR16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::SUB &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N101 == N2) {

                      // Pattern: (st:isVoid (sub:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (SUB8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_37(N, MSP430::SUB8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (sub:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (SUB16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_37(N, MSP430::SUB16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::SUBE &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N101 == N2) {

                      // Pattern: (st:isVoid (sube:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (SBC8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_41(N, MSP430::SBC8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (sube:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (SBC16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_41(N, MSP430::SBC16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::OR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N101 == N2) {

                      // Pattern: (st:isVoid (or:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (OR8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_37(N, MSP430::OR8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (or:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (OR16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_37(N, MSP430::OR16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADDC &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N101 == N2) {

                      // Pattern: (st:isVoid (addc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADD16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_44(N, MSP430::ADD16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (addc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADD8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_44(N, MSP430::ADD8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::SUBC &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N101 == N2) {

                      // Pattern: (st:isVoid (subc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (SUB16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_44(N, MSP430::SUB16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (subc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (SUB8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_44(N, MSP430::SUB8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADD &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N111 == N2) {

                      // Pattern: (st:isVoid (add:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADD8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_46(N, MSP430::ADD8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (add:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADD16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_46(N, MSP430::ADD16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADDE &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N111 == N2) {

                      // Pattern: (st:isVoid (adde:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADC8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_48(N, MSP430::ADC8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (adde:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADC16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_48(N, MSP430::ADC16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::AND &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N111 == N2) {

                      // Pattern: (st:isVoid (and:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (AND8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_46(N, MSP430::AND8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (and:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (AND16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_46(N, MSP430::AND16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::XOR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N111 == N2) {

                      // Pattern: (st:isVoid (xor:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (XOR8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_46(N, MSP430::XOR8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (xor:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (XOR16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_46(N, MSP430::XOR16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::OR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N111 == N2) {

                      // Pattern: (st:isVoid (or:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (OR8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_46(N, MSP430::OR8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (or:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (OR16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_46(N, MSP430::OR16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADDC &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::LOAD &&
                  N11.hasOneUse() &&
                  IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
                  (Chain10.getNode() == N11.getNode() || IsChainCompatible(Chain10.getNode(), N11.getNode()))) {
                SDValue Chain11 = N11.getOperand(0);
                if (Predicate_unindexedload(N11.getNode()) &&
                    Predicate_load(N11.getNode())) {
                  SDValue N111 = N11.getOperand(1);
                  SDValue CPTmpN111_0;
                  SDValue CPTmpN111_1;
                  if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
                    SDValue N2 = N.getOperand(2);
                    if (N111 == N2) {

                      // Pattern: (st:isVoid (addc:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADD16mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i16) {
                        SDNode *Result = Emit_50(N, MSP430::ADD16mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }

                      // Pattern: (st:isVoid (addc:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                      // Emits: (ADD8mm:isVoid addr:i16:$dst, addr:i16:$src)
                      // Pattern complexity = 42  cost = 1  size = 0
                      if (N1.getNode()->getValueType(0) == MVT::i8) {
                        SDNode *Result = Emit_50(N, MSP430::ADD8mm, CPTmpN101_0, CPTmpN101_1, CPTmpN111_0, CPTmpN111_1);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADD &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::Constant) {
                SDValue N2 = N.getOperand(2);
                if (N101 == N2) {

                  // Pattern: (st:isVoid (add:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (ADD8mi:isVoid addr:i16:$dst, (imm:i8):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i8) {
                    SDNode *Result = Emit_35(N, MSP430::ADD8mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }

                  // Pattern: (st:isVoid (add:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (ADD16mi:isVoid addr:i16:$dst, (imm:i16):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i16) {
                    SDNode *Result = Emit_36(N, MSP430::ADD16mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADDE &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::Constant) {
                SDValue N2 = N.getOperand(2);
                if (N101 == N2) {

                  // Pattern: (st:isVoid (adde:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (ADC8mi:isVoid addr:i16:$dst, (imm:i8):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i8) {
                    SDNode *Result = Emit_39(N, MSP430::ADC8mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }

                  // Pattern: (st:isVoid (adde:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (ADC16mi:isVoid addr:i16:$dst, (imm:i16):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i16) {
                    SDNode *Result = Emit_40(N, MSP430::ADC16mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::AND &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::Constant) {
                SDValue N2 = N.getOperand(2);
                if (N101 == N2) {

                  // Pattern: (st:isVoid (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (AND8mi:isVoid addr:i16:$dst, (imm:i8):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i8) {
                    SDNode *Result = Emit_35(N, MSP430::AND8mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }

                  // Pattern: (st:isVoid (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (AND16mi:isVoid addr:i16:$dst, (imm:i16):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i16) {
                    SDNode *Result = Emit_36(N, MSP430::AND16mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::XOR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::Constant) {
                SDValue N2 = N.getOperand(2);
                if (N101 == N2) {

                  // Pattern: (st:isVoid (xor:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (XOR8mi:isVoid addr:i16:$dst, (imm:i8):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i8) {
                    SDNode *Result = Emit_35(N, MSP430::XOR8mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }

                  // Pattern: (st:isVoid (xor:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (XOR16mi:isVoid addr:i16:$dst, (imm:i16):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i16) {
                    SDNode *Result = Emit_36(N, MSP430::XOR16mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::SUB &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::Constant) {
                SDValue N2 = N.getOperand(2);
                if (N101 == N2) {

                  // Pattern: (st:isVoid (sub:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (SUB8mi:isVoid addr:i16:$dst, (imm:i8):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i8) {
                    SDNode *Result = Emit_35(N, MSP430::SUB8mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }

                  // Pattern: (st:isVoid (sub:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (SUB16mi:isVoid addr:i16:$dst, (imm:i16):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i16) {
                    SDNode *Result = Emit_36(N, MSP430::SUB16mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::SUBE &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::Constant) {
                SDValue N2 = N.getOperand(2);
                if (N101 == N2) {

                  // Pattern: (st:isVoid (sube:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (SBC8mi:isVoid addr:i16:$dst, (imm:i8):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i8) {
                    SDNode *Result = Emit_39(N, MSP430::SBC8mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }

                  // Pattern: (st:isVoid (sube:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (SBC16mi:isVoid addr:i16:$dst, (imm:i16):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i16) {
                    SDNode *Result = Emit_40(N, MSP430::SBC16mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::OR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::Constant) {
                SDValue N2 = N.getOperand(2);
                if (N101 == N2) {

                  // Pattern: (st:isVoid (or:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (OR8mi:isVoid addr:i16:$dst, (imm:i8):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i8) {
                    SDNode *Result = Emit_35(N, MSP430::OR8mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }

                  // Pattern: (st:isVoid (or:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                  // Emits: (OR16mi:isVoid addr:i16:$dst, (imm:i16):$src)
                  // Pattern complexity = 32  cost = 1  size = 0
                  if (N1.getNode()->getValueType(0) == MVT::i16) {
                    SDNode *Result = Emit_36(N, MSP430::OR16mi, CPTmpN101_0, CPTmpN101_1);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADD &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N101 == N2) {

                // Pattern: (st:isVoid (add:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADD8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_34(N, MSP430::ADD8mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }

                // Pattern: (st:isVoid (add:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADD16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_34(N, MSP430::ADD16mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADDE &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N101 == N2) {

                // Pattern: (st:isVoid (adde:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADC8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_38(N, MSP430::ADC8mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }

                // Pattern: (st:isVoid (adde:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADC16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_38(N, MSP430::ADC16mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::AND &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N101 == N2) {

                // Pattern: (st:isVoid (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (AND8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_34(N, MSP430::AND8mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }

                // Pattern: (st:isVoid (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (AND16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_34(N, MSP430::AND16mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::XOR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N101 == N2) {

                // Pattern: (st:isVoid (xor:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (XOR8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_34(N, MSP430::XOR8mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }

                // Pattern: (st:isVoid (xor:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (XOR16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_34(N, MSP430::XOR16mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::SUB &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N101 == N2) {

                // Pattern: (st:isVoid (sub:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (SUB8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_34(N, MSP430::SUB8mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }

                // Pattern: (st:isVoid (sub:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (SUB16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_34(N, MSP430::SUB16mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::SUBE &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N101 == N2) {

                // Pattern: (st:isVoid (sube:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (SBC8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_38(N, MSP430::SBC8mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }

                // Pattern: (st:isVoid (sube:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (SBC16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_38(N, MSP430::SBC16mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::OR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N101 == N2) {

                // Pattern: (st:isVoid (or:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (OR8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_34(N, MSP430::OR8mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }

                // Pattern: (st:isVoid (or:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (OR16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_34(N, MSP430::OR16mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADDC &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N101 == N2) {

                // Pattern: (st:isVoid (addc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADD16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_43(N, MSP430::ADD16mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }

                // Pattern: (st:isVoid (addc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADD8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_43(N, MSP430::ADD8mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::SUBC &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::LOAD &&
            N10.hasOneUse() &&
            IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
          SDValue Chain10 = N10.getOperand(0);
          if (Predicate_unindexedload(N10.getNode()) &&
              Predicate_load(N10.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue CPTmpN101_0;
            SDValue CPTmpN101_1;
            if (SelectAddr(N, N101, CPTmpN101_0, CPTmpN101_1)) {
              SDValue N11 = N1.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N101 == N2) {

                // Pattern: (st:isVoid (subc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (SUB16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_43(N, MSP430::SUB16mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }

                // Pattern: (st:isVoid (subc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (SUB8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_43(N, MSP430::SUB8mr, CPTmpN101_0, CPTmpN101_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADD &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::LOAD &&
            N11.hasOneUse() &&
            IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
          SDValue Chain11 = N11.getOperand(0);
          if (Predicate_unindexedload(N11.getNode()) &&
              Predicate_load(N11.getNode())) {
            SDValue N111 = N11.getOperand(1);
            SDValue CPTmpN111_0;
            SDValue CPTmpN111_1;
            if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
              SDValue N2 = N.getOperand(2);
              if (N111 == N2) {

                // Pattern: (st:isVoid (add:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADD8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_45(N, MSP430::ADD8mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }

                // Pattern: (st:isVoid (add:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADD16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_45(N, MSP430::ADD16mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADDE &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::LOAD &&
            N11.hasOneUse() &&
            IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
          SDValue Chain11 = N11.getOperand(0);
          if (Predicate_unindexedload(N11.getNode()) &&
              Predicate_load(N11.getNode())) {
            SDValue N111 = N11.getOperand(1);
            SDValue CPTmpN111_0;
            SDValue CPTmpN111_1;
            if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
              SDValue N2 = N.getOperand(2);
              if (N111 == N2) {

                // Pattern: (st:isVoid (adde:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADC8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_47(N, MSP430::ADC8mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }

                // Pattern: (st:isVoid (adde:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADC16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_47(N, MSP430::ADC16mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::AND &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::LOAD &&
            N11.hasOneUse() &&
            IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
          SDValue Chain11 = N11.getOperand(0);
          if (Predicate_unindexedload(N11.getNode()) &&
              Predicate_load(N11.getNode())) {
            SDValue N111 = N11.getOperand(1);
            SDValue CPTmpN111_0;
            SDValue CPTmpN111_1;
            if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
              SDValue N2 = N.getOperand(2);
              if (N111 == N2) {

                // Pattern: (st:isVoid (and:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (AND8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_45(N, MSP430::AND8mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }

                // Pattern: (st:isVoid (and:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (AND16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_45(N, MSP430::AND16mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::XOR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::LOAD &&
            N11.hasOneUse() &&
            IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
          SDValue Chain11 = N11.getOperand(0);
          if (Predicate_unindexedload(N11.getNode()) &&
              Predicate_load(N11.getNode())) {
            SDValue N111 = N11.getOperand(1);
            SDValue CPTmpN111_0;
            SDValue CPTmpN111_1;
            if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
              SDValue N2 = N.getOperand(2);
              if (N111 == N2) {

                // Pattern: (st:isVoid (xor:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (XOR8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_45(N, MSP430::XOR8mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }

                // Pattern: (st:isVoid (xor:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (XOR16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_45(N, MSP430::XOR16mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::OR &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::LOAD &&
            N11.hasOneUse() &&
            IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
          SDValue Chain11 = N11.getOperand(0);
          if (Predicate_unindexedload(N11.getNode()) &&
              Predicate_load(N11.getNode())) {
            SDValue N111 = N11.getOperand(1);
            SDValue CPTmpN111_0;
            SDValue CPTmpN111_1;
            if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
              SDValue N2 = N.getOperand(2);
              if (N111 == N2) {

                // Pattern: (st:isVoid (or:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (OR8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_45(N, MSP430::OR8mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }

                // Pattern: (st:isVoid (or:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (OR16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_45(N, MSP430::OR16mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N1.getOpcode() == ISD::ADDC &&
          N1.hasOneUse()) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::LOAD &&
            N11.hasOneUse() &&
            IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
            (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
          SDValue Chain11 = N11.getOperand(0);
          if (Predicate_unindexedload(N11.getNode()) &&
              Predicate_load(N11.getNode())) {
            SDValue N111 = N11.getOperand(1);
            SDValue CPTmpN111_0;
            SDValue CPTmpN111_1;
            if (SelectAddr(N, N111, CPTmpN111_0, CPTmpN111_1)) {
              SDValue N2 = N.getOperand(2);
              if (N111 == N2) {

                // Pattern: (st:isVoid (addc:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADD16mr:isVoid addr:i16:$dst, GR16:i16:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i16) {
                  SDNode *Result = Emit_49(N, MSP430::ADD16mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }

                // Pattern: (st:isVoid (addc:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
                // Emits: (ADD8mr:isVoid addr:i16:$dst, GR8:i8:$src)
                // Pattern complexity = 29  cost = 1  size = 0
                if (N1.getNode()->getValueType(0) == MVT::i8) {
                  SDNode *Result = Emit_49(N, MSP430::ADD8mr, CPTmpN111_0, CPTmpN111_1);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedstore(N.getNode()) &&
      Predicate_store(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == MSP430ISD::Wrapper) {
      SDValue N10 = N1.getOperand(0);

      // Pattern: (st:isVoid (MSP430Wrapper:i16 (tglobaladdr:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (MOV16mi:isVoid addr:i16:$dst, (tglobaladdr:i16):$src)
      // Pattern complexity = 19  cost = 1  size = 0
      if (N10.getOpcode() == ISD::TargetGlobalAddress) {
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i16) {
          SDNode *Result = Emit_42(N, MSP430::MOV16mi, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }

      // Pattern: (st:isVoid (MSP430Wrapper:i16 (texternalsym:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (MOV16mi:isVoid addr:i16:$dst, (texternalsym:i16):$src)
      // Pattern complexity = 19  cost = 1  size = 0
      if (N10.getOpcode() == ISD::TargetExternalSymbol) {
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i16) {
          SDNode *Result = Emit_42(N, MSP430::MOV16mi, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
    if (N1.getOpcode() == ISD::Constant) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1)) {

        // Pattern: (st:isVoid (imm:i8):$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (MOV8mi:isVoid addr:i16:$dst, (imm:i8):$src)
        // Pattern complexity = 16  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::i8) {
          SDNode *Result = Emit_31(N, MSP430::MOV8mi, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid (imm:i16):$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (MOV16mi:isVoid addr:i16:$dst, (imm:i16):$src)
        // Pattern complexity = 16  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::i16) {
          SDNode *Result = Emit_32(N, MSP430::MOV16mi, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
    SDValue N2 = N.getOperand(2);
    SDValue CPTmpN2_0;
    SDValue CPTmpN2_1;
    if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1)) {

      // Pattern: (st:isVoid GR8:i8:$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (MOV8mr:isVoid addr:i16:$dst, GR8:i8:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::i8) {
        SDNode *Result = Emit_33(N, MSP430::MOV8mr, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }

      // Pattern: (st:isVoid GR16:i16:$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (MOV16mr:isVoid addr:i16:$dst, GR16:i16:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::i16) {
        SDNode *Result = Emit_33(N, MSP430::MOV16mr, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SUB_i8(const SDValue &N) {

  // Pattern: (sub:i8 GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (SUB8rm:i8 GR8:i8:$src1, addr:i16:$src2)
  // Pattern complexity = 16  cost = 1  size = 0
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
        if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
          SDNode *Result = Emit_1(N, MSP430::SUB8rm, MVT::i8, CPTmpN11_0, CPTmpN11_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (sub:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Emits: (SUB8ri:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_2(N, MSP430::SUB8ri, MVT::i8);
      return Result;
    }
  }

  // Pattern: (sub:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (SUB8rr:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, MSP430::SUB8rr, MVT::i8);
  return Result;
}

SDNode *Select_ISD_SUB_i16(const SDValue &N) {

  // Pattern: (sub:i16 GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (SUB16rm:i16 GR16:i16:$src1, addr:i16:$src2)
  // Pattern complexity = 16  cost = 1  size = 0
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
        if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
          SDNode *Result = Emit_1(N, MSP430::SUB16rm, MVT::i16, CPTmpN11_0, CPTmpN11_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (sub:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Emits: (SUB16ri:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_4(N, MSP430::SUB16ri, MVT::i16);
      return Result;
    }
  }

  // Pattern: (sub:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (SUB16rr:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, MSP430::SUB16rr, MVT::i16);
  return Result;
}

SDNode *Select_ISD_SUBC_i8(const SDValue &N) {

  // Pattern: (subc:i8 GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (SUB8rm:i8 GR8:i8:$src1, addr:i16:$src2)
  // Pattern complexity = 16  cost = 1  size = 0
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
        if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
          SDNode *Result = Emit_8(N, MSP430::SUB8rm, MVT::i8, CPTmpN11_0, CPTmpN11_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (subc:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Emits: (SUB8ri:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_9(N, MSP430::SUB8ri, MVT::i8);
      return Result;
    }
  }

  // Pattern: (subc:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (SUB8rr:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_7(N, MSP430::SUB8rr, MVT::i8);
  return Result;
}

SDNode *Select_ISD_SUBC_i16(const SDValue &N) {

  // Pattern: (subc:i16 GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (SUB16rm:i16 GR16:i16:$src1, addr:i16:$src2)
  // Pattern complexity = 16  cost = 1  size = 0
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
        if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
          SDNode *Result = Emit_8(N, MSP430::SUB16rm, MVT::i16, CPTmpN11_0, CPTmpN11_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (subc:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Emits: (SUB16ri:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_11(N, MSP430::SUB16ri, MVT::i16);
      return Result;
    }
  }

  // Pattern: (subc:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (SUB16rr:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_7(N, MSP430::SUB16rr, MVT::i16);
  return Result;
}

SDNode *Select_ISD_SUBE_i8(const SDValue &N) {

  // Pattern: (sube:i8 GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (SBC8rm:i8 GR8:i8:$src1, addr:i16:$src2)
  // Pattern complexity = 16  cost = 1  size = 0
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
        if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
          SDNode *Result = Emit_14(N, MSP430::SBC8rm, MVT::i8, CPTmpN11_0, CPTmpN11_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (sube:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Emits: (SBC8ri:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_13(N, MSP430::SBC8ri, MVT::i8);
      return Result;
    }
  }

  // Pattern: (sube:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (SBC8rr:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, MSP430::SBC8rr, MVT::i8);
  return Result;
}

SDNode *Select_ISD_SUBE_i16(const SDValue &N) {

  // Pattern: (sube:i16 GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (SBC16rm:i16 GR16:i16:$src1, addr:i16:$src2)
  // Pattern complexity = 16  cost = 1  size = 0
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
        if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
          SDNode *Result = Emit_14(N, MSP430::SBC16rm, MVT::i16, CPTmpN11_0, CPTmpN11_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (sube:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Emits: (SBC16ri:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_16(N, MSP430::SBC16ri, MVT::i16);
      return Result;
    }
  }

  // Pattern: (sube:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (SBC16rr:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_12(N, MSP430::SBC16rr, MVT::i16);
  return Result;
}

SDNode *Emit_51(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ISD_TRUNCATE_i8(const SDValue &N) {
  SDNode *Result = Emit_51(N, TargetInstrInfo::EXTRACT_SUBREG, MVT::i8);
  return Result;
}

SDNode *Select_ISD_XOR_i8(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i8 GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (XOR8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_1(N, MSP430::XOR8rm, MVT::i8, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (xor:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src1)
    // Emits: (XOR8rm:i8 GR8:i8:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_3(N, MSP430::XOR8rm, MVT::i8, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (xor:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Emits: (XOR8ri:i8 GR8:i8:$src1, (imm:i8):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_2(N, MSP430::XOR8ri, MVT::i8);
      return Result;
    }
  }

  // Pattern: (xor:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (XOR8rr:i8 GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, MSP430::XOR8rr, MVT::i8);
  return Result;
}

SDNode *Select_ISD_XOR_i16(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i16 GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
    // Emits: (XOR16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
            SDNode *Result = Emit_1(N, MSP430::XOR16rm, MVT::i16, CPTmpN11_0, CPTmpN11_1);
            return Result;
          }
        }
      }
    }

    // Pattern: (xor:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src1)
    // Emits: (XOR16rm:i16 GR16:i16:$src1, addr:i16:$src2)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDNode *Result = Emit_3(N, MSP430::XOR16rm, MVT::i16, CPTmpN01_0, CPTmpN01_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (xor:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Emits: (XOR16ri:i16 GR16:i16:$src1, (imm:i16):$src2)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_4(N, MSP430::XOR16ri, MVT::i16);
      return Result;
    }
  }

  // Pattern: (xor:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (XOR16rr:i16 GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, MSP430::XOR16rr, MVT::i16);
  return Result;
}

SDNode *Emit_52(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x0ULL, MVT::i16);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, N0, Tmp2);
}
SDNode *Select_ISD_ZERO_EXTEND_i16(const SDValue &N) {

  // Pattern: (zext:i16 GR8:i8<<P:Predicate_def8>>:$src)
  // Emits: (SUBREG_TO_REG:i16 0:i16, GR8:i8:$src, 1:i32)
  // Pattern complexity = 4  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (Predicate_def8(N0.getNode())) {
      SDNode *Result = Emit_52(N, TargetInstrInfo::SUBREG_TO_REG, MVT::i16);
      return Result;
    }
  }

  // Pattern: (zext:i16 GR8:i8:$src)
  // Emits: (MOVZX16rr8:i16 GR8:i8:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_19(N, MSP430::MOVZX16rr8, MVT::i16);
  return Result;
}

SDNode *Emit_53(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { N1, Tmp1, Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Select_MSP430ISD_BR_CC(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_53(N, MSP430::JCC);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_54(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i16);
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
SDNode *Emit_55(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
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
SDNode *Emit_56(const SDValue &N, unsigned Opc0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N1.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain1);
  Chain1 = CurDAG->getNode(ISD::TokenFactor, N.getDebugLoc(), MVT::Other, &InChains[0], InChains.size());
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  Ops0.push_back(CPTmpN11_0);
  Ops0.push_back(CPTmpN11_1);
  for (unsigned i = NumInputRootOps + 1, e = N.getNumOperands()-(HasInFlag?1:0); i != e; ++i) {
    Ops0.push_back(N.getOperand(i));
  }
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  Ops0.push_back(LSI_N1);
  Ops0.push_back(Chain1);
  if (HasInFlag)
    Ops0.push_back(InFlag);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, &Ops0[0], Ops0.size());
  Chain1 = SDValue(ResNode, 0);
  InFlag = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    InFlag,
    SDValue(Chain1.getNode(), Chain1.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Select_MSP430ISD_CALL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (MSP430call:isVoid (ld:iPTR addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
  // Emits: (CALLm:isVoid addr:i16:$dst)
  // Pattern complexity = 16  cost = 1  size = 0
  if (N1.getOpcode() == ISD::LOAD &&
      N1.hasOneUse() &&
      IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode()) &&
      (Chain.getNode() == N1.getNode() || IsChainCompatible(Chain.getNode(), N1.getNode()))) {
    SDValue Chain1 = N1.getOperand(0);
    if (Predicate_unindexedload(N1.getNode()) &&
        Predicate_load(N1.getNode())) {
      SDValue N11 = N1.getOperand(1);
      SDValue CPTmpN11_0;
      SDValue CPTmpN11_1;
      if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {
        SDNode *Result = Emit_56(N, MSP430::CALLm, CPTmpN11_0, CPTmpN11_1, 1);
        return Result;
      }
    }
  }

  // Pattern: (MSP430call:isVoid (imm:iPTR):$dst)
  // Emits: (CALLi:isVoid (imm:i16):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_54(N, MSP430::CALLi, 1);
    return Result;
  }

  // Pattern: (MSP430call:isVoid (tglobaladdr:i16):$dst)
  // Emits: (CALLi:isVoid (tglobaladdr:i16):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress &&
      N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_55(N, MSP430::CALLi, 1);
    return Result;
  }

  // Pattern: (MSP430call:isVoid (texternalsym:i16):$dst)
  // Emits: (CALLi:isVoid (texternalsym:i16):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol &&
      N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_55(N, MSP430::CALLi, 1);
    return Result;
  }

  // Pattern: (MSP430call:isVoid GR16:i16:$dst)
  // Emits: (CALLr:isVoid GR16:i16:$dst)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_55(N, MSP430::CALLr, 1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_57(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_58(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i8);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Flag, Tmp0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_59(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i16);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Flag, Tmp0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_60(const SDValue &N, unsigned Opc0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i8);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { Tmp0, CPTmpN11_0, CPTmpN11_1, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 5);
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
SDNode *Emit_61(const SDValue &N, unsigned Opc0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned short) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i16);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { Tmp0, CPTmpN11_0, CPTmpN11_1, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 5);
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
SDNode *Emit_62(const SDValue &N, unsigned Opc0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { N0, CPTmpN11_0, CPTmpN11_1, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 5);
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
SDNode *Emit_63(const SDValue &N, unsigned Opc0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N0 = CurDAG->getMemOperand(cast<MemSDNode>(N0)->getMemOperand());
  SDValue Ops0[] = { CPTmpN01_0, CPTmpN01_1, N1, LSI_N0, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 5);
  SDValue InFlag(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N0.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_64(const SDValue &N, unsigned Opc0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N0 = CurDAG->getMemOperand(cast<MemSDNode>(N0)->getMemOperand());
  SDValue Ops0[] = { CPTmpN01_0, CPTmpN01_1, LSI_N0, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i16, MVT::Other, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N0.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_MSP430ISD_CMP(const SDValue &N) {
  if (OptLevel != CodeGenOpt::None) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDValue N1 = N.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(0)) {

              // Pattern: (MSP430cmp:isVoid (ld:i8 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 0:i8)
              // Emits: (CMP8mi0:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i8) {
                SDNode *Result = Emit_64(N, MSP430::CMP8mi0, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }

              // Pattern: (MSP430cmp:isVoid (ld:i16 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 0:i16)
              // Emits: (CMP16mi0:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i16) {
                SDNode *Result = Emit_64(N, MSP430::CMP16mi0, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }
            }
            if (CN1 == INT64_C(1)) {

              // Pattern: (MSP430cmp:isVoid (ld:i8 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 1:i8)
              // Emits: (CMP8mi1:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i8) {
                SDNode *Result = Emit_64(N, MSP430::CMP8mi1, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }

              // Pattern: (MSP430cmp:isVoid (ld:i16 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 1:i16)
              // Emits: (CMP16mi1:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i16) {
                SDNode *Result = Emit_64(N, MSP430::CMP16mi1, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }
            }
            if (CN1 == INT64_C(2)) {

              // Pattern: (MSP430cmp:isVoid (ld:i8 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 2:i8)
              // Emits: (CMP8mi2:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i8) {
                SDNode *Result = Emit_64(N, MSP430::CMP8mi2, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }

              // Pattern: (MSP430cmp:isVoid (ld:i16 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 2:i16)
              // Emits: (CMP16mi2:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i16) {
                SDNode *Result = Emit_64(N, MSP430::CMP16mi2, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }
            }
            if (CN1 == INT64_C(4)) {

              // Pattern: (MSP430cmp:isVoid (ld:i8 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 4:i8)
              // Emits: (CMP8mi4:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i8) {
                SDNode *Result = Emit_64(N, MSP430::CMP8mi4, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }

              // Pattern: (MSP430cmp:isVoid (ld:i16 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 4:i16)
              // Emits: (CMP16mi4:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i16) {
                SDNode *Result = Emit_64(N, MSP430::CMP16mi4, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }
            }
            if (CN1 == INT64_C(8)) {

              // Pattern: (MSP430cmp:isVoid (ld:i8 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 8:i8)
              // Emits: (CMP8mi8:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i8) {
                SDNode *Result = Emit_64(N, MSP430::CMP8mi8, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }

              // Pattern: (MSP430cmp:isVoid (ld:i16 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, 8:i16)
              // Emits: (CMP16mi8:isVoid addr:i16:$src1)
              // Pattern complexity = 21  cost = 1  size = 0
              if (N0.getNode()->getValueType(0) == MVT::i16) {
                SDNode *Result = Emit_64(N, MSP430::CMP16mi8, CPTmpN01_0, CPTmpN01_1);
                return Result;
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::Constant) {
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {

            // Pattern: (MSP430cmp:isVoid (imm:i8):$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
            // Emits: (CMP8im:isVoid (imm:i8):$src1, addr:i16:$src2)
            // Pattern complexity = 19  cost = 1  size = 0
            if (N0.getNode()->getValueType(0) == MVT::i8) {
              SDNode *Result = Emit_60(N, MSP430::CMP8im, CPTmpN11_0, CPTmpN11_1);
              return Result;
            }

            // Pattern: (MSP430cmp:isVoid (imm:i16):$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
            // Emits: (CMP16im:isVoid (imm:i16):$src1, addr:i16:$src2)
            // Pattern complexity = 19  cost = 1  size = 0
            if (N0.getNode()->getValueType(0) == MVT::i16) {
              SDNode *Result = Emit_61(N, MSP430::CMP16im, CPTmpN11_0, CPTmpN11_1);
              return Result;
            }
          }
        }
      }
    }
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
          if (SelectAddr(N, N11, CPTmpN11_0, CPTmpN11_1)) {

            // Pattern: (MSP430cmp:isVoid GR8:i8:$src1, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
            // Emits: (CMP8rm:isVoid GR8:i8:$src1, addr:i16:$src2)
            // Pattern complexity = 16  cost = 1  size = 0
            if (N0.getNode()->getValueType(0) == MVT::i8) {
              SDNode *Result = Emit_62(N, MSP430::CMP8rm, CPTmpN11_0, CPTmpN11_1);
              return Result;
            }

            // Pattern: (MSP430cmp:isVoid GR16:i16:$src1, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)
            // Emits: (CMP16rm:isVoid GR16:i16:$src1, addr:i16:$src2)
            // Pattern complexity = 16  cost = 1  size = 0
            if (N0.getNode()->getValueType(0) == MVT::i16) {
              SDNode *Result = Emit_62(N, MSP430::CMP16rm, CPTmpN11_0, CPTmpN11_1);
              return Result;
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::LOAD &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      if (Predicate_unindexedload(N0.getNode()) &&
          Predicate_load(N0.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue CPTmpN01_0;
        SDValue CPTmpN01_1;
        if (SelectAddr(N, N01, CPTmpN01_0, CPTmpN01_1)) {
          SDValue N1 = N.getOperand(1);

          // Pattern: (MSP430cmp:isVoid (ld:i8 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src2)
          // Emits: (CMP8mr:isVoid addr:i16:$src1, GR8:i8:$src2)
          // Pattern complexity = 16  cost = 1  size = 0
          if (N0.getNode()->getValueType(0) == MVT::i8) {
            SDNode *Result = Emit_63(N, MSP430::CMP8mr, CPTmpN01_0, CPTmpN01_1);
            return Result;
          }

          // Pattern: (MSP430cmp:isVoid (ld:i16 addr:iPTR:$src1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src2)
          // Emits: (CMP16mr:isVoid addr:i16:$src1, GR16:i16:$src2)
          // Pattern complexity = 16  cost = 1  size = 0
          if (N0.getNode()->getValueType(0) == MVT::i16) {
            SDNode *Result = Emit_63(N, MSP430::CMP16mr, CPTmpN01_0, CPTmpN01_1);
            return Result;
          }
        }
      }
    }
  }
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::Constant) {
    SDValue N1 = N.getOperand(1);

    // Pattern: (MSP430cmp:isVoid (imm:i8):$src1, GR8:i8:$src2)
    // Emits: (CMP8ir:isVoid (imm:i8):$src1, GR8:i8:$src2)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::i8) {
      SDNode *Result = Emit_58(N, MSP430::CMP8ir);
      return Result;
    }

    // Pattern: (MSP430cmp:isVoid (imm:i16):$src1, GR16:i16:$src2)
    // Emits: (CMP16ir:isVoid (imm:i16):$src1, GR16:i16:$src2)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::i16) {
      SDNode *Result = Emit_59(N, MSP430::CMP16ir);
      return Result;
    }
  }
  SDValue N1 = N.getOperand(1);

  // Pattern: (MSP430cmp:isVoid GR8:i8:$src1, GR8:i8:$src2)
  // Emits: (CMP8rr:isVoid GR8:i8:$src1, GR8:i8:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i8) {
    SDNode *Result = Emit_57(N, MSP430::CMP8rr);
    return Result;
  }

  // Pattern: (MSP430cmp:isVoid GR16:i16:$src1, GR16:i16:$src2)
  // Emits: (CMP16rr:isVoid GR16:i16:$src1, GR16:i16:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::i16) {
    SDNode *Result = Emit_57(N, MSP430::CMP16rr);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_65(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 2 : 1);
}
SDNode *Select_MSP430ISD_RET_FLAG(const SDValue &N) {
  SDNode *Result = Emit_65(N, MSP430::RET);
  return Result;
}

SDNode *Emit_66(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::i16, N0);
}
SDNode *Select_MSP430ISD_RLA_i8(const SDValue &N) {
  SDNode *Result = Emit_66(N, MSP430::SHL8r1, MVT::i8);
  return Result;
}

SDNode *Select_MSP430ISD_RLA_i16(const SDValue &N) {
  SDNode *Result = Emit_66(N, MSP430::SHL16r1, MVT::i16);
  return Result;
}

SDNode *Select_MSP430ISD_RRA_i8(const SDValue &N) {
  SDNode *Result = Emit_66(N, MSP430::SAR8r1, MVT::i8);
  return Result;
}

SDNode *Select_MSP430ISD_RRA_i16(const SDValue &N) {
  SDNode *Result = Emit_66(N, MSP430::SAR16r1, MVT::i16);
  return Result;
}

SDNode *Select_MSP430ISD_RRC_i8(const SDValue &N) {
  SDNode *Result = Emit_66(N, MSP430::SAR8r1c, MVT::i8);
  return Result;
}

SDNode *Select_MSP430ISD_RRC_i16(const SDValue &N) {
  SDNode *Result = Emit_66(N, MSP430::SAR16r1c, MVT::i16);
  return Result;
}

SDNode *Emit_67(const SDValue &N, unsigned Opc0, EVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { N0, N1, Tmp2, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_MSP430ISD_SELECT_CC_i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_67(N, MSP430::Select8, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_MSP430ISD_SELECT_CC_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_67(N, MSP430::Select16, MVT::i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_MSP430ISD_Wrapper_i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (MSP430Wrapper:i16 (tglobaladdr:i16):$dst)
  // Emits: (MOV16ri:i16 (tglobaladdr:i16):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_19(N, MSP430::MOV16ri, MVT::i16);
    return Result;
  }

  // Pattern: (MSP430Wrapper:i16 (texternalsym:i16):$dst)
  // Emits: (MOV16ri:i16 (texternalsym:i16):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetExternalSymbol) {
    SDNode *Result = Emit_19(N, MSP430::MOV16ri, MVT::i16);
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
    case MVT::i8:
      return Select_ISD_ADD_i8(N);
    case MVT::i16:
      return Select_ISD_ADD_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDC: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_ADDC_i8(N);
    case MVT::i16:
      return Select_ISD_ADDC_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDE: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_ADDE_i8(N);
    case MVT::i16:
      return Select_ISD_ADDE_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::AND: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_AND_i8(N);
    case MVT::i16:
      return Select_ISD_AND_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::ANY_EXTEND: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_ANY_EXTEND_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::BR: {
    return Select_ISD_BR(N);
    break;
  }
  case ISD::BSWAP: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_BSWAP_i16(N);
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
  case ISD::Constant: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_Constant_i8(N);
    case MVT::i16:
      return Select_ISD_Constant_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::LOAD: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_LOAD_i8(N);
    case MVT::i16:
      return Select_ISD_LOAD_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::OR: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_OR_i8(N);
    case MVT::i16:
      return Select_ISD_OR_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::SIGN_EXTEND_INREG: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_SIGN_EXTEND_INREG_i16(N);
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
    case MVT::i8:
      return Select_ISD_SUB_i8(N);
    case MVT::i16:
      return Select_ISD_SUB_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBC: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_SUBC_i8(N);
    case MVT::i16:
      return Select_ISD_SUBC_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBE: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_SUBE_i8(N);
    case MVT::i16:
      return Select_ISD_SUBE_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::TRUNCATE: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_TRUNCATE_i8(N);
    default:
      break;
    }
    break;
  }
  case ISD::XOR: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_XOR_i8(N);
    case MVT::i16:
      return Select_ISD_XOR_i16(N);
    default:
      break;
    }
    break;
  }
  case ISD::ZERO_EXTEND: {
    switch (NVT) {
    case MVT::i16:
      return Select_ISD_ZERO_EXTEND_i16(N);
    default:
      break;
    }
    break;
  }
  case MSP430ISD::BR_CC: {
    return Select_MSP430ISD_BR_CC(N);
    break;
  }
  case MSP430ISD::CALL: {
    return Select_MSP430ISD_CALL(N);
    break;
  }
  case MSP430ISD::CMP: {
    return Select_MSP430ISD_CMP(N);
    break;
  }
  case MSP430ISD::RET_FLAG: {
    return Select_MSP430ISD_RET_FLAG(N);
    break;
  }
  case MSP430ISD::RLA: {
    switch (NVT) {
    case MVT::i8:
      return Select_MSP430ISD_RLA_i8(N);
    case MVT::i16:
      return Select_MSP430ISD_RLA_i16(N);
    default:
      break;
    }
    break;
  }
  case MSP430ISD::RRA: {
    switch (NVT) {
    case MVT::i8:
      return Select_MSP430ISD_RRA_i8(N);
    case MVT::i16:
      return Select_MSP430ISD_RRA_i16(N);
    default:
      break;
    }
    break;
  }
  case MSP430ISD::RRC: {
    switch (NVT) {
    case MVT::i8:
      return Select_MSP430ISD_RRC_i8(N);
    case MVT::i16:
      return Select_MSP430ISD_RRC_i16(N);
    default:
      break;
    }
    break;
  }
  case MSP430ISD::SELECT_CC: {
    switch (NVT) {
    case MVT::i8:
      return Select_MSP430ISD_SELECT_CC_i8(N);
    case MVT::i16:
      return Select_MSP430ISD_SELECT_CC_i16(N);
    default:
      break;
    }
    break;
  }
  case MSP430ISD::Wrapper: {
    switch (NVT) {
    case MVT::i16:
      return Select_MSP430ISD_Wrapper_i16(N);
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

