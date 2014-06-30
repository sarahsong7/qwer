//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Subtarget Enumeration Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

#include "llvm/Target/SubtargetFeature.h"
#include "llvm/Target/TargetInstrItineraries.h"

enum {
  FU_Issue =  1 << 0,
  FU_LdSt0 =  1 << 1,
  FU_LdSt1 =  1 << 2,
  FU_Pipe0 =  1 << 3,
  FU_Pipe1 =  1 << 4
};

enum {
  ArchV4T =  1 << 0,
  ArchV5T =  1 << 1,
  ArchV5TE =  1 << 2,
  ArchV6 =  1 << 3,
  ArchV6T2 =  1 << 4,
  ArchV7A =  1 << 5,
  FeatureNEON =  1 << 6,
  FeatureNEONFP =  1 << 7,
  FeatureThumb2 =  1 << 8,
  FeatureVFP2 =  1 << 9,
  FeatureVFP3 =  1 << 10
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "neon", "Enable NEON instructions", FeatureNEON, 0 },
  { "neonfp", "Use NEON for single-precision FP", FeatureNEONFP, 0 },
  { "thumb2", "Enable Thumb2 instructions", FeatureThumb2, 0 },
  { "v4t", "ARM v4T", ArchV4T, 0 },
  { "v5t", "ARM v5T", ArchV5T, 0 },
  { "v5te", "ARM v5TE, v5TEj, v5TExp", ArchV5TE, 0 },
  { "v6", "ARM v6", ArchV6, 0 },
  { "v6t2", "ARM v6t2", ArchV6T2, 0 },
  { "v7a", "ARM v7A", ArchV7A, 0 },
  { "vfp2", "Enable VFP2 instructions", FeatureVFP2, 0 },
  { "vfp3", "Enable VFP3 instructions", FeatureVFP3, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "arm1020e", "Select the arm1020e processor", ArchV5TE, 0 },
  { "arm1020t", "Select the arm1020t processor", ArchV5T, 0 },
  { "arm1022e", "Select the arm1022e processor", ArchV5TE, 0 },
  { "arm10e", "Select the arm10e processor", ArchV5TE, 0 },
  { "arm10tdmi", "Select the arm10tdmi processor", ArchV5T, 0 },
  { "arm1136j-s", "Select the arm1136j-s processor", ArchV6, 0 },
  { "arm1136jf-s", "Select the arm1136jf-s processor", ArchV6 | FeatureVFP2, 0 },
  { "arm1156t2-s", "Select the arm1156t2-s processor", ArchV6T2 | FeatureThumb2, 0 },
  { "arm1156t2f-s", "Select the arm1156t2f-s processor", ArchV6T2 | FeatureThumb2 | FeatureVFP2, 0 },
  { "arm1176jz-s", "Select the arm1176jz-s processor", ArchV6, 0 },
  { "arm1176jzf-s", "Select the arm1176jzf-s processor", ArchV6 | FeatureVFP2, 0 },
  { "arm710t", "Select the arm710t processor", ArchV4T, 0 },
  { "arm720t", "Select the arm720t processor", ArchV4T, 0 },
  { "arm7tdmi", "Select the arm7tdmi processor", ArchV4T, 0 },
  { "arm7tdmi-s", "Select the arm7tdmi-s processor", ArchV4T, 0 },
  { "arm8", "Select the arm8 processor", 0, 0 },
  { "arm810", "Select the arm810 processor", 0, 0 },
  { "arm9", "Select the arm9 processor", ArchV4T, 0 },
  { "arm920", "Select the arm920 processor", ArchV4T, 0 },
  { "arm920t", "Select the arm920t processor", ArchV4T, 0 },
  { "arm922t", "Select the arm922t processor", ArchV4T, 0 },
  { "arm926ej-s", "Select the arm926ej-s processor", ArchV5TE, 0 },
  { "arm940t", "Select the arm940t processor", ArchV4T, 0 },
  { "arm946e-s", "Select the arm946e-s processor", ArchV5TE, 0 },
  { "arm966e-s", "Select the arm966e-s processor", ArchV5TE, 0 },
  { "arm968e-s", "Select the arm968e-s processor", ArchV5TE, 0 },
  { "arm9e", "Select the arm9e processor", ArchV5TE, 0 },
  { "arm9tdmi", "Select the arm9tdmi processor", ArchV4T, 0 },
  { "cortex-a8", "Select the cortex-a8 processor", ArchV7A | FeatureThumb2 | FeatureNEON | FeatureNEONFP, 0 },
  { "cortex-a9", "Select the cortex-a9 processor", ArchV7A | FeatureThumb2 | FeatureNEON, 0 },
  { "ep9312", "Select the ep9312 processor", ArchV4T, 0 },
  { "generic", "Select the generic processor", 0, 0 },
  { "iwmmxt", "Select the iwmmxt processor", ArchV5TE, 0 },
  { "mpcore", "Select the mpcore processor", ArchV6 | FeatureVFP2, 0 },
  { "mpcorenovfp", "Select the mpcorenovfp processor", ArchV6, 0 },
  { "strongarm", "Select the strongarm processor", 0, 0 },
  { "strongarm110", "Select the strongarm110 processor", 0, 0 },
  { "strongarm1100", "Select the strongarm1100 processor", 0, 0 },
  { "strongarm1110", "Select the strongarm1110 processor", 0, 0 },
  { "xscale", "Select the xscale processor", ArchV5TE, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 46
};
static const llvm::InstrStage Stages[] = {
  { 0, 0, 0 }, // No itinerary
  { 1, FU_Pipe0 | FU_Pipe1, -1 }, // 1
  { 1, FU_Pipe0, -1 }, // 2
  { 1, FU_Pipe1, 0 },   { 2, FU_Pipe0, -1 }, // 3
  { 2, FU_Pipe1, 0 },   { 3, FU_Pipe0, -1 }, // 4
  { 1, FU_Issue, 0 },   { 1, FU_Pipe0 | FU_Pipe1, -1 },   { 1, FU_LdSt0, -1 }, // 5
  { 2, FU_Issue, 0 },   { 1, FU_Pipe0, 0 },   { 1, FU_Pipe1, 0 },   { 1, FU_Pipe0 | FU_Pipe1, -1 },   { 1, FU_LdSt0, -1 }, // 6
  { 2, FU_Issue, 0 },   { 2, FU_Pipe0, 0 },   { 2, FU_Pipe1, 0 },   { 1, FU_Pipe0 | FU_Pipe1, -1 },   { 1, FU_LdSt0, -1 }, // 7
  { 1, FU_Issue, 0 },   { 1, FU_Pipe0 | FU_Pipe1, -1 }, // 8
  { 7, FU_Pipe0, 0 },   { 7, FU_Pipe1, 0 }, // 9
  { 1, FU_Pipe0, -1 },   { 1, FU_LdSt0, -1 }, // 10
  { 2, FU_Pipe0, -1 },   { 2, FU_LdSt0, -1 }, // 11
  { 2, FU_Pipe0, -1 }, // 12
  { 0, 0, 0 } // End itinerary
};
static const unsigned OperandCycles[] = {
  0, // No itinerary
  2,   2, // 1
  2,   2,   2, // 2
  2,   2,   1, // 3
  2,   2,   1,   1, // 4
  2,   1, // 5
  2,   1,   1, // 6
  2, // 7
  1, // 8
  1,   1, // 9
  1,   1,   1, // 10
  5,   1,   1, // 11
  6,   1,   1,   4, // 12
  6,   1,   1, // 13
  6,   6,   1,   1, // 14
  3,   1, // 15
  3,   1,   1, // 16
  4,   1,   1, // 17
  3,   2,   1, // 18
  3,   2,   1,   1, // 19
  4,   3,   1,   1, // 20
  2,   3,   1, // 21
  2,   3,   1,   1, // 22
  3,   3,   1,   1, // 23
  0 // End itinerary
};

