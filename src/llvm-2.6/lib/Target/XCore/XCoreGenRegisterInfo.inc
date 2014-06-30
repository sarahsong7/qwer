//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // GRRegs Register Class...
  static const unsigned GRRegs[] = {
    XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::R4, XCore::R5, XCore::R6, XCore::R7, XCore::R8, XCore::R9, XCore::R10, 
  };

  // RRegs Register Class...
  static const unsigned RRegs[] = {
    XCore::CP, XCore::DP, XCore::SP, XCore::LR, 
  };

  // GRRegsVTs Register Class Value Types...
  static const EVT GRRegsVTs[] = {
    MVT::i32, MVT::Other
  };

  // RRegsVTs Register Class Value Types...
  static const EVT RRegsVTs[] = {
    MVT::i32, MVT::Other
  };

}  // end anonymous namespace

namespace XCore {   // Register class instances
  GRRegsClass	GRRegsRegClass;
  RRegsClass	RRegsRegClass;

  // GRRegs Sub-register Classes...
  static const TargetRegisterClass* const GRRegsSubRegClasses[] = {
    NULL
  };

  // RRegs Sub-register Classes...
  static const TargetRegisterClass* const RRegsSubRegClasses[] = {
    NULL
  };

  // GRRegs Super-register Classes...
  static const TargetRegisterClass* const GRRegsSuperRegClasses[] = {
    NULL
  };

  // RRegs Super-register Classes...
  static const TargetRegisterClass* const RRegsSuperRegClasses[] = {
    NULL
  };

  // GRRegs Register Class sub-classes...
  static const TargetRegisterClass* const GRRegsSubclasses[] = {
    NULL
  };

  // RRegs Register Class sub-classes...
  static const TargetRegisterClass* const RRegsSubclasses[] = {
    NULL
  };

  // GRRegs Register Class super-classes...
  static const TargetRegisterClass* const GRRegsSuperclasses[] = {
    NULL
  };

  // RRegs Register Class super-classes...
  static const TargetRegisterClass* const RRegsSuperclasses[] = {
    NULL
  };


    GRRegsClass::iterator
    GRRegsClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    GRRegsClass::iterator
    GRRegsClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return end()-1;  // don't allocate R10
      else
        return end();
    }
  
GRRegsClass::GRRegsClass()  : TargetRegisterClass(GRRegsRegClassID, "GRRegs", GRRegsVTs, GRRegsSubclasses, GRRegsSuperclasses, GRRegsSubRegClasses, GRRegsSuperRegClasses, 4, 4, 1, GRRegs, GRRegs + 12) {}

    RRegsClass::iterator
    RRegsClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    RRegsClass::iterator
    RRegsClass::allocation_order_end(const MachineFunction &MF) const {
      // No allocatable registers
      return begin();
    }
  
