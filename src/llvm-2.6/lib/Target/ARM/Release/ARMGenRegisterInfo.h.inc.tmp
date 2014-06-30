//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Header Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

#include "llvm/Target/TargetRegisterInfo.h"
#include <string>

namespace llvm {

struct ARMGenRegisterInfo : public TargetRegisterInfo {
  explicit ARMGenRegisterInfo(int CallFrameSetupOpcode = -1, int CallFrameDestroyOpcode = -1);
  virtual int getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const;
  virtual int getDwarfRegNum(unsigned RegNum, bool isEH) const = 0;
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
};

namespace ARM { // Register classes
  enum {
    CCRRegClassID = 1,
    DPRRegClassID = 2,
    DPR_VFP2RegClassID = 3,
    GPRRegClassID = 4,
    QPRRegClassID = 5,
    SPRRegClassID = 6,
    tGPRRegClassID = 7
  };

  struct CCRClass : public TargetRegisterClass {
    CCRClass();
  };
  extern CCRClass	CCRRegClass;
  static TargetRegisterClass * const CCRRegisterClass = &CCRRegClass;
  struct DPRClass : public TargetRegisterClass {
    DPRClass();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern DPRClass	DPRRegClass;
  static TargetRegisterClass * const DPRRegisterClass = &DPRRegClass;
  struct DPR_VFP2Class : public TargetRegisterClass {
    DPR_VFP2Class();
  };
  extern DPR_VFP2Class	DPR_VFP2RegClass;
  static TargetRegisterClass * const DPR_VFP2RegisterClass = &DPR_VFP2RegClass;
  struct GPRClass : public TargetRegisterClass {
    GPRClass();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GPRClass	GPRRegClass;
  static TargetRegisterClass * const GPRRegisterClass = &GPRRegClass;
  struct QPRClass : public TargetRegisterClass {
    QPRClass();
  };
  extern QPRClass	QPRRegClass;
  static TargetRegisterClass * const QPRRegisterClass = &QPRRegClass;
  struct SPRClass : public TargetRegisterClass {
    SPRClass();
  };
  extern SPRClass	SPRRegClass;
  static TargetRegisterClass * const SPRRegisterClass = &SPRRegClass;
  struct tGPRClass : public TargetRegisterClass {
    tGPRClass();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern tGPRClass	tGPRRegClass;
  static TargetRegisterClass * const tGPRRegisterClass = &tGPRRegClass;
} // end of namespace ARM

} // End llvm namespace 
