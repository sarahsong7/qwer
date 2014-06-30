//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Descriptors
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

static const TargetRegisterClass* Barriers1[] = { &PIC16::STATUSRRegClass, NULL };
static const unsigned ImplicitList1[] = { PIC16::STATUS, 0 };
static const TargetRegisterClass* Barriers2[] = { &PIC16::FSR16RegClass, &PIC16::GPRRegClass, NULL };
static const unsigned ImplicitList2[] = { PIC16::W, PIC16::FSR0, PIC16::FSR1, 0 };
static const TargetRegisterClass* Barriers3[] = { &PIC16::FSR16RegClass, NULL };
static const unsigned ImplicitList3[] = { PIC16::FSR0, PIC16::FSR1, 0 };

static const TargetOperandInfo OperandInfo2[] = { { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo3[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, ((0 << 16) | (1 << TOI::TIED_TO)) }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo4[] = { { PIC16::GPRRegClassID, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo5[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, { PIC16::PCLATHRRegClassID, 0, 0 }, };
static const TargetOperandInfo OperandInfo6[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::PCLATHRRegClassID, 0, 0 }, };
static const TargetOperandInfo OperandInfo7[] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo8[] = { { 0, 0, 0 }, { 0, 0, ((0 << 16) | (1 << TOI::TIED_TO)) }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo9[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo10[] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo11[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, ((0 << 16) | (1 << TOI::TIED_TO)) }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo12[] = { { PIC16::FSR16RegClassID, 0, 0 }, { PIC16::FSR16RegClassID, 0, 0 }, };
static const TargetOperandInfo OperandInfo13[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, };
static const TargetOperandInfo OperandInfo14[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::FSR16RegClassID, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo15[] = { { PIC16::GPRRegClassID, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo16[] = { { PIC16::GPRRegClassID, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo17[] = { { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo18[] = { { PIC16::FSR16RegClassID, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo19[] = { { PIC16::FSR16RegClassID, 0, 0 }, { PIC16::FSR16RegClassID, 0, ((0 << 16) | (1 << TOI::TIED_TO)) }, { PIC16::GPRRegClassID, 0, 0 }, };
static const TargetOperandInfo OperandInfo20[] = { { PIC16::FSR16RegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, };
static const TargetOperandInfo OperandInfo21[] = { { PIC16::PCLATHRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, };

static const TargetInstrDesc PIC16Insts[] = {
  { 0,	0,	0,	0,	"PHI", 0|(1<<TID::Variadic)|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	"INLINEASM", 0|(1<<TID::Variadic)|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	"DBG_LABEL", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #2 = DBG_LABEL
  { 3,	1,	0,	0,	"EH_LABEL", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	"GC_LABEL", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	"DECLARE", 0|(1<<TID::Variadic)|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, 0 },  // Inst #5 = DECLARE
  { 6,	3,	1,	0,	"EXTRACT_SUBREG", 0, 0, NULL, NULL, NULL, OperandInfo7 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	"INSERT_SUBREG", 0, 0, NULL, NULL, NULL, OperandInfo8 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	"IMPLICIT_DEF", 0|(1<<TID::Rematerializable)|(1<<TID::CheapAsAMove), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	"SUBREG_TO_REG", 0, 0, NULL, NULL, NULL, OperandInfo10 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	"COPY_TO_REGCLASS", 0|(1<<TID::CheapAsAMove), 0, NULL, NULL, NULL, OperandInfo7 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	1,	0,	0,	"ADJCALLSTACKDOWN", 0, 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #11 = ADJCALLSTACKDOWN
  { 12,	1,	0,	0,	"ADJCALLSTACKUP", 0, 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #12 = ADJCALLSTACKUP
  { 13,	5,	1,	0,	"AndFW", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #13 = AndFW
  { 14,	4,	0,	0,	"AndWF", 0|(1<<TID::MayStore), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #14 = AndWF
  { 15,	1,	0,	0,	"CALL", 0|(1<<TID::Call), 0, NULL, ImplicitList2, Barriers2, OperandInfo2 },  // Inst #15 = CALL
  { 16,	3,	1,	0,	"CALLW", 0|(1<<TID::Call), 0, NULL, ImplicitList3, Barriers3, OperandInfo5 },  // Inst #16 = CALLW
  { 17,	2,	0,	0,	"CALL_1", 0|(1<<TID::Call), 0, NULL, ImplicitList2, Barriers2, OperandInfo6 },  // Inst #17 = CALL_1
  { 18,	5,	1,	0,	"OrFW", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #18 = OrFW
  { 19,	4,	0,	0,	"OrWF", 0|(1<<TID::MayStore), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #19 = OrWF
  { 20,	0,	0,	0,	"Return", 0|(1<<TID::Return)|(1<<TID::Barrier)|(1<<TID::Terminator), 0, NULL, NULL, NULL, 0 },  // Inst #20 = Return
  { 21,	4,	1,	0,	"SELECT_CC_Int_ICC", 0|(1<<TID::UsesCustomDAGSchedInserter), 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #21 = SELECT_CC_Int_ICC
  { 22,	5,	1,	0,	"XOrFW", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #22 = XOrFW
  { 23,	4,	0,	0,	"XOrWF", 0|(1<<TID::MayStore), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #23 = XOrWF
  { 24,	5,	1,	0,	"addfw_1", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #24 = addfw_1
  { 25,	5,	1,	0,	"addfw_2", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #25 = addfw_2
  { 26,	5,	1,	0,	"addfwc", 0|(1<<TID::MayLoad), 0, ImplicitList1, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #26 = addfwc
  { 27,	3,	1,	0,	"addlw_1", 0, 0, NULL, ImplicitList1, Barriers1, OperandInfo11 },  // Inst #27 = addlw_1
  { 28,	3,	1,	0,	"addlw_2", 0, 0, NULL, ImplicitList1, Barriers1, OperandInfo11 },  // Inst #28 = addlw_2
  { 29,	3,	1,	0,	"addlwc", 0, 0, ImplicitList1, ImplicitList1, Barriers1, OperandInfo11 },  // Inst #29 = addlwc
  { 30,	4,	0,	0,	"addwf_1", 0|(1<<TID::MayStore), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #30 = addwf_1
  { 31,	4,	0,	0,	"addwf_2", 0|(1<<TID::MayStore), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #31 = addwf_2
  { 32,	4,	0,	0,	"addwfc", 0|(1<<TID::MayStore), 0, ImplicitList1, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #32 = addwfc
  { 33,	3,	1,	0,	"andlw", 0, 0, NULL, ImplicitList1, Barriers1, OperandInfo11 },  // Inst #33 = andlw
  { 34,	1,	0,	0,	"banksel", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #34 = banksel
  { 35,	1,	0,	0,	"br_uncond", 0|(1<<TID::Branch)|(1<<TID::Terminator), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #35 = br_uncond
  { 36,	2,	1,	0,	"copy_fsr", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo12 },  // Inst #36 = copy_fsr
  { 37,	2,	1,	0,	"copy_w", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo13 },  // Inst #37 = copy_w
  { 38,	3,	1,	0,	"load_indirect", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo14 },  // Inst #38 = load_indirect
  { 39,	4,	1,	0,	"movf", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #39 = movf
  { 40,	4,	1,	0,	"movf_1", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #40 = movf_1
  { 41,	4,	1,	0,	"movf_1_1", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #41 = movf_1_1
  { 42,	4,	1,	0,	"movf_2", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #42 = movf_2
  { 43,	2,	1,	0,	"movlw", 0|(1<<TID::Rematerializable), 0, NULL, NULL, NULL, OperandInfo15 },  // Inst #43 = movlw
  { 44,	3,	1,	0,	"movlw_hi_1", 0|(1<<TID::Rematerializable), 0, NULL, NULL, NULL, OperandInfo16 },  // Inst #44 = movlw_hi_1
  { 45,	3,	1,	0,	"movlw_hi_2", 0|(1<<TID::Rematerializable), 0, NULL, NULL, NULL, OperandInfo16 },  // Inst #45 = movlw_hi_2
  { 46,	3,	1,	0,	"movlw_lo_1", 0|(1<<TID::Rematerializable), 0, NULL, NULL, NULL, OperandInfo16 },  // Inst #46 = movlw_lo_1
  { 47,	3,	1,	0,	"movlw_lo_2", 0|(1<<TID::Rematerializable), 0, NULL, NULL, NULL, OperandInfo16 },  // Inst #47 = movlw_lo_2
  { 48,	4,	0,	0,	"movwf", 0|(1<<TID::MayStore), 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #48 = movwf
  { 49,	4,	0,	0,	"movwf_1", 0|(1<<TID::MayStore), 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #49 = movwf_1
  { 50,	4,	0,	0,	"movwf_2", 0|(1<<TID::MayStore), 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #50 = movwf_2
  { 51,	3,	1,	0,	"orlw", 0, 0, NULL, ImplicitList1, Barriers1, OperandInfo11 },  // Inst #51 = orlw
  { 52,	1,	0,	0,	"pagesel", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #52 = pagesel
  { 53,	2,	0,	0,	"pic16brcond", 0|(1<<TID::Branch)|(1<<TID::Terminator), 0, ImplicitList1, NULL, NULL, OperandInfo17 },  // Inst #53 = pic16brcond
  { 54,	4,	1,	0,	"restore_fsr0", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo18 },  // Inst #54 = restore_fsr0
  { 55,	4,	1,	0,	"restore_fsr1", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo18 },  // Inst #55 = restore_fsr1
  { 56,	4,	0,	0,	"save_fsr0", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo18 },  // Inst #56 = save_fsr0
  { 57,	4,	0,	0,	"save_fsr1", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo18 },  // Inst #57 = save_fsr1
  { 58,	3,	1,	0,	"set_fsrhi", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo19 },  // Inst #58 = set_fsrhi
  { 59,	2,	1,	0,	"set_fsrlo", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo20 },  // Inst #59 = set_fsrlo
  { 60,	2,	1,	0,	"set_pclath", 0, 0, NULL, NULL, NULL, OperandInfo21 },  // Inst #60 = set_pclath
  { 61,	3,	0,	0,	"store_indirect", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo14 },  // Inst #61 = store_indirect
  { 62,	5,	1,	0,	"subfw_1", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #62 = subfw_1
  { 63,	5,	1,	0,	"subfw_2", 0|(1<<TID::MayLoad), 0, NULL, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #63 = subfw_2
  { 64,	5,	1,	0,	"subfw_cc", 0|(1<<TID::MayLoad)|(1<<TID::Terminator), 0, NULL, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #64 = subfw_cc
  { 65,	5,	1,	0,	"subfwb", 0|(1<<TID::MayLoad), 0, ImplicitList1, ImplicitList1, Barriers1, OperandInfo3 },  // Inst #65 = subfwb
  { 66,	3,	1,	0,	"sublw_1", 0, 0, NULL, ImplicitList1, Barriers1, OperandInfo11 },  // Inst #66 = sublw_1
  { 67,	3,	1,	0,	"sublw_2", 0, 0, NULL, ImplicitList1, Barriers1, OperandInfo11 },  // Inst #67 = sublw_2
  { 68,	3,	1,	0,	"sublw_cc", 0|(1<<TID::Terminator), 0, NULL, ImplicitList1, Barriers1, OperandInfo11 },  // Inst #68 = sublw_cc
  { 69,	4,	0,	0,	"subwf_1", 0|(1<<TID::MayStore), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #69 = subwf_1
  { 70,	4,	0,	0,	"subwf_2", 0|(1<<TID::MayStore), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #70 = subwf_2
  { 71,	4,	0,	0,	"subwf_cc", 0|(1<<TID::MayStore), 0, NULL, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #71 = subwf_cc
  { 72,	4,	0,	0,	"subwfb", 0|(1<<TID::MayStore), 0, ImplicitList1, ImplicitList1, Barriers1, OperandInfo4 },  // Inst #72 = subwfb
  { 73,	3,	1,	0,	"xorlw", 0, 0, NULL, ImplicitList1, Barriers1, OperandInfo11 },  // Inst #73 = xorlw
};
} // End llvm namespace 