RRegsClass::RRegsClass()  : TargetRegisterClass(RRegsRegClassID, "RRegs", RRegsVTs, RRegsSubclasses, RRegsSuperclasses, RRegsSubRegClasses, RRegsSuperRegClasses, 4, 4, 1, RRegs, RRegs + 4) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &XCore::GRRegsRegClass,
    &XCore::RRegsRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { XCore::NoRegister, XCore::NoRegister, 
XCore::NoRegister, XCore::NoRegister };
  const unsigned SubregHashTableSize = 2;


  // Number of hash collisions: 0
  const unsigned SuperregHashTable[] = { XCore::NoRegister, XCore::NoRegister, 
XCore::NoRegister, XCore::NoRegister };
  const unsigned SuperregHashTableSize = 2;


  // Number of hash collisions: 0
  const unsigned AliasesHashTable[] = { XCore::NoRegister, XCore::NoRegister, 
XCore::NoRegister, XCore::NoRegister };
  const unsigned AliasesHashTableSize = 2;


  // Register Alias Sets...
  const unsigned Empty_AliasSet[] = { 0 };
  const unsigned CP_AliasSet[] = { 0 };
  const unsigned DP_AliasSet[] = { 0 };
  const unsigned LR_AliasSet[] = { 0 };
  const unsigned R0_AliasSet[] = { 0 };
  const unsigned R1_AliasSet[] = { 0 };
  const unsigned R10_AliasSet[] = { 0 };
  const unsigned R11_AliasSet[] = { 0 };
  const unsigned R2_AliasSet[] = { 0 };
  const unsigned R3_AliasSet[] = { 0 };
  const unsigned R4_AliasSet[] = { 0 };
  const unsigned R5_AliasSet[] = { 0 };
  const unsigned R6_AliasSet[] = { 0 };
  const unsigned R7_AliasSet[] = { 0 };
  const unsigned R8_AliasSet[] = { 0 };
  const unsigned R9_AliasSet[] = { 0 };
  const unsigned SP_AliasSet[] = { 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned CP_SubRegsSet[] = { 0 };
  const unsigned DP_SubRegsSet[] = { 0 };
  const unsigned LR_SubRegsSet[] = { 0 };
  const unsigned R0_SubRegsSet[] = { 0 };
  const unsigned R1_SubRegsSet[] = { 0 };
  const unsigned R10_SubRegsSet[] = { 0 };
  const unsigned R11_SubRegsSet[] = { 0 };
  const unsigned R2_SubRegsSet[] = { 0 };
  const unsigned R3_SubRegsSet[] = { 0 };
  const unsigned R4_SubRegsSet[] = { 0 };
  const unsigned R5_SubRegsSet[] = { 0 };
  const unsigned R6_SubRegsSet[] = { 0 };
  const unsigned R7_SubRegsSet[] = { 0 };
  const unsigned R8_SubRegsSet[] = { 0 };
  const unsigned R9_SubRegsSet[] = { 0 };
  const unsigned SP_SubRegsSet[] = { 0 };


  // Register Super-registers Sets...
  const unsigned Empty_SuperRegsSet[] = { 0 };
  const unsigned CP_SuperRegsSet[] = { 0 };
  const unsigned DP_SuperRegsSet[] = { 0 };
  const unsigned LR_SuperRegsSet[] = { 0 };
  const unsigned R0_SuperRegsSet[] = { 0 };
  const unsigned R1_SuperRegsSet[] = { 0 };
  const unsigned R10_SuperRegsSet[] = { 0 };
  const unsigned R11_SuperRegsSet[] = { 0 };
  const unsigned R2_SuperRegsSet[] = { 0 };
  const unsigned R3_SuperRegsSet[] = { 0 };
  const unsigned R4_SuperRegsSet[] = { 0 };
  const unsigned R5_SuperRegsSet[] = { 0 };
  const unsigned R6_SuperRegsSet[] = { 0 };
  const unsigned R7_SuperRegsSet[] = { 0 };
  const unsigned R8_SuperRegsSet[] = { 0 };
  const unsigned R9_SuperRegsSet[] = { 0 };
  const unsigned SP_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "cp",	"CP",	CP_AliasSet,	CP_SubRegsSet,	CP_SuperRegsSet },
    { "dp",	"DP",	DP_AliasSet,	DP_SubRegsSet,	DP_SuperRegsSet },
    { "lr",	"LR",	LR_AliasSet,	LR_SubRegsSet,	LR_SuperRegsSet },
    { "r0",	"R0",	R0_AliasSet,	R0_SubRegsSet,	R0_SuperRegsSet },
    { "r1",	"R1",	R1_AliasSet,	R1_SubRegsSet,	R1_SuperRegsSet },
    { "r10",	"R10",	R10_AliasSet,	R10_SubRegsSet,	R10_SuperRegsSet },
    { "r11",	"R11",	R11_AliasSet,	R11_SubRegsSet,	R11_SuperRegsSet },
    { "r2",	"R2",	R2_AliasSet,	R2_SubRegsSet,	R2_SuperRegsSet },
    { "r3",	"R3",	R3_AliasSet,	R3_SubRegsSet,	R3_SuperRegsSet },
    { "r4",	"R4",	R4_AliasSet,	R4_SubRegsSet,	R4_SuperRegsSet },
    { "r5",	"R5",	R5_AliasSet,	R5_SubRegsSet,	R5_SuperRegsSet },
    { "r6",	"R6",	R6_AliasSet,	R6_SubRegsSet,	R6_SuperRegsSet },
    { "r7",	"R7",	R7_AliasSet,	R7_SubRegsSet,	R7_SuperRegsSet },
    { "r8",	"R8",	R8_AliasSet,	R8_SubRegsSet,	R8_SuperRegsSet },
    { "r9",	"R9",	R9_AliasSet,	R9_SubRegsSet,	R9_SuperRegsSet },
    { "sp",	"SP",	SP_AliasSet,	SP_SubRegsSet,	SP_SuperRegsSet },
  };
}

unsigned XCoreGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

XCoreGenRegisterInfo::XCoreGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 17, RegisterClasses, RegisterClasses+2,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 SuperregHashTable, SuperregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int XCoreGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case XCore::CP:
      return 12;
    case XCore::DP:
      return 13;
    case XCore::LR:
      return 15;
    case XCore::R0:
      return 0;
    case XCore::R1:
      return 1;
    case XCore::R10:
      return 10;
    case XCore::R11:
      return 11;
    case XCore::R2:
      return 2;
    case XCore::R3:
      return 3;
    case XCore::R4:
      return 4;
    case XCore::R5:
      return 5;
    case XCore::R6:
      return 6;
    case XCore::R7:
      return 7;
    case XCore::R8:
      return 8;
    case XCore::R9:
      return 9;
    case XCore::SP:
      return 14;
    };
  };
}

} // End llvm namespace 
