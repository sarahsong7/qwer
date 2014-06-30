//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // ALL Register Class...
  static const unsigned ALL[] = {
    BF::R0, BF::R1, BF::R2, BF::R3, BF::R4, BF::R5, BF::R6, BF::R7, BF::P0, BF::P1, BF::P2, BF::P3, BF::P4, BF::P5, BF::I0, BF::I1, BF::I2, BF::I3, BF::M0, BF::M1, BF::M2, BF::M3, BF::B0, BF::B1, BF::B2, BF::B3, BF::L0, BF::L1, BF::L2, BF::L3, BF::FP, BF::SP, BF::A0X, BF::A0W, BF::A1X, BF::A1W, BF::ASTAT, BF::RETS, BF::LC0, BF::LT0, BF::LB0, BF::LC1, BF::LT1, BF::LB1, BF::CYCLES, BF::CYCLES2, BF::USP, BF::SEQSTAT, BF::SYSCFG, BF::RETI, BF::RETX, BF::RETN, BF::RETE, BF::EMUDAT, 
  };

  // Accu Register Class...
  static const unsigned Accu[] = {
    BF::A0, BF::A1, 
  };

  // AnyCC Register Class...
  static const unsigned AnyCC[] = {
    BF::CC, BF::NCC, 
  };

  // B Register Class...
  static const unsigned B[] = {
    BF::B0, BF::B1, BF::B2, BF::B3, 
  };

  // D Register Class...
  static const unsigned D[] = {
    BF::R0, BF::R1, BF::R2, BF::R3, BF::R4, BF::R5, BF::R6, BF::R7, 
  };

  // D16 Register Class...
  static const unsigned D16[] = {
    BF::R0H, BF::R0L, BF::R1H, BF::R1L, BF::R2H, BF::R2L, BF::R3H, BF::R3L, BF::R4H, BF::R4L, BF::R5H, BF::R5L, BF::R6H, BF::R6L, BF::R7H, BF::R7L, 
  };

  // D16H Register Class...
  static const unsigned D16H[] = {
    BF::R0H, BF::R1H, BF::R2H, BF::R3H, BF::R4H, BF::R5H, BF::R6H, BF::R7H, 
  };

  // D16L Register Class...
  static const unsigned D16L[] = {
    BF::R0L, BF::R1L, BF::R2L, BF::R3L, BF::R4L, BF::R5L, BF::R6L, BF::R7L, 
  };

  // DP Register Class...
  static const unsigned DP[] = {
    BF::R0, BF::R1, BF::R2, BF::R3, BF::R4, BF::R5, BF::R6, BF::R7, BF::P0, BF::P1, BF::P2, BF::P3, BF::P4, BF::P5, BF::FP, BF::SP, 
  };

  // DP16 Register Class...
  static const unsigned DP16[] = {
    BF::R0H, BF::R0L, BF::R1H, BF::R1L, BF::R2H, BF::R2L, BF::R3H, BF::R3L, BF::R4H, BF::R4L, BF::R5H, BF::R5L, BF::R6H, BF::R6L, BF::R7H, BF::R7L, BF::P0H, BF::P0L, BF::P1H, BF::P1L, BF::P2H, BF::P2L, BF::P3H, BF::P3L, BF::P4H, BF::P4L, BF::P5H, BF::P5L, BF::SPH, BF::SPL, BF::FPH, BF::FPL, 
  };

  // DP16H Register Class...
  static const unsigned DP16H[] = {
    BF::R0H, BF::R1H, BF::R2H, BF::R3H, BF::R4H, BF::R5H, BF::R6H, BF::R7H, BF::P0H, BF::P1H, BF::P2H, BF::P3H, BF::P4H, BF::P5H, BF::SPH, BF::FPH, 
  };

  // DP16L Register Class...
  static const unsigned DP16L[] = {
    BF::R0L, BF::R1L, BF::R2L, BF::R3L, BF::R4L, BF::R5L, BF::R6L, BF::R7L, BF::P0L, BF::P1L, BF::P2L, BF::P3L, BF::P4L, BF::P5L, BF::SPL, BF::FPL, 
  };

  // GR Register Class...
  static const unsigned GR[] = {
    BF::R0, BF::R1, BF::R2, BF::R3, BF::R4, BF::R5, BF::R6, BF::R7, BF::P0, BF::P1, BF::P2, BF::P3, BF::P4, BF::P5, BF::I0, BF::I1, BF::I2, BF::I3, BF::M0, BF::M1, BF::M2, BF::M3, BF::B0, BF::B1, BF::B2, BF::B3, BF::L0, BF::L1, BF::L2, BF::L3, BF::FP, BF::SP, 
  };

  // GR16 Register Class...
  static const unsigned GR16[] = {
    BF::R0H, BF::R0L, BF::R1H, BF::R1L, BF::R2H, BF::R2L, BF::R3H, BF::R3L, BF::R4H, BF::R4L, BF::R5H, BF::R5L, BF::R6H, BF::R6L, BF::R7H, BF::R7L, BF::P0H, BF::P0L, BF::P1H, BF::P1L, BF::P2H, BF::P2L, BF::P3H, BF::P3L, BF::P4H, BF::P4L, BF::P5H, BF::P5L, BF::SPH, BF::SPL, BF::FPH, BF::FPL, BF::I0H, BF::I0L, BF::I1H, BF::I1L, BF::I2H, BF::I2L, BF::I3H, BF::I3L, BF::M0H, BF::M0L, BF::M1H, BF::M1L, BF::M2H, BF::M2L, BF::M3H, BF::M3L, BF::B0H, BF::B0L, BF::B1H, BF::B1L, BF::B2H, BF::B2L, BF::B3H, BF::B3L, BF::L0H, BF::L0L, BF::L1H, BF::L1L, BF::L2H, BF::L2L, BF::L3H, BF::L3L, 
  };

  // I Register Class...
  static const unsigned I[] = {
    BF::I0, BF::I1, BF::I2, BF::I3, 
  };

  // JustCC Register Class...
  static const unsigned JustCC[] = {
    BF::CC, 
  };

  // L Register Class...
  static const unsigned L[] = {
    BF::L0, BF::L1, BF::L2, BF::L3, 
  };

  // M Register Class...
  static const unsigned M[] = {
    BF::M0, BF::M1, BF::M2, BF::M3, 
  };

  // NotCC Register Class...
  static const unsigned NotCC[] = {
    BF::NCC, 
  };

  // P Register Class...
  static const unsigned P[] = {
    BF::P0, BF::P1, BF::P2, BF::P3, BF::P4, BF::P5, BF::FP, BF::SP, 
  };

  // P16 Register Class...
  static const unsigned P16[] = {
    BF::P0H, BF::P0L, BF::P1H, BF::P1L, BF::P2H, BF::P2L, BF::P3H, BF::P3L, BF::P4H, BF::P4L, BF::P5H, BF::P5L, BF::SPH, BF::SPL, BF::FPH, BF::FPL, 
  };

  // P16H Register Class...
  static const unsigned P16H[] = {
    BF::P0H, BF::P1H, BF::P2H, BF::P3H, BF::P4H, BF::P5H, BF::SPH, BF::FPH, 
  };

  // P16L Register Class...
  static const unsigned P16L[] = {
    BF::P0L, BF::P1L, BF::P2L, BF::P3L, BF::P4L, BF::P5L, BF::SPL, BF::FPL, 
  };

  // PI Register Class...
  static const unsigned PI[] = {
    BF::P0, BF::P1, BF::P2, BF::P3, BF::P4, BF::P5, BF::I0, BF::I1, BF::I2, BF::I3, BF::FP, BF::SP, 
  };

  // StatBit Register Class...
  static const unsigned StatBit[] = {
    BF::AZ, BF::AN, BF::CC, BF::AQ, BF::AC0, BF::AC1, BF::AV0, BF::AV0S, BF::AV1, BF::AV1S, BF::V, BF::VS, 
  };

  // ALLVTs Register Class Value Types...
  static const EVT ALLVTs[] = {
    MVT::i32, MVT::Other
  };

  // AccuVTs Register Class Value Types...
  static const EVT AccuVTs[] = {
    MVT::i64, MVT::Other
  };

  // AnyCCVTs Register Class Value Types...
  static const EVT AnyCCVTs[] = {
    MVT::i32, MVT::Other
  };

  // BVTs Register Class Value Types...
  static const EVT BVTs[] = {
    MVT::i32, MVT::Other
  };

  // DVTs Register Class Value Types...
  static const EVT DVTs[] = {
    MVT::i32, MVT::Other
  };

  // D16VTs Register Class Value Types...
  static const EVT D16VTs[] = {
    MVT::i16, MVT::Other
  };

  // D16HVTs Register Class Value Types...
  static const EVT D16HVTs[] = {
    MVT::i16, MVT::Other
  };

  // D16LVTs Register Class Value Types...
  static const EVT D16LVTs[] = {
    MVT::i16, MVT::Other
  };

  // DPVTs Register Class Value Types...
  static const EVT DPVTs[] = {
    MVT::i32, MVT::Other
  };

  // DP16VTs Register Class Value Types...
  static const EVT DP16VTs[] = {
    MVT::i16, MVT::Other
  };

  // DP16HVTs Register Class Value Types...
  static const EVT DP16HVTs[] = {
    MVT::i16, MVT::Other
  };

  // DP16LVTs Register Class Value Types...
  static const EVT DP16LVTs[] = {
    MVT::i16, MVT::Other
  };

  // GRVTs Register Class Value Types...
  static const EVT GRVTs[] = {
    MVT::i32, MVT::Other
  };

  // GR16VTs Register Class Value Types...
  static const EVT GR16VTs[] = {
    MVT::i16, MVT::Other
  };

  // IVTs Register Class Value Types...
  static const EVT IVTs[] = {
    MVT::i32, MVT::Other
  };

  // JustCCVTs Register Class Value Types...
  static const EVT JustCCVTs[] = {
    MVT::i32, MVT::Other
  };

  // LVTs Register Class Value Types...
  static const EVT LVTs[] = {
    MVT::i32, MVT::Other
  };

  // MVTs Register Class Value Types...
  static const EVT MVTs[] = {
    MVT::i32, MVT::Other
  };

  // NotCCVTs Register Class Value Types...
  static const EVT NotCCVTs[] = {
    MVT::i32, MVT::Other
  };

  // PVTs Register Class Value Types...
  static const EVT PVTs[] = {
    MVT::i32, MVT::Other
  };

  // P16VTs Register Class Value Types...
  static const EVT P16VTs[] = {
    MVT::i16, MVT::Other
  };

  // P16HVTs Register Class Value Types...
  static const EVT P16HVTs[] = {
    MVT::i16, MVT::Other
  };

  // P16LVTs Register Class Value Types...
  static const EVT P16LVTs[] = {
    MVT::i16, MVT::Other
  };

  // PIVTs Register Class Value Types...
  static const EVT PIVTs[] = {
    MVT::i32, MVT::Other
  };

  // StatBitVTs Register Class Value Types...
  static const EVT StatBitVTs[] = {
    MVT::i1, MVT::Other
  };

}  // end anonymous namespace

namespace BF {   // Register class instances
  ALLClass	ALLRegClass;
  AccuClass	AccuRegClass;
  AnyCCClass	AnyCCRegClass;
  BClass	BRegClass;
  DClass	DRegClass;
  D16Class	D16RegClass;
  D16HClass	D16HRegClass;
  D16LClass	D16LRegClass;
  DPClass	DPRegClass;
  DP16Class	DP16RegClass;
  DP16HClass	DP16HRegClass;
  DP16LClass	DP16LRegClass;
  GRClass	GRRegClass;
  GR16Class	GR16RegClass;
  IClass	IRegClass;
  JustCCClass	JustCCRegClass;
  LClass	LRegClass;
  MClass	MRegClass;
  NotCCClass	NotCCRegClass;
  PClass	PRegClass;
  P16Class	P16RegClass;
  P16HClass	P16HRegClass;
  P16LClass	P16LRegClass;
  PIClass	PIRegClass;
  StatBitClass	StatBitRegClass;

  // ALL Sub-register Classes...
  static const TargetRegisterClass* const ALLSubRegClasses[] = {
    NULL
  };

  // Accu Sub-register Classes...
  static const TargetRegisterClass* const AccuSubRegClasses[] = {
    NULL
  };

  // AnyCC Sub-register Classes...
  static const TargetRegisterClass* const AnyCCSubRegClasses[] = {
    NULL
  };

  // B Sub-register Classes...
  static const TargetRegisterClass* const BSubRegClasses[] = {
    NULL
  };

  // D Sub-register Classes...
  static const TargetRegisterClass* const DSubRegClasses[] = {
    &BF::D16LRegClass, &BF::D16HRegClass, NULL
  };

  // D16 Sub-register Classes...
  static const TargetRegisterClass* const D16SubRegClasses[] = {
    NULL
  };

  // D16H Sub-register Classes...
  static const TargetRegisterClass* const D16HSubRegClasses[] = {
    NULL
  };

  // D16L Sub-register Classes...
  static const TargetRegisterClass* const D16LSubRegClasses[] = {
    NULL
  };

  // DP Sub-register Classes...
  static const TargetRegisterClass* const DPSubRegClasses[] = {
    &BF::DP16LRegClass, &BF::DP16HRegClass, NULL
  };

