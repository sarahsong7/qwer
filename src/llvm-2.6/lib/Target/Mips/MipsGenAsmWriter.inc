//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Assembly Writer Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

/// printInstruction - This method is automatically generated by tablegen
/// from the instruction set description.  This method returns true if the
/// machine instruction was sufficiently described to print it, otherwise
/// it returns false.
void MipsAsmPrinter::printInstruction(const MachineInstr *MI) {
  static const unsigned OpInfo[] = {
    536870914U,	// PHI
    0U,	// INLINEASM
    0U,	// DBG_LABEL
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// DECLARE
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    1073741834U,	// ADD
    1073741839U,	// ADDi
    1073741845U,	// ADDiu
    1073741852U,	// ADDu
    1677721634U,	// ADJCALLSTACKDOWN
    1677721653U,	// ADJCALLSTACKUP
    1073741894U,	// AND
    1075839051U,	// ANDi
    1140850769U,	// BC1F
    1140850775U,	// BC1FL
    1140850782U,	// BC1T
    1140850788U,	// BC1TL
    1073741931U,	// BEQ
    1077936240U,	// BGEZ
    1077936246U,	// BGEZAL
    1077936254U,	// BGTZ
    1077936260U,	// BLEZ
    1077936266U,	// BLTZ
    1077936272U,	// BLTZAL
    1073741976U,	// BNE
    1077936285U,	// CEIL_LD
    1077936285U,	// CEIL_LS
    1077936293U,	// CEIL_W_D32
    1077936303U,	// CEIL_W_S32
    1077936313U,	// CFC1
    1077936319U,	// CLZ
    1140850884U,	// CPLOAD
    1744830669U,	// CPRESTORE
    2147483865U,	// CTC1
    1077936351U,	// CVTD_L32
    1077936360U,	// CVTD_S32
    1077936369U,	// CVTD_W32
    1077936378U,	// CVTL_D
    1077936378U,	// CVTL_S
    1077936385U,	// CVTS_D32
    1077936394U,	// CVTS_L32
    1077936403U,	// CVTS_W32
    1077936412U,	// CVTW_D32
    1077936421U,	// CVTW_S32
    1077936430U,	// DIV
    1077936435U,	// DIVu
    1077936441U,	// FABS_D32
    1077936448U,	// FABS_S32
    1073742151U,	// FADD_D32
    1073742158U,	// FADD_S32
    2885681493U,	// FCMP_D32
    2952790357U,	// FCMP_S32
    1073742168U,	// FDIV_D32
    1073742175U,	// FDIV_S32
    1077936486U,	// FLOOR_LD
    1077936486U,	// FLOOR_LS
    1077936495U,	// FLOOR_W_D32
    1077936506U,	// FLOOR_W_S32
    1077936517U,	// FMOV_D32
    1077936524U,	// FMOV_S32
    1073742227U,	// FMUL_D32
    1073742234U,	// FMUL_S32
    1077936545U,	// FNEG_D32
    1077936552U,	// FNEG_S32
    1077936559U,	// FSQRT_D32
    1077936567U,	// FSQRT_S32
    1073742271U,	// FSUB_D32
    1073742278U,	// FSUB_S32
    1140851149U,	// J
    1140851152U,	// JAL
    1140851157U,	// JALR
    1140851163U,	// JR
    1082130911U,	// LB
    1082130915U,	// LBu
    1082130920U,	// LDC1
    1090519061U,	// LEA_ADDiu
    1082130926U,	// LH
    1082130930U,	// LHu
    1098908151U,	// LUi
    1082130940U,	// LW
    1082130944U,	// LWC1
    536871430U,	// MACRO
    1077936657U,	// MFC1
    1140851223U,	// MFHI
    1140851229U,	// MFLO
    536871459U,	// MOVCCRToCCR
    1107296817U,	// MOVN
    1107296823U,	// MOVZ
    2147484221U,	// MTC1
    1140851267U,	// MTHI
    1140851273U,	// MTLO
    1077936719U,	// MULT
    1077936725U,	// MULTu
    536871516U,	// NOMACRO
    536871529U,	// NOP
    1073742445U,	// NOR
    536871538U,	// NOREORDER
    1073742465U,	// OR
    1075839621U,	// ORi
    536871562U,	// REORDER
    1140851163U,	// RET
    1077936791U,	// ROUND_LD
    1077936791U,	// ROUND_LS
    1077936800U,	// ROUND_W_D32
    1077936811U,	// ROUND_W_S32
    1082131126U,	// SB
    1082131130U,	// SDC1
    1077936832U,	// SEB
    1077936837U,	// SEH
    1082131146U,	// SH
    1073742542U,	// SLL
    1073742547U,	// SLLV
    1073742553U,	// SLT
    1073742558U,	// SLTi
    1073742564U,	// SLTiu
    1073742571U,	// SLTu
    1073742577U,	// SRA
    1073742582U,	// SRAV
    1073742588U,	// SRL
    1073742593U,	// SRLV
    1073742599U,	// SUB
    1073742604U,	// SUBu
    1082131218U,	// SW
    1082131222U,	// SWC1
    536871708U,	// Select_CC
    536871728U,	// Select_CC_D32
    536871752U,	// Select_CC_S32
    536871776U,	// Select_FCC
    536871793U,	// Select_FCC_D32
    536871818U,	// Select_FCC_S32
    1077937059U,	// TRUNC_LD
    1077937059U,	// TRUNC_LS
    1077937068U,	// TRUNC_W_D32
    1077937079U,	// TRUNC_W_S32
    1077937090U,	// WSBW
    1073742792U,	// XOR
    1075839949U,	// XORi
    0U
  };

  const char *AsmStrs = 
    "\000\000PHINODE\000add\t\000addi\t\000addiu\t\000addu\t\000!ADJCALLSTAC"
    "KDOWN \000!ADJCALLSTACKUP \000and\t\000andi\t\000bc1f \000bc1fl \000bc1"
    "t \000bc1tl \000beq\t\000bgez\t\000bgezal\t\000bgtz\t\000blez\t\000bltz"
    "\t\000bltzal\t\000bne\t\000ceil.l \000ceil.w.d \000ceil.w.s \000cfc1 \000"
    "clz\t\000.cpload\t\000.cprestore\t\000ctc1 \000cvt.d.l \000cvt.d.s \000"
    "cvt.d.w \000cvt.l \000cvt.s.d \000cvt.s.l \000cvt.s.w \000cvt.w.d \000c"
    "vt.w.s \000div\t\000divu\t\000abs.d \000abs.s \000add.d \000add.s \000c"
    ".\000div.d \000div.s \000floor.l \000floor.w.d \000floor.w.s \000mov.d "
    "\000mov.s \000mul.d \000mul.s \000neg.d \000neg.s \000sqrt.d \000sqrt.s"
    " \000sub.d \000sub.s \000j\t\000jal\t\000jalr\t\000jr\t\000lb\t\000lbu\t"
    "\000ldc1 \000lh\t\000lhu\t\000lui\t\000lw\t\000lwc1 \000.set\tmacro\000"
    "mfc1 \000mfhi\t\000mflo\t\000# MOVCCRToCCR\000movn\t\000movz\t\000mtc1 "
    "\000mthi\t\000mtlo\t\000mult\t\000multu\t\000.set\tnomacro\000nop\000no"
    "r\t\000.set\tnoreorder\000or\t\000ori\t\000.set\treorder\000round.l \000"
    "round.w.d \000round.w.s \000sb\t\000sdc1 \000seb\t\000seh\t\000sh\t\000"
    "sll\t\000sllv\t\000slt\t\000slti\t\000sltiu\t\000sltu\t\000sra\t\000sra"
    "v\t\000srl\t\000srlv\t\000sub\t\000subu\t\000sw\t\000swc1 \000# MipsSel"
    "ect_CC_i32\000# MipsSelect_CC_D32_f32\000# MipsSelect_CC_S32_f32\000# M"
    "ipsSelect_FCC\000# MipsSelect_FCC_D32_f32\000# MipsSelect_FCC_S32_f32\000"
    "trunc.l \000trunc.w.d \000trunc.w.s \000wsbw\t\000xor\t\000xori\t\000";

  processDebugLoc(MI->getDebugLoc());


#ifndef NO_ASM_WRITER_BOILERPLATE
  if (MI->getOpcode() == TargetInstrInfo::INLINEASM) {
    O << "\t";
    printInlineAsm(MI);
    return;
  } else if (MI->isLabel()) {
    printLabel(MI);
    return;
  } else if (MI->getOpcode() == TargetInstrInfo::DECLARE) {
    printDeclare(MI);
    return;
  } else if (MI->getOpcode() == TargetInstrInfo::IMPLICIT_DEF) {
    printImplicitDef(MI);
    return;
  }


#endif
  O << "\t";

  // Emit the opcode for the instruction.
  unsigned Bits = OpInfo[MI->getOpcode()];
  assert(Bits != 0 && "Cannot print this instruction.");
  O << AsmStrs+(Bits & 1023);


  // Fragment 0 encoded into 3 bits for 6 unique commands.
  switch ((Bits >> 29) & 7) {
  default:   // unreachable.
  case 0:
    return;
    break;
  case 1:
    // PHI, MACRO, MOVCCRToCCR, NOMACRO, NOP, NOREORDER, REORDER, Select_CC, ...
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  case 2:
    // ADD, ADDi, ADDiu, ADDu, AND, ANDi, BC1F, BC1FL, BC1T, BC1TL, BEQ, BGEZ...
    printOperand(MI, 0); 
    break;
  case 3:
    // ADJCALLSTACKDOWN, ADJCALLSTACKUP, CPRESTORE
    printUnsignedImm(MI, 0); 
    break;
  case 4:
    // CTC1, MTC1
    printOperand(MI, 1); 
    O << ", "; 
    printOperand(MI, 0); 
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  case 5:
    // FCMP_D32, FCMP_S32
    printFCCOperand(MI, 2); 
    break;
  }


  // Fragment 1 encoded into 3 bits for 5 unique commands.
  switch ((Bits >> 26) & 7) {
  default:   // unreachable.
  case 0:
    // ADD, ADDi, ADDiu, ADDu, AND, ANDi, BEQ, BGEZ, BGEZAL, BGTZ, BLEZ, BLTZ...
    O << ", "; 
    break;
  case 1:
    // ADJCALLSTACKDOWN, ADJCALLSTACKUP, BC1F, BC1FL, BC1T, BC1TL, CPLOAD, J,...
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  case 2:
    // CPRESTORE
    O << "\n"; 
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  case 3:
    // FCMP_D32
    O << ".d "; 
    printOperand(MI, 0); 
    O << ", "; 
    printOperand(MI, 1); 
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  case 4:
    // FCMP_S32
    O << ".s "; 
    printOperand(MI, 0); 
    O << ", "; 
    printOperand(MI, 1); 
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  }


  // Fragment 2 encoded into 3 bits for 5 unique commands.
  switch ((Bits >> 23) & 7) {
  default:   // unreachable.
  case 0:
    // ADD, ADDi, ADDiu, ADDu, AND, ANDi, BEQ, BGEZ, BGEZAL, BGTZ, BLEZ, BLTZ...
    printOperand(MI, 1); 
    break;
  case 1:
    // LB, LBu, LDC1, LH, LHu, LW, LWC1, SB, SDC1, SH, SW, SWC1
    printMemOperand(MI, 1); 
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  case 2:
    // LEA_ADDiu
    printMemOperand(MI, 1, "stackloc"); 
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  case 3:
    // LUi
    printUnsignedImm(MI, 1); 
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  case 4:
    // MOVN, MOVZ
    printOperand(MI, 2); 
    O << ", "; 
    printOperand(MI, 3); 
    EmitComments(*MI);

    O << "\n"; 
    return;
    break;
  }


  // Fragment 3 encoded into 1 bits for 2 unique commands.
  if ((Bits >> 22) & 1) {
    // BGEZ, BGEZAL, BGTZ, BLEZ, BLTZ, BLTZAL, CEIL_LD, CEIL_LS, CEIL_W_D32, ...
    EmitComments(*MI);

    O << "\n"; 
    return;
  } else {
    // ADD, ADDi, ADDiu, ADDu, AND, ANDi, BEQ, BNE, FADD_D32, FADD_S32, FDIV_...
    O << ", "; 
  }


  // Fragment 4 encoded into 1 bits for 2 unique commands.
  if ((Bits >> 21) & 1) {
    // ANDi, ORi, XORi
    printUnsignedImm(MI, 2); 
    EmitComments(*MI);

    O << "\n"; 
    return;
  } else {
    // ADD, ADDi, ADDiu, ADDu, AND, BEQ, BNE, FADD_D32, FADD_S32, FDIV_D32, F...
    printOperand(MI, 2); 
    EmitComments(*MI);

    O << "\n"; 
    return;
  }

  return;
}
