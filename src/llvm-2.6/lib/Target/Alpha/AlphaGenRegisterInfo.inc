//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // F4RC Register Class...
  static const unsigned F4RC[] = {
    Alpha::F0, Alpha::F1, Alpha::F10, Alpha::F11, Alpha::F12, Alpha::F13, Alpha::F14, Alpha::F15, Alpha::F16, Alpha::F17, Alpha::F18, Alpha::F19, Alpha::F20, Alpha::F21, Alpha::F22, Alpha::F23, Alpha::F24, Alpha::F25, Alpha::F26, Alpha::F27, Alpha::F28, Alpha::F29, Alpha::F30, Alpha::F2, Alpha::F3, Alpha::F4, Alpha::F5, Alpha::F6, Alpha::F7, Alpha::F8, Alpha::F9, Alpha::F31, 
  };

  // F8RC Register Class...
  static const unsigned F8RC[] = {
    Alpha::F0, Alpha::F1, Alpha::F10, Alpha::F11, Alpha::F12, Alpha::F13, Alpha::F14, Alpha::F15, Alpha::F16, Alpha::F17, Alpha::F18, Alpha::F19, Alpha::F20, Alpha::F21, Alpha::F22, Alpha::F23, Alpha::F24, Alpha::F25, Alpha::F26, Alpha::F27, Alpha::F28, Alpha::F29, Alpha::F30, Alpha::F2, Alpha::F3, Alpha::F4, Alpha::F5, Alpha::F6, Alpha::F7, Alpha::F8, Alpha::F9, Alpha::F31, 
  };

  // GPRC Register Class...
  static const unsigned GPRC[] = {
    Alpha::R0, Alpha::R1, Alpha::R2, Alpha::R3, Alpha::R4, Alpha::R5, Alpha::R6, Alpha::R7, Alpha::R8, Alpha::R16, Alpha::R17, Alpha::R18, Alpha::R19, Alpha::R20, Alpha::R21, Alpha::R22, Alpha::R23, Alpha::R24, Alpha::R25, Alpha::R28, Alpha::R27, Alpha::R26, Alpha::R29, Alpha::R9, Alpha::R10, Alpha::R11, Alpha::R12, Alpha::R13, Alpha::R14, Alpha::R15, Alpha::R30, Alpha::R31, 
  };

  // F4RCVTs Register Class Value Types...
  static const EVT F4RCVTs[] = {
    MVT::f32, MVT::Other
  };

  // F8RCVTs Register Class Value Types...
  static const EVT F8RCVTs[] = {
    MVT::f64, MVT::Other
  };

  // GPRCVTs Register Class Value Types...
  static const EVT GPRCVTs[] = {
    MVT::i64, MVT::Other
  };

}  // end anonymous namespace

namespace Alpha {   // Register class instances
  F4RCClass	F4RCRegClass;
  F8RCClass	F8RCRegClass;
  GPRCClass	GPRCRegClass;

  // F4RC Sub-register Classes...
  static const TargetRegisterClass* const F4RCSubRegClasses[] = {
    NULL
  };

  // F8RC Sub-register Classes...
  static const TargetRegisterClass* const F8RCSubRegClasses[] = {
    NULL
  };

  // GPRC Sub-register Classes...
  static const TargetRegisterClass* const GPRCSubRegClasses[] = {
    NULL
  };

  // F4RC Super-register Classes...
  static const TargetRegisterClass* const F4RCSuperRegClasses[] = {
    NULL
  };

  // F8RC Super-register Classes...
  static const TargetRegisterClass* const F8RCSuperRegClasses[] = {
    NULL
  };

  // GPRC Super-register Classes...
  static const TargetRegisterClass* const GPRCSuperRegClasses[] = {
    NULL
  };

  // F4RC Register Class sub-classes...
  static const TargetRegisterClass* const F4RCSubclasses[] = {
    &Alpha::F8RCRegClass, NULL
  };

  // F8RC Register Class sub-classes...
  static const TargetRegisterClass* const F8RCSubclasses[] = {
    NULL
  };

  // GPRC Register Class sub-classes...
  static const TargetRegisterClass* const GPRCSubclasses[] = {
    NULL
  };