  // DP16 Sub-register Classes...
  static const TargetRegisterClass* const DP16SubRegClasses[] = {
    NULL
  };

  // DP16H Sub-register Classes...
  static const TargetRegisterClass* const DP16HSubRegClasses[] = {
    NULL
  };

  // DP16L Sub-register Classes...
  static const TargetRegisterClass* const DP16LSubRegClasses[] = {
    NULL
  };

  // GR Sub-register Classes...
  static const TargetRegisterClass* const GRSubRegClasses[] = {
    NULL
  };

  // GR16 Sub-register Classes...
  static const TargetRegisterClass* const GR16SubRegClasses[] = {
    NULL
  };

  // I Sub-register Classes...
  static const TargetRegisterClass* const ISubRegClasses[] = {
    NULL
  };

  // JustCC Sub-register Classes...
  static const TargetRegisterClass* const JustCCSubRegClasses[] = {
    NULL
  };

  // L Sub-register Classes...
  static const TargetRegisterClass* const LSubRegClasses[] = {
    NULL
  };

  // M Sub-register Classes...
  static const TargetRegisterClass* const MSubRegClasses[] = {
    NULL
  };

  // NotCC Sub-register Classes...
  static const TargetRegisterClass* const NotCCSubRegClasses[] = {
    NULL
  };

  // P Sub-register Classes...
  static const TargetRegisterClass* const PSubRegClasses[] = {
    &BF::P16LRegClass, &BF::P16HRegClass, NULL
  };

  // P16 Sub-register Classes...
  static const TargetRegisterClass* const P16SubRegClasses[] = {
    NULL
  };

  // P16H Sub-register Classes...
  static const TargetRegisterClass* const P16HSubRegClasses[] = {
    NULL
  };

  // P16L Sub-register Classes...
  static const TargetRegisterClass* const P16LSubRegClasses[] = {
    NULL
  };

  // PI Sub-register Classes...
  static const TargetRegisterClass* const PISubRegClasses[] = {
    NULL
  };

  // StatBit Sub-register Classes...
  static const TargetRegisterClass* const StatBitSubRegClasses[] = {
    NULL
  };

  // ALL Super-register Classes...
  static const TargetRegisterClass* const ALLSuperRegClasses[] = {
    NULL
  };

  // Accu Super-register Classes...
  static const TargetRegisterClass* const AccuSuperRegClasses[] = {
    NULL
  };

  // AnyCC Super-register Classes...
  static const TargetRegisterClass* const AnyCCSuperRegClasses[] = {
    NULL
  };

  // B Super-register Classes...
  static const TargetRegisterClass* const BSuperRegClasses[] = {
    NULL
  };

  // D Super-register Classes...
  static const TargetRegisterClass* const DSuperRegClasses[] = {
    NULL
  };

  // D16 Super-register Classes...
  static const TargetRegisterClass* const D16SuperRegClasses[] = {
    NULL
  };

  // D16H Super-register Classes...
  static const TargetRegisterClass* const D16HSuperRegClasses[] = {
    &BF::DRegClass, NULL
  };

  // D16L Super-register Classes...
  static const TargetRegisterClass* const D16LSuperRegClasses[] = {
    &BF::DRegClass, NULL
  };

  // DP Super-register Classes...
  static const TargetRegisterClass* const DPSuperRegClasses[] = {
    NULL
  };

  // DP16 Super-register Classes...
  static const TargetRegisterClass* const DP16SuperRegClasses[] = {
    NULL
  };

  // DP16H Super-register Classes...
  static const TargetRegisterClass* const DP16HSuperRegClasses[] = {
    &BF::DPRegClass, NULL
  };

  // DP16L Super-register Classes...
  static const TargetRegisterClass* const DP16LSuperRegClasses[] = {
    &BF::DPRegClass, NULL
  };

  // GR Super-register Classes...
  static const TargetRegisterClass* const GRSuperRegClasses[] = {
    NULL
  };

  // GR16 Super-register Classes...
  static const TargetRegisterClass* const GR16SuperRegClasses[] = {
    NULL
  };

  // I Super-register Classes...
  static const TargetRegisterClass* const ISuperRegClasses[] = {
    NULL
  };

  // JustCC Super-register Classes...
  static const TargetRegisterClass* const JustCCSuperRegClasses[] = {
    NULL
  };

  // L Super-register Classes...
  static const TargetRegisterClass* const LSuperRegClasses[] = {
    NULL
  };

  // M Super-register Classes...
  static const TargetRegisterClass* const MSuperRegClasses[] = {
    NULL
  };

  // NotCC Super-register Classes...
  static const TargetRegisterClass* const NotCCSuperRegClasses[] = {
    NULL
  };

  // P Super-register Classes...
  static const TargetRegisterClass* const PSuperRegClasses[] = {
    NULL
  };

  // P16 Super-register Classes...
  static const TargetRegisterClass* const P16SuperRegClasses[] = {
    NULL
  };

  // P16H Super-register Classes...
  static const TargetRegisterClass* const P16HSuperRegClasses[] = {
    &BF::PRegClass, NULL
  };

  // P16L Super-register Classes...
  static const TargetRegisterClass* const P16LSuperRegClasses[] = {
    &BF::PRegClass, NULL
  };

  // PI Super-register Classes...
  static const TargetRegisterClass* const PISuperRegClasses[] = {
    NULL
  };

  // StatBit Super-register Classes...
  static const TargetRegisterClass* const StatBitSuperRegClasses[] = {
    NULL
  };

  // ALL Register Class sub-classes...
  static const TargetRegisterClass* const ALLSubclasses[] = {
    &BF::BRegClass, &BF::DRegClass, &BF::DPRegClass, &BF::GRRegClass, &BF::IRegClass, &BF::LRegClass, &BF::MRegClass, &BF::PRegClass, &BF::PIRegClass, NULL
  };

  // Accu Register Class sub-classes...
  static const TargetRegisterClass* const AccuSubclasses[] = {
    NULL
  };

  // AnyCC Register Class sub-classes...
  static const TargetRegisterClass* const AnyCCSubclasses[] = {
    &BF::JustCCRegClass, &BF::NotCCRegClass, NULL
  };

  // B Register Class sub-classes...
  static const TargetRegisterClass* const BSubclasses[] = {
    NULL
  };

  // D Register Class sub-classes...
  static const TargetRegisterClass* const DSubclasses[] = {
    NULL
  };

  // D16 Register Class sub-classes...
  static const TargetRegisterClass* const D16Subclasses[] = {
    &BF::D16HRegClass, &BF::D16LRegClass, NULL
  };

  // D16H Register Class sub-classes...
  static const TargetRegisterClass* const D16HSubclasses[] = {
    NULL
  };

  // D16L Register Class sub-classes...
  static const TargetRegisterClass* const D16LSubclasses[] = {
    NULL
  };

  // DP Register Class sub-classes...
  static const TargetRegisterClass* const DPSubclasses[] = {
    &BF::DRegClass, &BF::PRegClass, NULL
  };

  // DP16 Register Class sub-classes...
  static const TargetRegisterClass* const DP16Subclasses[] = {
    &BF::D16RegClass, &BF::D16HRegClass, &BF::D16LRegClass, &BF::DP16HRegClass, &BF::DP16LRegClass, &BF::P16RegClass, &BF::P16HRegClass, &BF::P16LRegClass, NULL
  };

  // DP16H Register Class sub-classes...
  static const TargetRegisterClass* const DP16HSubclasses[] = {
    &BF::D16HRegClass, &BF::P16HRegClass, NULL
  };

  // DP16L Register Class sub-classes...
  static const TargetRegisterClass* const DP16LSubclasses[] = {
    &BF::D16LRegClass, &BF::P16LRegClass, NULL
  };

  // GR Register Class sub-classes...
  static const TargetRegisterClass* const GRSubclasses[] = {
    &BF::BRegClass, &BF::DRegClass, &BF::DPRegClass, &BF::IRegClass, &BF::LRegClass, &BF::MRegClass, &BF::PRegClass, &BF::PIRegClass, NULL
  };

  // GR16 Register Class sub-classes...
  static const TargetRegisterClass* const GR16Subclasses[] = {
    &BF::D16RegClass, &BF::D16HRegClass, &BF::D16LRegClass, &BF::DP16RegClass, &BF::DP16HRegClass, &BF::DP16LRegClass, &BF::P16RegClass, &BF::P16HRegClass, &BF::P16LRegClass, NULL
  };

  // I Register Class sub-classes...
  static const TargetRegisterClass* const ISubclasses[] = {
    NULL
  };

  // JustCC Register Class sub-classes...
  static const TargetRegisterClass* const JustCCSubclasses[] = {
    NULL
  };

  // L Register Class sub-classes...
  static const TargetRegisterClass* const LSubclasses[] = {
    NULL
  };

  // M Register Class sub-classes...
  static const TargetRegisterClass* const MSubclasses[] = {
    NULL
  };

  // NotCC Register Class sub-classes...
  static const TargetRegisterClass* const NotCCSubclasses[] = {
    NULL
  };

  // P Register Class sub-classes...
  static const TargetRegisterClass* const PSubclasses[] = {
    NULL
  };

  // P16 Register Class sub-classes...
  static const TargetRegisterClass* const P16Subclasses[] = {
    &BF::P16HRegClass, &BF::P16LRegClass, NULL
  };

  // P16H Register Class sub-classes...
  static const TargetRegisterClass* const P16HSubclasses[] = {
    NULL
  };

  // P16L Register Class sub-classes...
  static const TargetRegisterClass* const P16LSubclasses[] = {
    NULL
  };

  // PI Register Class sub-classes...
  static const TargetRegisterClass* const PISubclasses[] = {
    &BF::IRegClass, &BF::PRegClass, NULL
  };

  // StatBit Register Class sub-classes...
  static const TargetRegisterClass* const StatBitSubclasses[] = {
    &BF::JustCCRegClass, NULL
  };

  // ALL Register Class super-classes...
  static const TargetRegisterClass* const ALLSuperclasses[] = {
    NULL
  };

  // Accu Register Class super-classes...
  static const TargetRegisterClass* const AccuSuperclasses[] = {
    NULL
  };

  // AnyCC Register Class super-classes...
  static const TargetRegisterClass* const AnyCCSuperclasses[] = {
    NULL
  };

  // B Register Class super-classes...
  static const TargetRegisterClass* const BSuperclasses[] = {
    &BF::ALLRegClass, &BF::GRRegClass, NULL
  };

  // D Register Class super-classes...
  static const TargetRegisterClass* const DSuperclasses[] = {
    &BF::ALLRegClass, &BF::DPRegClass, &BF::GRRegClass, NULL
  };

  // D16 Register Class super-classes...
  static const TargetRegisterClass* const D16Superclasses[] = {
    &BF::DP16RegClass, &BF::GR16RegClass, NULL
  };

  // D16H Register Class super-classes...
  static const TargetRegisterClass* const D16HSuperclasses[] = {
    &BF::D16RegClass, &BF::DP16RegClass, &BF::DP16HRegClass, &BF::GR16RegClass, NULL
  };

  // D16L Register Class super-classes...
  static const TargetRegisterClass* const D16LSuperclasses[] = {
    &BF::D16RegClass, &BF::DP16RegClass, &BF::DP16LRegClass, &BF::GR16RegClass, NULL
  };

  // DP Register Class super-classes...
  static const TargetRegisterClass* const DPSuperclasses[] = {
    &BF::ALLRegClass, &BF::GRRegClass, NULL
  };

  // DP16 Register Class super-classes...
  static const TargetRegisterClass* const DP16Superclasses[] = {
    &BF::GR16RegClass, NULL
  };

  // DP16H Register Class super-classes...
  static const TargetRegisterClass* const DP16HSuperclasses[] = {
    &BF::DP16RegClass, &BF::GR16RegClass, NULL
  };

  // DP16L Register Class super-classes...
  static const TargetRegisterClass* const DP16LSuperclasses[] = {
    &BF::DP16RegClass, &BF::GR16RegClass, NULL
  };

  // GR Register Class super-classes...
  static const TargetRegisterClass* const GRSuperclasses[] = {
    &BF::ALLRegClass, NULL
  };

  // GR16 Register Class super-classes...
  static const TargetRegisterClass* const GR16Superclasses[] = {
    NULL
  };

  // I Register Class super-classes...
  static const TargetRegisterClass* const ISuperclasses[] = {
    &BF::ALLRegClass, &BF::GRRegClass, &BF::PIRegClass, NULL
  };

  // JustCC Register Class super-classes...
  static const TargetRegisterClass* const JustCCSuperclasses[] = {
    &BF::AnyCCRegClass, &BF::StatBitRegClass, NULL
  };

  // L Register Class super-classes...
  static const TargetRegisterClass* const LSuperclasses[] = {
    &BF::ALLRegClass, &BF::GRRegClass, NULL
  };

  // M Register Class super-classes...
  static const TargetRegisterClass* const MSuperclasses[] = {
    &BF::ALLRegClass, &BF::GRRegClass, NULL
  };

  // NotCC Register Class super-classes...
  static const TargetRegisterClass* const NotCCSuperclasses[] = {
    &BF::AnyCCRegClass, NULL
  };

  // P Register Class super-classes...
  static const TargetRegisterClass* const PSuperclasses[] = {
    &BF::ALLRegClass, &BF::DPRegClass, &BF::GRRegClass, &BF::PIRegClass, NULL
  };

