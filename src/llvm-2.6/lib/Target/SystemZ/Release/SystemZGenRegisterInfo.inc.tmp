//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // ADDR32 Register Class...
  static const unsigned ADDR32[] = {
    SystemZ::R1W, SystemZ::R2W, SystemZ::R3W, SystemZ::R4W, SystemZ::R5W, SystemZ::R6W, SystemZ::R7W, SystemZ::R8W, SystemZ::R9W, SystemZ::R10W, SystemZ::R12W, SystemZ::R13W, SystemZ::R11W, SystemZ::R14W, SystemZ::R15W, 
  };

  // ADDR64 Register Class...
  static const unsigned ADDR64[] = {
    SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R12D, SystemZ::R13D, SystemZ::R11D, SystemZ::R14D, SystemZ::R15D, 
  };

  // CCR Register Class...
  static const unsigned CCR[] = {
    SystemZ::PSW, 
  };

  // FP32 Register Class...
  static const unsigned FP32[] = {
    SystemZ::F0S, SystemZ::F1S, SystemZ::F2S, SystemZ::F3S, SystemZ::F4S, SystemZ::F5S, SystemZ::F6S, SystemZ::F7S, SystemZ::F8S, SystemZ::F9S, SystemZ::F10S, SystemZ::F11S, SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S, 
  };

  // FP64 Register Class...
  static const unsigned FP64[] = {
    SystemZ::F0L, SystemZ::F1L, SystemZ::F2L, SystemZ::F3L, SystemZ::F4L, SystemZ::F5L, SystemZ::F6L, SystemZ::F7L, SystemZ::F8L, SystemZ::F9L, SystemZ::F10L, SystemZ::F11L, SystemZ::F12L, SystemZ::F13L, SystemZ::F14L, SystemZ::F15L, 
  };

  // GR128 Register Class...
  static const unsigned GR128[] = {
    SystemZ::R0Q, SystemZ::R2Q, SystemZ::R4Q, SystemZ::R6Q, SystemZ::R8Q, SystemZ::R10Q, SystemZ::R12Q, SystemZ::R14Q, 
  };

  // GR32 Register Class...
  static const unsigned GR32[] = {
    SystemZ::R0W, SystemZ::R1W, SystemZ::R2W, SystemZ::R3W, SystemZ::R4W, SystemZ::R5W, SystemZ::R6W, SystemZ::R7W, SystemZ::R8W, SystemZ::R9W, SystemZ::R10W, SystemZ::R12W, SystemZ::R13W, SystemZ::R11W, SystemZ::R14W, SystemZ::R15W, 
  };

  // GR64 Register Class...
  static const unsigned GR64[] = {
    SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R12D, SystemZ::R13D, SystemZ::R11D, SystemZ::R14D, SystemZ::R15D, 
  };

  // GR64P Register Class...
  static const unsigned GR64P[] = {
    SystemZ::R0P, SystemZ::R2P, SystemZ::R4P, SystemZ::R6P, SystemZ::R8P, SystemZ::R10P, SystemZ::R12P, SystemZ::R14P, 
  };

  // ADDR32VTs Register Class Value Types...
  static const EVT ADDR32VTs[] = {
    MVT::i32, MVT::Other
  };

  // ADDR64VTs Register Class Value Types...
  static const EVT ADDR64VTs[] = {
    MVT::i64, MVT::Other
  };

  // CCRVTs Register Class Value Types...
  static const EVT CCRVTs[] = {
    MVT::i64, MVT::Other
  };

  // FP32VTs Register Class Value Types...
  static const EVT FP32VTs[] = {
    MVT::f32, MVT::Other
  };

  // FP64VTs Register Class Value Types...
  static const EVT FP64VTs[] = {
    MVT::f64, MVT::Other
  };

  // GR128VTs Register Class Value Types...
  static const EVT GR128VTs[] = {
    MVT::v2i64, MVT::Other
  };

  // GR32VTs Register Class Value Types...
  static const EVT GR32VTs[] = {
    MVT::i32, MVT::Other
  };

  // GR64VTs Register Class Value Types...
  static const EVT GR64VTs[] = {
    MVT::i64, MVT::Other
  };

  // GR64PVTs Register Class Value Types...
  static const EVT GR64PVTs[] = {
    MVT::v2i32, MVT::Other
  };

}  // end anonymous namespace

namespace SystemZ {   // Register class instances
  ADDR32Class	ADDR32RegClass;
  ADDR64Class	ADDR64RegClass;
  CCRClass	CCRRegClass;
  FP32Class	FP32RegClass;
  FP64Class	FP64RegClass;
  GR128Class	GR128RegClass;
  GR32Class	GR32RegClass;
  GR64Class	GR64RegClass;
  GR64PClass	GR64PRegClass;

  // ADDR32 Sub-register Classes...
  static const TargetRegisterClass* const ADDR32SubRegClasses[] = {
    NULL
  };

  // ADDR64 Sub-register Classes...
  static const TargetRegisterClass* const ADDR64SubRegClasses[] = {
    &SystemZ::ADDR32RegClass, NULL
  };

  // CCR Sub-register Classes...
  static const TargetRegisterClass* const CCRSubRegClasses[] = {
    NULL
  };

  // FP32 Sub-register Classes...
  static const TargetRegisterClass* const FP32SubRegClasses[] = {
    NULL
  };

  // FP64 Sub-register Classes...
  static const TargetRegisterClass* const FP64SubRegClasses[] = {
    &SystemZ::FP32RegClass, NULL
  };

  // GR128 Sub-register Classes...
  static const TargetRegisterClass* const GR128SubRegClasses[] = {
    &SystemZ::GR32RegClass, &SystemZ::GR32RegClass, &SystemZ::GR64RegClass, &SystemZ::GR64RegClass, NULL
  };

  // GR32 Sub-register Classes...
  static const TargetRegisterClass* const GR32SubRegClasses[] = {
    NULL
  };

  // GR64 Sub-register Classes...
  static const TargetRegisterClass* const GR64SubRegClasses[] = {
    &SystemZ::GR32RegClass, NULL
  };

  // GR64P Sub-register Classes...
  static const TargetRegisterClass* const GR64PSubRegClasses[] = {
    &SystemZ::GR32RegClass, &SystemZ::GR32RegClass, NULL
  };

  // ADDR32 Super-register Classes...
  static const TargetRegisterClass* const ADDR32SuperRegClasses[] = {
    &SystemZ::ADDR64RegClass, NULL
  };

  // ADDR64 Super-register Classes...
  static const TargetRegisterClass* const ADDR64SuperRegClasses[] = {
    NULL
  };

  // CCR Super-register Classes...
  static const TargetRegisterClass* const CCRSuperRegClasses[] = {
    NULL
  };

  // FP32 Super-register Classes...
  static const TargetRegisterClass* const FP32SuperRegClasses[] = {
    &SystemZ::FP64RegClass, NULL
  };

  // FP64 Super-register Classes...
  static const TargetRegisterClass* const FP64SuperRegClasses[] = {
    NULL
  };

  // GR128 Super-register Classes...
  static const TargetRegisterClass* const GR128SuperRegClasses[] = {
    NULL
  };

  // GR32 Super-register Classes...
  static const TargetRegisterClass* const GR32SuperRegClasses[] = {
    &SystemZ::GR128RegClass, &SystemZ::GR64RegClass, &SystemZ::GR64PRegClass, NULL
  };

  // GR64 Super-register Classes...
  static const TargetRegisterClass* const GR64SuperRegClasses[] = {
    &SystemZ::GR128RegClass, NULL
  };

  // GR64P Super-register Classes...
  static const TargetRegisterClass* const GR64PSuperRegClasses[] = {
    NULL
  };

  // ADDR32 Register Class sub-classes...
  static const TargetRegisterClass* const ADDR32Subclasses[] = {
    NULL
  };

  // ADDR64 Register Class sub-classes...
  static const TargetRegisterClass* const ADDR64Subclasses[] = {
    NULL
  };

  // CCR Register Class sub-classes...
  static const TargetRegisterClass* const CCRSubclasses[] = {
    NULL
  };

  // FP32 Register Class sub-classes...
  static const TargetRegisterClass* const FP32Subclasses[] = {
    NULL
  };

  // FP64 Register Class sub-classes...
  static const TargetRegisterClass* const FP64Subclasses[] = {
    NULL
  };

  // GR128 Register Class sub-classes...
  static const TargetRegisterClass* const GR128Subclasses[] = {
    NULL
  };

  // GR32 Register Class sub-classes...
  static const TargetRegisterClass* const GR32Subclasses[] = {
    &SystemZ::ADDR32RegClass, NULL
  };

  // GR64 Register Class sub-classes...
  static const TargetRegisterClass* const GR64Subclasses[] = {
    &SystemZ::ADDR64RegClass, NULL
  };

  // GR64P Register Class sub-classes...
  static const TargetRegisterClass* const GR64PSubclasses[] = {
    NULL
  };

  // ADDR32 Register Class super-classes...
  static const TargetRegisterClass* const ADDR32Superclasses[] = {
    &SystemZ::GR32RegClass, NULL
  };

  // ADDR64 Register Class super-classes...
  static const TargetRegisterClass* const ADDR64Superclasses[] = {
    &SystemZ::GR64RegClass, NULL
  };

  // CCR Register Class super-classes...
  static const TargetRegisterClass* const CCRSuperclasses[] = {
    NULL
  };

  // FP32 Register Class super-classes...
  static const TargetRegisterClass* const FP32Superclasses[] = {
    NULL
  };

  // FP64 Register Class super-classes...
  static const TargetRegisterClass* const FP64Superclasses[] = {
    NULL
  };

  // GR128 Register Class super-classes...
  static const TargetRegisterClass* const GR128Superclasses[] = {
    NULL
  };

  // GR32 Register Class super-classes...
  static const TargetRegisterClass* const GR32Superclasses[] = {
    NULL
  };

  // GR64 Register Class super-classes...
  static const TargetRegisterClass* const GR64Superclasses[] = {
    NULL
  };