enum {
  StagesSize = sizeof(Stages)/sizeof(llvm::InstrStage),
  OperandCyclesSize = sizeof(OperandCycles)/sizeof(unsigned)
};

static const llvm::InstrItinerary CortexA8Itineraries[] = {
  { 1, 2, 0, 0 }, // 0
  { 22, 24, 0, 0 }, // 1
  { 7, 10, 0, 0 }, // 2
  { 22, 24, 0, 0 }, // 3
  { 20, 22, 0, 0 }, // 4
  { 1, 2, 1, 3 }, // 5
  { 1, 2, 3, 6 }, // 6
  { 1, 2, 6, 9 }, // 7
  { 1, 2, 9, 13 }, // 8
  { 1, 2, 0, 0 }, // 9
  { 1, 2, 18, 19 }, // 10
  { 1, 2, 13, 15 }, // 11
  { 1, 2, 13, 15 }, // 12
  { 1, 2, 15, 18 }, // 13
  { 1, 2, 18, 19 }, // 14
  { 1, 2, 1, 3 }, // 15
  { 1, 2, 13, 15 }, // 16
  { 1, 2, 15, 18 }, // 17
  { 7, 10, 39, 41 }, // 18
  { 7, 10, 47, 50 }, // 19
  { 15, 20, 0, 0 }, // 20
  { 7, 10, 41, 44 }, // 21
  { 7, 10, 50, 54 }, // 22
  { 10, 15, 44, 47 }, // 23
  { 10, 15, 54, 58 }, // 24
  { 3, 5, 28, 32 }, // 25
  { 3, 5, 28, 32 }, // 26
  { 5, 7, 35, 39 }, // 27
  { 1, 2, 19, 20 }, // 28
  { 1, 2, 20, 22 }, // 29
  { 1, 2, 20, 22 }, // 30
  { 1, 2, 22, 25 }, // 31
  { 2, 3, 25, 28 }, // 32
  { 3, 5, 32, 35 }, // 33
  { 5, 7, 35, 39 }, // 34
  { 20, 22, 39, 41 }, // 35
  { 7, 10, 58, 61 }, // 36
  { 15, 20, 0, 0 }, // 37
  { 20, 22, 41, 44 }, // 38
  { 7, 10, 61, 65 }, // 39
  { 10, 15, 41, 44 }, // 40
  { 10, 15, 65, 69 }, // 41
  { 1, 2, 1, 3 }, // 42
  { 1, 2, 13, 15 }, // 43
  { 1, 2, 15, 18 }, // 44
  { 0, 0, 0, 0 } // 45
};