  // F4RC Register Class super-classes...
  static const TargetRegisterClass* const F4RCSuperclasses[] = {
    NULL
  };

  // F8RC Register Class super-classes...
  static const TargetRegisterClass* const F8RCSuperclasses[] = {
    &Alpha::F4RCRegClass, NULL
  };

  // GPRC Register Class super-classes...
  static const TargetRegisterClass* const GPRCSuperclasses[] = {
    NULL
  };


    F4RCClass::iterator
    F4RCClass::allocation_order_end(const MachineFunction &MF) const {
        return end()-1;
    }
  
F4RCClass::F4RCClass()  : TargetRegisterClass(F4RCRegClassID, "F4RC", F4RCVTs, F4RCSubclasses, F4RCSuperclasses, F4RCSubRegClasses, F4RCSuperRegClasses, 4, 8, 1, F4RC, F4RC + 32) {}

    F8RCClass::iterator
    F8RCClass::allocation_order_end(const MachineFunction &MF) const {
        return end()-1;
    }
  
F8RCClass::F8RCClass()  : TargetRegisterClass(F8RCRegClassID, "F8RC", F8RCVTs, F8RCSubclasses, F8RCSuperclasses, F8RCSubRegClasses, F8RCSuperRegClasses, 8, 8, 1, F8RC, F8RC + 32) {}

    GPRCClass::iterator
    GPRCClass::allocation_order_end(const MachineFunction &MF) const {
        return end()-3;
    }
  
GPRCClass::GPRCClass()  : TargetRegisterClass(GPRCRegClassID, "GPRC", GPRCVTs, GPRCSubclasses, GPRCSuperclasses, GPRCSubRegClasses, GPRCSuperRegClasses, 8, 8, 1, GPRC, GPRC + 32) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Alpha::F4RCRegClass,
    &Alpha::F8RCRegClass,
    &Alpha::GPRCRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { Alpha::NoRegister, Alpha::NoRegister, 
Alpha::NoRegister, Alpha::NoRegister };
  const unsigned SubregHashTableSize = 2;


  // Number of hash collisions: 0
  const unsigned SuperregHashTable[] = { Alpha::NoRegister, Alpha::NoRegister, 
Alpha::NoRegister, Alpha::NoRegister };
  const unsigned SuperregHashTableSize = 2;


  // Number of hash collisions: 0
  const unsigned AliasesHashTable[] = { Alpha::NoRegister, Alpha::NoRegister, 
Alpha::NoRegister, Alpha::NoRegister };
  const unsigned AliasesHashTableSize = 2;