  // GR64P Register Class super-classes...
  static const TargetRegisterClass* const GR64PSuperclasses[] = {
    NULL
  };


    static const unsigned SystemZ_ADDR32[] = {
      SystemZ::R1W,  SystemZ::R2W,  SystemZ::R3W,  SystemZ::R4W,
      SystemZ::R5W,  /* No R0W */   SystemZ::R12W, SystemZ::R11W,
      SystemZ::R10W, SystemZ::R9W,  SystemZ::R8W,  SystemZ::R7W,
      SystemZ::R6W,  SystemZ::R14W, SystemZ::R13W
    };
    static const unsigned SystemZ_ADDR32_nofp[] = {
      SystemZ::R1W,  SystemZ::R2W,  SystemZ::R3W,  SystemZ::R4W,
      SystemZ::R5W,  /* No R0W */   SystemZ::R12W, /* No R11W */
      SystemZ::R10W, SystemZ::R9W,  SystemZ::R8W,  SystemZ::R7W,
      SystemZ::R6W,  SystemZ::R14W, SystemZ::R13W
    };
    ADDR32Class::iterator
    ADDR32Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_ADDR32_nofp;
      else
        return SystemZ_ADDR32;
    }
    ADDR32Class::iterator
    ADDR32Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_ADDR32_nofp + (sizeof(SystemZ_ADDR32_nofp) / sizeof(unsigned));
      else
        return SystemZ_ADDR32 + (sizeof(SystemZ_ADDR32) / sizeof(unsigned));
    }
  
ADDR32Class::ADDR32Class()  : TargetRegisterClass(ADDR32RegClassID, "ADDR32", ADDR32VTs, ADDR32Subclasses, ADDR32Superclasses, ADDR32SubRegClasses, ADDR32SuperRegClasses, 4, 4, 1, ADDR32, ADDR32 + 15) {}

    static const unsigned SystemZ_ADDR64[] = {
      SystemZ::R1D,  SystemZ::R2D,  SystemZ::R3D,  SystemZ::R4D,
      SystemZ::R5D,  /* No R0D */   SystemZ::R12D, SystemZ::R11D,
      SystemZ::R10D, SystemZ::R9D,  SystemZ::R8D,  SystemZ::R7D,
      SystemZ::R6D,  SystemZ::R14D, SystemZ::R13D
    };
    static const unsigned SystemZ_ADDR64_nofp[] = {
      SystemZ::R1D,  SystemZ::R2D,  SystemZ::R3D,  SystemZ::R4D,
      SystemZ::R5D,  /* No R0D */   SystemZ::R12D, /* No R11D */
      SystemZ::R10D, SystemZ::R9D,  SystemZ::R8D,  SystemZ::R7D,
      SystemZ::R6D,  SystemZ::R14D, SystemZ::R13D
    };
    ADDR64Class::iterator
    ADDR64Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_ADDR64_nofp;
      else
        return SystemZ_ADDR64;
    }
    ADDR64Class::iterator
    ADDR64Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_ADDR64_nofp + (sizeof(SystemZ_ADDR64_nofp) / sizeof(unsigned));
      else
        return SystemZ_ADDR64 + (sizeof(SystemZ_ADDR64) / sizeof(unsigned));
    }
  
ADDR64Class::ADDR64Class()  : TargetRegisterClass(ADDR64RegClassID, "ADDR64", ADDR64VTs, ADDR64Subclasses, ADDR64Superclasses, ADDR64SubRegClasses, ADDR64SuperRegClasses, 8, 8, 1, ADDR64, ADDR64 + 15) {}

CCRClass::CCRClass()  : TargetRegisterClass(CCRRegClassID, "CCR", CCRVTs, CCRSubclasses, CCRSuperclasses, CCRSubRegClasses, CCRSuperRegClasses, 8, 8, -1, CCR, CCR + 1) {}

    static const unsigned SystemZ_REGFP32[] = {
      SystemZ::F0S,  SystemZ::F2S,  SystemZ::F4S,  SystemZ::F6S,
      SystemZ::F1S,  SystemZ::F3S,  SystemZ::F5S,  SystemZ::F7S,
      SystemZ::F8S,  SystemZ::F9S,  SystemZ::F10S, SystemZ::F11S,
      SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S };
    FP32Class::iterator
    FP32Class::allocation_order_begin(const MachineFunction &MF) const {
      return SystemZ_REGFP32;
    }
    FP32Class::iterator
    FP32Class::allocation_order_end(const MachineFunction &MF) const {
      return SystemZ_REGFP32 + (sizeof(SystemZ_REGFP32) / sizeof(unsigned));
    }
  
FP32Class::FP32Class()  : TargetRegisterClass(FP32RegClassID, "FP32", FP32VTs, FP32Subclasses, FP32Superclasses, FP32SubRegClasses, FP32SuperRegClasses, 4, 4, 1, FP32, FP32 + 16) {}

    static const unsigned SystemZ_REGFP64[] = {
      SystemZ::F0L,  SystemZ::F2L,  SystemZ::F4L,  SystemZ::F6L,
      SystemZ::F1L,  SystemZ::F3L,  SystemZ::F5L,  SystemZ::F7L,
      SystemZ::F8L,  SystemZ::F9L,  SystemZ::F10L, SystemZ::F11L,
      SystemZ::F12L, SystemZ::F13L, SystemZ::F14L, SystemZ::F15L };
    FP64Class::iterator
    FP64Class::allocation_order_begin(const MachineFunction &MF) const {
      return SystemZ_REGFP64;
    }
    FP64Class::iterator
    FP64Class::allocation_order_end(const MachineFunction &MF) const {
      return SystemZ_REGFP64 + (sizeof(SystemZ_REGFP64) / sizeof(unsigned));
    }
  
FP64Class::FP64Class()  : TargetRegisterClass(FP64RegClassID, "FP64", FP64VTs, FP64Subclasses, FP64Superclasses, FP64SubRegClasses, FP64SuperRegClasses, 8, 8, 1, FP64, FP64 + 16) {}

    static const unsigned SystemZ_REG128[] = {
      SystemZ::R0Q,  SystemZ::R2Q,  SystemZ::R4Q,  SystemZ::R10Q,
      SystemZ::R8Q,  SystemZ::R6Q };
    static const unsigned SystemZ_REG128_nofp[] = {
      SystemZ::R0Q,  SystemZ::R2Q,  SystemZ::R4Q, /* NO R10Q */
      SystemZ::R8Q,  SystemZ::R6Q };
    GR128Class::iterator
    GR128Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_REG128_nofp;
      else
        return SystemZ_REG128;
    }
    GR128Class::iterator
    GR128Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_REG128_nofp + (sizeof(SystemZ_REG128_nofp) / sizeof(unsigned));
      else
        return SystemZ_REG128 + (sizeof(SystemZ_REG128) / sizeof(unsigned));
    }
  
GR128Class::GR128Class()  : TargetRegisterClass(GR128RegClassID, "GR128", GR128VTs, GR128Subclasses, GR128Superclasses, GR128SubRegClasses, GR128SuperRegClasses, 16, 16, 1, GR128, GR128 + 8) {}

    static const unsigned SystemZ_REG32[] = {
      SystemZ::R1W,  SystemZ::R2W,  SystemZ::R3W,  SystemZ::R4W,
      SystemZ::R5W,  SystemZ::R0W,  SystemZ::R12W, SystemZ::R11W,
      SystemZ::R10W, SystemZ::R9W,  SystemZ::R8W,  SystemZ::R7W,
      SystemZ::R6W,  SystemZ::R14W, SystemZ::R13W
    };
    static const unsigned SystemZ_REG32_nofp[] = {
      SystemZ::R1W,  SystemZ::R2W,  SystemZ::R3W,  SystemZ::R4W,
      SystemZ::R5W,  SystemZ::R0W,  SystemZ::R12W, /* No R11W */
      SystemZ::R10W, SystemZ::R9W,  SystemZ::R8W,  SystemZ::R7W,
      SystemZ::R6W,  SystemZ::R14W, SystemZ::R13W
    };
    GR32Class::iterator
    GR32Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_REG32_nofp;
      else
        return SystemZ_REG32;
    }
    GR32Class::iterator
    GR32Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_REG32_nofp + (sizeof(SystemZ_REG32_nofp) / sizeof(unsigned));
      else
        return SystemZ_REG32 + (sizeof(SystemZ_REG32) / sizeof(unsigned));
    }
  
GR32Class::GR32Class()  : TargetRegisterClass(GR32RegClassID, "GR32", GR32VTs, GR32Subclasses, GR32Superclasses, GR32SubRegClasses, GR32SuperRegClasses, 4, 4, 1, GR32, GR32 + 16) {}

    static const unsigned SystemZ_REG64[] = {
      SystemZ::R1D,  SystemZ::R2D,  SystemZ::R3D,  SystemZ::R4D,
      SystemZ::R5D,  SystemZ::R0D,  SystemZ::R12D, SystemZ::R11D,
      SystemZ::R10D, SystemZ::R9D,  SystemZ::R8D,  SystemZ::R7D,
      SystemZ::R6D,  SystemZ::R14D, SystemZ::R13D
    };
    static const unsigned SystemZ_REG64_nofp[] = {
      SystemZ::R1D,  SystemZ::R2D,  SystemZ::R3D,  SystemZ::R4D,
      SystemZ::R5D,  SystemZ::R0D,  SystemZ::R12D, /* No R11D */
      SystemZ::R10D, SystemZ::R9D,  SystemZ::R8D,  SystemZ::R7D,
      SystemZ::R6D,  SystemZ::R14D, SystemZ::R13D
    };
    GR64Class::iterator
    GR64Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_REG64_nofp;
      else
        return SystemZ_REG64;
    }
    GR64Class::iterator
    GR64Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_REG64_nofp + (sizeof(SystemZ_REG64_nofp) / sizeof(unsigned));
      else
        return SystemZ_REG64 + (sizeof(SystemZ_REG64) / sizeof(unsigned));
    }
  