  // P16 Register Class super-classes...
  static const TargetRegisterClass* const P16Superclasses[] = {
    &BF::DP16RegClass, &BF::GR16RegClass, NULL
  };

  // P16H Register Class super-classes...
  static const TargetRegisterClass* const P16HSuperclasses[] = {
    &BF::DP16RegClass, &BF::DP16HRegClass, &BF::GR16RegClass, &BF::P16RegClass, NULL
  };

  // P16L Register Class super-classes...
  static const TargetRegisterClass* const P16LSuperclasses[] = {
    &BF::DP16RegClass, &BF::DP16LRegClass, &BF::GR16RegClass, &BF::P16RegClass, NULL
  };

  // PI Register Class super-classes...
  static const TargetRegisterClass* const PISuperclasses[] = {
    &BF::ALLRegClass, &BF::GRRegClass, NULL
  };

  // StatBit Register Class super-classes...
  static const TargetRegisterClass* const StatBitSuperclasses[] = {
    NULL
  };


    ALLClass::iterator
    ALLClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      return allocation_order_begin(MF)
             + (RI->hasFP(MF) ? 31 : 30);
    }
  
ALLClass::ALLClass()  : TargetRegisterClass(ALLRegClassID, "ALL", ALLVTs, ALLSubclasses, ALLSuperclasses, ALLSubRegClasses, ALLSuperRegClasses, 4, 4, 1, ALL, ALL + 54) {}

AccuClass::AccuClass()  : TargetRegisterClass(AccuRegClassID, "Accu", AccuVTs, AccuSubclasses, AccuSuperclasses, AccuSubRegClasses, AccuSuperRegClasses, 8, 8, 1, Accu, Accu + 2) {}

    AnyCCClass::iterator
    AnyCCClass::allocation_order_end(const MachineFunction &MF) const {
      return allocation_order_begin(MF)+1;
    }
  
AnyCCClass::AnyCCClass()  : TargetRegisterClass(AnyCCRegClassID, "AnyCC", AnyCCVTs, AnyCCSubclasses, AnyCCSuperclasses, AnyCCSubRegClasses, AnyCCSuperRegClasses, 1, 1, -1, AnyCC, AnyCC + 2) {}

BClass::BClass()  : TargetRegisterClass(BRegClassID, "B", BVTs, BSubclasses, BSuperclasses, BSubRegClasses, BSuperRegClasses, 4, 4, 1, B, B + 4) {}

DClass::DClass()  : TargetRegisterClass(DRegClassID, "D", DVTs, DSubclasses, DSuperclasses, DSubRegClasses, DSuperRegClasses, 4, 4, 1, D, D + 8) {}

D16Class::D16Class()  : TargetRegisterClass(D16RegClassID, "D16", D16VTs, D16Subclasses, D16Superclasses, D16SubRegClasses, D16SuperRegClasses, 2, 2, 1, D16, D16 + 16) {}

D16HClass::D16HClass()  : TargetRegisterClass(D16HRegClassID, "D16H", D16HVTs, D16HSubclasses, D16HSuperclasses, D16HSubRegClasses, D16HSuperRegClasses, 2, 2, 1, D16H, D16H + 8) {}

D16LClass::D16LClass()  : TargetRegisterClass(D16LRegClassID, "D16L", D16LVTs, D16LSubclasses, D16LSuperclasses, D16LSubRegClasses, D16LSuperRegClasses, 2, 2, 1, D16L, D16L + 8) {}

    DPClass::iterator
    DPClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      return allocation_order_begin(MF)
             + (RI->hasFP(MF) ? 15 : 14);
    }
  
DPClass::DPClass()  : TargetRegisterClass(DPRegClassID, "DP", DPVTs, DPSubclasses, DPSuperclasses, DPSubRegClasses, DPSuperRegClasses, 4, 4, 1, DP, DP + 16) {}

DP16Class::DP16Class()  : TargetRegisterClass(DP16RegClassID, "DP16", DP16VTs, DP16Subclasses, DP16Superclasses, DP16SubRegClasses, DP16SuperRegClasses, 2, 2, 1, DP16, DP16 + 32) {}

DP16HClass::DP16HClass()  : TargetRegisterClass(DP16HRegClassID, "DP16H", DP16HVTs, DP16HSubclasses, DP16HSuperclasses, DP16HSubRegClasses, DP16HSuperRegClasses, 2, 2, 1, DP16H, DP16H + 16) {}

DP16LClass::DP16LClass()  : TargetRegisterClass(DP16LRegClassID, "DP16L", DP16LVTs, DP16LSubclasses, DP16LSuperclasses, DP16LSubRegClasses, DP16LSuperRegClasses, 2, 2, 1, DP16L, DP16L + 16) {}

    GRClass::iterator
    GRClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      return allocation_order_begin(MF)
             + (RI->hasFP(MF) ? 31 : 30);
    }
  
GRClass::GRClass()  : TargetRegisterClass(GRRegClassID, "GR", GRVTs, GRSubclasses, GRSuperclasses, GRSubRegClasses, GRSuperRegClasses, 4, 4, 1, GR, GR + 32) {}

GR16Class::GR16Class()  : TargetRegisterClass(GR16RegClassID, "GR16", GR16VTs, GR16Subclasses, GR16Superclasses, GR16SubRegClasses, GR16SuperRegClasses, 2, 2, 1, GR16, GR16 + 64) {}

IClass::IClass()  : TargetRegisterClass(IRegClassID, "I", IVTs, ISubclasses, ISuperclasses, ISubRegClasses, ISuperRegClasses, 4, 4, 1, I, I + 4) {}

JustCCClass::JustCCClass()  : TargetRegisterClass(JustCCRegClassID, "JustCC", JustCCVTs, JustCCSubclasses, JustCCSuperclasses, JustCCSubRegClasses, JustCCSuperRegClasses, 1, 1, -1, JustCC, JustCC + 1) {}

LClass::LClass()  : TargetRegisterClass(LRegClassID, "L", LVTs, LSubclasses, LSuperclasses, LSubRegClasses, LSuperRegClasses, 4, 4, 1, L, L + 4) {}

MClass::MClass()  : TargetRegisterClass(MRegClassID, "M", MVTs, MSubclasses, MSuperclasses, MSubRegClasses, MSuperRegClasses, 4, 4, 1, M, M + 4) {}

NotCCClass::NotCCClass()  : TargetRegisterClass(NotCCRegClassID, "NotCC", NotCCVTs, NotCCSubclasses, NotCCSuperclasses, NotCCSubRegClasses, NotCCSuperRegClasses, 1, 1, -1, NotCC, NotCC + 1) {}

    PClass::iterator
    PClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      return allocation_order_begin(MF)
             + (RI->hasFP(MF) ? 7 : 6);
    }
  
PClass::PClass()  : TargetRegisterClass(PRegClassID, "P", PVTs, PSubclasses, PSuperclasses, PSubRegClasses, PSuperRegClasses, 4, 4, 1, P, P + 8) {}

P16Class::P16Class()  : TargetRegisterClass(P16RegClassID, "P16", P16VTs, P16Subclasses, P16Superclasses, P16SubRegClasses, P16SuperRegClasses, 2, 2, 1, P16, P16 + 16) {}

P16HClass::P16HClass()  : TargetRegisterClass(P16HRegClassID, "P16H", P16HVTs, P16HSubclasses, P16HSuperclasses, P16HSubRegClasses, P16HSuperRegClasses, 2, 2, 1, P16H, P16H + 8) {}

P16LClass::P16LClass()  : TargetRegisterClass(P16LRegClassID, "P16L", P16LVTs, P16LSubclasses, P16LSuperclasses, P16LSubRegClasses, P16LSuperRegClasses, 2, 2, 1, P16L, P16L + 8) {}

    PIClass::iterator
    PIClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      return allocation_order_begin(MF)
             + (RI->hasFP(MF) ? 11 : 10);
    }
  
PIClass::PIClass()  : TargetRegisterClass(PIRegClassID, "PI", PIVTs, PISubclasses, PISuperclasses, PISubRegClasses, PISuperRegClasses, 4, 4, 1, PI, PI + 12) {}

