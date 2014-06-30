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
  EVEN_UNIT =  1 << 0,
  ODD_UNIT =  1 << 1
};

enum {
  DefaultProc =  1 << 0,
  LargeMemFeature =  1 << 1
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "large_mem", "Use large (>256) LSA memory addressing [default = false]", LargeMemFeature, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "v0", "Select the v0 processor", DefaultProc, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 18
};
static const llvm::InstrStage Stages[] = {
  { 0, 0, 0 }, // No itinerary
  { 6, ODD_UNIT, -1 }, // 1
  { 4, ODD_UNIT, -1 }, // 2
  { 1, ODD_UNIT, -1 }, // 3
  { 1, EVEN_UNIT, -1 }, // 4
  { 6, EVEN_UNIT, -1 }, // 5
  { 13, EVEN_UNIT, -1 }, // 6
  { 2, EVEN_UNIT, -1 }, // 7
  { 4, EVEN_UNIT, -1 }, // 8
  { 7, EVEN_UNIT, -1 }, // 9
  { 0, 0, 0 } // End itinerary
};
static const unsigned OperandCycles[] = {
  0, // No itinerary
  0 // End itinerary
};

enum {
  StagesSize = sizeof(Stages)/sizeof(llvm::InstrStage),
  OperandCyclesSize = sizeof(OperandCycles)/sizeof(unsigned)
};

static const llvm::InstrItinerary SPUItineraries[] = {
  { 1, 2, 0, 0 }, // 0
  { 2, 3, 0, 0 }, // 1
  { 8, 9, 0, 0 }, // 2
  { 1, 2, 0, 0 }, // 3
  { 6, 7, 0, 0 }, // 4
  { 4, 5, 0, 0 }, // 5
  { 7, 8, 0, 0 }, // 6
  { 2, 3, 0, 0 }, // 7
  { 7, 8, 0, 0 }, // 8
  { 9, 10, 0, 0 }, // 9
  { 7, 8, 0, 0 }, // 10
  { 3, 4, 0, 0 }, // 11
  { 1, 2, 0, 0 }, // 12
  { 0, 0, 0, 0 }, // 13
  { 8, 9, 0, 0 }, // 14
  { 5, 6, 0, 0 }, // 15
  { 2, 3, 0, 0 }, // 16
  { 2, 3, 0, 0 } // 17
};

// Sorted (by key) array of itineraries for CPU subtype.
static const llvm::SubtargetInfoKV ProcItinKV[] = {
  { "v0", (void *)&SPUItineraries }
};

enum {
  ProcItinKVSize = sizeof(ProcItinKV)/sizeof(llvm::SubtargetInfoKV)
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
std::string llvm::SPUSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & DefaultProc) != 0 && ProcDirective < SPU::DEFAULT_PROC) ProcDirective = SPU::DEFAULT_PROC;
  if ((Bits & LargeMemFeature) != 0) UseLargeMem = true;

  InstrItinerary *Itinerary = (InstrItinerary *)Features.getInfo(ProcItinKV, ProcItinKVSize);
  InstrItins = InstrItineraryData(Stages, OperandCycles, Itinerary);
  return Features.getCPU();
}