static const llvm::InstrItinerary CortexA9Itineraries[] = {
  { 2, 3, 0, 0 }, // 0
  { 2, 3, 0, 0 }, // 1
  { 24, 26, 0, 0 }, // 2
  { 2, 3, 0, 0 }, // 3
  { 2, 3, 0, 0 }, // 4
  { 2, 3, 0, 0 }, // 5
  { 2, 3, 0, 0 }, // 6
  { 2, 3, 0, 0 }, // 7
  { 2, 3, 0, 0 }, // 8
  { 2, 3, 0, 0 }, // 9
  { 2, 3, 0, 0 }, // 10
  { 2, 3, 0, 0 }, // 11
  { 2, 3, 0, 0 }, // 12
  { 2, 3, 0, 0 }, // 13
  { 2, 3, 0, 0 }, // 14
  { 2, 3, 0, 0 }, // 15
  { 2, 3, 0, 0 }, // 16
  { 2, 3, 0, 0 }, // 17
  { 24, 26, 0, 0 }, // 18
  { 24, 26, 0, 0 }, // 19
  { 26, 28, 0, 0 }, // 20
  { 24, 26, 0, 0 }, // 21
  { 24, 26, 0, 0 }, // 22
  { 24, 26, 0, 0 }, // 23
  { 24, 26, 0, 0 }, // 24
  { 2, 3, 0, 0 }, // 25
  { 2, 3, 0, 0 }, // 26
  { 2, 3, 0, 0 }, // 27
  { 2, 3, 0, 0 }, // 28
  { 2, 3, 0, 0 }, // 29
  { 2, 3, 0, 0 }, // 30
  { 2, 3, 0, 0 }, // 31
  { 2, 3, 0, 0 }, // 32
  { 2, 3, 0, 0 }, // 33
  { 2, 3, 0, 0 }, // 34
  { 2, 3, 0, 0 }, // 35
  { 2, 3, 0, 0 }, // 36
  { 28, 29, 0, 0 }, // 37
  { 2, 3, 0, 0 }, // 38
  { 2, 3, 0, 0 }, // 39
  { 2, 3, 0, 0 }, // 40
  { 2, 3, 0, 0 }, // 41
  { 2, 3, 0, 0 }, // 42
  { 2, 3, 0, 0 }, // 43
  { 2, 3, 0, 0 }, // 44
  { 0, 0, 0, 0 } // 45
};

