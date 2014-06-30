//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // GR16 Register Class...
  static const unsigned GR16[] = {
    MSP430::R12W, MSP430::R13W, MSP430::R14W, MSP430::R15W, MSP430::R11W, MSP430::R10W, MSP430::R9W, MSP430::R8W, MSP430::R7W, MSP430::R6W, MSP430::R5W, MSP430::FPW, MSP430::PCW, MSP430::SPW, MSP430::SRW, MSP430::CGW, 
  };

  // GR8 Register Class...
  static const unsigned GR8[] = {
    MSP430::R12B, MSP430::R13B, MSP430::R14B, MSP430::R15B, MSP430::R11B, MSP430::R10B, MSP430::R9B, MSP430::R8B, MSP430::R7B, MSP430::R6B, MSP430::R5B, MSP430::FPB, MSP430::PCB, MSP430::SPB, MSP430::SRB, MSP430::CGB, 
  };

  // GR16VTs Register Class Value Types...
  static const EVT GR16VTs[] = {
    MVT::i16, MVT::Other
  };

  // GR8VTs Register Class Value Types...
  static const EVT GR8VTs[] = {
    MVT::i8, MVT::Other
  };

}  // end anonymous namespace

namespace MSP430 {   // Register class instances
  GR16Class	GR16RegClass;
  GR8Class	GR8RegClass;

  // GR16 Sub-register Classes...
  static const TargetRegisterClass* const GR16SubRegClasses[] = {
    &MSP430::GR8RegClass, NULL
  };

  // GR8 Sub-register Classes...
  static const TargetRegisterClass* const GR8SubRegClasses[] = {
    NULL
  };

  // GR16 Super-register Classes...
  static const TargetRegisterClass* const GR16SuperRegClasses[] = {
    NULL
  };

  // GR8 Super-register Classes...
  static const TargetRegisterClass* const GR8SuperRegClasses[] = {
    &MSP430::GR16RegClass, NULL
  };

  // GR16 Register Class sub-classes...
  static const TargetRegisterClass* const GR16Subclasses[] = {
    NULL
  };

  // GR8 Register Class sub-classes...
  static const TargetRegisterClass* const GR8Subclasses[] = {
    NULL
  };

  // GR16 Register Class super-classes...
  static const TargetRegisterClass* const GR16Superclasses[] = {
    NULL
  };

  // GR8 Register Class super-classes...
  static const TargetRegisterClass* const GR8Superclasses[] = {
    NULL
  };


    GR16Class::iterator
    GR16Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      // Depending on whether the function uses frame pointer or not, last 5 or 4
      // registers on the list above are reserved
      if (RI->hasFP(MF))
        return end()-5;
      else
        return end()-4;
    }
  
GR16Class::GR16Class()  : TargetRegisterClass(GR16RegClassID, "GR16", GR16VTs, GR16Subclasses, GR16Superclasses, GR16SubRegClasses, GR16SuperRegClasses, 2, 2, 1, GR16, GR16 + 16) {}

    GR8Class::iterator
    GR8Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      // Depending on whether the function uses frame pointer or not, last 5 or 4
      // registers on the list above are reserved
      if (RI->hasFP(MF))
        return end()-5;
      else
        return end()-4;
    }
  
GR8Class::GR8Class()  : TargetRegisterClass(GR8RegClassID, "GR8", GR8VTs, GR8Subclasses, GR8Superclasses, GR8SubRegClasses, GR8SuperRegClasses, 1, 1, 1, GR8, GR8 + 16) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &MSP430::GR16RegClass,
    &MSP430::GR8RegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R9W, MSP430::R9B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R15W, MSP430::R15B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R10W, MSP430::R10B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::SRW, MSP430::SRB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R6W, MSP430::R6B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R12W, MSP430::R12B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::CGW, MSP430::CGB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R8W, MSP430::R8B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R14W, MSP430::R14B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::PCW, MSP430::PCB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::SPW, MSP430::SPB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R5W, MSP430::R5B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R11W, MSP430::R11B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R7W, MSP430::R7B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R13W, MSP430::R13B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::FPW, MSP430::FPB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
