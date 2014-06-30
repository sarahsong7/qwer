//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // AFGR64 Register Class...
  static const unsigned AFGR64[] = {
    Mips::D0, Mips::D1, Mips::D6, Mips::D7, Mips::D2, Mips::D3, Mips::D4, Mips::D5, Mips::D8, Mips::D9, Mips::D10, Mips::D11, Mips::D12, Mips::D13, Mips::D14, Mips::D15, 
  };

  // CCR Register Class...
  static const unsigned CCR[] = {
    Mips::FCR31, 
  };

  // CPURegs Register Class...
  static const unsigned CPURegs[] = {
    Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::T0, Mips::T1, Mips::T2, Mips::T3, Mips::T4, Mips::T5, Mips::T6, Mips::T7, Mips::T8, Mips::T9, Mips::S0, Mips::S1, Mips::S2, Mips::S3, Mips::S4, Mips::S5, Mips::S6, Mips::S7, Mips::ZERO, Mips::AT, Mips::K0, Mips::K1, Mips::GP, Mips::SP, Mips::FP, Mips::RA, 
  };

  // FGR32 Register Class...
  static const unsigned FGR32[] = {
    Mips::F0, Mips::F1, Mips::F2, Mips::F3, Mips::F12, Mips::F13, Mips::F14, Mips::F15, Mips::F4, Mips::F5, Mips::F6, Mips::F7, Mips::F8, Mips::F9, Mips::F10, Mips::F11, Mips::F16, Mips::F17, Mips::F18, Mips::F19, Mips::F20, Mips::F21, Mips::F22, Mips::F23, Mips::F24, Mips::F25, Mips::F26, Mips::F27, Mips::F28, Mips::F29, Mips::F30, Mips::F31, 
  };

  // HILO Register Class...
  static const unsigned HILO[] = {
    Mips::HI, Mips::LO, 
  };

  // AFGR64VTs Register Class Value Types...
  static const EVT AFGR64VTs[] = {
    MVT::f64, MVT::Other
  };

  // CCRVTs Register Class Value Types...
  static const EVT CCRVTs[] = {
    MVT::i32, MVT::Other
  };

  // CPURegsVTs Register Class Value Types...
  static const EVT CPURegsVTs[] = {
    MVT::i32, MVT::Other
  };

  // FGR32VTs Register Class Value Types...
  static const EVT FGR32VTs[] = {
    MVT::f32, MVT::Other
  };

  // HILOVTs Register Class Value Types...
  static const EVT HILOVTs[] = {
    MVT::i32, MVT::Other
  };

}  // end anonymous namespace

namespace Mips {   // Register class instances
  AFGR64Class	AFGR64RegClass;
  CCRClass	CCRRegClass;
  CPURegsClass	CPURegsRegClass;
  FGR32Class	FGR32RegClass;
  HILOClass	HILORegClass;

  // AFGR64 Sub-register Classes...
  static const TargetRegisterClass* const AFGR64SubRegClasses[] = {
    NULL
  };

  // CCR Sub-register Classes...
  static const TargetRegisterClass* const CCRSubRegClasses[] = {
    NULL
  };

  // CPURegs Sub-register Classes...
  static const TargetRegisterClass* const CPURegsSubRegClasses[] = {
    NULL
  };

  // FGR32 Sub-register Classes...
  static const TargetRegisterClass* const FGR32SubRegClasses[] = {
    NULL
  };

  // HILO Sub-register Classes...
  static const TargetRegisterClass* const HILOSubRegClasses[] = {
    NULL
  };

  // AFGR64 Super-register Classes...
  static const TargetRegisterClass* const AFGR64SuperRegClasses[] = {
    NULL
  };

  // CCR Super-register Classes...
  static const TargetRegisterClass* const CCRSuperRegClasses[] = {
    NULL
  };

  // CPURegs Super-register Classes...
  static const TargetRegisterClass* const CPURegsSuperRegClasses[] = {
    NULL
  };

  // FGR32 Super-register Classes...
  static const TargetRegisterClass* const FGR32SuperRegClasses[] = {
    NULL
  };

  // HILO Super-register Classes...
  static const TargetRegisterClass* const HILOSuperRegClasses[] = {
    NULL
  };

  // AFGR64 Register Class sub-classes...
  static const TargetRegisterClass* const AFGR64Subclasses[] = {
    NULL
  };

  // CCR Register Class sub-classes...
  static const TargetRegisterClass* const CCRSubclasses[] = {
    NULL
  };

  // CPURegs Register Class sub-classes...
  static const TargetRegisterClass* const CPURegsSubclasses[] = {
    NULL
  };

  // FGR32 Register Class sub-classes...
  static const TargetRegisterClass* const FGR32Subclasses[] = {
    NULL
  };

  // HILO Register Class sub-classes...
  static const TargetRegisterClass* const HILOSubclasses[] = {
    NULL
  };

  // AFGR64 Register Class super-classes...
  static const TargetRegisterClass* const AFGR64Superclasses[] = {
    NULL
  };

  // CCR Register Class super-classes...
  static const TargetRegisterClass* const CCRSuperclasses[] = {
    NULL
  };

  // CPURegs Register Class super-classes...
  static const TargetRegisterClass* const CPURegsSuperclasses[] = {
    NULL
  };