StatBitClass::StatBitClass()  : TargetRegisterClass(StatBitRegClassID, "StatBit", StatBitVTs, StatBitSubclasses, StatBitSuperclasses, StatBitSubRegClasses, StatBitSuperRegClasses, 1, 1, -1, StatBit, StatBit + 12) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &BF::ALLRegClass,
    &BF::AccuRegClass,
    &BF::AnyCCRegClass,
    &BF::BRegClass,
    &BF::DRegClass,
    &BF::D16RegClass,
    &BF::D16HRegClass,
    &BF::D16LRegClass,
    &BF::DPRegClass,
    &BF::DP16RegClass,
    &BF::DP16HRegClass,
    &BF::DP16LRegClass,
    &BF::GRRegClass,
    &BF::GR16RegClass,
    &BF::IRegClass,
    &BF::JustCCRegClass,
    &BF::LRegClass,
    &BF::MRegClass,
    &BF::NotCCRegClass,
    &BF::PRegClass,
    &BF::P16RegClass,
    &BF::P16HRegClass,
    &BF::P16LRegClass,
    &BF::PIRegClass,
    &BF::StatBitRegClass,
  };


  // Number of hash collisions: 1
  const unsigned SubregHashTable[] = { BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L0, BF::L0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M3, BF::M3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R2, BF::R2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AQ, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I0, BF::I0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B2, BF::B2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R2, BF::R2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I0, BF::I0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P4, BF::P4H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R7, BF::R7H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0, BF::A0H, 
                                       BF::B2, BF::B2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0W, BF::A0H, 
                                       BF::L1, BF::L1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AV0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P4, BF::P4L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R7, BF::R7L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0, BF::A0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0W, BF::A0L, 
                                       BF::L1, BF::L1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P0, BF::P0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R3, BF::R3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AV0S, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I1, BF::I1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M0, BF::M0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0, BF::A0W, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B3, BF::B3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P0, BF::P0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R3, BF::R3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AV1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I1, BF::I1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M0, BF::M0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P5, BF::P5H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0, BF::A0X, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B3, BF::B3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L2, BF::L2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AV1S, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::CC, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P5, BF::P5L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L2, BF::L2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P1, BF::P1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R4, BF::R4H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AZ, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I2, BF::I2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M1, BF::M1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1, BF::A1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1W, BF::A1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P1, BF::P1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R4, BF::R4L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I2, BF::I2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M1, BF::M1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R0, BF::R0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1, BF::A1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1W, BF::A1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L3, BF::L3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B0, BF::B0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R0, BF::R0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1, BF::A1W, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L3, BF::L3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P2, BF::P2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R5, BF::R5H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B0, BF::B0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I3, BF::I3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M2, BF::M2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1, BF::A1X, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P2, BF::P2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R5, BF::R5L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I3, BF::I3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M2, BF::M2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R1, BF::R1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::SP, BF::SPH, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::FP, BF::FPH, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AC0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B1, BF::B1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::V, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R1, BF::R1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::SP, BF::SPL, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::FP, BF::FPL, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AC1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P3, BF::P3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R6, BF::R6H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B1, BF::B1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::VS, 
                                       BF::L0, BF::L0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M3, BF::M3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::NCC, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AN, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P3, BF::P3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R6, BF::R6L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
BF::NoRegister, BF::NoRegister };
  const unsigned SubregHashTableSize = 512;


  // Number of hash collisions: 0
  const unsigned SuperregHashTable[] = { BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B2H, BF::B2, 
                                       BF::B2L, BF::B2, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P4H, BF::P4, 
                                       BF::P4L, BF::P4, 
                                       BF::R7H, BF::R7, 
                                       BF::R7L, BF::R7, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0H, BF::A0, 
                                       BF::A0L, BF::A0, 
                                       BF::A0W, BF::A0, 
                                       BF::A0X, BF::A0, 
                                       BF::L1H, BF::L1, 
                                       BF::L1L, BF::L1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::AC0, BF::ASTAT, 
                                       BF::AC1, BF::ASTAT, 
                                       BF::AN, BF::ASTAT, 
                                       BF::AQ, BF::ASTAT, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::AV0, BF::ASTAT, 
                                       BF::AV0S, BF::ASTAT, 
                                       BF::AV1, BF::ASTAT, 
                                       BF::AV1S, BF::ASTAT, 
                                       BF::AZ, BF::ASTAT, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::CC, BF::ASTAT, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P0H, BF::P0, 
                                       BF::P0L, BF::P0, 
                                       BF::R3H, BF::R3, 
                                       BF::R3L, BF::R3, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I1H, BF::I1, 
                                       BF::I1L, BF::I1, 
                                       BF::M0H, BF::M0, 
                                       BF::M0L, BF::M0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B3H, BF::B3, 
                                       BF::B3L, BF::B3, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NCC, BF::ASTAT, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P5H, BF::P5, 
                                       BF::P5L, BF::P5, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0H, BF::A0W, 
                                       BF::A0L, BF::A0W, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L2H, BF::L2, 
                                       BF::L2L, BF::L2, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::V, BF::ASTAT, 
                                       BF::VS, BF::ASTAT, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P1H, BF::P1, 
                                       BF::P1L, BF::P1, 
                                       BF::R4H, BF::R4, 
                                       BF::R4L, BF::R4, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I2H, BF::I2, 
                                       BF::I2L, BF::I2, 
                                       BF::M1H, BF::M1, 
                                       BF::M1L, BF::M1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1H, BF::A1, 
                                       BF::A1L, BF::A1, 
                                       BF::A1W, BF::A1, 
                                       BF::A1X, BF::A1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R0H, BF::R0, 
                                       BF::R0L, BF::R0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L3H, BF::L3, 
                                       BF::L3L, BF::L3, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B0H, BF::B0, 
                                       BF::B0L, BF::B0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P2H, BF::P2, 
                                       BF::P2L, BF::P2, 
                                       BF::R5H, BF::R5, 
                                       BF::R5L, BF::R5, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I3H, BF::I3, 
                                       BF::I3L, BF::I3, 
                                       BF::M2H, BF::M2, 
                                       BF::M2L, BF::M2, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1H, BF::A1W, 
                                       BF::A1L, BF::A1W, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R1H, BF::R1, 
                                       BF::R1L, BF::R1, 
                                       BF::SPH, BF::SP, 
                                       BF::SPL, BF::SP, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::FPH, BF::FP, 
                                       BF::FPL, BF::FP, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B1H, BF::B1, 
                                       BF::B1L, BF::B1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P3H, BF::P3, 
                                       BF::P3L, BF::P3, 
                                       BF::R6H, BF::R6, 
                                       BF::R6L, BF::R6, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L0H, BF::L0, 
                                       BF::L0L, BF::L0, 
                                       BF::M3H, BF::M3, 
                                       BF::M3L, BF::M3, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R2H, BF::R2, 
                                       BF::R2L, BF::R2, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I0H, BF::I0, 
                                       BF::I0L, BF::I0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
BF::NoRegister, BF::NoRegister };
  const unsigned SuperregHashTableSize = 512;


  // Number of hash collisions: 27
  const unsigned AliasesHashTable[] = { BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L0, BF::L0L, 
                                       BF::B2H, BF::B2, 
                                       BF::B2L, BF::B2, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M3, BF::M3L, 
                                       BF::R2, BF::R2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0H, BF::A0, 
                                       BF::A0L, BF::A0, 
                                       BF::A0W, BF::A0, 
                                       BF::A0X, BF::A0, 
                                       BF::L1H, BF::L1, 
                                       BF::L1L, BF::L1, 
                                       BF::B2, BF::B2H, 
                                       BF::R2, BF::R2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0, BF::A0H, 
                                       BF::B2, BF::B2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0W, BF::A0H, 
                                       BF::L1, BF::L1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P0H, BF::P0, 
                                       BF::P0L, BF::P0, 
                                       BF::R3H, BF::R3, 
                                       BF::R3L, BF::R3, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0, BF::A0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0W, BF::A0L, 
                                       BF::L1, BF::L1L, 
                                       BF::B3H, BF::B3, 
                                       BF::B3L, BF::B3, 
                                       BF::P0, BF::P0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R3, BF::R3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0, BF::A0W, 
                                       BF::A0H, BF::A0W, 
                                       BF::A0L, BF::A0W, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B3, BF::B3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P0, BF::P0L, 
                                       BF::L2H, BF::L2, 
                                       BF::L2L, BF::L2, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R3, BF::R3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A0, BF::A0X, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B3, BF::B3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L2, BF::L2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P1H, BF::P1, 
                                       BF::P1L, BF::P1, 
                                       BF::R4H, BF::R4, 
                                       BF::R4L, BF::R4, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::CC, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1H, BF::A1, 
                                       BF::A1L, BF::A1, 
                                       BF::A1W, BF::A1, 
                                       BF::A1X, BF::A1, 
                                       BF::P1, BF::P1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R4, BF::R4H, 
                                       BF::L2, BF::L2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1, BF::A1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1W, BF::A1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P1, BF::P1L, 
                                       BF::L3H, BF::L3, 
                                       BF::L3L, BF::L3, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R4, BF::R4L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NCC, BF::CC, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1, BF::A1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1W, BF::A1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L3, BF::L3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P2H, BF::P2, 
                                       BF::P2L, BF::P2, 
                                       BF::R5H, BF::R5, 
                                       BF::R5L, BF::R5, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1, BF::A1W, 
                                       BF::A1H, BF::A1W, 
                                       BF::A1L, BF::A1W, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L3, BF::L3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P2, BF::P2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R5, BF::R5H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::A1, BF::A1X, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::FPH, BF::FP, 
                                       BF::FPL, BF::FP, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P2, BF::P2L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R5, BF::R5L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::FP, BF::FPH, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AC0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P3H, BF::P3, 
                                       BF::P3L, BF::P3, 
                                       BF::R6H, BF::R6, 
                                       BF::R6L, BF::R6, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::FP, BF::FPL, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AC1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P3, BF::P3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R6, BF::R6H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AN, 
                                       BF::I0H, BF::I0, 
                                       BF::I0L, BF::I0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P3, BF::P3L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R6, BF::R6L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AQ, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I0, BF::I0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P4H, BF::P4, 
                                       BF::P4L, BF::P4, 
                                       BF::R7H, BF::R7, 
                                       BF::R7L, BF::R7, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::AC0, BF::ASTAT, 
                                       BF::AC1, BF::ASTAT, 
                                       BF::AN, BF::ASTAT, 
                                       BF::AQ, BF::ASTAT, 
                                       BF::I0, BF::I0L, 
                                       BF::AV0, BF::ASTAT, 
                                       BF::AV0S, BF::ASTAT, 
                                       BF::AV1, BF::ASTAT, 
                                       BF::AV1S, BF::ASTAT, 
                                       BF::AZ, BF::ASTAT, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P4, BF::P4H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R7, BF::R7H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::CC, BF::ASTAT, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AV0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I1H, BF::I1, 
                                       BF::I1L, BF::I1, 
                                       BF::M0H, BF::M0, 
                                       BF::M0L, BF::M0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R7, BF::R7L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P4, BF::P4L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NCC, BF::ASTAT, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AV0S, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I1, BF::I1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M0, BF::M0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P5H, BF::P5, 
                                       BF::P5L, BF::P5, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AV1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I1, BF::I1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M0, BF::M0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P5, BF::P5H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::V, BF::ASTAT, 
                                       BF::VS, BF::ASTAT, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AV1S, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I2H, BF::I2, 
                                       BF::I2L, BF::I2, 
                                       BF::M1H, BF::M1, 
                                       BF::M1L, BF::M1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::P5, BF::P5L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::AZ, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I2, BF::I2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M1, BF::M1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R0H, BF::R0, 
                                       BF::R0L, BF::R0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I2, BF::I2L, 
                                       BF::B0H, BF::B0, 
                                       BF::B0L, BF::B0, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M1, BF::M1L, 
                                       BF::R0, BF::R0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B0, BF::B0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I3H, BF::I3, 
                                       BF::I3L, BF::I3, 
                                       BF::M2H, BF::M2, 
                                       BF::M2L, BF::M2, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R0, BF::R0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B0, BF::B0L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I3, BF::I3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M2, BF::M2H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R1H, BF::R1, 
                                       BF::R1L, BF::R1, 
                                       BF::SPH, BF::SP, 
                                       BF::SPL, BF::SP, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::I3, BF::I3L, 
                                       BF::B1H, BF::B1, 
                                       BF::B1L, BF::B1, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M2, BF::M2L, 
                                       BF::R1, BF::R1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::SP, BF::SPH, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B1, BF::B1H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::V, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::L0H, BF::L0, 
                                       BF::L0L, BF::L0, 
                                       BF::M3H, BF::M3, 
                                       BF::M3L, BF::M3, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::SP, BF::SPL, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R1, BF::R1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::B1, BF::B1L, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::VS, 
                                       BF::L0, BF::L0H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::M3, BF::M3H, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::R2H, BF::R2, 
                                       BF::R2L, BF::R2, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::ASTAT, BF::NCC, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::CC, BF::NCC, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
                                       BF::NoRegister, BF::NoRegister, 
BF::NoRegister, BF::NoRegister };
  const unsigned AliasesHashTableSize = 1024;


  // Register Alias Sets...
  const unsigned Empty_AliasSet[] = { 0 };
  const unsigned A0_AliasSet[] = { BF::A0X, BF::A0H, BF::A0L, BF::A0W, 0 };
  const unsigned A0H_AliasSet[] = { BF::A0W, BF::A0, 0 };
  const unsigned A0L_AliasSet[] = { BF::A0W, BF::A0, 0 };
  const unsigned A0W_AliasSet[] = { BF::A0H, BF::A0L, BF::A0, 0 };
  const unsigned A0X_AliasSet[] = { BF::A0, 0 };
  const unsigned A1_AliasSet[] = { BF::A1X, BF::A1H, BF::A1L, BF::A1W, 0 };
  const unsigned A1H_AliasSet[] = { BF::A1W, BF::A1, 0 };
  const unsigned A1L_AliasSet[] = { BF::A1W, BF::A1, 0 };
  const unsigned A1W_AliasSet[] = { BF::A1H, BF::A1L, BF::A1, 0 };
  const unsigned A1X_AliasSet[] = { BF::A1, 0 };
  const unsigned AC0_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned AC1_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned AN_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned AQ_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned ASTAT_AliasSet[] = { BF::AZ, BF::AN, BF::CC, BF::NCC, BF::AQ, BF::AC0, BF::AC1, BF::AV0, BF::AV0S, BF::AV1, BF::AV1S, BF::V, BF::VS, 0 };
  const unsigned AV0_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned AV0S_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned AV1_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned AV1S_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned AZ_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned B0_AliasSet[] = { BF::B0H, BF::B0L, 0 };
  const unsigned B0H_AliasSet[] = { BF::B0, 0 };
  const unsigned B0L_AliasSet[] = { BF::B0, 0 };
  const unsigned B1_AliasSet[] = { BF::B1H, BF::B1L, 0 };
  const unsigned B1H_AliasSet[] = { BF::B1, 0 };
  const unsigned B1L_AliasSet[] = { BF::B1, 0 };
  const unsigned B2_AliasSet[] = { BF::B2H, BF::B2L, 0 };
  const unsigned B2H_AliasSet[] = { BF::B2, 0 };
  const unsigned B2L_AliasSet[] = { BF::B2, 0 };
  const unsigned B3_AliasSet[] = { BF::B3H, BF::B3L, 0 };
  const unsigned B3H_AliasSet[] = { BF::B3, 0 };
  const unsigned B3L_AliasSet[] = { BF::B3, 0 };
  const unsigned CC_AliasSet[] = { BF::NCC, BF::ASTAT, 0 };
  const unsigned CYCLES_AliasSet[] = { 0 };
  const unsigned CYCLES2_AliasSet[] = { 0 };
  const unsigned EMUDAT_AliasSet[] = { 0 };
  const unsigned FP_AliasSet[] = { BF::FPH, BF::FPL, 0 };
  const unsigned FPH_AliasSet[] = { BF::FP, 0 };
  const unsigned FPL_AliasSet[] = { BF::FP, 0 };
  const unsigned I0_AliasSet[] = { BF::I0H, BF::I0L, 0 };
  const unsigned I0H_AliasSet[] = { BF::I0, 0 };
  const unsigned I0L_AliasSet[] = { BF::I0, 0 };
  const unsigned I1_AliasSet[] = { BF::I1H, BF::I1L, 0 };
  const unsigned I1H_AliasSet[] = { BF::I1, 0 };
  const unsigned I1L_AliasSet[] = { BF::I1, 0 };
  const unsigned I2_AliasSet[] = { BF::I2H, BF::I2L, 0 };
  const unsigned I2H_AliasSet[] = { BF::I2, 0 };
  const unsigned I2L_AliasSet[] = { BF::I2, 0 };
  const unsigned I3_AliasSet[] = { BF::I3H, BF::I3L, 0 };
  const unsigned I3H_AliasSet[] = { BF::I3, 0 };
  const unsigned I3L_AliasSet[] = { BF::I3, 0 };
  const unsigned L0_AliasSet[] = { BF::L0H, BF::L0L, 0 };
  const unsigned L0H_AliasSet[] = { BF::L0, 0 };
  const unsigned L0L_AliasSet[] = { BF::L0, 0 };
  const unsigned L1_AliasSet[] = { BF::L1H, BF::L1L, 0 };
  const unsigned L1H_AliasSet[] = { BF::L1, 0 };
  const unsigned L1L_AliasSet[] = { BF::L1, 0 };
  const unsigned L2_AliasSet[] = { BF::L2H, BF::L2L, 0 };
  const unsigned L2H_AliasSet[] = { BF::L2, 0 };
  const unsigned L2L_AliasSet[] = { BF::L2, 0 };
  const unsigned L3_AliasSet[] = { BF::L3H, BF::L3L, 0 };
  const unsigned L3H_AliasSet[] = { BF::L3, 0 };
  const unsigned L3L_AliasSet[] = { BF::L3, 0 };
  const unsigned LB0_AliasSet[] = { 0 };
  const unsigned LB1_AliasSet[] = { 0 };
  const unsigned LC0_AliasSet[] = { 0 };
  const unsigned LC1_AliasSet[] = { 0 };
  const unsigned LT0_AliasSet[] = { 0 };
  const unsigned LT1_AliasSet[] = { 0 };
  const unsigned M0_AliasSet[] = { BF::M0H, BF::M0L, 0 };
  const unsigned M0H_AliasSet[] = { BF::M0, 0 };
  const unsigned M0L_AliasSet[] = { BF::M0, 0 };
  const unsigned M1_AliasSet[] = { BF::M1H, BF::M1L, 0 };
  const unsigned M1H_AliasSet[] = { BF::M1, 0 };
  const unsigned M1L_AliasSet[] = { BF::M1, 0 };
  const unsigned M2_AliasSet[] = { BF::M2H, BF::M2L, 0 };
  const unsigned M2H_AliasSet[] = { BF::M2, 0 };
  const unsigned M2L_AliasSet[] = { BF::M2, 0 };
  const unsigned M3_AliasSet[] = { BF::M3H, BF::M3L, 0 };
  const unsigned M3H_AliasSet[] = { BF::M3, 0 };
  const unsigned M3L_AliasSet[] = { BF::M3, 0 };
  const unsigned NCC_AliasSet[] = { BF::CC, BF::ASTAT, 0 };
  const unsigned P0_AliasSet[] = { BF::P0H, BF::P0L, 0 };
  const unsigned P0H_AliasSet[] = { BF::P0, 0 };
  const unsigned P0L_AliasSet[] = { BF::P0, 0 };
  const unsigned P1_AliasSet[] = { BF::P1H, BF::P1L, 0 };
  const unsigned P1H_AliasSet[] = { BF::P1, 0 };
  const unsigned P1L_AliasSet[] = { BF::P1, 0 };
  const unsigned P2_AliasSet[] = { BF::P2H, BF::P2L, 0 };
  const unsigned P2H_AliasSet[] = { BF::P2, 0 };
  const unsigned P2L_AliasSet[] = { BF::P2, 0 };
  const unsigned P3_AliasSet[] = { BF::P3H, BF::P3L, 0 };
  const unsigned P3H_AliasSet[] = { BF::P3, 0 };
  const unsigned P3L_AliasSet[] = { BF::P3, 0 };
  const unsigned P4_AliasSet[] = { BF::P4H, BF::P4L, 0 };
  const unsigned P4H_AliasSet[] = { BF::P4, 0 };
  const unsigned P4L_AliasSet[] = { BF::P4, 0 };
  const unsigned P5_AliasSet[] = { BF::P5H, BF::P5L, 0 };
  const unsigned P5H_AliasSet[] = { BF::P5, 0 };
  const unsigned P5L_AliasSet[] = { BF::P5, 0 };
  const unsigned R0_AliasSet[] = { BF::R0H, BF::R0L, 0 };
  const unsigned R0H_AliasSet[] = { BF::R0, 0 };
  const unsigned R0L_AliasSet[] = { BF::R0, 0 };
  const unsigned R1_AliasSet[] = { BF::R1H, BF::R1L, 0 };
  const unsigned R1H_AliasSet[] = { BF::R1, 0 };
  const unsigned R1L_AliasSet[] = { BF::R1, 0 };
  const unsigned R2_AliasSet[] = { BF::R2H, BF::R2L, 0 };
  const unsigned R2H_AliasSet[] = { BF::R2, 0 };
  const unsigned R2L_AliasSet[] = { BF::R2, 0 };
  const unsigned R3_AliasSet[] = { BF::R3H, BF::R3L, 0 };
  const unsigned R3H_AliasSet[] = { BF::R3, 0 };
  const unsigned R3L_AliasSet[] = { BF::R3, 0 };
  const unsigned R4_AliasSet[] = { BF::R4H, BF::R4L, 0 };
  const unsigned R4H_AliasSet[] = { BF::R4, 0 };
  const unsigned R4L_AliasSet[] = { BF::R4, 0 };
  const unsigned R5_AliasSet[] = { BF::R5H, BF::R5L, 0 };
  const unsigned R5H_AliasSet[] = { BF::R5, 0 };
  const unsigned R5L_AliasSet[] = { BF::R5, 0 };
  const unsigned R6_AliasSet[] = { BF::R6H, BF::R6L, 0 };
  const unsigned R6H_AliasSet[] = { BF::R6, 0 };
  const unsigned R6L_AliasSet[] = { BF::R6, 0 };
  const unsigned R7_AliasSet[] = { BF::R7H, BF::R7L, 0 };
  const unsigned R7H_AliasSet[] = { BF::R7, 0 };
  const unsigned R7L_AliasSet[] = { BF::R7, 0 };
  const unsigned RETE_AliasSet[] = { 0 };
  const unsigned RETI_AliasSet[] = { 0 };
  const unsigned RETN_AliasSet[] = { 0 };
  const unsigned RETS_AliasSet[] = { 0 };
  const unsigned RETX_AliasSet[] = { 0 };
  const unsigned SEQSTAT_AliasSet[] = { 0 };
  const unsigned SP_AliasSet[] = { BF::SPH, BF::SPL, 0 };
  const unsigned SPH_AliasSet[] = { BF::SP, 0 };
  const unsigned SPL_AliasSet[] = { BF::SP, 0 };
  const unsigned SYSCFG_AliasSet[] = { 0 };
  const unsigned USP_AliasSet[] = { 0 };
  const unsigned V_AliasSet[] = { BF::ASTAT, 0 };
  const unsigned VS_AliasSet[] = { BF::ASTAT, 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned A0_SubRegsSet[] = { BF::A0X, BF::A0W, BF::A0H, BF::A0L, 0 };
  const unsigned A0H_SubRegsSet[] = { 0 };
  const unsigned A0L_SubRegsSet[] = { 0 };
  const unsigned A0W_SubRegsSet[] = { BF::A0H, BF::A0L, 0 };
  const unsigned A0X_SubRegsSet[] = { 0 };
  const unsigned A1_SubRegsSet[] = { BF::A1X, BF::A1W, BF::A1H, BF::A1L, 0 };
  const unsigned A1H_SubRegsSet[] = { 0 };
  const unsigned A1L_SubRegsSet[] = { 0 };
  const unsigned A1W_SubRegsSet[] = { BF::A1H, BF::A1L, 0 };
  const unsigned A1X_SubRegsSet[] = { 0 };
  const unsigned AC0_SubRegsSet[] = { 0 };
  const unsigned AC1_SubRegsSet[] = { 0 };
  const unsigned AN_SubRegsSet[] = { 0 };
  const unsigned AQ_SubRegsSet[] = { 0 };
  const unsigned ASTAT_SubRegsSet[] = { BF::AZ, BF::AN, BF::CC, BF::NCC, BF::AQ, BF::AC0, BF::AC1, BF::AV0, BF::AV0S, BF::AV1, BF::AV1S, BF::V, BF::VS, 0 };
  const unsigned AV0_SubRegsSet[] = { 0 };
  const unsigned AV0S_SubRegsSet[] = { 0 };
  const unsigned AV1_SubRegsSet[] = { 0 };
  const unsigned AV1S_SubRegsSet[] = { 0 };
  const unsigned AZ_SubRegsSet[] = { 0 };
  const unsigned B0_SubRegsSet[] = { BF::B0H, BF::B0L, 0 };
  const unsigned B0H_SubRegsSet[] = { 0 };
  const unsigned B0L_SubRegsSet[] = { 0 };
  const unsigned B1_SubRegsSet[] = { BF::B1H, BF::B1L, 0 };
  const unsigned B1H_SubRegsSet[] = { 0 };
  const unsigned B1L_SubRegsSet[] = { 0 };
  const unsigned B2_SubRegsSet[] = { BF::B2H, BF::B2L, 0 };
  const unsigned B2H_SubRegsSet[] = { 0 };
  const unsigned B2L_SubRegsSet[] = { 0 };
  const unsigned B3_SubRegsSet[] = { BF::B3H, BF::B3L, 0 };
  const unsigned B3H_SubRegsSet[] = { 0 };
  const unsigned B3L_SubRegsSet[] = { 0 };
  const unsigned CC_SubRegsSet[] = { 0 };
  const unsigned CYCLES_SubRegsSet[] = { 0 };
  const unsigned CYCLES2_SubRegsSet[] = { 0 };
  const unsigned EMUDAT_SubRegsSet[] = { 0 };
  const unsigned FP_SubRegsSet[] = { BF::FPH, BF::FPL, 0 };
  const unsigned FPH_SubRegsSet[] = { 0 };
  const unsigned FPL_SubRegsSet[] = { 0 };
  const unsigned I0_SubRegsSet[] = { BF::I0H, BF::I0L, 0 };
  const unsigned I0H_SubRegsSet[] = { 0 };
  const unsigned I0L_SubRegsSet[] = { 0 };
  const unsigned I1_SubRegsSet[] = { BF::I1H, BF::I1L, 0 };
  const unsigned I1H_SubRegsSet[] = { 0 };
  const unsigned I1L_SubRegsSet[] = { 0 };
  const unsigned I2_SubRegsSet[] = { BF::I2H, BF::I2L, 0 };
  const unsigned I2H_SubRegsSet[] = { 0 };
  const unsigned I2L_SubRegsSet[] = { 0 };
  const unsigned I3_SubRegsSet[] = { BF::I3H, BF::I3L, 0 };
  const unsigned I3H_SubRegsSet[] = { 0 };
  const unsigned I3L_SubRegsSet[] = { 0 };
  const unsigned L0_SubRegsSet[] = { BF::L0H, BF::L0L, 0 };
  const unsigned L0H_SubRegsSet[] = { 0 };
  const unsigned L0L_SubRegsSet[] = { 0 };
  const unsigned L1_SubRegsSet[] = { BF::L1H, BF::L1L, 0 };
  const unsigned L1H_SubRegsSet[] = { 0 };
  const unsigned L1L_SubRegsSet[] = { 0 };
  const unsigned L2_SubRegsSet[] = { BF::L2H, BF::L2L, 0 };
  const unsigned L2H_SubRegsSet[] = { 0 };
  const unsigned L2L_SubRegsSet[] = { 0 };
  const unsigned L3_SubRegsSet[] = { BF::L3H, BF::L3L, 0 };
  const unsigned L3H_SubRegsSet[] = { 0 };
  const unsigned L3L_SubRegsSet[] = { 0 };
  const unsigned LB0_SubRegsSet[] = { 0 };
  const unsigned LB1_SubRegsSet[] = { 0 };
  const unsigned LC0_SubRegsSet[] = { 0 };
  const unsigned LC1_SubRegsSet[] = { 0 };
  const unsigned LT0_SubRegsSet[] = { 0 };
  const unsigned LT1_SubRegsSet[] = { 0 };
  const unsigned M0_SubRegsSet[] = { BF::M0H, BF::M0L, 0 };
  const unsigned M0H_SubRegsSet[] = { 0 };
  const unsigned M0L_SubRegsSet[] = { 0 };
  const unsigned M1_SubRegsSet[] = { BF::M1H, BF::M1L, 0 };
  const unsigned M1H_SubRegsSet[] = { 0 };
  const unsigned M1L_SubRegsSet[] = { 0 };
  const unsigned M2_SubRegsSet[] = { BF::M2H, BF::M2L, 0 };
  const unsigned M2H_SubRegsSet[] = { 0 };
  const unsigned M2L_SubRegsSet[] = { 0 };
  const unsigned M3_SubRegsSet[] = { BF::M3H, BF::M3L, 0 };
  const unsigned M3H_SubRegsSet[] = { 0 };
  const unsigned M3L_SubRegsSet[] = { 0 };
  const unsigned NCC_SubRegsSet[] = { 0 };
  const unsigned P0_SubRegsSet[] = { BF::P0H, BF::P0L, 0 };
  const unsigned P0H_SubRegsSet[] = { 0 };
  const unsigned P0L_SubRegsSet[] = { 0 };
  const unsigned P1_SubRegsSet[] = { BF::P1H, BF::P1L, 0 };
  const unsigned P1H_SubRegsSet[] = { 0 };
  const unsigned P1L_SubRegsSet[] = { 0 };
  const unsigned P2_SubRegsSet[] = { BF::P2H, BF::P2L, 0 };
  const unsigned P2H_SubRegsSet[] = { 0 };
  const unsigned P2L_SubRegsSet[] = { 0 };
  const unsigned P3_SubRegsSet[] = { BF::P3H, BF::P3L, 0 };
  const unsigned P3H_SubRegsSet[] = { 0 };
  const unsigned P3L_SubRegsSet[] = { 0 };
  const unsigned P4_SubRegsSet[] = { BF::P4H, BF::P4L, 0 };
  const unsigned P4H_SubRegsSet[] = { 0 };
  const unsigned P4L_SubRegsSet[] = { 0 };
  const unsigned P5_SubRegsSet[] = { BF::P5H, BF::P5L, 0 };
  const unsigned P5H_SubRegsSet[] = { 0 };
  const unsigned P5L_SubRegsSet[] = { 0 };
  const unsigned R0_SubRegsSet[] = { BF::R0H, BF::R0L, 0 };
  const unsigned R0H_SubRegsSet[] = { 0 };
  const unsigned R0L_SubRegsSet[] = { 0 };
  const unsigned R1_SubRegsSet[] = { BF::R1H, BF::R1L, 0 };
  const unsigned R1H_SubRegsSet[] = { 0 };
  const unsigned R1L_SubRegsSet[] = { 0 };
  const unsigned R2_SubRegsSet[] = { BF::R2H, BF::R2L, 0 };
  const unsigned R2H_SubRegsSet[] = { 0 };
  const unsigned R2L_SubRegsSet[] = { 0 };
  const unsigned R3_SubRegsSet[] = { BF::R3H, BF::R3L, 0 };
  const unsigned R3H_SubRegsSet[] = { 0 };
  const unsigned R3L_SubRegsSet[] = { 0 };
  const unsigned R4_SubRegsSet[] = { BF::R4H, BF::R4L, 0 };
  const unsigned R4H_SubRegsSet[] = { 0 };
  const unsigned R4L_SubRegsSet[] = { 0 };
  const unsigned R5_SubRegsSet[] = { BF::R5H, BF::R5L, 0 };
  const unsigned R5H_SubRegsSet[] = { 0 };
  const unsigned R5L_SubRegsSet[] = { 0 };
  const unsigned R6_SubRegsSet[] = { BF::R6H, BF::R6L, 0 };
  const unsigned R6H_SubRegsSet[] = { 0 };
  const unsigned R6L_SubRegsSet[] = { 0 };
  const unsigned R7_SubRegsSet[] = { BF::R7H, BF::R7L, 0 };
  const unsigned R7H_SubRegsSet[] = { 0 };
  const unsigned R7L_SubRegsSet[] = { 0 };
  const unsigned RETE_SubRegsSet[] = { 0 };
  const unsigned RETI_SubRegsSet[] = { 0 };
  const unsigned RETN_SubRegsSet[] = { 0 };
  const unsigned RETS_SubRegsSet[] = { 0 };
  const unsigned RETX_SubRegsSet[] = { 0 };
  const unsigned SEQSTAT_SubRegsSet[] = { 0 };
  const unsigned SP_SubRegsSet[] = { BF::SPH, BF::SPL, 0 };
  const unsigned SPH_SubRegsSet[] = { 0 };
  const unsigned SPL_SubRegsSet[] = { 0 };
  const unsigned SYSCFG_SubRegsSet[] = { 0 };
  const unsigned USP_SubRegsSet[] = { 0 };
  const unsigned V_SubRegsSet[] = { 0 };
  const unsigned VS_SubRegsSet[] = { 0 };


  // Register Super-registers Sets...
  const unsigned Empty_SuperRegsSet[] = { 0 };
  const unsigned A0_SuperRegsSet[] = { 0 };
  const unsigned A0H_SuperRegsSet[] = { BF::A0, BF::A0W, 0 };
  const unsigned A0L_SuperRegsSet[] = { BF::A0, BF::A0W, 0 };
  const unsigned A0W_SuperRegsSet[] = { BF::A0, 0 };
  const unsigned A0X_SuperRegsSet[] = { BF::A0, 0 };
  const unsigned A1_SuperRegsSet[] = { 0 };
  const unsigned A1H_SuperRegsSet[] = { BF::A1, BF::A1W, 0 };
  const unsigned A1L_SuperRegsSet[] = { BF::A1, BF::A1W, 0 };
  const unsigned A1W_SuperRegsSet[] = { BF::A1, 0 };
  const unsigned A1X_SuperRegsSet[] = { BF::A1, 0 };
  const unsigned AC0_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned AC1_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned AN_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned AQ_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned ASTAT_SuperRegsSet[] = { 0 };
  const unsigned AV0_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned AV0S_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned AV1_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned AV1S_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned AZ_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned B0_SuperRegsSet[] = { 0 };
  const unsigned B0H_SuperRegsSet[] = { BF::B0, 0 };
  const unsigned B0L_SuperRegsSet[] = { BF::B0, 0 };
  const unsigned B1_SuperRegsSet[] = { 0 };
  const unsigned B1H_SuperRegsSet[] = { BF::B1, 0 };
  const unsigned B1L_SuperRegsSet[] = { BF::B1, 0 };
  const unsigned B2_SuperRegsSet[] = { 0 };
  const unsigned B2H_SuperRegsSet[] = { BF::B2, 0 };
  const unsigned B2L_SuperRegsSet[] = { BF::B2, 0 };
  const unsigned B3_SuperRegsSet[] = { 0 };
  const unsigned B3H_SuperRegsSet[] = { BF::B3, 0 };
  const unsigned B3L_SuperRegsSet[] = { BF::B3, 0 };
  const unsigned CC_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned CYCLES_SuperRegsSet[] = { 0 };
  const unsigned CYCLES2_SuperRegsSet[] = { 0 };
  const unsigned EMUDAT_SuperRegsSet[] = { 0 };
  const unsigned FP_SuperRegsSet[] = { 0 };
  const unsigned FPH_SuperRegsSet[] = { BF::FP, 0 };
  const unsigned FPL_SuperRegsSet[] = { BF::FP, 0 };
  const unsigned I0_SuperRegsSet[] = { 0 };
  const unsigned I0H_SuperRegsSet[] = { BF::I0, 0 };
  const unsigned I0L_SuperRegsSet[] = { BF::I0, 0 };
  const unsigned I1_SuperRegsSet[] = { 0 };
  const unsigned I1H_SuperRegsSet[] = { BF::I1, 0 };
  const unsigned I1L_SuperRegsSet[] = { BF::I1, 0 };
  const unsigned I2_SuperRegsSet[] = { 0 };
  const unsigned I2H_SuperRegsSet[] = { BF::I2, 0 };
  const unsigned I2L_SuperRegsSet[] = { BF::I2, 0 };
  const unsigned I3_SuperRegsSet[] = { 0 };
  const unsigned I3H_SuperRegsSet[] = { BF::I3, 0 };
  const unsigned I3L_SuperRegsSet[] = { BF::I3, 0 };
  const unsigned L0_SuperRegsSet[] = { 0 };
  const unsigned L0H_SuperRegsSet[] = { BF::L0, 0 };
  const unsigned L0L_SuperRegsSet[] = { BF::L0, 0 };
  const unsigned L1_SuperRegsSet[] = { 0 };
  const unsigned L1H_SuperRegsSet[] = { BF::L1, 0 };
  const unsigned L1L_SuperRegsSet[] = { BF::L1, 0 };
  const unsigned L2_SuperRegsSet[] = { 0 };
  const unsigned L2H_SuperRegsSet[] = { BF::L2, 0 };
  const unsigned L2L_SuperRegsSet[] = { BF::L2, 0 };
  const unsigned L3_SuperRegsSet[] = { 0 };
  const unsigned L3H_SuperRegsSet[] = { BF::L3, 0 };
  const unsigned L3L_SuperRegsSet[] = { BF::L3, 0 };
  const unsigned LB0_SuperRegsSet[] = { 0 };
  const unsigned LB1_SuperRegsSet[] = { 0 };
  const unsigned LC0_SuperRegsSet[] = { 0 };
  const unsigned LC1_SuperRegsSet[] = { 0 };
  const unsigned LT0_SuperRegsSet[] = { 0 };
  const unsigned LT1_SuperRegsSet[] = { 0 };
  const unsigned M0_SuperRegsSet[] = { 0 };
  const unsigned M0H_SuperRegsSet[] = { BF::M0, 0 };
  const unsigned M0L_SuperRegsSet[] = { BF::M0, 0 };
  const unsigned M1_SuperRegsSet[] = { 0 };
  const unsigned M1H_SuperRegsSet[] = { BF::M1, 0 };
  const unsigned M1L_SuperRegsSet[] = { BF::M1, 0 };
  const unsigned M2_SuperRegsSet[] = { 0 };
  const unsigned M2H_SuperRegsSet[] = { BF::M2, 0 };
  const unsigned M2L_SuperRegsSet[] = { BF::M2, 0 };
  const unsigned M3_SuperRegsSet[] = { 0 };
  const unsigned M3H_SuperRegsSet[] = { BF::M3, 0 };
  const unsigned M3L_SuperRegsSet[] = { BF::M3, 0 };
  const unsigned NCC_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned P0_SuperRegsSet[] = { 0 };
  const unsigned P0H_SuperRegsSet[] = { BF::P0, 0 };
  const unsigned P0L_SuperRegsSet[] = { BF::P0, 0 };
  const unsigned P1_SuperRegsSet[] = { 0 };
  const unsigned P1H_SuperRegsSet[] = { BF::P1, 0 };
  const unsigned P1L_SuperRegsSet[] = { BF::P1, 0 };
  const unsigned P2_SuperRegsSet[] = { 0 };
  const unsigned P2H_SuperRegsSet[] = { BF::P2, 0 };
  const unsigned P2L_SuperRegsSet[] = { BF::P2, 0 };
  const unsigned P3_SuperRegsSet[] = { 0 };
  const unsigned P3H_SuperRegsSet[] = { BF::P3, 0 };
  const unsigned P3L_SuperRegsSet[] = { BF::P3, 0 };
  const unsigned P4_SuperRegsSet[] = { 0 };
  const unsigned P4H_SuperRegsSet[] = { BF::P4, 0 };
  const unsigned P4L_SuperRegsSet[] = { BF::P4, 0 };
  const unsigned P5_SuperRegsSet[] = { 0 };
  const unsigned P5H_SuperRegsSet[] = { BF::P5, 0 };
  const unsigned P5L_SuperRegsSet[] = { BF::P5, 0 };
  const unsigned R0_SuperRegsSet[] = { 0 };
  const unsigned R0H_SuperRegsSet[] = { BF::R0, 0 };
  const unsigned R0L_SuperRegsSet[] = { BF::R0, 0 };
  const unsigned R1_SuperRegsSet[] = { 0 };
  const unsigned R1H_SuperRegsSet[] = { BF::R1, 0 };
  const unsigned R1L_SuperRegsSet[] = { BF::R1, 0 };
  const unsigned R2_SuperRegsSet[] = { 0 };
  const unsigned R2H_SuperRegsSet[] = { BF::R2, 0 };
  const unsigned R2L_SuperRegsSet[] = { BF::R2, 0 };
  const unsigned R3_SuperRegsSet[] = { 0 };
  const unsigned R3H_SuperRegsSet[] = { BF::R3, 0 };
  const unsigned R3L_SuperRegsSet[] = { BF::R3, 0 };
  const unsigned R4_SuperRegsSet[] = { 0 };
  const unsigned R4H_SuperRegsSet[] = { BF::R4, 0 };
  const unsigned R4L_SuperRegsSet[] = { BF::R4, 0 };
  const unsigned R5_SuperRegsSet[] = { 0 };
  const unsigned R5H_SuperRegsSet[] = { BF::R5, 0 };
  const unsigned R5L_SuperRegsSet[] = { BF::R5, 0 };
  const unsigned R6_SuperRegsSet[] = { 0 };
  const unsigned R6H_SuperRegsSet[] = { BF::R6, 0 };
  const unsigned R6L_SuperRegsSet[] = { BF::R6, 0 };
  const unsigned R7_SuperRegsSet[] = { 0 };
  const unsigned R7H_SuperRegsSet[] = { BF::R7, 0 };
  const unsigned R7L_SuperRegsSet[] = { BF::R7, 0 };
  const unsigned RETE_SuperRegsSet[] = { 0 };
  const unsigned RETI_SuperRegsSet[] = { 0 };
  const unsigned RETN_SuperRegsSet[] = { 0 };
  const unsigned RETS_SuperRegsSet[] = { 0 };
  const unsigned RETX_SuperRegsSet[] = { 0 };
  const unsigned SEQSTAT_SuperRegsSet[] = { 0 };
  const unsigned SP_SuperRegsSet[] = { 0 };
  const unsigned SPH_SuperRegsSet[] = { BF::SP, 0 };
  const unsigned SPL_SuperRegsSet[] = { BF::SP, 0 };
  const unsigned SYSCFG_SuperRegsSet[] = { 0 };
  const unsigned USP_SuperRegsSet[] = { 0 };
  const unsigned V_SuperRegsSet[] = { BF::ASTAT, 0 };
  const unsigned VS_SuperRegsSet[] = { BF::ASTAT, 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "a0",	"A0",	A0_AliasSet,	A0_SubRegsSet,	A0_SuperRegsSet },
    { "a0.h",	"A0H",	A0H_AliasSet,	A0H_SubRegsSet,	A0H_SuperRegsSet },
    { "a0.l",	"A0L",	A0L_AliasSet,	A0L_SubRegsSet,	A0L_SuperRegsSet },
    { "a0.w",	"A0W",	A0W_AliasSet,	A0W_SubRegsSet,	A0W_SuperRegsSet },
    { "a0.x",	"A0X",	A0X_AliasSet,	A0X_SubRegsSet,	A0X_SuperRegsSet },
    { "a1",	"A1",	A1_AliasSet,	A1_SubRegsSet,	A1_SuperRegsSet },
    { "a1.h",	"A1H",	A1H_AliasSet,	A1H_SubRegsSet,	A1H_SuperRegsSet },
    { "a1.l",	"A1L",	A1L_AliasSet,	A1L_SubRegsSet,	A1L_SuperRegsSet },
    { "a1.w",	"A1W",	A1W_AliasSet,	A1W_SubRegsSet,	A1W_SuperRegsSet },
    { "a1.x",	"A1X",	A1X_AliasSet,	A1X_SubRegsSet,	A1X_SuperRegsSet },
    { "ac0",	"AC0",	AC0_AliasSet,	AC0_SubRegsSet,	AC0_SuperRegsSet },
    { "ac1",	"AC1",	AC1_AliasSet,	AC1_SubRegsSet,	AC1_SuperRegsSet },
    { "an",	"AN",	AN_AliasSet,	AN_SubRegsSet,	AN_SuperRegsSet },
    { "aq",	"AQ",	AQ_AliasSet,	AQ_SubRegsSet,	AQ_SuperRegsSet },
    { "astat",	"ASTAT",	ASTAT_AliasSet,	ASTAT_SubRegsSet,	ASTAT_SuperRegsSet },
    { "av0",	"AV0",	AV0_AliasSet,	AV0_SubRegsSet,	AV0_SuperRegsSet },
    { "av0s",	"AV0S",	AV0S_AliasSet,	AV0S_SubRegsSet,	AV0S_SuperRegsSet },
    { "av1",	"AV1",	AV1_AliasSet,	AV1_SubRegsSet,	AV1_SuperRegsSet },
    { "av1s",	"AV1S",	AV1S_AliasSet,	AV1S_SubRegsSet,	AV1S_SuperRegsSet },
    { "az",	"AZ",	AZ_AliasSet,	AZ_SubRegsSet,	AZ_SuperRegsSet },
    { "b0",	"B0",	B0_AliasSet,	B0_SubRegsSet,	B0_SuperRegsSet },
    { "b0.h",	"B0H",	B0H_AliasSet,	B0H_SubRegsSet,	B0H_SuperRegsSet },
    { "b0.l",	"B0L",	B0L_AliasSet,	B0L_SubRegsSet,	B0L_SuperRegsSet },
    { "b1",	"B1",	B1_AliasSet,	B1_SubRegsSet,	B1_SuperRegsSet },
    { "b1.h",	"B1H",	B1H_AliasSet,	B1H_SubRegsSet,	B1H_SuperRegsSet },
    { "b1.l",	"B1L",	B1L_AliasSet,	B1L_SubRegsSet,	B1L_SuperRegsSet },
    { "b2",	"B2",	B2_AliasSet,	B2_SubRegsSet,	B2_SuperRegsSet },
    { "b2.h",	"B2H",	B2H_AliasSet,	B2H_SubRegsSet,	B2H_SuperRegsSet },
    { "b2.l",	"B2L",	B2L_AliasSet,	B2L_SubRegsSet,	B2L_SuperRegsSet },
    { "b3",	"B3",	B3_AliasSet,	B3_SubRegsSet,	B3_SuperRegsSet },
    { "b3.h",	"B3H",	B3H_AliasSet,	B3H_SubRegsSet,	B3H_SuperRegsSet },
    { "b3.l",	"B3L",	B3L_AliasSet,	B3L_SubRegsSet,	B3L_SuperRegsSet },
    { "cc",	"CC",	CC_AliasSet,	CC_SubRegsSet,	CC_SuperRegsSet },
    { "cycles",	"CYCLES",	CYCLES_AliasSet,	CYCLES_SubRegsSet,	CYCLES_SuperRegsSet },
    { "cycles2",	"CYCLES2",	CYCLES2_AliasSet,	CYCLES2_SubRegsSet,	CYCLES2_SuperRegsSet },
    { "emudat",	"EMUDAT",	EMUDAT_AliasSet,	EMUDAT_SubRegsSet,	EMUDAT_SuperRegsSet },
    { "fp",	"FP",	FP_AliasSet,	FP_SubRegsSet,	FP_SuperRegsSet },
    { "fp.h",	"FPH",	FPH_AliasSet,	FPH_SubRegsSet,	FPH_SuperRegsSet },
    { "fp.l",	"FPL",	FPL_AliasSet,	FPL_SubRegsSet,	FPL_SuperRegsSet },
    { "i0",	"I0",	I0_AliasSet,	I0_SubRegsSet,	I0_SuperRegsSet },
    { "i0.h",	"I0H",	I0H_AliasSet,	I0H_SubRegsSet,	I0H_SuperRegsSet },
    { "i0.l",	"I0L",	I0L_AliasSet,	I0L_SubRegsSet,	I0L_SuperRegsSet },
    { "i1",	"I1",	I1_AliasSet,	I1_SubRegsSet,	I1_SuperRegsSet },
    { "i1.h",	"I1H",	I1H_AliasSet,	I1H_SubRegsSet,	I1H_SuperRegsSet },
    { "i1.l",	"I1L",	I1L_AliasSet,	I1L_SubRegsSet,	I1L_SuperRegsSet },
    { "i2",	"I2",	I2_AliasSet,	I2_SubRegsSet,	I2_SuperRegsSet },
    { "i2.h",	"I2H",	I2H_AliasSet,	I2H_SubRegsSet,	I2H_SuperRegsSet },
    { "i2.l",	"I2L",	I2L_AliasSet,	I2L_SubRegsSet,	I2L_SuperRegsSet },
    { "i3",	"I3",	I3_AliasSet,	I3_SubRegsSet,	I3_SuperRegsSet },
    { "i3.h",	"I3H",	I3H_AliasSet,	I3H_SubRegsSet,	I3H_SuperRegsSet },
    { "i3.l",	"I3L",	I3L_AliasSet,	I3L_SubRegsSet,	I3L_SuperRegsSet },
    { "l0",	"L0",	L0_AliasSet,	L0_SubRegsSet,	L0_SuperRegsSet },
    { "l0.h",	"L0H",	L0H_AliasSet,	L0H_SubRegsSet,	L0H_SuperRegsSet },
    { "l0.l",	"L0L",	L0L_AliasSet,	L0L_SubRegsSet,	L0L_SuperRegsSet },
    { "l1",	"L1",	L1_AliasSet,	L1_SubRegsSet,	L1_SuperRegsSet },
    { "l1.h",	"L1H",	L1H_AliasSet,	L1H_SubRegsSet,	L1H_SuperRegsSet },
    { "l1.l",	"L1L",	L1L_AliasSet,	L1L_SubRegsSet,	L1L_SuperRegsSet },
    { "l2",	"L2",	L2_AliasSet,	L2_SubRegsSet,	L2_SuperRegsSet },
    { "l2.h",	"L2H",	L2H_AliasSet,	L2H_SubRegsSet,	L2H_SuperRegsSet },
    { "l2.l",	"L2L",	L2L_AliasSet,	L2L_SubRegsSet,	L2L_SuperRegsSet },
    { "l3",	"L3",	L3_AliasSet,	L3_SubRegsSet,	L3_SuperRegsSet },
    { "l3.h",	"L3H",	L3H_AliasSet,	L3H_SubRegsSet,	L3H_SuperRegsSet },
    { "l3.l",	"L3L",	L3L_AliasSet,	L3L_SubRegsSet,	L3L_SuperRegsSet },
    { "lb0",	"LB0",	LB0_AliasSet,	LB0_SubRegsSet,	LB0_SuperRegsSet },
    { "lb1",	"LB1",	LB1_AliasSet,	LB1_SubRegsSet,	LB1_SuperRegsSet },
    { "lc0",	"LC0",	LC0_AliasSet,	LC0_SubRegsSet,	LC0_SuperRegsSet },
    { "lc1",	"LC1",	LC1_AliasSet,	LC1_SubRegsSet,	LC1_SuperRegsSet },
    { "lt0",	"LT0",	LT0_AliasSet,	LT0_SubRegsSet,	LT0_SuperRegsSet },
    { "lt1",	"LT1",	LT1_AliasSet,	LT1_SubRegsSet,	LT1_SuperRegsSet },
    { "m0",	"M0",	M0_AliasSet,	M0_SubRegsSet,	M0_SuperRegsSet },
    { "m0.h",	"M0H",	M0H_AliasSet,	M0H_SubRegsSet,	M0H_SuperRegsSet },
    { "m0.l",	"M0L",	M0L_AliasSet,	M0L_SubRegsSet,	M0L_SuperRegsSet },
    { "m1",	"M1",	M1_AliasSet,	M1_SubRegsSet,	M1_SuperRegsSet },
    { "m1.h",	"M1H",	M1H_AliasSet,	M1H_SubRegsSet,	M1H_SuperRegsSet },
    { "m1.l",	"M1L",	M1L_AliasSet,	M1L_SubRegsSet,	M1L_SuperRegsSet },
    { "m2",	"M2",	M2_AliasSet,	M2_SubRegsSet,	M2_SuperRegsSet },
    { "m2.h",	"M2H",	M2H_AliasSet,	M2H_SubRegsSet,	M2H_SuperRegsSet },
    { "m2.l",	"M2L",	M2L_AliasSet,	M2L_SubRegsSet,	M2L_SuperRegsSet },
    { "m3",	"M3",	M3_AliasSet,	M3_SubRegsSet,	M3_SuperRegsSet },
    { "m3.h",	"M3H",	M3H_AliasSet,	M3H_SubRegsSet,	M3H_SuperRegsSet },
    { "m3.l",	"M3L",	M3L_AliasSet,	M3L_SubRegsSet,	M3L_SuperRegsSet },
    { "!cc",	"NCC",	NCC_AliasSet,	NCC_SubRegsSet,	NCC_SuperRegsSet },
    { "p0",	"P0",	P0_AliasSet,	P0_SubRegsSet,	P0_SuperRegsSet },
    { "p0.h",	"P0H",	P0H_AliasSet,	P0H_SubRegsSet,	P0H_SuperRegsSet },
    { "p0.l",	"P0L",	P0L_AliasSet,	P0L_SubRegsSet,	P0L_SuperRegsSet },
    { "p1",	"P1",	P1_AliasSet,	P1_SubRegsSet,	P1_SuperRegsSet },
    { "p1.h",	"P1H",	P1H_AliasSet,	P1H_SubRegsSet,	P1H_SuperRegsSet },
    { "p1.l",	"P1L",	P1L_AliasSet,	P1L_SubRegsSet,	P1L_SuperRegsSet },
    { "p2",	"P2",	P2_AliasSet,	P2_SubRegsSet,	P2_SuperRegsSet },
    { "p2.h",	"P2H",	P2H_AliasSet,	P2H_SubRegsSet,	P2H_SuperRegsSet },
    { "p2.l",	"P2L",	P2L_AliasSet,	P2L_SubRegsSet,	P2L_SuperRegsSet },
    { "p3",	"P3",	P3_AliasSet,	P3_SubRegsSet,	P3_SuperRegsSet },
    { "p3.h",	"P3H",	P3H_AliasSet,	P3H_SubRegsSet,	P3H_SuperRegsSet },
    { "p3.l",	"P3L",	P3L_AliasSet,	P3L_SubRegsSet,	P3L_SuperRegsSet },
    { "p4",	"P4",	P4_AliasSet,	P4_SubRegsSet,	P4_SuperRegsSet },
    { "p4.h",	"P4H",	P4H_AliasSet,	P4H_SubRegsSet,	P4H_SuperRegsSet },
    { "p4.l",	"P4L",	P4L_AliasSet,	P4L_SubRegsSet,	P4L_SuperRegsSet },
    { "p5",	"P5",	P5_AliasSet,	P5_SubRegsSet,	P5_SuperRegsSet },
    { "p5.h",	"P5H",	P5H_AliasSet,	P5H_SubRegsSet,	P5H_SuperRegsSet },
    { "p5.l",	"P5L",	P5L_AliasSet,	P5L_SubRegsSet,	P5L_SuperRegsSet },
    { "r0",	"R0",	R0_AliasSet,	R0_SubRegsSet,	R0_SuperRegsSet },
    { "r0.h",	"R0H",	R0H_AliasSet,	R0H_SubRegsSet,	R0H_SuperRegsSet },
    { "r0.l",	"R0L",	R0L_AliasSet,	R0L_SubRegsSet,	R0L_SuperRegsSet },
    { "r1",	"R1",	R1_AliasSet,	R1_SubRegsSet,	R1_SuperRegsSet },
    { "r1.h",	"R1H",	R1H_AliasSet,	R1H_SubRegsSet,	R1H_SuperRegsSet },
    { "r1.l",	"R1L",	R1L_AliasSet,	R1L_SubRegsSet,	R1L_SuperRegsSet },
    { "r2",	"R2",	R2_AliasSet,	R2_SubRegsSet,	R2_SuperRegsSet },
    { "r2.h",	"R2H",	R2H_AliasSet,	R2H_SubRegsSet,	R2H_SuperRegsSet },
    { "r2.l",	"R2L",	R2L_AliasSet,	R2L_SubRegsSet,	R2L_SuperRegsSet },
    { "r3",	"R3",	R3_AliasSet,	R3_SubRegsSet,	R3_SuperRegsSet },
    { "r3.h",	"R3H",	R3H_AliasSet,	R3H_SubRegsSet,	R3H_SuperRegsSet },
    { "r3.l",	"R3L",	R3L_AliasSet,	R3L_SubRegsSet,	R3L_SuperRegsSet },
    { "r4",	"R4",	R4_AliasSet,	R4_SubRegsSet,	R4_SuperRegsSet },
    { "r4.h",	"R4H",	R4H_AliasSet,	R4H_SubRegsSet,	R4H_SuperRegsSet },
    { "r4.l",	"R4L",	R4L_AliasSet,	R4L_SubRegsSet,	R4L_SuperRegsSet },
    { "r5",	"R5",	R5_AliasSet,	R5_SubRegsSet,	R5_SuperRegsSet },
    { "r5.h",	"R5H",	R5H_AliasSet,	R5H_SubRegsSet,	R5H_SuperRegsSet },
    { "r5.l",	"R5L",	R5L_AliasSet,	R5L_SubRegsSet,	R5L_SuperRegsSet },
    { "r6",	"R6",	R6_AliasSet,	R6_SubRegsSet,	R6_SuperRegsSet },
    { "r6.h",	"R6H",	R6H_AliasSet,	R6H_SubRegsSet,	R6H_SuperRegsSet },
    { "r6.l",	"R6L",	R6L_AliasSet,	R6L_SubRegsSet,	R6L_SuperRegsSet },
    { "r7",	"R7",	R7_AliasSet,	R7_SubRegsSet,	R7_SuperRegsSet },
    { "r7.h",	"R7H",	R7H_AliasSet,	R7H_SubRegsSet,	R7H_SuperRegsSet },
    { "r7.l",	"R7L",	R7L_AliasSet,	R7L_SubRegsSet,	R7L_SuperRegsSet },
    { "rete",	"RETE",	RETE_AliasSet,	RETE_SubRegsSet,	RETE_SuperRegsSet },
    { "reti",	"RETI",	RETI_AliasSet,	RETI_SubRegsSet,	RETI_SuperRegsSet },
    { "retn",	"RETN",	RETN_AliasSet,	RETN_SubRegsSet,	RETN_SuperRegsSet },
    { "rets",	"RETS",	RETS_AliasSet,	RETS_SubRegsSet,	RETS_SuperRegsSet },
    { "retx",	"RETX",	RETX_AliasSet,	RETX_SubRegsSet,	RETX_SuperRegsSet },
    { "seqstat",	"SEQSTAT",	SEQSTAT_AliasSet,	SEQSTAT_SubRegsSet,	SEQSTAT_SuperRegsSet },
    { "sp",	"SP",	SP_AliasSet,	SP_SubRegsSet,	SP_SuperRegsSet },
    { "sp.h",	"SPH",	SPH_AliasSet,	SPH_SubRegsSet,	SPH_SuperRegsSet },
    { "sp.l",	"SPL",	SPL_AliasSet,	SPL_SubRegsSet,	SPL_SuperRegsSet },
    { "syscfg",	"SYSCFG",	SYSCFG_AliasSet,	SYSCFG_SubRegsSet,	SYSCFG_SuperRegsSet },
    { "usp",	"USP",	USP_AliasSet,	USP_SubRegsSet,	USP_SuperRegsSet },
    { "v",	"V",	V_AliasSet,	V_SubRegsSet,	V_SuperRegsSet },
    { "vs",	"VS",	VS_AliasSet,	VS_SubRegsSet,	VS_SuperRegsSet },
  };
}