MSP430::NoRegister, MSP430::NoRegister };
  const unsigned SubregHashTableSize = 128;


  // Number of hash collisions: 0
  const unsigned SuperregHashTable[] = { MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R7B, MSP430::R7W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R13B, MSP430::R13W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::FPB, MSP430::FPW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R9B, MSP430::R9W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R15B, MSP430::R15W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R10B, MSP430::R10W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::SRB, MSP430::SRW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R6B, MSP430::R6W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R12B, MSP430::R12W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::CGB, MSP430::CGW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R8B, MSP430::R8W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R14B, MSP430::R14W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::PCB, MSP430::PCW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::SPB, MSP430::SPW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R5B, MSP430::R5W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R11B, MSP430::R11W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
MSP430::NoRegister, MSP430::NoRegister };
  const unsigned SuperregHashTableSize = 128;


  // Number of hash collisions: 3
  const unsigned AliasesHashTable[] = { MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R9W, MSP430::R9B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R10W, MSP430::R10B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R13B, MSP430::R13W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R6W, MSP430::R6B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::CGW, MSP430::CGB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R9B, MSP430::R9W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R10B, MSP430::R10W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R14W, MSP430::R14B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R6B, MSP430::R6W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::CGB, MSP430::CGW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::SPW, MSP430::SPB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R11W, MSP430::R11B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R14B, MSP430::R14W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R7W, MSP430::R7B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::FPW, MSP430::FPB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::SPB, MSP430::SPW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R11B, MSP430::R11W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R15W, MSP430::R15B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R7B, MSP430::R7W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::FPB, MSP430::FPW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::SRW, MSP430::SRB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R12W, MSP430::R12B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R15B, MSP430::R15W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R8W, MSP430::R8B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::PCW, MSP430::PCB, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::SRB, MSP430::SRW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R12B, MSP430::R12W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R5W, MSP430::R5B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R8B, MSP430::R8W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::PCB, MSP430::PCW, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R13W, MSP430::R13B, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::R5B, MSP430::R5W, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
                                       MSP430::NoRegister, MSP430::NoRegister, 
MSP430::NoRegister, MSP430::NoRegister };
  const unsigned AliasesHashTableSize = 256;


  // Register Alias Sets...
  const unsigned Empty_AliasSet[] = { 0 };
  const unsigned CGB_AliasSet[] = { MSP430::CGW, 0 };
  const unsigned CGW_AliasSet[] = { MSP430::CGB, 0 };
  const unsigned FPB_AliasSet[] = { MSP430::FPW, 0 };
  const unsigned FPW_AliasSet[] = { MSP430::FPB, 0 };
  const unsigned PCB_AliasSet[] = { MSP430::PCW, 0 };
  const unsigned PCW_AliasSet[] = { MSP430::PCB, 0 };
  const unsigned R10B_AliasSet[] = { MSP430::R10W, 0 };
  const unsigned R10W_AliasSet[] = { MSP430::R10B, 0 };
  const unsigned R11B_AliasSet[] = { MSP430::R11W, 0 };
  const unsigned R11W_AliasSet[] = { MSP430::R11B, 0 };
  const unsigned R12B_AliasSet[] = { MSP430::R12W, 0 };
  const unsigned R12W_AliasSet[] = { MSP430::R12B, 0 };
  const unsigned R13B_AliasSet[] = { MSP430::R13W, 0 };
  const unsigned R13W_AliasSet[] = { MSP430::R13B, 0 };
  const unsigned R14B_AliasSet[] = { MSP430::R14W, 0 };
  const unsigned R14W_AliasSet[] = { MSP430::R14B, 0 };
  const unsigned R15B_AliasSet[] = { MSP430::R15W, 0 };
  const unsigned R15W_AliasSet[] = { MSP430::R15B, 0 };
  const unsigned R5B_AliasSet[] = { MSP430::R5W, 0 };
  const unsigned R5W_AliasSet[] = { MSP430::R5B, 0 };
  const unsigned R6B_AliasSet[] = { MSP430::R6W, 0 };
  const unsigned R6W_AliasSet[] = { MSP430::R6B, 0 };
  const unsigned R7B_AliasSet[] = { MSP430::R7W, 0 };
  const unsigned R7W_AliasSet[] = { MSP430::R7B, 0 };
  const unsigned R8B_AliasSet[] = { MSP430::R8W, 0 };
  const unsigned R8W_AliasSet[] = { MSP430::R8B, 0 };
  const unsigned R9B_AliasSet[] = { MSP430::R9W, 0 };
  const unsigned R9W_AliasSet[] = { MSP430::R9B, 0 };
  const unsigned SPB_AliasSet[] = { MSP430::SPW, 0 };
  const unsigned SPW_AliasSet[] = { MSP430::SPB, 0 };
  const unsigned SRB_AliasSet[] = { MSP430::SRW, 0 };
  const unsigned SRW_AliasSet[] = { MSP430::SRB, 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned CGB_SubRegsSet[] = { 0 };
  const unsigned CGW_SubRegsSet[] = { MSP430::CGB, 0 };
  const unsigned FPB_SubRegsSet[] = { 0 };
  const unsigned FPW_SubRegsSet[] = { MSP430::FPB, 0 };
  const unsigned PCB_SubRegsSet[] = { 0 };
  const unsigned PCW_SubRegsSet[] = { MSP430::PCB, 0 };
  const unsigned R10B_SubRegsSet[] = { 0 };
  const unsigned R10W_SubRegsSet[] = { MSP430::R10B, 0 };
  const unsigned R11B_SubRegsSet[] = { 0 };
  const unsigned R11W_SubRegsSet[] = { MSP430::R11B, 0 };
  const unsigned R12B_SubRegsSet[] = { 0 };
  const unsigned R12W_SubRegsSet[] = { MSP430::R12B, 0 };
  const unsigned R13B_SubRegsSet[] = { 0 };
  const unsigned R13W_SubRegsSet[] = { MSP430::R13B, 0 };
  const unsigned R14B_SubRegsSet[] = { 0 };
  const unsigned R14W_SubRegsSet[] = { MSP430::R14B, 0 };
  const unsigned R15B_SubRegsSet[] = { 0 };
  const unsigned R15W_SubRegsSet[] = { MSP430::R15B, 0 };
  const unsigned R5B_SubRegsSet[] = { 0 };
  const unsigned R5W_SubRegsSet[] = { MSP430::R5B, 0 };
  const unsigned R6B_SubRegsSet[] = { 0 };
  const unsigned R6W_SubRegsSet[] = { MSP430::R6B, 0 };
  const unsigned R7B_SubRegsSet[] = { 0 };
  const unsigned R7W_SubRegsSet[] = { MSP430::R7B, 0 };
  const unsigned R8B_SubRegsSet[] = { 0 };
  const unsigned R8W_SubRegsSet[] = { MSP430::R8B, 0 };
  const unsigned R9B_SubRegsSet[] = { 0 };
  const unsigned R9W_SubRegsSet[] = { MSP430::R9B, 0 };
  const unsigned SPB_SubRegsSet[] = { 0 };
  const unsigned SPW_SubRegsSet[] = { MSP430::SPB, 0 };
  const unsigned SRB_SubRegsSet[] = { 0 };
  const unsigned SRW_SubRegsSet[] = { MSP430::SRB, 0 };


  // Register Super-registers Sets...
  const unsigned Empty_SuperRegsSet[] = { 0 };
  const unsigned CGB_SuperRegsSet[] = { MSP430::CGW, 0 };
  const unsigned CGW_SuperRegsSet[] = { 0 };
  const unsigned FPB_SuperRegsSet[] = { MSP430::FPW, 0 };
  const unsigned FPW_SuperRegsSet[] = { 0 };
  const unsigned PCB_SuperRegsSet[] = { MSP430::PCW, 0 };
  const unsigned PCW_SuperRegsSet[] = { 0 };
  const unsigned R10B_SuperRegsSet[] = { MSP430::R10W, 0 };
  const unsigned R10W_SuperRegsSet[] = { 0 };
  const unsigned R11B_SuperRegsSet[] = { MSP430::R11W, 0 };
  const unsigned R11W_SuperRegsSet[] = { 0 };
  const unsigned R12B_SuperRegsSet[] = { MSP430::R12W, 0 };
  const unsigned R12W_SuperRegsSet[] = { 0 };
  const unsigned R13B_SuperRegsSet[] = { MSP430::R13W, 0 };
  const unsigned R13W_SuperRegsSet[] = { 0 };
  const unsigned R14B_SuperRegsSet[] = { MSP430::R14W, 0 };
  const unsigned R14W_SuperRegsSet[] = { 0 };
  const unsigned R15B_SuperRegsSet[] = { MSP430::R15W, 0 };
  const unsigned R15W_SuperRegsSet[] = { 0 };
  const unsigned R5B_SuperRegsSet[] = { MSP430::R5W, 0 };
  const unsigned R5W_SuperRegsSet[] = { 0 };
  const unsigned R6B_SuperRegsSet[] = { MSP430::R6W, 0 };
  const unsigned R6W_SuperRegsSet[] = { 0 };
  const unsigned R7B_SuperRegsSet[] = { MSP430::R7W, 0 };
  const unsigned R7W_SuperRegsSet[] = { 0 };
  const unsigned R8B_SuperRegsSet[] = { MSP430::R8W, 0 };
  const unsigned R8W_SuperRegsSet[] = { 0 };
  const unsigned R9B_SuperRegsSet[] = { MSP430::R9W, 0 };
  const unsigned R9W_SuperRegsSet[] = { 0 };
  const unsigned SPB_SuperRegsSet[] = { MSP430::SPW, 0 };
  const unsigned SPW_SuperRegsSet[] = { 0 };
  const unsigned SRB_SuperRegsSet[] = { MSP430::SRW, 0 };
  const unsigned SRW_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "r3",	"CGB",	CGB_AliasSet,	CGB_SubRegsSet,	CGB_SuperRegsSet },
    { "r3",	"CGW",	CGW_AliasSet,	CGW_SubRegsSet,	CGW_SuperRegsSet },
    { "r4",	"FPB",	FPB_AliasSet,	FPB_SubRegsSet,	FPB_SuperRegsSet },
    { "r4",	"FPW",	FPW_AliasSet,	FPW_SubRegsSet,	FPW_SuperRegsSet },
    { "r0",	"PCB",	PCB_AliasSet,	PCB_SubRegsSet,	PCB_SuperRegsSet },
    { "r0",	"PCW",	PCW_AliasSet,	PCW_SubRegsSet,	PCW_SuperRegsSet },
    { "r10",	"R10B",	R10B_AliasSet,	R10B_SubRegsSet,	R10B_SuperRegsSet },
    { "r10",	"R10W",	R10W_AliasSet,	R10W_SubRegsSet,	R10W_SuperRegsSet },
    { "r11",	"R11B",	R11B_AliasSet,	R11B_SubRegsSet,	R11B_SuperRegsSet },
    { "r11",	"R11W",	R11W_AliasSet,	R11W_SubRegsSet,	R11W_SuperRegsSet },
    { "r12",	"R12B",	R12B_AliasSet,	R12B_SubRegsSet,	R12B_SuperRegsSet },
    { "r12",	"R12W",	R12W_AliasSet,	R12W_SubRegsSet,	R12W_SuperRegsSet },
    { "r13",	"R13B",	R13B_AliasSet,	R13B_SubRegsSet,	R13B_SuperRegsSet },
    { "r13",	"R13W",	R13W_AliasSet,	R13W_SubRegsSet,	R13W_SuperRegsSet },
    { "r14",	"R14B",	R14B_AliasSet,	R14B_SubRegsSet,	R14B_SuperRegsSet },
    { "r14",	"R14W",	R14W_AliasSet,	R14W_SubRegsSet,	R14W_SuperRegsSet },
    { "r15",	"R15B",	R15B_AliasSet,	R15B_SubRegsSet,	R15B_SuperRegsSet },
    { "r15",	"R15W",	R15W_AliasSet,	R15W_SubRegsSet,	R15W_SuperRegsSet },
    { "r5",	"R5B",	R5B_AliasSet,	R5B_SubRegsSet,	R5B_SuperRegsSet },
    { "r5",	"R5W",	R5W_AliasSet,	R5W_SubRegsSet,	R5W_SuperRegsSet },
    { "r6",	"R6B",	R6B_AliasSet,	R6B_SubRegsSet,	R6B_SuperRegsSet },
    { "r6",	"R6W",	R6W_AliasSet,	R6W_SubRegsSet,	R6W_SuperRegsSet },
    { "r7",	"R7B",	R7B_AliasSet,	R7B_SubRegsSet,	R7B_SuperRegsSet },
    { "r7",	"R7W",	R7W_AliasSet,	R7W_SubRegsSet,	R7W_SuperRegsSet },
    { "r8",	"R8B",	R8B_AliasSet,	R8B_SubRegsSet,	R8B_SuperRegsSet },
    { "r8",	"R8W",	R8W_AliasSet,	R8W_SubRegsSet,	R8W_SuperRegsSet },
    { "r9",	"R9B",	R9B_AliasSet,	R9B_SubRegsSet,	R9B_SuperRegsSet },
    { "r9",	"R9W",	R9W_AliasSet,	R9W_SubRegsSet,	R9W_SuperRegsSet },
    { "r1",	"SPB",	SPB_AliasSet,	SPB_SubRegsSet,	SPB_SuperRegsSet },
    { "r1",	"SPW",	SPW_AliasSet,	SPW_SubRegsSet,	SPW_SuperRegsSet },
    { "r2",	"SRB",	SRB_AliasSet,	SRB_SubRegsSet,	SRB_SuperRegsSet },
    { "r2",	"SRW",	SRW_AliasSet,	SRW_SubRegsSet,	SRW_SuperRegsSet },
  };
}