  // Register Alias Sets...
  const unsigned Empty_AliasSet[] = { 0 };
  const unsigned F0_AliasSet[] = { 0 };
  const unsigned F1_AliasSet[] = { 0 };
  const unsigned F10_AliasSet[] = { 0 };
  const unsigned F11_AliasSet[] = { 0 };
  const unsigned F12_AliasSet[] = { 0 };
  const unsigned F13_AliasSet[] = { 0 };
  const unsigned F14_AliasSet[] = { 0 };
  const unsigned F15_AliasSet[] = { 0 };
  const unsigned F16_AliasSet[] = { 0 };
  const unsigned F17_AliasSet[] = { 0 };
  const unsigned F18_AliasSet[] = { 0 };
  const unsigned F19_AliasSet[] = { 0 };
  const unsigned F2_AliasSet[] = { 0 };
  const unsigned F20_AliasSet[] = { 0 };
  const unsigned F21_AliasSet[] = { 0 };
  const unsigned F22_AliasSet[] = { 0 };
  const unsigned F23_AliasSet[] = { 0 };
  const unsigned F24_AliasSet[] = { 0 };
  const unsigned F25_AliasSet[] = { 0 };
  const unsigned F26_AliasSet[] = { 0 };
  const unsigned F27_AliasSet[] = { 0 };
  const unsigned F28_AliasSet[] = { 0 };
  const unsigned F29_AliasSet[] = { 0 };
  const unsigned F3_AliasSet[] = { 0 };
  const unsigned F30_AliasSet[] = { 0 };
  const unsigned F31_AliasSet[] = { 0 };
  const unsigned F4_AliasSet[] = { 0 };
  const unsigned F5_AliasSet[] = { 0 };
  const unsigned F6_AliasSet[] = { 0 };
  const unsigned F7_AliasSet[] = { 0 };
  const unsigned F8_AliasSet[] = { 0 };
  const unsigned F9_AliasSet[] = { 0 };
  const unsigned R0_AliasSet[] = { 0 };
  const unsigned R1_AliasSet[] = { 0 };
  const unsigned R10_AliasSet[] = { 0 };
  const unsigned R11_AliasSet[] = { 0 };
  const unsigned R12_AliasSet[] = { 0 };
  const unsigned R13_AliasSet[] = { 0 };
  const unsigned R14_AliasSet[] = { 0 };
  const unsigned R15_AliasSet[] = { 0 };
  const unsigned R16_AliasSet[] = { 0 };
  const unsigned R17_AliasSet[] = { 0 };
  const unsigned R18_AliasSet[] = { 0 };
  const unsigned R19_AliasSet[] = { 0 };
  const unsigned R2_AliasSet[] = { 0 };
  const unsigned R20_AliasSet[] = { 0 };
  const unsigned R21_AliasSet[] = { 0 };
  const unsigned R22_AliasSet[] = { 0 };
  const unsigned R23_AliasSet[] = { 0 };
  const unsigned R24_AliasSet[] = { 0 };
  const unsigned R25_AliasSet[] = { 0 };
  const unsigned R26_AliasSet[] = { 0 };
  const unsigned R27_AliasSet[] = { 0 };
  const unsigned R28_AliasSet[] = { 0 };
  const unsigned R29_AliasSet[] = { 0 };
  const unsigned R3_AliasSet[] = { 0 };
  const unsigned R30_AliasSet[] = { 0 };
  const unsigned R31_AliasSet[] = { 0 };
  const unsigned R4_AliasSet[] = { 0 };
  const unsigned R5_AliasSet[] = { 0 };
  const unsigned R6_AliasSet[] = { 0 };
  const unsigned R7_AliasSet[] = { 0 };
  const unsigned R8_AliasSet[] = { 0 };
  const unsigned R9_AliasSet[] = { 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
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
  const unsigned R0_SubRegsSet[] = { 0 };
  const unsigned R1_SubRegsSet[] = { 0 };
  const unsigned R10_SubRegsSet[] = { 0 };
  const unsigned R11_SubRegsSet[] = { 0 };
  const unsigned R12_SubRegsSet[] = { 0 };
  const unsigned R13_SubRegsSet[] = { 0 };
  const unsigned R14_SubRegsSet[] = { 0 };
  const unsigned R15_SubRegsSet[] = { 0 };
  const unsigned R16_SubRegsSet[] = { 0 };
  const unsigned R17_SubRegsSet[] = { 0 };
  const unsigned R18_SubRegsSet[] = { 0 };
  const unsigned R19_SubRegsSet[] = { 0 };
  const unsigned R2_SubRegsSet[] = { 0 };
  const unsigned R20_SubRegsSet[] = { 0 };
  const unsigned R21_SubRegsSet[] = { 0 };
  const unsigned R22_SubRegsSet[] = { 0 };
  const unsigned R23_SubRegsSet[] = { 0 };
  const unsigned R24_SubRegsSet[] = { 0 };
  const unsigned R25_SubRegsSet[] = { 0 };
  const unsigned R26_SubRegsSet[] = { 0 };
  const unsigned R27_SubRegsSet[] = { 0 };
  const unsigned R28_SubRegsSet[] = { 0 };
  const unsigned R29_SubRegsSet[] = { 0 };
  const unsigned R3_SubRegsSet[] = { 0 };
  const unsigned R30_SubRegsSet[] = { 0 };
  const unsigned R31_SubRegsSet[] = { 0 };
  const unsigned R4_SubRegsSet[] = { 0 };
  const unsigned R5_SubRegsSet[] = { 0 };
  const unsigned R6_SubRegsSet[] = { 0 };
  const unsigned R7_SubRegsSet[] = { 0 };
  const unsigned R8_SubRegsSet[] = { 0 };
  const unsigned R9_SubRegsSet[] = { 0 };


  // Register Super-registers Sets...
  const unsigned Empty_SuperRegsSet[] = { 0 };
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
  const unsigned R0_SuperRegsSet[] = { 0 };
  const unsigned R1_SuperRegsSet[] = { 0 };
  const unsigned R10_SuperRegsSet[] = { 0 };
  const unsigned R11_SuperRegsSet[] = { 0 };
  const unsigned R12_SuperRegsSet[] = { 0 };
  const unsigned R13_SuperRegsSet[] = { 0 };
  const unsigned R14_SuperRegsSet[] = { 0 };
  const unsigned R15_SuperRegsSet[] = { 0 };
  const unsigned R16_SuperRegsSet[] = { 0 };
  const unsigned R17_SuperRegsSet[] = { 0 };
  const unsigned R18_SuperRegsSet[] = { 0 };
  const unsigned R19_SuperRegsSet[] = { 0 };
  const unsigned R2_SuperRegsSet[] = { 0 };
  const unsigned R20_SuperRegsSet[] = { 0 };
  const unsigned R21_SuperRegsSet[] = { 0 };
  const unsigned R22_SuperRegsSet[] = { 0 };
  const unsigned R23_SuperRegsSet[] = { 0 };
  const unsigned R24_SuperRegsSet[] = { 0 };
  const unsigned R25_SuperRegsSet[] = { 0 };
  const unsigned R26_SuperRegsSet[] = { 0 };
  const unsigned R27_SuperRegsSet[] = { 0 };
  const unsigned R28_SuperRegsSet[] = { 0 };
  const unsigned R29_SuperRegsSet[] = { 0 };
  const unsigned R3_SuperRegsSet[] = { 0 };
  const unsigned R30_SuperRegsSet[] = { 0 };
  const unsigned R31_SuperRegsSet[] = { 0 };
  const unsigned R4_SuperRegsSet[] = { 0 };
  const unsigned R5_SuperRegsSet[] = { 0 };
  const unsigned R6_SuperRegsSet[] = { 0 };
  const unsigned R7_SuperRegsSet[] = { 0 };
  const unsigned R8_SuperRegsSet[] = { 0 };
  const unsigned R9_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "$f0",	"F0",	F0_AliasSet,	F0_SubRegsSet,	F0_SuperRegsSet },
    { "$f1",	"F1",	F1_AliasSet,	F1_SubRegsSet,	F1_SuperRegsSet },
    { "$f10",	"F10",	F10_AliasSet,	F10_SubRegsSet,	F10_SuperRegsSet },
    { "$f11",	"F11",	F11_AliasSet,	F11_SubRegsSet,	F11_SuperRegsSet },
    { "$f12",	"F12",	F12_AliasSet,	F12_SubRegsSet,	F12_SuperRegsSet },
    { "$f13",	"F13",	F13_AliasSet,	F13_SubRegsSet,	F13_SuperRegsSet },
    { "$f14",	"F14",	F14_AliasSet,	F14_SubRegsSet,	F14_SuperRegsSet },
    { "$f15",	"F15",	F15_AliasSet,	F15_SubRegsSet,	F15_SuperRegsSet },
    { "$f16",	"F16",	F16_AliasSet,	F16_SubRegsSet,	F16_SuperRegsSet },
    { "$f17",	"F17",	F17_AliasSet,	F17_SubRegsSet,	F17_SuperRegsSet },
    { "$f18",	"F18",	F18_AliasSet,	F18_SubRegsSet,	F18_SuperRegsSet },
    { "$f19",	"F19",	F19_AliasSet,	F19_SubRegsSet,	F19_SuperRegsSet },
    { "$f2",	"F2",	F2_AliasSet,	F2_SubRegsSet,	F2_SuperRegsSet },
    { "$f20",	"F20",	F20_AliasSet,	F20_SubRegsSet,	F20_SuperRegsSet },
    { "$f21",	"F21",	F21_AliasSet,	F21_SubRegsSet,	F21_SuperRegsSet },
    { "$f22",	"F22",	F22_AliasSet,	F22_SubRegsSet,	F22_SuperRegsSet },
    { "$f23",	"F23",	F23_AliasSet,	F23_SubRegsSet,	F23_SuperRegsSet },
    { "$f24",	"F24",	F24_AliasSet,	F24_SubRegsSet,	F24_SuperRegsSet },
    { "$f25",	"F25",	F25_AliasSet,	F25_SubRegsSet,	F25_SuperRegsSet },
    { "$f26",	"F26",	F26_AliasSet,	F26_SubRegsSet,	F26_SuperRegsSet },
    { "$f27",	"F27",	F27_AliasSet,	F27_SubRegsSet,	F27_SuperRegsSet },
    { "$f28",	"F28",	F28_AliasSet,	F28_SubRegsSet,	F28_SuperRegsSet },
    { "$f29",	"F29",	F29_AliasSet,	F29_SubRegsSet,	F29_SuperRegsSet },
    { "$f3",	"F3",	F3_AliasSet,	F3_SubRegsSet,	F3_SuperRegsSet },
    { "$f30",	"F30",	F30_AliasSet,	F30_SubRegsSet,	F30_SuperRegsSet },
    { "$f31",	"F31",	F31_AliasSet,	F31_SubRegsSet,	F31_SuperRegsSet },
    { "$f4",	"F4",	F4_AliasSet,	F4_SubRegsSet,	F4_SuperRegsSet },
    { "$f5",	"F5",	F5_AliasSet,	F5_SubRegsSet,	F5_SuperRegsSet },
    { "$f6",	"F6",	F6_AliasSet,	F6_SubRegsSet,	F6_SuperRegsSet },
    { "$f7",	"F7",	F7_AliasSet,	F7_SubRegsSet,	F7_SuperRegsSet },
    { "$f8",	"F8",	F8_AliasSet,	F8_SubRegsSet,	F8_SuperRegsSet },
    { "$f9",	"F9",	F9_AliasSet,	F9_SubRegsSet,	F9_SuperRegsSet },
    { "$0",	"R0",	R0_AliasSet,	R0_SubRegsSet,	R0_SuperRegsSet },
    { "$1",	"R1",	R1_AliasSet,	R1_SubRegsSet,	R1_SuperRegsSet },
    { "$10",	"R10",	R10_AliasSet,	R10_SubRegsSet,	R10_SuperRegsSet },
    { "$11",	"R11",	R11_AliasSet,	R11_SubRegsSet,	R11_SuperRegsSet },
    { "$12",	"R12",	R12_AliasSet,	R12_SubRegsSet,	R12_SuperRegsSet },
    { "$13",	"R13",	R13_AliasSet,	R13_SubRegsSet,	R13_SuperRegsSet },
    { "$14",	"R14",	R14_AliasSet,	R14_SubRegsSet,	R14_SuperRegsSet },
    { "$15",	"R15",	R15_AliasSet,	R15_SubRegsSet,	R15_SuperRegsSet },
    { "$16",	"R16",	R16_AliasSet,	R16_SubRegsSet,	R16_SuperRegsSet },
    { "$17",	"R17",	R17_AliasSet,	R17_SubRegsSet,	R17_SuperRegsSet },
    { "$18",	"R18",	R18_AliasSet,	R18_SubRegsSet,	R18_SuperRegsSet },
    { "$19",	"R19",	R19_AliasSet,	R19_SubRegsSet,	R19_SuperRegsSet },
    { "$2",	"R2",	R2_AliasSet,	R2_SubRegsSet,	R2_SuperRegsSet },
    { "$20",	"R20",	R20_AliasSet,	R20_SubRegsSet,	R20_SuperRegsSet },
    { "$21",	"R21",	R21_AliasSet,	R21_SubRegsSet,	R21_SuperRegsSet },
    { "$22",	"R22",	R22_AliasSet,	R22_SubRegsSet,	R22_SuperRegsSet },
    { "$23",	"R23",	R23_AliasSet,	R23_SubRegsSet,	R23_SuperRegsSet },
    { "$24",	"R24",	R24_AliasSet,	R24_SubRegsSet,	R24_SuperRegsSet },
    { "$25",	"R25",	R25_AliasSet,	R25_SubRegsSet,	R25_SuperRegsSet },
    { "$26",	"R26",	R26_AliasSet,	R26_SubRegsSet,	R26_SuperRegsSet },
    { "$27",	"R27",	R27_AliasSet,	R27_SubRegsSet,	R27_SuperRegsSet },
    { "$28",	"R28",	R28_AliasSet,	R28_SubRegsSet,	R28_SuperRegsSet },
    { "$29",	"R29",	R29_AliasSet,	R29_SubRegsSet,	R29_SuperRegsSet },
    { "$3",	"R3",	R3_AliasSet,	R3_SubRegsSet,	R3_SuperRegsSet },
    { "$30",	"R30",	R30_AliasSet,	R30_SubRegsSet,	R30_SuperRegsSet },
    { "$31",	"R31",	R31_AliasSet,	R31_SubRegsSet,	R31_SuperRegsSet },
    { "$4",	"R4",	R4_AliasSet,	R4_SubRegsSet,	R4_SuperRegsSet },
    { "$5",	"R5",	R5_AliasSet,	R5_SubRegsSet,	R5_SuperRegsSet },
    { "$6",	"R6",	R6_AliasSet,	R6_SubRegsSet,	R6_SuperRegsSet },
    { "$7",	"R7",	R7_AliasSet,	R7_SubRegsSet,	R7_SuperRegsSet },
    { "$8",	"R8",	R8_AliasSet,	R8_SubRegsSet,	R8_SuperRegsSet },
    { "$9",	"R9",	R9_AliasSet,	R9_SubRegsSet,	R9_SuperRegsSet },
  };
}