unsigned BlackfinGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  case BF::R0:
    switch (Index) {
    default: return 0;
    case 1: return BF::R0L;
    case 2: return BF::R0H;
    };
    break;
  case BF::R1:
    switch (Index) {
    default: return 0;
    case 1: return BF::R1L;
    case 2: return BF::R1H;
    };
    break;
  case BF::R2:
    switch (Index) {
    default: return 0;
    case 1: return BF::R2L;
    case 2: return BF::R2H;
    };
    break;
  case BF::R3:
    switch (Index) {
    default: return 0;
    case 1: return BF::R3L;
    case 2: return BF::R3H;
    };
    break;
  case BF::R4:
    switch (Index) {
    default: return 0;
    case 1: return BF::R4L;
    case 2: return BF::R4H;
    };
    break;
  case BF::R5:
    switch (Index) {
    default: return 0;
    case 1: return BF::R5L;
    case 2: return BF::R5H;
    };
    break;
  case BF::R6:
    switch (Index) {
    default: return 0;
    case 1: return BF::R6L;
    case 2: return BF::R6H;
    };
    break;
  case BF::R7:
    switch (Index) {
    default: return 0;
    case 1: return BF::R7L;
    case 2: return BF::R7H;
    };
    break;
  case BF::P0:
    switch (Index) {
    default: return 0;
    case 1: return BF::P0L;
    case 2: return BF::P0H;
    };
    break;
  case BF::P1:
    switch (Index) {
    default: return 0;
    case 1: return BF::P1L;
    case 2: return BF::P1H;
    };
    break;
  case BF::P2:
    switch (Index) {
    default: return 0;
    case 1: return BF::P2L;
    case 2: return BF::P2H;
    };
    break;
  case BF::P3:
    switch (Index) {
    default: return 0;
    case 1: return BF::P3L;
    case 2: return BF::P3H;
    };
    break;
  case BF::P4:
    switch (Index) {
    default: return 0;
    case 1: return BF::P4L;
    case 2: return BF::P4H;
    };
    break;
  case BF::P5:
    switch (Index) {
    default: return 0;
    case 1: return BF::P5L;
    case 2: return BF::P5H;
    };
    break;
  case BF::SP:
    switch (Index) {
    default: return 0;
    case 1: return BF::SPL;
    case 2: return BF::SPH;
    };
    break;
  case BF::FP:
    switch (Index) {
    default: return 0;
    case 1: return BF::FPL;
    case 2: return BF::FPH;
    };
    break;
  case BF::I0:
    switch (Index) {
    default: return 0;
    case 1: return BF::I0L;
    case 2: return BF::I0H;
    };
    break;
  case BF::I1:
    switch (Index) {
    default: return 0;
    case 1: return BF::I1L;
    case 2: return BF::I1H;
    };
    break;
  case BF::I2:
    switch (Index) {
    default: return 0;
    case 1: return BF::I2L;
    case 2: return BF::I2H;
    };
    break;
  case BF::I3:
    switch (Index) {
    default: return 0;
    case 1: return BF::I3L;
    case 2: return BF::I3H;
    };
    break;
  case BF::M0:
    switch (Index) {
    default: return 0;
    case 1: return BF::M0L;
    case 2: return BF::M0H;
    };
    break;
  case BF::M1:
    switch (Index) {
    default: return 0;
    case 1: return BF::M1L;
    case 2: return BF::M1H;
    };
    break;
  case BF::M2:
    switch (Index) {
    default: return 0;
    case 1: return BF::M2L;
    case 2: return BF::M2H;
    };
    break;
  case BF::M3:
    switch (Index) {
    default: return 0;
    case 1: return BF::M3L;
    case 2: return BF::M3H;
    };
    break;
  case BF::B0:
    switch (Index) {
    default: return 0;
    case 1: return BF::B0L;
    case 2: return BF::B0H;
    };
    break;
  case BF::B1:
    switch (Index) {
    default: return 0;
    case 1: return BF::B1L;
    case 2: return BF::B1H;
    };
    break;
  case BF::B2:
    switch (Index) {
    default: return 0;
    case 1: return BF::B2L;
    case 2: return BF::B2H;
    };
    break;
  case BF::B3:
    switch (Index) {
    default: return 0;
    case 1: return BF::B3L;
    case 2: return BF::B3H;
    };
    break;
  case BF::L0:
    switch (Index) {
    default: return 0;
    case 1: return BF::L0L;
    case 2: return BF::L0H;
    };
    break;
  case BF::L1:
    switch (Index) {
    default: return 0;
    case 1: return BF::L1L;
    case 2: return BF::L1H;
    };
    break;
  case BF::L2:
    switch (Index) {
    default: return 0;
    case 1: return BF::L2L;
    case 2: return BF::L2H;
    };
    break;
  case BF::L3:
    switch (Index) {
    default: return 0;
    case 1: return BF::L3L;
    case 2: return BF::L3H;
    };
    break;
  case BF::A0W:
    switch (Index) {
    default: return 0;
    case 1: return BF::A0L;
    case 2: return BF::A0H;
    };
    break;
  case BF::A0:
    switch (Index) {
    default: return 0;
    case 1: return BF::A0L;
    case 2: return BF::A0H;
    };
    break;
  case BF::A1W:
    switch (Index) {
    default: return 0;
    case 1: return BF::A1L;
    case 2: return BF::A1H;
    };
    break;
  case BF::A1:
    switch (Index) {
    default: return 0;
    case 1: return BF::A1L;
    case 2: return BF::A1H;
    };
    break;
  };
  return 0;
}