static const llvm::InstrItinerary GenericItineraries[] = {
  { 2, 3, 0, 0 }, // 0
  { 2, 3, 0, 0 }, // 1
  { 24, 26, 0, 0 }, // 2
  { 2, 3, 0, 0 }, // 3
  { 2, 3, 0, 0 }, // 4
  { 2, 3, 0, 0 }, // 5
  { 2, 3, 0, 0 }, // 6
  { 2, 3, 0, 0 }, // 7
  { 2, 3, 0, 0 }, // 8
  { 2, 3, 0, 0 }, // 9
  { 2, 3, 0, 0 }, // 10
  { 2, 3, 0, 0 }, // 11
  { 2, 3, 0, 0 }, // 12
  { 2, 3, 0, 0 }, // 13
  { 2, 3, 0, 0 }, // 14
  { 2, 3, 0, 0 }, // 15
  { 2, 3, 0, 0 }, // 16
  { 2, 3, 0, 0 }, // 17
  { 24, 26, 0, 0 }, // 18
  { 24, 26, 0, 0 }, // 19
  { 26, 28, 0, 0 }, // 20
  { 24, 26, 0, 0 }, // 21
  { 24, 26, 0, 0 }, // 22
  { 24, 26, 0, 0 }, // 23
  { 24, 26, 0, 0 }, // 24
  { 2, 3, 0, 0 }, // 25
  { 2, 3, 0, 0 }, // 26
  { 2, 3, 0, 0 }, // 27
  { 2, 3, 0, 0 }, // 28
  { 2, 3, 0, 0 }, // 29
  { 2, 3, 0, 0 }, // 30
  { 2, 3, 0, 0 }, // 31
  { 2, 3, 0, 0 }, // 32
  { 2, 3, 0, 0 }, // 33
  { 2, 3, 0, 0 }, // 34
  { 2, 3, 0, 0 }, // 35
  { 2, 3, 0, 0 }, // 36
  { 28, 29, 0, 0 }, // 37
  { 2, 3, 0, 0 }, // 38
  { 2, 3, 0, 0 }, // 39
  { 2, 3, 0, 0 }, // 40
  { 2, 3, 0, 0 }, // 41
  { 2, 3, 0, 0 }, // 42
  { 2, 3, 0, 0 }, // 43
  { 2, 3, 0, 0 }, // 44
  { 0, 0, 0, 0 } // 45
};

static const llvm::InstrItinerary V6Itineraries[] = {
  { 2, 3, 0, 0 }, // 0
  { 2, 3, 0, 0 }, // 1
  { 24, 26, 0, 0 }, // 2
  { 2, 3, 0, 0 }, // 3
  { 2, 3, 0, 0 }, // 4
  { 2, 3, 0, 0 }, // 5
  { 2, 3, 0, 0 }, // 6
  { 2, 3, 0, 0 }, // 7
  { 2, 3, 0, 0 }, // 8
  { 2, 3, 0, 0 }, // 9
  { 2, 3, 0, 0 }, // 10
  { 2, 3, 0, 0 }, // 11
  { 2, 3, 0, 0 }, // 12
  { 2, 3, 0, 0 }, // 13
  { 2, 3, 0, 0 }, // 14
  { 2, 3, 0, 0 }, // 15
  { 2, 3, 0, 0 }, // 16
  { 2, 3, 0, 0 }, // 17
  { 24, 26, 0, 0 }, // 18
  { 24, 26, 0, 0 }, // 19
  { 26, 28, 0, 0 }, // 20
  { 24, 26, 0, 0 }, // 21
  { 24, 26, 0, 0 }, // 22
  { 24, 26, 0, 0 }, // 23
  { 24, 26, 0, 0 }, // 24
  { 2, 3, 0, 0 }, // 25
  { 2, 3, 0, 0 }, // 26
  { 2, 3, 0, 0 }, // 27
  { 2, 3, 0, 0 }, // 28
  { 2, 3, 0, 0 }, // 29
  { 2, 3, 0, 0 }, // 30
  { 2, 3, 0, 0 }, // 31
  { 2, 3, 0, 0 }, // 32
  { 2, 3, 0, 0 }, // 33
  { 2, 3, 0, 0 }, // 34
  { 2, 3, 0, 0 }, // 35
  { 2, 3, 0, 0 }, // 36
  { 28, 29, 0, 0 }, // 37
  { 2, 3, 0, 0 }, // 38
  { 2, 3, 0, 0 }, // 39
  { 2, 3, 0, 0 }, // 40
  { 2, 3, 0, 0 }, // 41
  { 2, 3, 0, 0 }, // 42
  { 2, 3, 0, 0 }, // 43
  { 2, 3, 0, 0 }, // 44
  { 0, 0, 0, 0 } // 45
};