  // FGR32 Register Class super-classes...
  static const TargetRegisterClass* const FGR32Superclasses[] = {
    NULL
  };

  // HILO Register Class super-classes...
  static const TargetRegisterClass* const HILOSuperclasses[] = {
    NULL
  };


    AFGR64Class::iterator
    AFGR64Class::allocation_order_end(const MachineFunction &MF) const {
      // The last register on the list above is reserved
      return end()-1;
    }
  
AFGR64Class::AFGR64Class()  : TargetRegisterClass(AFGR64RegClassID, "AFGR64", AFGR64VTs, AFGR64Subclasses, AFGR64Superclasses, AFGR64SubRegClasses, AFGR64SuperRegClasses, 8, 8, 1, AFGR64, AFGR64 + 16) {}

CCRClass::CCRClass()  : TargetRegisterClass(CCRRegClassID, "CCR", CCRVTs, CCRSubclasses, CCRSuperclasses, CCRSubRegClasses, CCRSuperRegClasses, 4, 4, 1, CCR, CCR + 1) {}

    CPURegsClass::iterator
    CPURegsClass::allocation_order_end(const MachineFunction &MF) const {
      // The last 8 registers on the list above are reserved
      return end()-8;
    }
  
CPURegsClass::CPURegsClass()  : TargetRegisterClass(CPURegsRegClassID, "CPURegs", CPURegsVTs, CPURegsSubclasses, CPURegsSuperclasses, CPURegsSubRegClasses, CPURegsSuperRegClasses, 4, 4, 1, CPURegs, CPURegs + 32) {}


    static const unsigned MIPS_FGR32[] = {
      Mips::F0,  Mips::F1,  Mips::F2,  Mips::F3,  Mips::F12,  Mips::F13, 
      Mips::F14, Mips::F15, Mips::F4,  Mips::F5,  Mips::F6,   Mips::F7, 
      Mips::F8,  Mips::F9,  Mips::F10, Mips::F11, Mips::F16,  Mips::F17, 
      Mips::F18, Mips::F19, Mips::F20, Mips::F21, Mips::F22,  Mips::F23, 
      Mips::F24, Mips::F25, Mips::F26, Mips::F27, Mips::F28,  Mips::F29, 
      Mips::F30
    };

    static const unsigned MIPS_SVR4_FGR32[] = {
      Mips::F0,  Mips::F2,  Mips::F12, Mips::F14, Mips::F4, 
      Mips::F6,  Mips::F8,  Mips::F10, Mips::F16, Mips::F18, 
      Mips::F20, Mips::F22, Mips::F24, Mips::F26, Mips::F28, Mips::F30,
    };

    FGR32Class::iterator
    FGR32Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const MipsSubtarget &Subtarget = TM.getSubtarget<MipsSubtarget>();

      if (Subtarget.isSingleFloat())
        return MIPS_FGR32;
      else
        return MIPS_SVR4_FGR32; 
    }

    FGR32Class::iterator
    FGR32Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const MipsSubtarget &Subtarget = TM.getSubtarget<MipsSubtarget>();

      if (Subtarget.isSingleFloat())
        return MIPS_FGR32 + (sizeof(MIPS_FGR32) / sizeof(unsigned));
      else
        return MIPS_SVR4_FGR32 + (sizeof(MIPS_SVR4_FGR32) / sizeof(unsigned));
    }
  
FGR32Class::FGR32Class()  : TargetRegisterClass(FGR32RegClassID, "FGR32", FGR32VTs, FGR32Subclasses, FGR32Superclasses, FGR32SubRegClasses, FGR32SuperRegClasses, 4, 4, 1, FGR32, FGR32 + 32) {}