GR64Class::GR64Class()  : TargetRegisterClass(GR64RegClassID, "GR64", GR64VTs, GR64Subclasses, GR64Superclasses, GR64SubRegClasses, GR64SuperRegClasses, 8, 8, 1, GR64, GR64 + 16) {}

    static const unsigned SystemZ_REG64P[] = {
      SystemZ::R0P,  SystemZ::R2P,  SystemZ::R4P, SystemZ::R10P,
      SystemZ::R8P,  SystemZ::R6P };
    static const unsigned SystemZ_REG64P_nofp[] = {
      SystemZ::R0P,  SystemZ::R2P,  SystemZ::R4P, /* NO R10P */
      SystemZ::R8P,  SystemZ::R6P };
    GR64PClass::iterator
    GR64PClass::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_REG64P_nofp;
      else
        return SystemZ_REG64P;
    }
    GR64PClass::iterator
    GR64PClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return SystemZ_REG64P_nofp + (sizeof(SystemZ_REG64P_nofp) / sizeof(unsigned));
      else
        return SystemZ_REG64P + (sizeof(SystemZ_REG64P) / sizeof(unsigned));
    }
  
GR64PClass::GR64PClass()  : TargetRegisterClass(GR64PRegClassID, "GR64P", GR64PVTs, GR64PSubclasses, GR64PSuperclasses, GR64PSubRegClasses, GR64PSuperRegClasses, 8, 8, 1, GR64P, GR64P + 8) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SystemZ::ADDR32RegClass,
    &SystemZ::ADDR64RegClass,
    &SystemZ::CCRRegClass,
    &SystemZ::FP32RegClass,
    &SystemZ::FP64RegClass,
    &SystemZ::GR128RegClass,
    &SystemZ::GR32RegClass,
    &SystemZ::GR64RegClass,
    &SystemZ::GR64PRegClass,
  };


  // Number of hash collisions: 19
  const unsigned SubregHashTable[] = { SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14Q, SystemZ::R15D, 
                                       SystemZ::R8Q, SystemZ::R9W, 
                                       SystemZ::R8P, SystemZ::R9W, 
                                       SystemZ::R9D, SystemZ::R9W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F15L, SystemZ::F15S, 
                                       SystemZ::R10P, SystemZ::R10W, 
                                       SystemZ::R10D, SystemZ::R10W, 
                                       SystemZ::R4Q, SystemZ::R5D, 
                                       SystemZ::R10Q, SystemZ::R10W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14P, SystemZ::R15W, 
                                       SystemZ::F7L, SystemZ::F7S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14Q, SystemZ::R15W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R15D, SystemZ::R15W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10Q, SystemZ::R11D, 
                                       SystemZ::R4Q, SystemZ::R5W, 
                                       SystemZ::R0Q, SystemZ::R1D, 
                                       SystemZ::R5D, SystemZ::R5W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4P, SystemZ::R5W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F0L, SystemZ::F0S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10P, SystemZ::R11W, 
                                       SystemZ::F1L, SystemZ::F1S, 
                                       SystemZ::R0P, SystemZ::R1W, 
                                       SystemZ::R0Q, SystemZ::R1W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R11D, SystemZ::R11W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10Q, SystemZ::R11W, 
                                       SystemZ::R6Q, SystemZ::R6D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F8L, SystemZ::F8S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1D, SystemZ::R1W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12Q, SystemZ::R12D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F10L, SystemZ::F10S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2Q, SystemZ::R2D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F2L, SystemZ::F2S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F9L, SystemZ::F9S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6D, SystemZ::R6W, 
                                       SystemZ::R6P, SystemZ::R6W, 
                                       SystemZ::R6Q, SystemZ::R6W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F11L, SystemZ::F11S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F3L, SystemZ::F3S, 
                                       SystemZ::R12P, SystemZ::R12W, 
                                       SystemZ::R12D, SystemZ::R12W, 
                                       SystemZ::R6Q, SystemZ::R7D, 
                                       SystemZ::R12Q, SystemZ::R12W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2D, SystemZ::R2W, 
                                       SystemZ::R2P, SystemZ::R2W, 
                                       SystemZ::R2Q, SystemZ::R2W, 
                                       SystemZ::R0Q, SystemZ::R0D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12Q, SystemZ::R13D, 
                                       SystemZ::R6Q, SystemZ::R7W, 
                                       SystemZ::R6P, SystemZ::R7W, 
                                       SystemZ::R7D, SystemZ::R7W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F12L, SystemZ::F12S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2Q, SystemZ::R3D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12P, SystemZ::R13W, 
                                       SystemZ::F4L, SystemZ::F4S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12Q, SystemZ::R13W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R13D, SystemZ::R13W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8Q, SystemZ::R8D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2P, SystemZ::R3W, 
                                       SystemZ::R2Q, SystemZ::R3W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R3D, SystemZ::R3W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14Q, SystemZ::R14D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F13L, SystemZ::F13S, 
                                       SystemZ::R0P, SystemZ::R0W, 
                                       SystemZ::R0D, SystemZ::R0W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0Q, SystemZ::R0W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4Q, SystemZ::R4D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F5L, SystemZ::F5S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10Q, SystemZ::R10D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8D, SystemZ::R8W, 
                                       SystemZ::R8P, SystemZ::R8W, 
                                       SystemZ::R8Q, SystemZ::R8W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F14L, SystemZ::F14S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F6L, SystemZ::F6S, 
                                       SystemZ::R14P, SystemZ::R14W, 
                                       SystemZ::R14D, SystemZ::R14W, 
                                       SystemZ::R8Q, SystemZ::R9D, 
                                       SystemZ::R14Q, SystemZ::R14W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4D, SystemZ::R4W, 
                                       SystemZ::R4P, SystemZ::R4W, 
                                       SystemZ::R4Q, SystemZ::R4W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
SystemZ::NoRegister, SystemZ::NoRegister };
  const unsigned SubregHashTableSize = 512;


  // Number of hash collisions: 3
  const unsigned SuperregHashTable[] = { SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F7S, SystemZ::F7L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R15W, SystemZ::R15D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R5W, SystemZ::R5D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F0S, SystemZ::F0L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F1S, SystemZ::F1L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R11W, SystemZ::R11D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F8S, SystemZ::F8L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1W, SystemZ::R1D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6W, SystemZ::R6D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F10S, SystemZ::F10L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F2S, SystemZ::F2L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12W, SystemZ::R12D, 
                                       SystemZ::R6W, SystemZ::R6P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7W, SystemZ::R6P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F9S, SystemZ::F9L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2W, SystemZ::R2D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6D, SystemZ::R6Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12W, SystemZ::R12P, 
                                       SystemZ::R6W, SystemZ::R6Q, 
                                       SystemZ::R13W, SystemZ::R12P, 
                                       SystemZ::R7W, SystemZ::R6Q, 
                                       SystemZ::R7D, SystemZ::R6Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F11S, SystemZ::F11L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2W, SystemZ::R2P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R3W, SystemZ::R2P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12D, SystemZ::R12Q, 
                                       SystemZ::F3S, SystemZ::F3L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12W, SystemZ::R12Q, 
                                       SystemZ::R13D, SystemZ::R12Q, 
                                       SystemZ::R13W, SystemZ::R12Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2D, SystemZ::R2Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2W, SystemZ::R2Q, 
                                       SystemZ::R3D, SystemZ::R2Q, 
                                       SystemZ::R3W, SystemZ::R2Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7W, SystemZ::R7D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F12S, SystemZ::F12L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0W, SystemZ::R0D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F4S, SystemZ::F4L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R13W, SystemZ::R13D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0W, SystemZ::R0P, 
                                       SystemZ::R3W, SystemZ::R3D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1W, SystemZ::R0P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8W, SystemZ::R8D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0D, SystemZ::R0Q, 
                                       SystemZ::F13S, SystemZ::F13L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0W, SystemZ::R0Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F5S, SystemZ::F5L, 
                                       SystemZ::R1D, SystemZ::R0Q, 
                                       SystemZ::R1W, SystemZ::R0Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14W, SystemZ::R14D, 
                                       SystemZ::R8W, SystemZ::R8P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R9W, SystemZ::R8P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4W, SystemZ::R4D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8D, SystemZ::R8Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14W, SystemZ::R14P, 
                                       SystemZ::R8W, SystemZ::R8Q, 
                                       SystemZ::R15W, SystemZ::R14P, 
                                       SystemZ::R9W, SystemZ::R8Q, 
                                       SystemZ::R9D, SystemZ::R8Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F14S, SystemZ::F14L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10W, SystemZ::R10D, 
                                       SystemZ::R4W, SystemZ::R4P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R5W, SystemZ::R4P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14D, SystemZ::R14Q, 
                                       SystemZ::F6S, SystemZ::F6L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14W, SystemZ::R14Q, 
                                       SystemZ::R15D, SystemZ::R14Q, 
                                       SystemZ::R15W, SystemZ::R14Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4D, SystemZ::R4Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10W, SystemZ::R10P, 
                                       SystemZ::R4W, SystemZ::R4Q, 
                                       SystemZ::R11W, SystemZ::R10P, 
                                       SystemZ::R5W, SystemZ::R4Q, 
                                       SystemZ::R5D, SystemZ::R4Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R9W, SystemZ::R9D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10D, SystemZ::R10Q, 
                                       SystemZ::F15S, SystemZ::F15L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10W, SystemZ::R10Q, 
                                       SystemZ::R11D, SystemZ::R10Q, 
                                       SystemZ::R11W, SystemZ::R10Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
SystemZ::NoRegister, SystemZ::NoRegister };
  const unsigned SuperregHashTableSize = 512;


  // Number of hash collisions: 110
  const unsigned AliasesHashTable[] = { SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14P, SystemZ::R15D, 
                                       SystemZ::R14Q, SystemZ::R15D, 
                                       SystemZ::F7S, SystemZ::F7L, 
                                       SystemZ::R8P, SystemZ::R9W, 
                                       SystemZ::R15W, SystemZ::R15D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R9D, SystemZ::R9W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8Q, SystemZ::R9W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14P, SystemZ::R15W, 
                                       SystemZ::F0S, SystemZ::F0L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F7L, SystemZ::F7S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R15D, SystemZ::R15W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14Q, SystemZ::R15W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0P, SystemZ::R1D, 
                                       SystemZ::R0Q, SystemZ::R1D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F0L, SystemZ::F0S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F8S, SystemZ::F8L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1W, SystemZ::R1D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0P, SystemZ::R1W, 
                                       SystemZ::R0Q, SystemZ::R1W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F10S, SystemZ::F10L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F8L, SystemZ::F8S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1D, SystemZ::R1W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F10L, SystemZ::F10S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F9S, SystemZ::F9L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2P, SystemZ::R2D, 
                                       SystemZ::R2Q, SystemZ::R2D, 
                                       SystemZ::R2W, SystemZ::R2D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F11S, SystemZ::F11L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F9L, SystemZ::F9S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2D, SystemZ::R2P, 
                                       SystemZ::R2W, SystemZ::R2P, 
                                       SystemZ::R2Q, SystemZ::R2P, 
                                       SystemZ::R3W, SystemZ::R2P, 
                                       SystemZ::R3D, SystemZ::R2P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F11L, SystemZ::F11S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2D, SystemZ::R2Q, 
                                       SystemZ::R2P, SystemZ::R2Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2W, SystemZ::R2Q, 
                                       SystemZ::R3D, SystemZ::R2Q, 
                                       SystemZ::R3W, SystemZ::R2Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F12S, SystemZ::F12L, 
                                       SystemZ::R2P, SystemZ::R2W, 
                                       SystemZ::R0P, SystemZ::R0D, 
                                       SystemZ::R0Q, SystemZ::R0D, 
                                       SystemZ::R0W, SystemZ::R0D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2D, SystemZ::R2W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2Q, SystemZ::R2W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F12L, SystemZ::F12S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0D, SystemZ::R0P, 
                                       SystemZ::R2Q, SystemZ::R3D, 
                                       SystemZ::R0Q, SystemZ::R0P, 
                                       SystemZ::R0W, SystemZ::R0P, 
                                       SystemZ::R3W, SystemZ::R3D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2P, SystemZ::R3D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1D, SystemZ::R0P, 
                                       SystemZ::R1W, SystemZ::R0P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0D, SystemZ::R0Q, 
                                       SystemZ::F13S, SystemZ::F13L, 
                                       SystemZ::R2P, SystemZ::R3W, 
                                       SystemZ::R0P, SystemZ::R0Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0W, SystemZ::R0Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2Q, SystemZ::R3W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R3D, SystemZ::R3W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1D, SystemZ::R0Q, 
                                       SystemZ::R1W, SystemZ::R0Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F13L, SystemZ::F13S, 
                                       SystemZ::R0P, SystemZ::R0W, 
                                       SystemZ::R0D, SystemZ::R0W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0Q, SystemZ::R0W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4P, SystemZ::R4D, 
                                       SystemZ::R4Q, SystemZ::R4D, 
                                       SystemZ::R4W, SystemZ::R4D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F14S, SystemZ::F14L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10P, SystemZ::R10D, 
                                       SystemZ::R10Q, SystemZ::R10D, 
                                       SystemZ::R10W, SystemZ::R10D, 
                                       SystemZ::R4W, SystemZ::R4P, 
                                       SystemZ::R4Q, SystemZ::R4P, 
                                       SystemZ::R5W, SystemZ::R4P, 
                                       SystemZ::R4D, SystemZ::R4P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R5D, SystemZ::R4P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F14L, SystemZ::F14S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10D, SystemZ::R10P, 
                                       SystemZ::R4D, SystemZ::R4Q, 
                                       SystemZ::R10Q, SystemZ::R10P, 
                                       SystemZ::R10W, SystemZ::R10P, 
                                       SystemZ::R11D, SystemZ::R10P, 
                                       SystemZ::R11W, SystemZ::R10P, 
                                       SystemZ::R4W, SystemZ::R4Q, 
                                       SystemZ::R5D, SystemZ::R4Q, 
                                       SystemZ::R4P, SystemZ::R4Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R5W, SystemZ::R4Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10D, SystemZ::R10Q, 
                                       SystemZ::F15S, SystemZ::F15L, 
                                       SystemZ::R4P, SystemZ::R4W, 
                                       SystemZ::R10P, SystemZ::R10Q, 
                                       SystemZ::R11D, SystemZ::R10Q, 
                                       SystemZ::R10W, SystemZ::R10Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R11W, SystemZ::R10Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4Q, SystemZ::R4W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4D, SystemZ::R4W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F15L, SystemZ::F15S, 
                                       SystemZ::R10P, SystemZ::R10W, 
                                       SystemZ::R10D, SystemZ::R10W, 
                                       SystemZ::R4Q, SystemZ::R5D, 
                                       SystemZ::R10Q, SystemZ::R10W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R5W, SystemZ::R5D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4P, SystemZ::R5D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10P, SystemZ::R11D, 
                                       SystemZ::R10Q, SystemZ::R11D, 
                                       SystemZ::F1S, SystemZ::F1L, 
                                       SystemZ::R4P, SystemZ::R5W, 
                                       SystemZ::R11W, SystemZ::R11D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R5D, SystemZ::R5W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4Q, SystemZ::R5W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10P, SystemZ::R11W, 
                                       SystemZ::F1L, SystemZ::F1S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10Q, SystemZ::R11W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R11D, SystemZ::R11W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6P, SystemZ::R6D, 
                                       SystemZ::R6Q, SystemZ::R6D, 
                                       SystemZ::R6W, SystemZ::R6D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F2S, SystemZ::F2L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12P, SystemZ::R12D, 
                                       SystemZ::R12Q, SystemZ::R12D, 
                                       SystemZ::R12W, SystemZ::R12D, 
                                       SystemZ::R6W, SystemZ::R6P, 
                                       SystemZ::R6Q, SystemZ::R6P, 
                                       SystemZ::R7W, SystemZ::R6P, 
                                       SystemZ::R6D, SystemZ::R6P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7D, SystemZ::R6P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F2L, SystemZ::F2S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12D, SystemZ::R12P, 
                                       SystemZ::R6D, SystemZ::R6Q, 
                                       SystemZ::R12Q, SystemZ::R12P, 
                                       SystemZ::R12W, SystemZ::R12P, 
                                       SystemZ::R13D, SystemZ::R12P, 
                                       SystemZ::R13W, SystemZ::R12P, 
                                       SystemZ::R6W, SystemZ::R6Q, 
                                       SystemZ::R7D, SystemZ::R6Q, 
                                       SystemZ::R6P, SystemZ::R6Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7W, SystemZ::R6Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12D, SystemZ::R12Q, 
                                       SystemZ::F3S, SystemZ::F3L, 
                                       SystemZ::R6P, SystemZ::R6W, 
                                       SystemZ::R12P, SystemZ::R12Q, 
                                       SystemZ::R13D, SystemZ::R12Q, 
                                       SystemZ::R12W, SystemZ::R12Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R13W, SystemZ::R12Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6Q, SystemZ::R6W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6D, SystemZ::R6W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F3L, SystemZ::F3S, 
                                       SystemZ::R12P, SystemZ::R12W, 
                                       SystemZ::R12D, SystemZ::R12W, 
                                       SystemZ::R6Q, SystemZ::R7D, 
                                       SystemZ::R12Q, SystemZ::R12W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7W, SystemZ::R7D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6P, SystemZ::R7D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12P, SystemZ::R13D, 
                                       SystemZ::R12Q, SystemZ::R13D, 
                                       SystemZ::F4S, SystemZ::F4L, 
                                       SystemZ::R6P, SystemZ::R7W, 
                                       SystemZ::R13W, SystemZ::R13D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7D, SystemZ::R7W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6Q, SystemZ::R7W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12P, SystemZ::R13W, 
                                       SystemZ::F4L, SystemZ::F4S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12Q, SystemZ::R13W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R13D, SystemZ::R13W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8P, SystemZ::R8D, 
                                       SystemZ::R8Q, SystemZ::R8D, 
                                       SystemZ::R8W, SystemZ::R8D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F5S, SystemZ::F5L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14P, SystemZ::R14D, 
                                       SystemZ::R14Q, SystemZ::R14D, 
                                       SystemZ::R14W, SystemZ::R14D, 
                                       SystemZ::R8W, SystemZ::R8P, 
                                       SystemZ::R8Q, SystemZ::R8P, 
                                       SystemZ::R9W, SystemZ::R8P, 
                                       SystemZ::R8D, SystemZ::R8P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R9D, SystemZ::R8P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F5L, SystemZ::F5S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14D, SystemZ::R14P, 
                                       SystemZ::R8D, SystemZ::R8Q, 
                                       SystemZ::R14Q, SystemZ::R14P, 
                                       SystemZ::R14W, SystemZ::R14P, 
                                       SystemZ::R15D, SystemZ::R14P, 
                                       SystemZ::R15W, SystemZ::R14P, 
                                       SystemZ::R8W, SystemZ::R8Q, 
                                       SystemZ::R9D, SystemZ::R8Q, 
                                       SystemZ::R8P, SystemZ::R8Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R9W, SystemZ::R8Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14D, SystemZ::R14Q, 
                                       SystemZ::F6S, SystemZ::F6L, 
                                       SystemZ::R8P, SystemZ::R8W, 
                                       SystemZ::R14P, SystemZ::R14Q, 
                                       SystemZ::R15D, SystemZ::R14Q, 
                                       SystemZ::R14W, SystemZ::R14Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R15W, SystemZ::R14Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8Q, SystemZ::R8W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8D, SystemZ::R8W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F6L, SystemZ::F6S, 
                                       SystemZ::R14P, SystemZ::R14W, 
                                       SystemZ::R14D, SystemZ::R14W, 
                                       SystemZ::R8Q, SystemZ::R9D, 
                                       SystemZ::R14Q, SystemZ::R14W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R9W, SystemZ::R9D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8P, SystemZ::R9D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
SystemZ::NoRegister, SystemZ::NoRegister };
  const unsigned AliasesHashTableSize = 1024;


  // Register Alias Sets...
  const unsigned Empty_AliasSet[] = { 0 };
  const unsigned F0L_AliasSet[] = { SystemZ::F0S, 0 };
  const unsigned F0S_AliasSet[] = { SystemZ::F0L, 0 };
  const unsigned F10L_AliasSet[] = { SystemZ::F10S, 0 };
  const unsigned F10S_AliasSet[] = { SystemZ::F10L, 0 };
  const unsigned F11L_AliasSet[] = { SystemZ::F11S, 0 };
  const unsigned F11S_AliasSet[] = { SystemZ::F11L, 0 };
  const unsigned F12L_AliasSet[] = { SystemZ::F12S, 0 };
  const unsigned F12S_AliasSet[] = { SystemZ::F12L, 0 };
  const unsigned F13L_AliasSet[] = { SystemZ::F13S, 0 };
  const unsigned F13S_AliasSet[] = { SystemZ::F13L, 0 };
  const unsigned F14L_AliasSet[] = { SystemZ::F14S, 0 };
  const unsigned F14S_AliasSet[] = { SystemZ::F14L, 0 };
  const unsigned F15L_AliasSet[] = { SystemZ::F15S, 0 };
  const unsigned F15S_AliasSet[] = { SystemZ::F15L, 0 };
  const unsigned F1L_AliasSet[] = { SystemZ::F1S, 0 };
  const unsigned F1S_AliasSet[] = { SystemZ::F1L, 0 };
  const unsigned F2L_AliasSet[] = { SystemZ::F2S, 0 };
  const unsigned F2S_AliasSet[] = { SystemZ::F2L, 0 };
  const unsigned F3L_AliasSet[] = { SystemZ::F3S, 0 };
  const unsigned F3S_AliasSet[] = { SystemZ::F3L, 0 };
  const unsigned F4L_AliasSet[] = { SystemZ::F4S, 0 };
  const unsigned F4S_AliasSet[] = { SystemZ::F4L, 0 };
  const unsigned F5L_AliasSet[] = { SystemZ::F5S, 0 };
  const unsigned F5S_AliasSet[] = { SystemZ::F5L, 0 };
  const unsigned F6L_AliasSet[] = { SystemZ::F6S, 0 };
  const unsigned F6S_AliasSet[] = { SystemZ::F6L, 0 };
  const unsigned F7L_AliasSet[] = { SystemZ::F7S, 0 };
  const unsigned F7S_AliasSet[] = { SystemZ::F7L, 0 };
  const unsigned F8L_AliasSet[] = { SystemZ::F8S, 0 };
  const unsigned F8S_AliasSet[] = { SystemZ::F8L, 0 };
  const unsigned F9L_AliasSet[] = { SystemZ::F9S, 0 };
  const unsigned F9S_AliasSet[] = { SystemZ::F9L, 0 };
  const unsigned PSW_AliasSet[] = { 0 };
  const unsigned R0D_AliasSet[] = { SystemZ::R0W, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R0P_AliasSet[] = { SystemZ::R0W, SystemZ::R1W, SystemZ::R0D, SystemZ::R1D, SystemZ::R0Q, 0 };
  const unsigned R0Q_AliasSet[] = { SystemZ::R0W, SystemZ::R1W, SystemZ::R0D, SystemZ::R1D, SystemZ::R0P, 0 };
  const unsigned R0W_AliasSet[] = { SystemZ::R0D, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R10D_AliasSet[] = { SystemZ::R10W, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R10P_AliasSet[] = { SystemZ::R10W, SystemZ::R11W, SystemZ::R10D, SystemZ::R11D, SystemZ::R10Q, 0 };
  const unsigned R10Q_AliasSet[] = { SystemZ::R10W, SystemZ::R11W, SystemZ::R10D, SystemZ::R11D, SystemZ::R10P, 0 };
  const unsigned R10W_AliasSet[] = { SystemZ::R10D, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R11D_AliasSet[] = { SystemZ::R11W, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R11W_AliasSet[] = { SystemZ::R11D, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R12D_AliasSet[] = { SystemZ::R12W, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R12P_AliasSet[] = { SystemZ::R12W, SystemZ::R13W, SystemZ::R12D, SystemZ::R13D, SystemZ::R12Q, 0 };
  const unsigned R12Q_AliasSet[] = { SystemZ::R12W, SystemZ::R13W, SystemZ::R12D, SystemZ::R13D, SystemZ::R12P, 0 };
  const unsigned R12W_AliasSet[] = { SystemZ::R12D, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R13D_AliasSet[] = { SystemZ::R13W, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R13W_AliasSet[] = { SystemZ::R13D, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R14D_AliasSet[] = { SystemZ::R14W, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R14P_AliasSet[] = { SystemZ::R14W, SystemZ::R15W, SystemZ::R14D, SystemZ::R15D, SystemZ::R14Q, 0 };
  const unsigned R14Q_AliasSet[] = { SystemZ::R14W, SystemZ::R15W, SystemZ::R14D, SystemZ::R15D, SystemZ::R14P, 0 };
  const unsigned R14W_AliasSet[] = { SystemZ::R14D, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R15D_AliasSet[] = { SystemZ::R15W, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R15W_AliasSet[] = { SystemZ::R15D, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R1D_AliasSet[] = { SystemZ::R1W, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R1W_AliasSet[] = { SystemZ::R1D, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R2D_AliasSet[] = { SystemZ::R2W, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R2P_AliasSet[] = { SystemZ::R2W, SystemZ::R3W, SystemZ::R2D, SystemZ::R3D, SystemZ::R2Q, 0 };
  const unsigned R2Q_AliasSet[] = { SystemZ::R2W, SystemZ::R3W, SystemZ::R2D, SystemZ::R3D, SystemZ::R2P, 0 };
  const unsigned R2W_AliasSet[] = { SystemZ::R2D, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R3D_AliasSet[] = { SystemZ::R3W, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R3W_AliasSet[] = { SystemZ::R3D, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R4D_AliasSet[] = { SystemZ::R4W, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R4P_AliasSet[] = { SystemZ::R4W, SystemZ::R5W, SystemZ::R4D, SystemZ::R5D, SystemZ::R4Q, 0 };
  const unsigned R4Q_AliasSet[] = { SystemZ::R4W, SystemZ::R5W, SystemZ::R4D, SystemZ::R5D, SystemZ::R4P, 0 };
  const unsigned R4W_AliasSet[] = { SystemZ::R4D, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R5D_AliasSet[] = { SystemZ::R5W, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R5W_AliasSet[] = { SystemZ::R5D, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R6D_AliasSet[] = { SystemZ::R6W, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R6P_AliasSet[] = { SystemZ::R6W, SystemZ::R7W, SystemZ::R6D, SystemZ::R7D, SystemZ::R6Q, 0 };
  const unsigned R6Q_AliasSet[] = { SystemZ::R6W, SystemZ::R7W, SystemZ::R6D, SystemZ::R7D, SystemZ::R6P, 0 };
  const unsigned R6W_AliasSet[] = { SystemZ::R6D, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R7D_AliasSet[] = { SystemZ::R7W, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R7W_AliasSet[] = { SystemZ::R7D, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R8D_AliasSet[] = { SystemZ::R8W, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R8P_AliasSet[] = { SystemZ::R8W, SystemZ::R9W, SystemZ::R8D, SystemZ::R9D, SystemZ::R8Q, 0 };
  const unsigned R8Q_AliasSet[] = { SystemZ::R8W, SystemZ::R9W, SystemZ::R8D, SystemZ::R9D, SystemZ::R8P, 0 };
  const unsigned R8W_AliasSet[] = { SystemZ::R8D, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R9D_AliasSet[] = { SystemZ::R9W, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R9W_AliasSet[] = { SystemZ::R9D, SystemZ::R8P, SystemZ::R8Q, 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned F0L_SubRegsSet[] = { SystemZ::F0S, 0 };
  const unsigned F0S_SubRegsSet[] = { 0 };
  const unsigned F10L_SubRegsSet[] = { SystemZ::F10S, 0 };
  const unsigned F10S_SubRegsSet[] = { 0 };
  const unsigned F11L_SubRegsSet[] = { SystemZ::F11S, 0 };
  const unsigned F11S_SubRegsSet[] = { 0 };
  const unsigned F12L_SubRegsSet[] = { SystemZ::F12S, 0 };
  const unsigned F12S_SubRegsSet[] = { 0 };
  const unsigned F13L_SubRegsSet[] = { SystemZ::F13S, 0 };
  const unsigned F13S_SubRegsSet[] = { 0 };
  const unsigned F14L_SubRegsSet[] = { SystemZ::F14S, 0 };
  const unsigned F14S_SubRegsSet[] = { 0 };
  const unsigned F15L_SubRegsSet[] = { SystemZ::F15S, 0 };
  const unsigned F15S_SubRegsSet[] = { 0 };
  const unsigned F1L_SubRegsSet[] = { SystemZ::F1S, 0 };
  const unsigned F1S_SubRegsSet[] = { 0 };
  const unsigned F2L_SubRegsSet[] = { SystemZ::F2S, 0 };
  const unsigned F2S_SubRegsSet[] = { 0 };
  const unsigned F3L_SubRegsSet[] = { SystemZ::F3S, 0 };
  const unsigned F3S_SubRegsSet[] = { 0 };
  const unsigned F4L_SubRegsSet[] = { SystemZ::F4S, 0 };
  const unsigned F4S_SubRegsSet[] = { 0 };
  const unsigned F5L_SubRegsSet[] = { SystemZ::F5S, 0 };
  const unsigned F5S_SubRegsSet[] = { 0 };
  const unsigned F6L_SubRegsSet[] = { SystemZ::F6S, 0 };
  const unsigned F6S_SubRegsSet[] = { 0 };
  const unsigned F7L_SubRegsSet[] = { SystemZ::F7S, 0 };
  const unsigned F7S_SubRegsSet[] = { 0 };
  const unsigned F8L_SubRegsSet[] = { SystemZ::F8S, 0 };
  const unsigned F8S_SubRegsSet[] = { 0 };
  const unsigned F9L_SubRegsSet[] = { SystemZ::F9S, 0 };
  const unsigned F9S_SubRegsSet[] = { 0 };
  const unsigned PSW_SubRegsSet[] = { 0 };
  const unsigned R0D_SubRegsSet[] = { SystemZ::R0W, 0 };
  const unsigned R0P_SubRegsSet[] = { SystemZ::R0W, SystemZ::R1W, 0 };
  const unsigned R0Q_SubRegsSet[] = { SystemZ::R0D, SystemZ::R0W, SystemZ::R1D, SystemZ::R1W, 0 };
  const unsigned R0W_SubRegsSet[] = { 0 };
  const unsigned R10D_SubRegsSet[] = { SystemZ::R10W, 0 };
  const unsigned R10P_SubRegsSet[] = { SystemZ::R10W, SystemZ::R11W, 0 };
  const unsigned R10Q_SubRegsSet[] = { SystemZ::R10D, SystemZ::R10W, SystemZ::R11D, SystemZ::R11W, 0 };
  const unsigned R10W_SubRegsSet[] = { 0 };
  const unsigned R11D_SubRegsSet[] = { SystemZ::R11W, 0 };
  const unsigned R11W_SubRegsSet[] = { 0 };
  const unsigned R12D_SubRegsSet[] = { SystemZ::R12W, 0 };
  const unsigned R12P_SubRegsSet[] = { SystemZ::R12W, SystemZ::R13W, 0 };
  const unsigned R12Q_SubRegsSet[] = { SystemZ::R12D, SystemZ::R12W, SystemZ::R13D, SystemZ::R13W, 0 };
  const unsigned R12W_SubRegsSet[] = { 0 };
  const unsigned R13D_SubRegsSet[] = { SystemZ::R13W, 0 };
  const unsigned R13W_SubRegsSet[] = { 0 };
  const unsigned R14D_SubRegsSet[] = { SystemZ::R14W, 0 };
  const unsigned R14P_SubRegsSet[] = { SystemZ::R14W, SystemZ::R15W, 0 };
  const unsigned R14Q_SubRegsSet[] = { SystemZ::R14D, SystemZ::R14W, SystemZ::R15D, SystemZ::R15W, 0 };
  const unsigned R14W_SubRegsSet[] = { 0 };
  const unsigned R15D_SubRegsSet[] = { SystemZ::R15W, 0 };
  const unsigned R15W_SubRegsSet[] = { 0 };
  const unsigned R1D_SubRegsSet[] = { SystemZ::R1W, 0 };
  const unsigned R1W_SubRegsSet[] = { 0 };
  const unsigned R2D_SubRegsSet[] = { SystemZ::R2W, 0 };
  const unsigned R2P_SubRegsSet[] = { SystemZ::R2W, SystemZ::R3W, 0 };
  const unsigned R2Q_SubRegsSet[] = { SystemZ::R2D, SystemZ::R2W, SystemZ::R3D, SystemZ::R3W, 0 };
  const unsigned R2W_SubRegsSet[] = { 0 };
  const unsigned R3D_SubRegsSet[] = { SystemZ::R3W, 0 };
  const unsigned R3W_SubRegsSet[] = { 0 };
  const unsigned R4D_SubRegsSet[] = { SystemZ::R4W, 0 };
  const unsigned R4P_SubRegsSet[] = { SystemZ::R4W, SystemZ::R5W, 0 };
  const unsigned R4Q_SubRegsSet[] = { SystemZ::R4D, SystemZ::R4W, SystemZ::R5D, SystemZ::R5W, 0 };
  const unsigned R4W_SubRegsSet[] = { 0 };
  const unsigned R5D_SubRegsSet[] = { SystemZ::R5W, 0 };
  const unsigned R5W_SubRegsSet[] = { 0 };
  const unsigned R6D_SubRegsSet[] = { SystemZ::R6W, 0 };
  const unsigned R6P_SubRegsSet[] = { SystemZ::R6W, SystemZ::R7W, 0 };
  const unsigned R6Q_SubRegsSet[] = { SystemZ::R6D, SystemZ::R6W, SystemZ::R7D, SystemZ::R7W, 0 };
  const unsigned R6W_SubRegsSet[] = { 0 };
  const unsigned R7D_SubRegsSet[] = { SystemZ::R7W, 0 };
  const unsigned R7W_SubRegsSet[] = { 0 };
  const unsigned R8D_SubRegsSet[] = { SystemZ::R8W, 0 };
  const unsigned R8P_SubRegsSet[] = { SystemZ::R8W, SystemZ::R9W, 0 };
  const unsigned R8Q_SubRegsSet[] = { SystemZ::R8D, SystemZ::R8W, SystemZ::R9D, SystemZ::R9W, 0 };
  const unsigned R8W_SubRegsSet[] = { 0 };
  const unsigned R9D_SubRegsSet[] = { SystemZ::R9W, 0 };
  const unsigned R9W_SubRegsSet[] = { 0 };


  // Register Super-registers Sets...
  const unsigned Empty_SuperRegsSet[] = { 0 };
  const unsigned F0L_SuperRegsSet[] = { 0 };
  const unsigned F0S_SuperRegsSet[] = { SystemZ::F0L, 0 };
  const unsigned F10L_SuperRegsSet[] = { 0 };
  const unsigned F10S_SuperRegsSet[] = { SystemZ::F10L, 0 };
  const unsigned F11L_SuperRegsSet[] = { 0 };
  const unsigned F11S_SuperRegsSet[] = { SystemZ::F11L, 0 };
  const unsigned F12L_SuperRegsSet[] = { 0 };
  const unsigned F12S_SuperRegsSet[] = { SystemZ::F12L, 0 };
  const unsigned F13L_SuperRegsSet[] = { 0 };
  const unsigned F13S_SuperRegsSet[] = { SystemZ::F13L, 0 };
  const unsigned F14L_SuperRegsSet[] = { 0 };
  const unsigned F14S_SuperRegsSet[] = { SystemZ::F14L, 0 };
  const unsigned F15L_SuperRegsSet[] = { 0 };
  const unsigned F15S_SuperRegsSet[] = { SystemZ::F15L, 0 };
  const unsigned F1L_SuperRegsSet[] = { 0 };
  const unsigned F1S_SuperRegsSet[] = { SystemZ::F1L, 0 };
  const unsigned F2L_SuperRegsSet[] = { 0 };
  const unsigned F2S_SuperRegsSet[] = { SystemZ::F2L, 0 };
  const unsigned F3L_SuperRegsSet[] = { 0 };
  const unsigned F3S_SuperRegsSet[] = { SystemZ::F3L, 0 };
  const unsigned F4L_SuperRegsSet[] = { 0 };
  const unsigned F4S_SuperRegsSet[] = { SystemZ::F4L, 0 };
  const unsigned F5L_SuperRegsSet[] = { 0 };
  const unsigned F5S_SuperRegsSet[] = { SystemZ::F5L, 0 };
  const unsigned F6L_SuperRegsSet[] = { 0 };
  const unsigned F6S_SuperRegsSet[] = { SystemZ::F6L, 0 };
  const unsigned F7L_SuperRegsSet[] = { 0 };
  const unsigned F7S_SuperRegsSet[] = { SystemZ::F7L, 0 };
  const unsigned F8L_SuperRegsSet[] = { 0 };
  const unsigned F8S_SuperRegsSet[] = { SystemZ::F8L, 0 };
  const unsigned F9L_SuperRegsSet[] = { 0 };
  const unsigned F9S_SuperRegsSet[] = { SystemZ::F9L, 0 };
  const unsigned PSW_SuperRegsSet[] = { 0 };
  const unsigned R0D_SuperRegsSet[] = { SystemZ::R0Q, 0 };
  const unsigned R0P_SuperRegsSet[] = { 0 };
  const unsigned R0Q_SuperRegsSet[] = { 0 };
  const unsigned R0W_SuperRegsSet[] = { SystemZ::R0D, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R10D_SuperRegsSet[] = { SystemZ::R10Q, 0 };
  const unsigned R10P_SuperRegsSet[] = { 0 };
  const unsigned R10Q_SuperRegsSet[] = { 0 };
  const unsigned R10W_SuperRegsSet[] = { SystemZ::R10D, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R11D_SuperRegsSet[] = { SystemZ::R10Q, 0 };
  const unsigned R11W_SuperRegsSet[] = { SystemZ::R11D, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R12D_SuperRegsSet[] = { SystemZ::R12Q, 0 };
  const unsigned R12P_SuperRegsSet[] = { 0 };
  const unsigned R12Q_SuperRegsSet[] = { 0 };
  const unsigned R12W_SuperRegsSet[] = { SystemZ::R12D, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R13D_SuperRegsSet[] = { SystemZ::R12Q, 0 };
  const unsigned R13W_SuperRegsSet[] = { SystemZ::R13D, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R14D_SuperRegsSet[] = { SystemZ::R14Q, 0 };
  const unsigned R14P_SuperRegsSet[] = { 0 };
  const unsigned R14Q_SuperRegsSet[] = { 0 };
  const unsigned R14W_SuperRegsSet[] = { SystemZ::R14D, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R15D_SuperRegsSet[] = { SystemZ::R14Q, 0 };
  const unsigned R15W_SuperRegsSet[] = { SystemZ::R15D, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R1D_SuperRegsSet[] = { SystemZ::R0Q, 0 };
  const unsigned R1W_SuperRegsSet[] = { SystemZ::R1D, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R2D_SuperRegsSet[] = { SystemZ::R2Q, 0 };
  const unsigned R2P_SuperRegsSet[] = { 0 };
  const unsigned R2Q_SuperRegsSet[] = { 0 };
  const unsigned R2W_SuperRegsSet[] = { SystemZ::R2D, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R3D_SuperRegsSet[] = { SystemZ::R2Q, 0 };
  const unsigned R3W_SuperRegsSet[] = { SystemZ::R3D, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R4D_SuperRegsSet[] = { SystemZ::R4Q, 0 };
  const unsigned R4P_SuperRegsSet[] = { 0 };
  const unsigned R4Q_SuperRegsSet[] = { 0 };
  const unsigned R4W_SuperRegsSet[] = { SystemZ::R4D, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R5D_SuperRegsSet[] = { SystemZ::R4Q, 0 };
  const unsigned R5W_SuperRegsSet[] = { SystemZ::R5D, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R6D_SuperRegsSet[] = { SystemZ::R6Q, 0 };
  const unsigned R6P_SuperRegsSet[] = { 0 };
  const unsigned R6Q_SuperRegsSet[] = { 0 };
  const unsigned R6W_SuperRegsSet[] = { SystemZ::R6D, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R7D_SuperRegsSet[] = { SystemZ::R6Q, 0 };
  const unsigned R7W_SuperRegsSet[] = { SystemZ::R7D, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R8D_SuperRegsSet[] = { SystemZ::R8Q, 0 };
  const unsigned R8P_SuperRegsSet[] = { 0 };
  const unsigned R8Q_SuperRegsSet[] = { 0 };
  const unsigned R8W_SuperRegsSet[] = { SystemZ::R8D, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R9D_SuperRegsSet[] = { SystemZ::R8Q, 0 };
  const unsigned R9W_SuperRegsSet[] = { SystemZ::R9D, SystemZ::R8P, SystemZ::R8Q, 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "f0",	"F0L",	F0L_AliasSet,	F0L_SubRegsSet,	F0L_SuperRegsSet },
    { "f0",	"F0S",	F0S_AliasSet,	F0S_SubRegsSet,	F0S_SuperRegsSet },
    { "f10",	"F10L",	F10L_AliasSet,	F10L_SubRegsSet,	F10L_SuperRegsSet },
    { "f10",	"F10S",	F10S_AliasSet,	F10S_SubRegsSet,	F10S_SuperRegsSet },
    { "f11",	"F11L",	F11L_AliasSet,	F11L_SubRegsSet,	F11L_SuperRegsSet },
    { "f11",	"F11S",	F11S_AliasSet,	F11S_SubRegsSet,	F11S_SuperRegsSet },
    { "f12",	"F12L",	F12L_AliasSet,	F12L_SubRegsSet,	F12L_SuperRegsSet },
    { "f12",	"F12S",	F12S_AliasSet,	F12S_SubRegsSet,	F12S_SuperRegsSet },
    { "f13",	"F13L",	F13L_AliasSet,	F13L_SubRegsSet,	F13L_SuperRegsSet },
    { "f13",	"F13S",	F13S_AliasSet,	F13S_SubRegsSet,	F13S_SuperRegsSet },
    { "f14",	"F14L",	F14L_AliasSet,	F14L_SubRegsSet,	F14L_SuperRegsSet },
    { "f14",	"F14S",	F14S_AliasSet,	F14S_SubRegsSet,	F14S_SuperRegsSet },
    { "f15",	"F15L",	F15L_AliasSet,	F15L_SubRegsSet,	F15L_SuperRegsSet },
    { "f15",	"F15S",	F15S_AliasSet,	F15S_SubRegsSet,	F15S_SuperRegsSet },
    { "f1",	"F1L",	F1L_AliasSet,	F1L_SubRegsSet,	F1L_SuperRegsSet },
    { "f1",	"F1S",	F1S_AliasSet,	F1S_SubRegsSet,	F1S_SuperRegsSet },
    { "f2",	"F2L",	F2L_AliasSet,	F2L_SubRegsSet,	F2L_SuperRegsSet },
    { "f2",	"F2S",	F2S_AliasSet,	F2S_SubRegsSet,	F2S_SuperRegsSet },
    { "f3",	"F3L",	F3L_AliasSet,	F3L_SubRegsSet,	F3L_SuperRegsSet },
    { "f3",	"F3S",	F3S_AliasSet,	F3S_SubRegsSet,	F3S_SuperRegsSet },
    { "f4",	"F4L",	F4L_AliasSet,	F4L_SubRegsSet,	F4L_SuperRegsSet },
    { "f4",	"F4S",	F4S_AliasSet,	F4S_SubRegsSet,	F4S_SuperRegsSet },
    { "f5",	"F5L",	F5L_AliasSet,	F5L_SubRegsSet,	F5L_SuperRegsSet },
    { "f5",	"F5S",	F5S_AliasSet,	F5S_SubRegsSet,	F5S_SuperRegsSet },
    { "f6",	"F6L",	F6L_AliasSet,	F6L_SubRegsSet,	F6L_SuperRegsSet },
    { "f6",	"F6S",	F6S_AliasSet,	F6S_SubRegsSet,	F6S_SuperRegsSet },
    { "f7",	"F7L",	F7L_AliasSet,	F7L_SubRegsSet,	F7L_SuperRegsSet },
    { "f7",	"F7S",	F7S_AliasSet,	F7S_SubRegsSet,	F7S_SuperRegsSet },
    { "f8",	"F8L",	F8L_AliasSet,	F8L_SubRegsSet,	F8L_SuperRegsSet },
    { "f8",	"F8S",	F8S_AliasSet,	F8S_SubRegsSet,	F8S_SuperRegsSet },
    { "f9",	"F9L",	F9L_AliasSet,	F9L_SubRegsSet,	F9L_SuperRegsSet },
    { "f9",	"F9S",	F9S_AliasSet,	F9S_SubRegsSet,	F9S_SuperRegsSet },
    { "psw",	"PSW",	PSW_AliasSet,	PSW_SubRegsSet,	PSW_SuperRegsSet },
    { "r0",	"R0D",	R0D_AliasSet,	R0D_SubRegsSet,	R0D_SuperRegsSet },
    { "r0",	"R0P",	R0P_AliasSet,	R0P_SubRegsSet,	R0P_SuperRegsSet },
    { "r0",	"R0Q",	R0Q_AliasSet,	R0Q_SubRegsSet,	R0Q_SuperRegsSet },
    { "r0",	"R0W",	R0W_AliasSet,	R0W_SubRegsSet,	R0W_SuperRegsSet },
    { "r10",	"R10D",	R10D_AliasSet,	R10D_SubRegsSet,	R10D_SuperRegsSet },
    { "r10",	"R10P",	R10P_AliasSet,	R10P_SubRegsSet,	R10P_SuperRegsSet },
    { "r10",	"R10Q",	R10Q_AliasSet,	R10Q_SubRegsSet,	R10Q_SuperRegsSet },
    { "r10",	"R10W",	R10W_AliasSet,	R10W_SubRegsSet,	R10W_SuperRegsSet },
    { "r11",	"R11D",	R11D_AliasSet,	R11D_SubRegsSet,	R11D_SuperRegsSet },
    { "r11",	"R11W",	R11W_AliasSet,	R11W_SubRegsSet,	R11W_SuperRegsSet },
    { "r12",	"R12D",	R12D_AliasSet,	R12D_SubRegsSet,	R12D_SuperRegsSet },
    { "r12",	"R12P",	R12P_AliasSet,	R12P_SubRegsSet,	R12P_SuperRegsSet },
    { "r12",	"R12Q",	R12Q_AliasSet,	R12Q_SubRegsSet,	R12Q_SuperRegsSet },
    { "r12",	"R12W",	R12W_AliasSet,	R12W_SubRegsSet,	R12W_SuperRegsSet },
    { "r13",	"R13D",	R13D_AliasSet,	R13D_SubRegsSet,	R13D_SuperRegsSet },
    { "r13",	"R13W",	R13W_AliasSet,	R13W_SubRegsSet,	R13W_SuperRegsSet },
    { "r14",	"R14D",	R14D_AliasSet,	R14D_SubRegsSet,	R14D_SuperRegsSet },
    { "r14",	"R14P",	R14P_AliasSet,	R14P_SubRegsSet,	R14P_SuperRegsSet },
    { "r14",	"R14Q",	R14Q_AliasSet,	R14Q_SubRegsSet,	R14Q_SuperRegsSet },
    { "r14",	"R14W",	R14W_AliasSet,	R14W_SubRegsSet,	R14W_SuperRegsSet },
    { "r15",	"R15D",	R15D_AliasSet,	R15D_SubRegsSet,	R15D_SuperRegsSet },
    { "r15",	"R15W",	R15W_AliasSet,	R15W_SubRegsSet,	R15W_SuperRegsSet },
    { "r1",	"R1D",	R1D_AliasSet,	R1D_SubRegsSet,	R1D_SuperRegsSet },
    { "r1",	"R1W",	R1W_AliasSet,	R1W_SubRegsSet,	R1W_SuperRegsSet },
    { "r2",	"R2D",	R2D_AliasSet,	R2D_SubRegsSet,	R2D_SuperRegsSet },
    { "r2",	"R2P",	R2P_AliasSet,	R2P_SubRegsSet,	R2P_SuperRegsSet },
    { "r2",	"R2Q",	R2Q_AliasSet,	R2Q_SubRegsSet,	R2Q_SuperRegsSet },
    { "r2",	"R2W",	R2W_AliasSet,	R2W_SubRegsSet,	R2W_SuperRegsSet },
    { "r3",	"R3D",	R3D_AliasSet,	R3D_SubRegsSet,	R3D_SuperRegsSet },
    { "r3",	"R3W",	R3W_AliasSet,	R3W_SubRegsSet,	R3W_SuperRegsSet },
    { "r4",	"R4D",	R4D_AliasSet,	R4D_SubRegsSet,	R4D_SuperRegsSet },
    { "r4",	"R4P",	R4P_AliasSet,	R4P_SubRegsSet,	R4P_SuperRegsSet },
    { "r4",	"R4Q",	R4Q_AliasSet,	R4Q_SubRegsSet,	R4Q_SuperRegsSet },
    { "r4",	"R4W",	R4W_AliasSet,	R4W_SubRegsSet,	R4W_SuperRegsSet },
    { "r5",	"R5D",	R5D_AliasSet,	R5D_SubRegsSet,	R5D_SuperRegsSet },
    { "r5",	"R5W",	R5W_AliasSet,	R5W_SubRegsSet,	R5W_SuperRegsSet },
    { "r6",	"R6D",	R6D_AliasSet,	R6D_SubRegsSet,	R6D_SuperRegsSet },
    { "r6",	"R6P",	R6P_AliasSet,	R6P_SubRegsSet,	R6P_SuperRegsSet },
    { "r6",	"R6Q",	R6Q_AliasSet,	R6Q_SubRegsSet,	R6Q_SuperRegsSet },
    { "r6",	"R6W",	R6W_AliasSet,	R6W_SubRegsSet,	R6W_SuperRegsSet },
    { "r7",	"R7D",	R7D_AliasSet,	R7D_SubRegsSet,	R7D_SuperRegsSet },
    { "r7",	"R7W",	R7W_AliasSet,	R7W_SubRegsSet,	R7W_SuperRegsSet },
    { "r8",	"R8D",	R8D_AliasSet,	R8D_SubRegsSet,	R8D_SuperRegsSet },
    { "r8",	"R8P",	R8P_AliasSet,	R8P_SubRegsSet,	R8P_SuperRegsSet },
    { "r8",	"R8Q",	R8Q_AliasSet,	R8Q_SubRegsSet,	R8Q_SuperRegsSet },
    { "r8",	"R8W",	R8W_AliasSet,	R8W_SubRegsSet,	R8W_SuperRegsSet },
    { "r9",	"R9D",	R9D_AliasSet,	R9D_SubRegsSet,	R9D_SuperRegsSet },
    { "r9",	"R9W",	R9W_AliasSet,	R9W_SubRegsSet,	R9W_SuperRegsSet },
  };
}

unsigned SystemZGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  case SystemZ::R0D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R0W;
    };
    break;
  case SystemZ::R1D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R1W;
    };
    break;
  case SystemZ::R2D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R2W;
    };
    break;
  case SystemZ::R3D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R3W;
    };
    break;
  case SystemZ::R4D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R4W;
    };
    break;
  case SystemZ::R5D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R5W;
    };
    break;
  case SystemZ::R6D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R6W;
    };
    break;
  case SystemZ::R7D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R7W;
    };
    break;
  case SystemZ::R8D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R8W;
    };
    break;
  case SystemZ::R9D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R9W;
    };
    break;
  case SystemZ::R10D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R10W;
    };
    break;
  case SystemZ::R11D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R11W;
    };
    break;
  case SystemZ::R12D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R12W;
    };
    break;
  case SystemZ::R13D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R13W;
    };
    break;
  case SystemZ::R14D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R14W;
    };
    break;
  case SystemZ::R15D:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R15W;
    };
    break;
  case SystemZ::R0P:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R0W;
    case 2: return SystemZ::R1W;
    };
    break;
  case SystemZ::R2P:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R2W;
    case 2: return SystemZ::R3W;
    };
    break;
  case SystemZ::R4P:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R4W;
    case 2: return SystemZ::R5W;
    };
    break;
  case SystemZ::R6P:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R6W;
    case 2: return SystemZ::R7W;
    };
    break;
  case SystemZ::R8P:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R8W;
    case 2: return SystemZ::R9W;
    };
    break;
  case SystemZ::R10P:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R10W;
    case 2: return SystemZ::R11W;
    };
    break;
  case SystemZ::R12P:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R12W;
    case 2: return SystemZ::R13W;
    };
    break;
  case SystemZ::R14P:
    switch (Index) {
    default: return 0;
    case 1: return SystemZ::R14W;
    case 2: return SystemZ::R15W;
    };
    break;
  case SystemZ::R0Q:
    switch (Index) {
    default: return 0;
    case 3: return SystemZ::R0D;
    case 4: return SystemZ::R1D;
    case 1: return SystemZ::R0W;
    case 2: return SystemZ::R1W;
    };
    break;
  case SystemZ::R2Q:
    switch (Index) {
    default: return 0;
    case 3: return SystemZ::R2D;
    case 4: return SystemZ::R3D;
    case 1: return SystemZ::R2W;
    case 2: return SystemZ::R3W;
    };
    break;
  case SystemZ::R4Q:
    switch (Index) {
    default: return 0;
    case 3: return SystemZ::R4D;
    case 4: return SystemZ::R5D;
    case 1: return SystemZ::R4W;
    case 2: return SystemZ::R5W;
    };
    break;
  case SystemZ::R6Q:
    switch (Index) {
    default: return 0;
    case 3: return SystemZ::R6D;
    case 4: return SystemZ::R7D;
    case 1: return SystemZ::R6W;
    case 2: return SystemZ::R7W;
    };
    break;
  case SystemZ::R8Q:
    switch (Index) {
    default: return 0;
    case 3: return SystemZ::R8D;
    case 4: return SystemZ::R9D;
    case 1: return SystemZ::R8W;
    case 2: return SystemZ::R9W;
    };
    break;
  case SystemZ::R10Q:
    switch (Index) {
    default: return 0;
    case 3: return SystemZ::R10D;
    case 4: return SystemZ::R11D;
    case 1: return SystemZ::R10W;
    case 2: return SystemZ::R11W;
    };
    break;
  case SystemZ::R12Q:
    switch (Index) {
    default: return 0;
    case 3: return SystemZ::R12D;
    case 4: return SystemZ::R13D;
    case 1: return SystemZ::R12W;
    case 2: return SystemZ::R13W;
    };
    break;
  case SystemZ::R14Q:
    switch (Index) {
    default: return 0;
    case 3: return SystemZ::R14D;
    case 4: return SystemZ::R15D;
    case 1: return SystemZ::R14W;
    case 2: return SystemZ::R15W;
    };
    break;
  };
  return 0;
}

SystemZGenRegisterInfo::SystemZGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 82, RegisterClasses, RegisterClasses+9,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 SuperregHashTable, SuperregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int SystemZGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case SystemZ::F0L:
      return 16;
    case SystemZ::F0S:
      return 16;
    case SystemZ::F10L:
      return 26;
    case SystemZ::F10S:
      return 26;
    case SystemZ::F11L:
      return 27;
    case SystemZ::F11S:
      return 27;
    case SystemZ::F12L:
      return 28;
    case SystemZ::F12S:
      return 28;
    case SystemZ::F13L:
      return 29;
    case SystemZ::F13S:
      return 29;
    case SystemZ::F14L:
      return 30;
    case SystemZ::F14S:
      return 30;
    case SystemZ::F15L:
      return 31;
    case SystemZ::F15S:
      return 31;
    case SystemZ::F1L:
      return 17;
    case SystemZ::F1S:
      return 17;
    case SystemZ::F2L:
      return 18;
    case SystemZ::F2S:
      return 18;
    case SystemZ::F3L:
      return 19;
    case SystemZ::F3S:
      return 19;
    case SystemZ::F4L:
      return 20;
    case SystemZ::F4S:
      return 20;
    case SystemZ::F5L:
      return 21;
    case SystemZ::F5S:
      return 21;
    case SystemZ::F6L:
      return 22;
    case SystemZ::F6S:
      return 22;
    case SystemZ::F7L:
      return 23;
    case SystemZ::F7S:
      return 23;
    case SystemZ::F8L:
      return 24;
    case SystemZ::F8S:
      return 24;
    case SystemZ::F9L:
      return 25;
    case SystemZ::F9S:
      return 25;
    case SystemZ::PSW:
      return -1;
    case SystemZ::R0D:
      return 0;
    case SystemZ::R0P:
      return 0;
    case SystemZ::R0Q:
      return 0;
    case SystemZ::R0W:
      return 0;
    case SystemZ::R10D:
      return 10;
    case SystemZ::R10P:
      return 10;
    case SystemZ::R10Q:
      return 10;
    case SystemZ::R10W:
      return 10;
    case SystemZ::R11D:
      return 11;
    case SystemZ::R11W:
      return 11;
    case SystemZ::R12D:
      return 12;
    case SystemZ::R12P:
      return 12;
    case SystemZ::R12Q:
      return 12;
    case SystemZ::R12W:
      return 12;
    case SystemZ::R13D:
      return 13;
    case SystemZ::R13W:
      return 13;
    case SystemZ::R14D:
      return 14;
    case SystemZ::R14P:
      return 14;
    case SystemZ::R14Q:
      return 14;
    case SystemZ::R14W:
      return 14;
    case SystemZ::R15D:
      return 15;
    case SystemZ::R15W:
      return 15;
    case SystemZ::R1D:
      return 1;
    case SystemZ::R1W:
      return 1;
    case SystemZ::R2D:
      return 2;
    case SystemZ::R2P:
      return 2;
    case SystemZ::R2Q:
      return 2;
    case SystemZ::R2W:
      return 2;
    case SystemZ::R3D:
      return 3;
    case SystemZ::R3W:
      return 3;
    case SystemZ::R4D:
      return 4;
    case SystemZ::R4P:
      return 4;
    case SystemZ::R4Q:
      return 4;
    case SystemZ::R4W:
      return 4;
    case SystemZ::R5D:
      return 5;
    case SystemZ::R5W:
      return 5;
    case SystemZ::R6D:
      return 6;
    case SystemZ::R6P:
      return 6;
    case SystemZ::R6Q:
      return 6;
    case SystemZ::R6W:
      return 6;
    case SystemZ::R7D:
      return 7;
    case SystemZ::R7W:
      return 7;
    case SystemZ::R8D:
      return 8;
    case SystemZ::R8P:
      return 8;
    case SystemZ::R8Q:
      return 8;
    case SystemZ::R8W:
      return 8;
    case SystemZ::R9D:
      return 9;
    case SystemZ::R9W:
      return 9;
    };
  };
}

} // End llvm namespace 