BlackfinGenRegisterInfo::BlackfinGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 138, RegisterClasses, RegisterClasses+25,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 SuperregHashTable, SuperregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int BlackfinGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case BF::A0:
      return -1;
    case BF::A0H:
      return -1;
    case BF::A0L:
      return -1;
    case BF::A0W:
      return 32;
    case BF::A0X:
      return -1;
    case BF::A1:
      return -1;
    case BF::A1H:
      return -1;
    case BF::A1L:
      return -1;
    case BF::A1W:
      return 33;
    case BF::A1X:
      return -1;
    case BF::AC0:
      return -1;
    case BF::AC1:
      return -1;
    case BF::AN:
      return -1;
    case BF::AQ:
      return -1;
    case BF::ASTAT:
      return 40;
    case BF::AV0:
      return -1;
    case BF::AV0S:
      return -1;
    case BF::AV1:
      return -1;
    case BF::AV1S:
      return -1;
    case BF::AZ:
      return -1;
    case BF::B0:
      return 24;
    case BF::B0H:
      return -1;
    case BF::B0L:
      return -1;
    case BF::B1:
      return 25;
    case BF::B1H:
      return -1;
    case BF::B1L:
      return -1;
    case BF::B2:
      return 26;
    case BF::B2H:
      return -1;
    case BF::B2L:
      return -1;
    case BF::B3:
      return 27;
    case BF::B3H:
      return -1;
    case BF::B3L:
      return -1;
    case BF::CC:
      return 34;
    case BF::CYCLES:
      return -1;
    case BF::CYCLES2:
      return -1;
    case BF::EMUDAT:
      return 43;
    case BF::FP:
      return 15;
    case BF::FPH:
      return -1;
    case BF::FPL:
      return -1;
    case BF::I0:
      return 16;
    case BF::I0H:
      return -1;
    case BF::I0L:
      return -1;
    case BF::I1:
      return 17;
    case BF::I1H:
      return -1;
    case BF::I1L:
      return -1;
    case BF::I2:
      return 18;
    case BF::I2H:
      return -1;
    case BF::I2L:
      return -1;
    case BF::I3:
      return 19;
    case BF::I3H:
      return -1;
    case BF::I3L:
      return -1;
    case BF::L0:
      return 28;
    case BF::L0H:
      return -1;
    case BF::L0L:
      return -1;
    case BF::L1:
      return 29;
    case BF::L1H:
      return -1;
    case BF::L1L:
      return -1;
    case BF::L2:
      return 30;
    case BF::L2H:
      return -1;
    case BF::L2L:
      return -1;
    case BF::L3:
      return 31;
    case BF::L3H:
      return -1;
    case BF::L3L:
      return -1;
    case BF::LB0:
      return 48;
    case BF::LB1:
      return 49;
    case BF::LC0:
      return 46;
    case BF::LC1:
      return 47;
    case BF::LT0:
      return 44;
    case BF::LT1:
      return 45;
    case BF::M0:
      return 20;
    case BF::M0H:
      return -1;
    case BF::M0L:
      return -1;
    case BF::M1:
      return 21;
    case BF::M1H:
      return -1;
    case BF::M1L:
      return -1;
    case BF::M2:
      return 22;
    case BF::M2H:
      return -1;
    case BF::M2L:
      return -1;
    case BF::M3:
      return 23;
    case BF::M3H:
      return -1;
    case BF::M3L:
      return -1;
    case BF::NCC:
      return -1;
    case BF::P0:
      return 8;
    case BF::P0H:
      return -1;
    case BF::P0L:
      return -1;
    case BF::P1:
      return 9;
    case BF::P1H:
      return -1;
    case BF::P1L:
      return -1;
    case BF::P2:
      return 10;
    case BF::P2H:
      return -1;
    case BF::P2L:
      return -1;
    case BF::P3:
      return 11;
    case BF::P3H:
      return -1;
    case BF::P3L:
      return -1;
    case BF::P4:
      return 12;
    case BF::P4H:
      return -1;
    case BF::P4L:
      return -1;
    case BF::P5:
      return 13;
    case BF::P5H:
      return -1;
    case BF::P5L:
      return -1;
    case BF::R0:
      return 0;
    case BF::R0H:
      return -1;
    case BF::R0L:
      return -1;
    case BF::R1:
      return 1;
    case BF::R1H:
      return -1;
    case BF::R1L:
      return -1;
    case BF::R2:
      return 2;
    case BF::R2H:
      return -1;
    case BF::R2L:
      return -1;
    case BF::R3:
      return 3;
    case BF::R3H:
      return -1;
    case BF::R3L:
      return -1;
    case BF::R4:
      return 4;
    case BF::R4H:
      return -1;
    case BF::R4L:
      return -1;
    case BF::R5:
      return 5;
    case BF::R5H:
      return -1;
    case BF::R5L:
      return -1;
    case BF::R6:
      return 6;
    case BF::R6H:
      return -1;
    case BF::R6L:
      return -1;
    case BF::R7:
      return 7;
    case BF::R7H:
      return -1;
    case BF::R7L:
      return -1;
    case BF::RETE:
      return 39;
    case BF::RETI:
      return 36;
    case BF::RETN:
      return 38;
    case BF::RETS:
      return 35;
    case BF::RETX:
      return 37;
    case BF::SEQSTAT:
      return 41;
    case BF::SP:
      return 14;
    case BF::SPH:
      return -1;
    case BF::SPL:
      return -1;
    case BF::SYSCFG:
      return -1;
    case BF::USP:
      return 42;
    case BF::V:
      return -1;
    case BF::VS:
      return -1;
    };
  };
}

} // End llvm namespace 
