//===-- lldb-ppc64-register-enums.h ---------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef lldb_ppc64_register_enums_h
#define lldb_ppc64_register_enums_h

// LLDB register codes (e.g. RegisterKind == eRegisterKindLLDB)

// ---------------------------------------------------------------------------
// Internal codes for all ppc64 registers.
// ---------------------------------------------------------------------------
enum {
  k_first_gpr_ppc64,
  gpr_r0_ppc64 = k_first_gpr_ppc64,
  gpr_r1_ppc64,
  gpr_r2_ppc64,
  gpr_r3_ppc64,
  gpr_r4_ppc64,
  gpr_r5_ppc64,
  gpr_r6_ppc64,
  gpr_r7_ppc64,
  gpr_r8_ppc64,
  gpr_r9_ppc64,
  gpr_r10_ppc64,
  gpr_r11_ppc64,
  gpr_r12_ppc64,
  gpr_r13_ppc64,
  gpr_r14_ppc64,
  gpr_r15_ppc64,
  gpr_r16_ppc64,
  gpr_r17_ppc64,
  gpr_r18_ppc64,
  gpr_r19_ppc64,
  gpr_r20_ppc64,
  gpr_r21_ppc64,
  gpr_r22_ppc64,
  gpr_r23_ppc64,
  gpr_r24_ppc64,
  gpr_r25_ppc64,
  gpr_r26_ppc64,
  gpr_r27_ppc64,
  gpr_r28_ppc64,
  gpr_r29_ppc64,
  gpr_r30_ppc64,
  gpr_r31_ppc64,
  gpr_cr_ppc64,
  gpr_msr_ppc64,
  gpr_xer_ppc64,
  gpr_lr_ppc64,
  gpr_ctr_ppc64,
  gpr_pc_ppc64,
  k_last_gpr_ppc64 = gpr_pc_ppc64,

  k_first_fpr_ppc64,
  fpr_f0_ppc64 = k_first_fpr_ppc64,
  fpr_f1_ppc64,
  fpr_f2_ppc64,
  fpr_f3_ppc64,
  fpr_f4_ppc64,
  fpr_f5_ppc64,
  fpr_f6_ppc64,
  fpr_f7_ppc64,
  fpr_f8_ppc64,
  fpr_f9_ppc64,
  fpr_f10_ppc64,
  fpr_f11_ppc64,
  fpr_f12_ppc64,
  fpr_f13_ppc64,
  fpr_f14_ppc64,
  fpr_f15_ppc64,
  fpr_f16_ppc64,
  fpr_f17_ppc64,
  fpr_f18_ppc64,
  fpr_f19_ppc64,
  fpr_f20_ppc64,
  fpr_f21_ppc64,
  fpr_f22_ppc64,
  fpr_f23_ppc64,
  fpr_f24_ppc64,
  fpr_f25_ppc64,
  fpr_f26_ppc64,
  fpr_f27_ppc64,
  fpr_f28_ppc64,
  fpr_f29_ppc64,
  fpr_f30_ppc64,
  fpr_f31_ppc64,
  fpr_fpscr_ppc64,
  k_last_fpr_ppc64 = fpr_fpscr_ppc64,

  k_first_vmx_ppc64,
  vmx_vr0_ppc64 = k_first_vmx_ppc64,
  vmx_vr1_ppc64,
  vmx_vr2_ppc64,
  vmx_vr3_ppc64,
  vmx_vr4_ppc64,
  vmx_vr5_ppc64,
  vmx_vr6_ppc64,
  vmx_vr7_ppc64,
  vmx_vr8_ppc64,
  vmx_vr9_ppc64,
  vmx_vr10_ppc64,
  vmx_vr11_ppc64,
  vmx_vr12_ppc64,
  vmx_vr13_ppc64,
  vmx_vr14_ppc64,
  vmx_vr15_ppc64,
  vmx_vr16_ppc64,
  vmx_vr17_ppc64,
  vmx_vr18_ppc64,
  vmx_vr19_ppc64,
  vmx_vr20_ppc64,
  vmx_vr21_ppc64,
  vmx_vr22_ppc64,
  vmx_vr23_ppc64,
  vmx_vr24_ppc64,
  vmx_vr25_ppc64,
  vmx_vr26_ppc64,
  vmx_vr27_ppc64,
  vmx_vr28_ppc64,
  vmx_vr29_ppc64,
  vmx_vr30_ppc64,
  vmx_vr31_ppc64,
  vmx_vscr_ppc64,
  vmx_vrsave_ppc64,
  k_last_vmx_ppc64 = vmx_vrsave_ppc64,

  k_num_registers_ppc64,
  k_num_gpr_registers_ppc64 = k_last_gpr_ppc64 - k_first_gpr_ppc64 + 1,
  k_num_fpr_registers_ppc64 = k_last_fpr_ppc64 - k_first_fpr_ppc64 + 1,
  k_num_vmx_registers_ppc64 = k_last_vmx_ppc64 - k_first_vmx_ppc64 + 1,
};

#endif // #ifndef lldb_ppc64_register_enums_h