unsigned MSP430GenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  case MSP430::PCW:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::PCB;
    };
    break;
  case MSP430::SPW:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::SPB;
    };
    break;
  case MSP430::SRW:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::SRB;
    };
    break;
  case MSP430::CGW:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::CGB;
    };
    break;
  case MSP430::FPW:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::FPB;
    };
    break;
  case MSP430::R5W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R5B;
    };
    break;
  case MSP430::R6W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R6B;
    };
    break;
  case MSP430::R7W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R7B;
    };
    break;
  case MSP430::R8W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R8B;
    };
    break;
  case MSP430::R9W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R9B;
    };
    break;
  case MSP430::R10W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R10B;
    };
    break;
  case MSP430::R11W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R11B;
    };
    break;
  case MSP430::R12W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R12B;
    };
    break;
  case MSP430::R13W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R13B;
    };
    break;
  case MSP430::R14W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R14B;
    };
    break;
  case MSP430::R15W:
    switch (Index) {
    default: return 0;
    case 1: return MSP430::R15B;
    };
    break;
  };
  return 0;
}

MSP430GenRegisterInfo::MSP430GenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 33, RegisterClasses, RegisterClasses+2,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 SuperregHashTable, SuperregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int MSP430GenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  };
}

} // End llvm namespace 