HILOClass::HILOClass()  : TargetRegisterClass(HILORegClassID, "HILO", HILOVTs, HILOSubclasses, HILOSuperclasses, HILOSubRegClasses, HILOSuperRegClasses, 4, 4, 1, HILO, HILO + 2) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Mips::AFGR64RegClass,
    &Mips::CCRRegClass,
    &Mips::CPURegsRegClass,
    &Mips::FGR32RegClass,
    &Mips::HILORegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { Mips::NoRegister, Mips::NoRegister, 
Mips::NoRegister, Mips::NoRegister };
  const unsigned SubregHashTableSize = 2;


  // Number of hash collisions: 0
  const unsigned SuperregHashTable[] = { Mips::NoRegister, Mips::NoRegister, 
Mips::NoRegister, Mips::NoRegister };
  const unsigned SuperregHashTableSize = 2;


  // Number of hash collisions: 1
  const unsigned AliasesHashTable[] = { Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F30, Mips::D15, 
                                       Mips::F31, Mips::D15, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D13, Mips::F27, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D7, Mips::F14, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F4, Mips::D2, 
                                       Mips::F5, Mips::D2, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D14, Mips::F28, 
                                       Mips::D7, Mips::F15, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F6, Mips::D3, 
                                       Mips::F7, Mips::D3, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D14, Mips::F29, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D8, Mips::F16, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F8, Mips::D4, 
                                       Mips::F9, Mips::D4, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D1, Mips::F3, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F10, Mips::D5, 
                                       Mips::F11, Mips::D5, 
                                       Mips::D8, Mips::F17, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D15, Mips::F30, 
                                       Mips::F12, Mips::D6, 
                                       Mips::D9, Mips::F18, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F13, Mips::D6, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D15, Mips::F31, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D9, Mips::F19, 
                                       Mips::F14, Mips::D7, 
                                       Mips::F15, Mips::D7, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D1, Mips::F2, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F0, Mips::D0, 
                                       Mips::F1, Mips::D0, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D2, Mips::F4, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F16, Mips::D8, 
                                       Mips::F17, Mips::D8, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D10, Mips::F20, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D2, Mips::F5, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F2, Mips::D1, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F18, Mips::D9, 
                                       Mips::F19, Mips::D9, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F3, Mips::D1, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D0, Mips::F0, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D10, Mips::F21, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D3, Mips::F6, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F20, Mips::D10, 
                                       Mips::F21, Mips::D10, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D0, Mips::F1, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D11, Mips::F22, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D3, Mips::F7, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F22, Mips::D11, 
                                       Mips::F23, Mips::D11, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D11, Mips::F23, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D5, Mips::F10, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D4, Mips::F8, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F24, Mips::D12, 
                                       Mips::F25, Mips::D12, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D12, Mips::F24, 
                                       Mips::D5, Mips::F11, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D4, Mips::F9, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F26, Mips::D13, 
                                       Mips::F27, Mips::D13, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D12, Mips::F25, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D6, Mips::F12, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F28, Mips::D14, 
                                       Mips::F29, Mips::D14, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D13, Mips::F26, 
                                       Mips::D6, Mips::F13, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
Mips::NoRegister, Mips::NoRegister };
  const unsigned AliasesHashTableSize = 512;


  // Register Alias Sets...
  const unsigned Empty_AliasSet[] = { 0 };
  const unsigned A0_AliasSet[] = { 0 };
  const unsigned A1_AliasSet[] = { 0 };
  const unsigned A2_AliasSet[] = { 0 };
  const unsigned A3_AliasSet[] = { 0 };
  const unsigned AT_AliasSet[] = { 0 };
  const unsigned D0_AliasSet[] = { Mips::F0, Mips::F1, 0 };
  const unsigned D1_AliasSet[] = { Mips::F2, Mips::F3, 0 };
  const unsigned D10_AliasSet[] = { Mips::F20, Mips::F21, 0 };
  const unsigned D11_AliasSet[] = { Mips::F22, Mips::F23, 0 };
  const unsigned D12_AliasSet[] = { Mips::F24, Mips::F25, 0 };
  const unsigned D13_AliasSet[] = { Mips::F26, Mips::F27, 0 };
  const unsigned D14_AliasSet[] = { Mips::F28, Mips::F29, 0 };
  const unsigned D15_AliasSet[] = { Mips::F30, Mips::F31, 0 };
  const unsigned D2_AliasSet[] = { Mips::F4, Mips::F5, 0 };
  const unsigned D3_AliasSet[] = { Mips::F6, Mips::F7, 0 };
  const unsigned D4_AliasSet[] = { Mips::F8, Mips::F9, 0 };
  const unsigned D5_AliasSet[] = { Mips::F10, Mips::F11, 0 };
  const unsigned D6_AliasSet[] = { Mips::F12, Mips::F13, 0 };
  const unsigned D7_AliasSet[] = { Mips::F14, Mips::F15, 0 };
  const unsigned D8_AliasSet[] = { Mips::F16, Mips::F17, 0 };
  const unsigned D9_AliasSet[] = { Mips::F18, Mips::F19, 0 };
  const unsigned F0_AliasSet[] = { Mips::D0, 0 };
  const unsigned F1_AliasSet[] = { Mips::D0, 0 };
  const unsigned F10_AliasSet[] = { Mips::D5, 0 };
  const unsigned F11_AliasSet[] = { Mips::D5, 0 };
  const unsigned F12_AliasSet[] = { Mips::D6, 0 };
  const unsigned F13_AliasSet[] = { Mips::D6, 0 };
  const unsigned F14_AliasSet[] = { Mips::D7, 0 };
  const unsigned F15_AliasSet[] = { Mips::D7, 0 };
  const unsigned F16_AliasSet[] = { Mips::D8, 0 };
  const unsigned F17_AliasSet[] = { Mips::D8, 0 };
  const unsigned F18_AliasSet[] = { Mips::D9, 0 };
  const unsigned F19_AliasSet[] = { Mips::D9, 0 };
  const unsigned F2_AliasSet[] = { Mips::D1, 0 };
  const unsigned F20_AliasSet[] = { Mips::D10, 0 };
  const unsigned F21_AliasSet[] = { Mips::D10, 0 };
  const unsigned F22_AliasSet[] = { Mips::D11, 0 };
  const unsigned F23_AliasSet[] = { Mips::D11, 0 };
  const unsigned F24_AliasSet[] = { Mips::D12, 0 };
  const unsigned F25_AliasSet[] = { Mips::D12, 0 };
  const unsigned F26_AliasSet[] = { Mips::D13, 0 };
  const unsigned F27_AliasSet[] = { Mips::D13, 0 };
  const unsigned F28_AliasSet[] = { Mips::D14, 0 };
  const unsigned F29_AliasSet[] = { Mips::D14, 0 };
  const unsigned F3_AliasSet[] = { Mips::D1, 0 };
  const unsigned F30_AliasSet[] = { Mips::D15, 0 };
  const unsigned F31_AliasSet[] = { Mips::D15, 0 };
  const unsigned F4_AliasSet[] = { Mips::D2, 0 };
  const unsigned F5_AliasSet[] = { Mips::D2, 0 };
  const unsigned F6_AliasSet[] = { Mips::D3, 0 };
  const unsigned F7_AliasSet[] = { Mips::D3, 0 };
  const unsigned F8_AliasSet[] = { Mips::D4, 0 };
  const unsigned F9_AliasSet[] = { Mips::D4, 0 };
  const unsigned FCR31_AliasSet[] = { 0 };
  const unsigned FP_AliasSet[] = { 0 };
  const unsigned GP_AliasSet[] = { 0 };
  const unsigned HI_AliasSet[] = { 0 };
  const unsigned K0_AliasSet[] = { 0 };
  const unsigned K1_AliasSet[] = { 0 };
  const unsigned LO_AliasSet[] = { 0 };
  const unsigned RA_AliasSet[] = { 0 };
  const unsigned S0_AliasSet[] = { 0 };
  const unsigned S1_AliasSet[] = { 0 };
  const unsigned S2_AliasSet[] = { 0 };
  const unsigned S3_AliasSet[] = { 0 };
  const unsigned S4_AliasSet[] = { 0 };
  const unsigned S5_AliasSet[] = { 0 };
  const unsigned S6_AliasSet[] = { 0 };
  const unsigned S7_AliasSet[] = { 0 };
  const unsigned SP_AliasSet[] = { 0 };
  const unsigned T0_AliasSet[] = { 0 };
  const unsigned T1_AliasSet[] = { 0 };
  const unsigned T2_AliasSet[] = { 0 };
  const unsigned T3_AliasSet[] = { 0 };
  const unsigned T4_AliasSet[] = { 0 };
  const unsigned T5_AliasSet[] = { 0 };
  const unsigned T6_AliasSet[] = { 0 };
  const unsigned T7_AliasSet[] = { 0 };
  const unsigned T8_AliasSet[] = { 0 };
  const unsigned T9_AliasSet[] = { 0 };
  const unsigned V0_AliasSet[] = { 0 };
  const unsigned V1_AliasSet[] = { 0 };
  const unsigned ZERO_AliasSet[] = { 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned A0_SubRegsSet[] = { 0 };
  const unsigned A1_SubRegsSet[] = { 0 };
  const unsigned A2_SubRegsSet[] = { 0 };
  const unsigned A3_SubRegsSet[] = { 0 };
  const unsigned AT_SubRegsSet[] = { 0 };
  const unsigned D0_SubRegsSet[] = { 0 };
  const unsigned D1_SubRegsSet[] = { 0 };
  const unsigned D10_SubRegsSet[] = { 0 };
  const unsigned D11_SubRegsSet[] = { 0 };
  const unsigned D12_SubRegsSet[] = { 0 };
  const unsigned D13_SubRegsSet[] = { 0 };
  const unsigned D14_SubRegsSet[] = { 0 };
  const unsigned D15_SubRegsSet[] = { 0 };
  const unsigned D2_SubRegsSet[] = { 0 };
  const unsigned D3_SubRegsSet[] = { 0 };
  const unsigned D4_SubRegsSet[] = { 0 };
  const unsigned D5_SubRegsSet[] = { 0 };
  const unsigned D6_SubRegsSet[] = { 0 };
  const unsigned D7_SubRegsSet[] = { 0 };
  const unsigned D8_SubRegsSet[] = { 0 };
  const unsigned D9_SubRegsSet[] = { 0 };
  const unsigned F0_SubRegsSet[] = { 0 };
  const unsigned F1_SubRegsSet[] = { 0 };
  const unsigned F10_SubRegsSet[] = { 0 };
  const unsigned F11_SubRegsSet[] = { 0 };
  const unsigned F12_SubRegsSet[] = { 0 };
  const unsigned F13_SubRegsSet[] = { 0 };
  const unsigned F14_SubRegsSet[] = { 0 };
  const unsigned F15_SubRegsSet[] = { 0 };
  const unsigned F16_SubRegsSet[] = { 0 };
  const unsigned F17_SubRegsSet[] = { 0 };
  const unsigned F18_SubRegsSet[] = { 0 };
  const unsigned F19_SubRegsSet[] = { 0 };
  const unsigned F2_SubRegsSet[] = { 0 };
  const unsigned F20_SubRegsSet[] = { 0 };
  const unsigned F21_SubRegsSet[] = { 0 };
  const unsigned F22_SubRegsSet[] = { 0 };
  const unsigned F23_SubRegsSet[] = { 0 };
  const unsigned F24_SubRegsSet[] = { 0 };
  const unsigned F25_SubRegsSet[] = { 0 };
  const unsigned F26_SubRegsSet[] = { 0 };
  const unsigned F27_SubRegsSet[] = { 0 };
  const unsigned F28_SubRegsSet[] = { 0 };
  const unsigned F29_SubRegsSet[] = { 0 };
  const unsigned F3_SubRegsSet[] = { 0 };
  const unsigned F30_SubRegsSet[] = { 0 };
  const unsigned F31_SubRegsSet[] = { 0 };
  const unsigned F4_SubRegsSet[] = { 0 };
  const unsigned F5_SubRegsSet[] = { 0 };
  const unsigned F6_SubRegsSet[] = { 0 };
  const unsigned F7_SubRegsSet[] = { 0 };
  const unsigned F8_SubRegsSet[] = { 0 };
  const unsigned F9_SubRegsSet[] = { 0 };
  const unsigned FCR31_SubRegsSet[] = { 0 };
  const unsigned FP_SubRegsSet[] = { 0 };
  const unsigned GP_SubRegsSet[] = { 0 };
  const unsigned HI_SubRegsSet[] = { 0 };
  const unsigned K0_SubRegsSet[] = { 0 };
  const unsigned K1_SubRegsSet[] = { 0 };
  const unsigned LO_SubRegsSet[] = { 0 };
  const unsigned RA_SubRegsSet[] = { 0 };
  const unsigned S0_SubRegsSet[] = { 0 };
  const unsigned S1_SubRegsSet[] = { 0 };
  const unsigned S2_SubRegsSet[] = { 0 };
  const unsigned S3_SubRegsSet[] = { 0 };
  const unsigned S4_SubRegsSet[] = { 0 };
  const unsigned S5_SubRegsSet[] = { 0 };
  const unsigned S6_SubRegsSet[] = { 0 };
  const unsigned S7_SubRegsSet[] = { 0 };
  const unsigned SP_SubRegsSet[] = { 0 };
  const unsigned T0_SubRegsSet[] = { 0 };
  const unsigned T1_SubRegsSet[] = { 0 };
  const unsigned T2_SubRegsSet[] = { 0 };
  const unsigned T3_SubRegsSet[] = { 0 };
  const unsigned T4_SubRegsSet[] = { 0 };
  const unsigned T5_SubRegsSet[] = { 0 };
  const unsigned T6_SubRegsSet[] = { 0 };
  const unsigned T7_SubRegsSet[] = { 0 };
  const unsigned T8_SubRegsSet[] = { 0 };
  const unsigned T9_SubRegsSet[] = { 0 };
  const unsigned V0_SubRegsSet[] = { 0 };
  const unsigned V1_SubRegsSet[] = { 0 };
  const unsigned ZERO_SubRegsSet[] = { 0 };


  // Register Super-registers Sets...
  const unsigned Empty_SuperRegsSet[] = { 0 };
  const unsigned A0_SuperRegsSet[] = { 0 };
  const unsigned A1_SuperRegsSet[] = { 0 };
  const unsigned A2_SuperRegsSet[] = { 0 };
  const unsigned A3_SuperRegsSet[] = { 0 };
  const unsigned AT_SuperRegsSet[] = { 0 };
  const unsigned D0_SuperRegsSet[] = { 0 };
  const unsigned D1_SuperRegsSet[] = { 0 };
  const unsigned D10_SuperRegsSet[] = { 0 };
  const unsigned D11_SuperRegsSet[] = { 0 };
  const unsigned D12_SuperRegsSet[] = { 0 };
  const unsigned D13_SuperRegsSet[] = { 0 };
  const unsigned D14_SuperRegsSet[] = { 0 };
  const unsigned D15_SuperRegsSet[] = { 0 };
  const unsigned D2_SuperRegsSet[] = { 0 };
  const unsigned D3_SuperRegsSet[] = { 0 };
  const unsigned D4_SuperRegsSet[] = { 0 };
  const unsigned D5_SuperRegsSet[] = { 0 };
  const unsigned D6_SuperRegsSet[] = { 0 };
  const unsigned D7_SuperRegsSet[] = { 0 };
  const unsigned D8_SuperRegsSet[] = { 0 };
  const unsigned D9_SuperRegsSet[] = { 0 };
  const unsigned F0_SuperRegsSet[] = { 0 };
  const unsigned F1_SuperRegsSet[] = { 0 };
  const unsigned F10_SuperRegsSet[] = { 0 };
  const unsigned F11_SuperRegsSet[] = { 0 };
  const unsigned F12_SuperRegsSet[] = { 0 };
  const unsigned F13_SuperRegsSet[] = { 0 };
  const unsigned F14_SuperRegsSet[] = { 0 };
  const unsigned F15_SuperRegsSet[] = { 0 };
  const unsigned F16_SuperRegsSet[] = { 0 };
  const unsigned F17_SuperRegsSet[] = { 0 };
  const unsigned F18_SuperRegsSet[] = { 0 };
  const unsigned F19_SuperRegsSet[] = { 0 };
  const unsigned F2_SuperRegsSet[] = { 0 };
  const unsigned F20_SuperRegsSet[] = { 0 };
  const unsigned F21_SuperRegsSet[] = { 0 };
  const unsigned F22_SuperRegsSet[] = { 0 };
  const unsigned F23_SuperRegsSet[] = { 0 };
  const unsigned F24_SuperRegsSet[] = { 0 };
  const unsigned F25_SuperRegsSet[] = { 0 };
  const unsigned F26_SuperRegsSet[] = { 0 };
  const unsigned F27_SuperRegsSet[] = { 0 };
  const unsigned F28_SuperRegsSet[] = { 0 };
  const unsigned F29_SuperRegsSet[] = { 0 };
  const unsigned F3_SuperRegsSet[] = { 0 };
  const unsigned F30_SuperRegsSet[] = { 0 };
  const unsigned F31_SuperRegsSet[] = { 0 };
  const unsigned F4_SuperRegsSet[] = { 0 };
  const unsigned F5_SuperRegsSet[] = { 0 };
  const unsigned F6_SuperRegsSet[] = { 0 };
  const unsigned F7_SuperRegsSet[] = { 0 };
  const unsigned F8_SuperRegsSet[] = { 0 };
  const unsigned F9_SuperRegsSet[] = { 0 };
  const unsigned FCR31_SuperRegsSet[] = { 0 };
  const unsigned FP_SuperRegsSet[] = { 0 };
  const unsigned GP_SuperRegsSet[] = { 0 };
  const unsigned HI_SuperRegsSet[] = { 0 };
  const unsigned K0_SuperRegsSet[] = { 0 };
  const unsigned K1_SuperRegsSet[] = { 0 };
  const unsigned LO_SuperRegsSet[] = { 0 };
  const unsigned RA_SuperRegsSet[] = { 0 };
  const unsigned S0_SuperRegsSet[] = { 0 };
  const unsigned S1_SuperRegsSet[] = { 0 };
  const unsigned S2_SuperRegsSet[] = { 0 };
  const unsigned S3_SuperRegsSet[] = { 0 };
  const unsigned S4_SuperRegsSet[] = { 0 };
  const unsigned S5_SuperRegsSet[] = { 0 };
  const unsigned S6_SuperRegsSet[] = { 0 };
  const unsigned S7_SuperRegsSet[] = { 0 };
  const unsigned SP_SuperRegsSet[] = { 0 };
  const unsigned T0_SuperRegsSet[] = { 0 };
  const unsigned T1_SuperRegsSet[] = { 0 };
  const unsigned T2_SuperRegsSet[] = { 0 };
  const unsigned T3_SuperRegsSet[] = { 0 };
  const unsigned T4_SuperRegsSet[] = { 0 };
  const unsigned T5_SuperRegsSet[] = { 0 };
  const unsigned T6_SuperRegsSet[] = { 0 };
  const unsigned T7_SuperRegsSet[] = { 0 };
  const unsigned T8_SuperRegsSet[] = { 0 };
  const unsigned T9_SuperRegsSet[] = { 0 };
  const unsigned V0_SuperRegsSet[] = { 0 };
  const unsigned V1_SuperRegsSet[] = { 0 };
  const unsigned ZERO_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "4",	"A0",	A0_AliasSet,	A0_SubRegsSet,	A0_SuperRegsSet },
    { "5",	"A1",	A1_AliasSet,	A1_SubRegsSet,	A1_SuperRegsSet },
    { "6",	"A2",	A2_AliasSet,	A2_SubRegsSet,	A2_SuperRegsSet },
    { "7",	"A3",	A3_AliasSet,	A3_SubRegsSet,	A3_SuperRegsSet },
    { "AT",	"AT",	AT_AliasSet,	AT_SubRegsSet,	AT_SuperRegsSet },
    { "F0",	"D0",	D0_AliasSet,	D0_SubRegsSet,	D0_SuperRegsSet },
    { "F2",	"D1",	D1_AliasSet,	D1_SubRegsSet,	D1_SuperRegsSet },
    { "F20",	"D10",	D10_AliasSet,	D10_SubRegsSet,	D10_SuperRegsSet },
    { "F22",	"D11",	D11_AliasSet,	D11_SubRegsSet,	D11_SuperRegsSet },
    { "F24",	"D12",	D12_AliasSet,	D12_SubRegsSet,	D12_SuperRegsSet },
    { "F26",	"D13",	D13_AliasSet,	D13_SubRegsSet,	D13_SuperRegsSet },
    { "F28",	"D14",	D14_AliasSet,	D14_SubRegsSet,	D14_SuperRegsSet },
    { "F30",	"D15",	D15_AliasSet,	D15_SubRegsSet,	D15_SuperRegsSet },
    { "F4",	"D2",	D2_AliasSet,	D2_SubRegsSet,	D2_SuperRegsSet },
    { "F6",	"D3",	D3_AliasSet,	D3_SubRegsSet,	D3_SuperRegsSet },
    { "F8",	"D4",	D4_AliasSet,	D4_SubRegsSet,	D4_SuperRegsSet },
    { "F10",	"D5",	D5_AliasSet,	D5_SubRegsSet,	D5_SuperRegsSet },
    { "F12",	"D6",	D6_AliasSet,	D6_SubRegsSet,	D6_SuperRegsSet },
    { "F14",	"D7",	D7_AliasSet,	D7_SubRegsSet,	D7_SuperRegsSet },
    { "F16",	"D8",	D8_AliasSet,	D8_SubRegsSet,	D8_SuperRegsSet },
    { "F18",	"D9",	D9_AliasSet,	D9_SubRegsSet,	D9_SuperRegsSet },
    { "F0",	"F0",	F0_AliasSet,	F0_SubRegsSet,	F0_SuperRegsSet },
    { "F1",	"F1",	F1_AliasSet,	F1_SubRegsSet,	F1_SuperRegsSet },
    { "F10",	"F10",	F10_AliasSet,	F10_SubRegsSet,	F10_SuperRegsSet },
    { "F11",	"F11",	F11_AliasSet,	F11_SubRegsSet,	F11_SuperRegsSet },
    { "F12",	"F12",	F12_AliasSet,	F12_SubRegsSet,	F12_SuperRegsSet },
    { "F13",	"F13",	F13_AliasSet,	F13_SubRegsSet,	F13_SuperRegsSet },
    { "F14",	"F14",	F14_AliasSet,	F14_SubRegsSet,	F14_SuperRegsSet },
    { "F15",	"F15",	F15_AliasSet,	F15_SubRegsSet,	F15_SuperRegsSet },
    { "F16",	"F16",	F16_AliasSet,	F16_SubRegsSet,	F16_SuperRegsSet },
    { "F17",	"F17",	F17_AliasSet,	F17_SubRegsSet,	F17_SuperRegsSet },
    { "F18",	"F18",	F18_AliasSet,	F18_SubRegsSet,	F18_SuperRegsSet },
    { "F19",	"F19",	F19_AliasSet,	F19_SubRegsSet,	F19_SuperRegsSet },
    { "F2",	"F2",	F2_AliasSet,	F2_SubRegsSet,	F2_SuperRegsSet },
    { "F20",	"F20",	F20_AliasSet,	F20_SubRegsSet,	F20_SuperRegsSet },
    { "F21",	"F21",	F21_AliasSet,	F21_SubRegsSet,	F21_SuperRegsSet },
    { "F22",	"F22",	F22_AliasSet,	F22_SubRegsSet,	F22_SuperRegsSet },
    { "F23",	"F23",	F23_AliasSet,	F23_SubRegsSet,	F23_SuperRegsSet },
    { "F24",	"F24",	F24_AliasSet,	F24_SubRegsSet,	F24_SuperRegsSet },
    { "F25",	"F25",	F25_AliasSet,	F25_SubRegsSet,	F25_SuperRegsSet },
    { "F26",	"F26",	F26_AliasSet,	F26_SubRegsSet,	F26_SuperRegsSet },
    { "F27",	"F27",	F27_AliasSet,	F27_SubRegsSet,	F27_SuperRegsSet },
    { "F28",	"F28",	F28_AliasSet,	F28_SubRegsSet,	F28_SuperRegsSet },
    { "F29",	"F29",	F29_AliasSet,	F29_SubRegsSet,	F29_SuperRegsSet },
    { "F3",	"F3",	F3_AliasSet,	F3_SubRegsSet,	F3_SuperRegsSet },
    { "F30",	"F30",	F30_AliasSet,	F30_SubRegsSet,	F30_SuperRegsSet },
    { "F31",	"F31",	F31_AliasSet,	F31_SubRegsSet,	F31_SuperRegsSet },
    { "F4",	"F4",	F4_AliasSet,	F4_SubRegsSet,	F4_SuperRegsSet },
    { "F5",	"F5",	F5_AliasSet,	F5_SubRegsSet,	F5_SuperRegsSet },
    { "F6",	"F6",	F6_AliasSet,	F6_SubRegsSet,	F6_SuperRegsSet },
    { "F7",	"F7",	F7_AliasSet,	F7_SubRegsSet,	F7_SuperRegsSet },
    { "F8",	"F8",	F8_AliasSet,	F8_SubRegsSet,	F8_SuperRegsSet },
    { "F9",	"F9",	F9_AliasSet,	F9_SubRegsSet,	F9_SuperRegsSet },
    { "31",	"FCR31",	FCR31_AliasSet,	FCR31_SubRegsSet,	FCR31_SuperRegsSet },
    { "FP",	"FP",	FP_AliasSet,	FP_SubRegsSet,	FP_SuperRegsSet },
    { "GP",	"GP",	GP_AliasSet,	GP_SubRegsSet,	GP_SuperRegsSet },
    { "hi",	"HI",	HI_AliasSet,	HI_SubRegsSet,	HI_SuperRegsSet },
    { "26",	"K0",	K0_AliasSet,	K0_SubRegsSet,	K0_SuperRegsSet },
    { "27",	"K1",	K1_AliasSet,	K1_SubRegsSet,	K1_SuperRegsSet },
    { "lo",	"LO",	LO_AliasSet,	LO_SubRegsSet,	LO_SuperRegsSet },
    { "RA",	"RA",	RA_AliasSet,	RA_SubRegsSet,	RA_SuperRegsSet },
    { "16",	"S0",	S0_AliasSet,	S0_SubRegsSet,	S0_SuperRegsSet },
    { "17",	"S1",	S1_AliasSet,	S1_SubRegsSet,	S1_SuperRegsSet },
    { "18",	"S2",	S2_AliasSet,	S2_SubRegsSet,	S2_SuperRegsSet },
    { "19",	"S3",	S3_AliasSet,	S3_SubRegsSet,	S3_SuperRegsSet },
    { "20",	"S4",	S4_AliasSet,	S4_SubRegsSet,	S4_SuperRegsSet },
    { "21",	"S5",	S5_AliasSet,	S5_SubRegsSet,	S5_SuperRegsSet },
    { "22",	"S6",	S6_AliasSet,	S6_SubRegsSet,	S6_SuperRegsSet },
    { "23",	"S7",	S7_AliasSet,	S7_SubRegsSet,	S7_SuperRegsSet },
    { "SP",	"SP",	SP_AliasSet,	SP_SubRegsSet,	SP_SuperRegsSet },
    { "8",	"T0",	T0_AliasSet,	T0_SubRegsSet,	T0_SuperRegsSet },
    { "9",	"T1",	T1_AliasSet,	T1_SubRegsSet,	T1_SuperRegsSet },
    { "10",	"T2",	T2_AliasSet,	T2_SubRegsSet,	T2_SuperRegsSet },
    { "11",	"T3",	T3_AliasSet,	T3_SubRegsSet,	T3_SuperRegsSet },
    { "12",	"T4",	T4_AliasSet,	T4_SubRegsSet,	T4_SuperRegsSet },
    { "13",	"T5",	T5_AliasSet,	T5_SubRegsSet,	T5_SuperRegsSet },
    { "14",	"T6",	T6_AliasSet,	T6_SubRegsSet,	T6_SuperRegsSet },
    { "15",	"T7",	T7_AliasSet,	T7_SubRegsSet,	T7_SuperRegsSet },
    { "24",	"T8",	T8_AliasSet,	T8_SubRegsSet,	T8_SuperRegsSet },
    { "25",	"T9",	T9_AliasSet,	T9_SubRegsSet,	T9_SuperRegsSet },
    { "2",	"V0",	V0_AliasSet,	V0_SubRegsSet,	V0_SuperRegsSet },
    { "3",	"V1",	V1_AliasSet,	V1_SubRegsSet,	V1_SuperRegsSet },
    { "ZERO",	"ZERO",	ZERO_AliasSet,	ZERO_SubRegsSet,	ZERO_SuperRegsSet },
  };
}