// Sorted (by key) array of itineraries for CPU subtype.
static const llvm::SubtargetInfoKV ProcItinKV[] = {
  { "arm1020e", (void *)&GenericItineraries },
  { "arm1020t", (void *)&GenericItineraries },
  { "arm1022e", (void *)&GenericItineraries },
  { "arm10e", (void *)&GenericItineraries },
  { "arm10tdmi", (void *)&GenericItineraries },
  { "arm1136j-s", (void *)&V6Itineraries },
  { "arm1136jf-s", (void *)&V6Itineraries },
  { "arm1156t2-s", (void *)&V6Itineraries },
  { "arm1156t2f-s", (void *)&V6Itineraries },
  { "arm1176jz-s", (void *)&V6Itineraries },
  { "arm1176jzf-s", (void *)&V6Itineraries },
  { "arm710t", (void *)&GenericItineraries },
  { "arm720t", (void *)&GenericItineraries },
  { "arm7tdmi", (void *)&GenericItineraries },
  { "arm7tdmi-s", (void *)&GenericItineraries },
  { "arm8", (void *)&GenericItineraries },
  { "arm810", (void *)&GenericItineraries },
  { "arm9", (void *)&GenericItineraries },
  { "arm920", (void *)&GenericItineraries },
  { "arm920t", (void *)&GenericItineraries },
  { "arm922t", (void *)&GenericItineraries },
  { "arm926ej-s", (void *)&GenericItineraries },
  { "arm940t", (void *)&GenericItineraries },
  { "arm946e-s", (void *)&GenericItineraries },
  { "arm966e-s", (void *)&GenericItineraries },
  { "arm968e-s", (void *)&GenericItineraries },
  { "arm9e", (void *)&GenericItineraries },
  { "arm9tdmi", (void *)&GenericItineraries },
  { "cortex-a8", (void *)&CortexA8Itineraries },
  { "cortex-a9", (void *)&CortexA9Itineraries },
  { "ep9312", (void *)&GenericItineraries },
  { "generic", (void *)&GenericItineraries },
  { "iwmmxt", (void *)&GenericItineraries },
  { "mpcore", (void *)&V6Itineraries },
  { "mpcorenovfp", (void *)&V6Itineraries },
  { "strongarm", (void *)&GenericItineraries },
  { "strongarm110", (void *)&GenericItineraries },
  { "strongarm1100", (void *)&GenericItineraries },
  { "strongarm1110", (void *)&GenericItineraries },
  { "xscale", (void *)&GenericItineraries }
};

enum {
  ProcItinKVSize = sizeof(ProcItinKV)/sizeof(llvm::SubtargetInfoKV)
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
std::string llvm::ARMSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & ArchV4T) != 0 && ARMArchVersion < V4T) ARMArchVersion = V4T;
  if ((Bits & ArchV5T) != 0 && ARMArchVersion < V5T) ARMArchVersion = V5T;
  if ((Bits & ArchV5TE) != 0 && ARMArchVersion < V5TE) ARMArchVersion = V5TE;
  if ((Bits & ArchV6) != 0 && ARMArchVersion < V6) ARMArchVersion = V6;
  if ((Bits & ArchV6T2) != 0 && ARMArchVersion < V6T2) ARMArchVersion = V6T2;
  if ((Bits & ArchV7A) != 0 && ARMArchVersion < V7A) ARMArchVersion = V7A;
  if ((Bits & FeatureNEON) != 0 && ARMFPUType < NEON) ARMFPUType = NEON;
  if ((Bits & FeatureNEONFP) != 0) UseNEONForSinglePrecisionFP = true;
  if ((Bits & FeatureThumb2) != 0 && ThumbMode < Thumb2) ThumbMode = Thumb2;
  if ((Bits & FeatureVFP2) != 0 && ARMFPUType < VFPv2) ARMFPUType = VFPv2;
  if ((Bits & FeatureVFP3) != 0 && ARMFPUType < VFPv3) ARMFPUType = VFPv3;

  InstrItinerary *Itinerary = (InstrItinerary *)Features.getInfo(ProcItinKV, ProcItinKVSize);
  InstrItins = InstrItineraryData(Stages, OperandCycles, Itinerary);
  return Features.getCPU();
}