unsigned AlphaGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

AlphaGenRegisterInfo::AlphaGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 65, RegisterClasses, RegisterClasses+3,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 SuperregHashTable, SuperregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int AlphaGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case Alpha::F0:
      return 33;
    case Alpha::F1:
      return 34;
    case Alpha::F10:
      return 43;
    case Alpha::F11:
      return 44;
    case Alpha::F12:
      return 45;
    case Alpha::F13:
      return 46;
    case Alpha::F14:
      return 47;
    case Alpha::F15:
      return 48;
    case Alpha::F16:
      return 49;
    case Alpha::F17:
      return 50;
    case Alpha::F18:
      return 51;
    case Alpha::F19:
      return 52;
    case Alpha::F2:
      return 35;
    case Alpha::F20:
      return 53;
    case Alpha::F21:
      return 54;
    case Alpha::F22:
      return 55;
    case Alpha::F23:
      return 56;
    case Alpha::F24:
      return 57;
    case Alpha::F25:
      return 58;
    case Alpha::F26:
      return 59;
    case Alpha::F27:
      return 60;
    case Alpha::F28:
      return 61;
    case Alpha::F29:
      return 62;
    case Alpha::F3:
      return 36;
    case Alpha::F30:
      return 63;
    case Alpha::F31:
      return 64;
    case Alpha::F4:
      return 37;
    case Alpha::F5:
      return 38;
    case Alpha::F6:
      return 39;
    case Alpha::F7:
      return 40;
    case Alpha::F8:
      return 41;
    case Alpha::F9:
      return 42;
    case Alpha::R0:
      return 0;
    case Alpha::R1:
      return 1;
    case Alpha::R10:
      return 10;
    case Alpha::R11:
      return 11;
    case Alpha::R12:
      return 12;
    case Alpha::R13:
      return 13;
    case Alpha::R14:
      return 14;
    case Alpha::R15:
      return 15;
    case Alpha::R16:
      return 16;
    case Alpha::R17:
      return 17;
    case Alpha::R18:
      return 18;
    case Alpha::R19:
      return 19;
    case Alpha::R2:
      return 2;
    case Alpha::R20:
      return 20;
    case Alpha::R21:
      return 21;
    case Alpha::R22:
      return 22;
    case Alpha::R23:
      return 23;
    case Alpha::R24:
      return 24;
    case Alpha::R25:
      return 25;
    case Alpha::R26:
      return 26;
    case Alpha::R27:
      return 27;
    case Alpha::R28:
      return 28;
    case Alpha::R29:
      return 29;
    case Alpha::R3:
      return 3;
    case Alpha::R30:
      return 30;
    case Alpha::R31:
      return 31;
    case Alpha::R4:
      return 4;
    case Alpha::R5:
      return 5;
    case Alpha::R6:
      return 6;
    case Alpha::R7:
      return 7;
    case Alpha::R8:
      return 8;
    case Alpha::R9:
      return 9;
    };
  };
}

} // End llvm namespace 