unsigned MipsGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

MipsGenRegisterInfo::MipsGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 84, RegisterClasses, RegisterClasses+5,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 SuperregHashTable, SuperregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int MipsGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case Mips::A0:
      return 5;
    case Mips::A1:
      return 5;
    case Mips::A2:
      return 6;
    case Mips::A3:
      return 7;
    case Mips::AT:
      return 1;
    case Mips::D0:
      return 32;
    case Mips::D1:
      return 34;
    case Mips::D10:
      return 52;
    case Mips::D11:
      return 54;
    case Mips::D12:
      return 56;
    case Mips::D13:
      return 58;
    case Mips::D14:
      return 60;
    case Mips::D15:
      return 62;
    case Mips::D2:
      return 36;
    case Mips::D3:
      return 38;
    case Mips::D4:
      return 40;
    case Mips::D5:
      return 42;
    case Mips::D6:
      return 44;
    case Mips::D7:
      return 46;
    case Mips::D8:
      return 48;
    case Mips::D9:
      return 50;
    case Mips::F0:
      return 32;
    case Mips::F1:
      return 33;
    case Mips::F10:
      return 42;
    case Mips::F11:
      return 43;
    case Mips::F12:
      return 44;
    case Mips::F13:
      return 45;
    case Mips::F14:
      return 46;
    case Mips::F15:
      return 47;
    case Mips::F16:
      return 48;
    case Mips::F17:
      return 49;
    case Mips::F18:
      return 50;
    case Mips::F19:
      return 51;
    case Mips::F2:
      return 34;
    case Mips::F20:
      return 52;
    case Mips::F21:
      return 53;
    case Mips::F22:
      return 54;
    case Mips::F23:
      return 55;
    case Mips::F24:
      return 56;
    case Mips::F25:
      return 57;
    case Mips::F26:
      return 58;
    case Mips::F27:
      return 59;
    case Mips::F28:
      return 60;
    case Mips::F29:
      return 61;
    case Mips::F3:
      return 35;
    case Mips::F30:
      return 62;
    case Mips::F31:
      return 63;
    case Mips::F4:
      return 36;
    case Mips::F5:
      return 37;
    case Mips::F6:
      return 38;
    case Mips::F7:
      return 39;
    case Mips::F8:
      return 40;
    case Mips::F9:
      return 41;
    case Mips::FCR31:
      return -1;
    case Mips::FP:
      return 30;
    case Mips::GP:
      return 28;
    case Mips::HI:
      return 64;
    case Mips::K0:
      return 26;
    case Mips::K1:
      return 27;
    case Mips::LO:
      return 65;
    case Mips::RA:
      return 31;
    case Mips::S0:
      return 16;
    case Mips::S1:
      return 17;
    case Mips::S2:
      return 18;
    case Mips::S3:
      return 19;
    case Mips::S4:
      return 20;
    case Mips::S5:
      return 21;
    case Mips::S6:
      return 22;
    case Mips::S7:
      return 23;
    case Mips::SP:
      return 29;
    case Mips::T0:
      return 8;
    case Mips::T1:
      return 9;
    case Mips::T2:
      return 10;
    case Mips::T3:
      return 11;
    case Mips::T4:
      return 12;
    case Mips::T5:
      return 13;
    case Mips::T6:
      return 14;
    case Mips::T7:
      return 15;
    case Mips::T8:
      return 24;
    case Mips::T9:
      return 25;
    case Mips::V0:
      return 2;
    case Mips::V1:
      return 3;
    case Mips::ZERO:
      return 0;
    };
  };
}

} // End llvm namespace 
