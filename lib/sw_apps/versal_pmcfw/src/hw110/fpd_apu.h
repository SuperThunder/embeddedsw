/**
 * (c) 2013 Xilinx Inc.
 * XREGDB v0.91
 * XREGCHDR v0.15
 *
 * Generated on: 2018-12-08
 *
 * @file: fpd_apu.h
 *
 *
 * This file contains confidential and proprietary information
 * of Xilinx, Inc. and is protected under U.S. and
 * international copyright and other intellectual property
 * laws.
 *
 * DISCLAIMER
 * This disclaimer is not a license and does not grant any
 * rights to the materials distributed herewith. Except as
 * otherwise provided in a valid license issued to you by
 * Xilinx, and to the maximum extent permitted by applicable
 * law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
 * WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
 * AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
 * BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
 * INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
 * (2) Xilinx shall not be liable (whether in contract or tort,
 * including negligence, or under any other theory of
 * liability) for any loss or damage of any kind or nature
 * related to, arising under or in connection with these
 * materials, including for any direct, or any indirect,
 * special, incidental, or consequential loss or damage
 * (including loss of data, profits, goodwill, or any type of
 * loss or damage suffered as a result of any action brought
 * by a third party) even if such damage or loss was
 * reasonably foreseeable or Xilinx had been advised of the
 * possibility of the same.
 *
 * CRITICAL APPLICATIONS
 * Xilinx products are not designed or intended to be fail-
 * safe, or for use in any application requiring fail-safe
 * performance, such as life-support or safety devices or
 * systems, Class III medical devices, nuclear facilities,
 * applications related to the deployment of airbags, or any
 * other applications that could lead to death, personal
 * injury, or severe property or environmental damage
 * (individually and collectively, "Critical
 * Applications"). Customer assumes the sole risk and
 * liability of any use of Xilinx products in Critical
 * Applications, subject only to applicable laws and
 * regulations governing limitations on product liability.
 *
 * THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
 * PART OF THIS FILE AT ALL TIMES.
 *
 * Naming Convention: <MODULE>_<REGISTER>[_<FIELD>[_<DESC>]]
 *     <MODULE>       Module name (e.g. can or usb)
 *     <REGISTER>     Register within the current module
 *     [_<FIELD>]     Bit field within a register
 *     [_<DESC>]      Type of bit field define:
 *         SHIFT:     Least significant bit for the field
 *         WIDTH:     Size of field in bites
 *         MASK:      A masking over a range of bits or a bit to
 *                    be used for setting or clearing
 *
 */

#ifndef _FPD_APU_H_
#define _FPD_APU_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * FPD_APU Base Address
 */
#define FPD_APU_BASEADDR      0XFD5C0000

/**
 * Register: FPD_APU_ERR_CTRL
 */
#define FPD_APU_ERR_CTRL    ( ( FPD_APU_BASEADDR ) + 0X00000000 )

#define FPD_APU_ERR_CTRL_PSLVERR_SHIFT   0
#define FPD_APU_ERR_CTRL_PSLVERR_WIDTH   1
#define FPD_APU_ERR_CTRL_PSLVERR_MASK    0X00000001

/**
 * Register: FPD_APU_ISR
 */
#define FPD_APU_ISR    ( ( FPD_APU_BASEADDR ) + 0X00000010 )

#define FPD_APU_ISR_INV_APB_SHIFT   0
#define FPD_APU_ISR_INV_APB_WIDTH   1
#define FPD_APU_ISR_INV_APB_MASK    0X00000001

/**
 * Register: FPD_APU_IMR
 */
#define FPD_APU_IMR    ( ( FPD_APU_BASEADDR ) + 0X00000014 )

#define FPD_APU_IMR_INV_APB_SHIFT   0
#define FPD_APU_IMR_INV_APB_WIDTH   1
#define FPD_APU_IMR_INV_APB_MASK    0X00000001

/**
 * Register: FPD_APU_IEN
 */
#define FPD_APU_IEN    ( ( FPD_APU_BASEADDR ) + 0X00000018 )

#define FPD_APU_IEN_INV_APB_SHIFT   0
#define FPD_APU_IEN_INV_APB_WIDTH   1
#define FPD_APU_IEN_INV_APB_MASK    0X00000001

/**
 * Register: FPD_APU_IDS
 */
#define FPD_APU_IDS    ( ( FPD_APU_BASEADDR ) + 0X0000001C )

#define FPD_APU_IDS_INV_APB_SHIFT   0
#define FPD_APU_IDS_INV_APB_WIDTH   1
#define FPD_APU_IDS_INV_APB_MASK    0X00000001

/**
 * Register: FPD_APU_CONFIG_0
 */
#define FPD_APU_CONFIG_0    ( ( FPD_APU_BASEADDR ) + 0X00000020 )

#define FPD_APU_CONFIG_0_CFGTE_SHIFT   24
#define FPD_APU_CONFIG_0_CFGTE_WIDTH   2
#define FPD_APU_CONFIG_0_CFGTE_MASK    0X03000000

#define FPD_APU_CONFIG_0_CFGEND_SHIFT   16
#define FPD_APU_CONFIG_0_CFGEND_WIDTH   2
#define FPD_APU_CONFIG_0_CFGEND_MASK    0X00030000

#define FPD_APU_CONFIG_0_VINITHI_SHIFT   8
#define FPD_APU_CONFIG_0_VINITHI_WIDTH   2
#define FPD_APU_CONFIG_0_VINITHI_MASK    0X00000300

#define FPD_APU_CONFIG_0_AA64NAA32_SHIFT   0
#define FPD_APU_CONFIG_0_AA64NAA32_WIDTH   2
#define FPD_APU_CONFIG_0_AA64NAA32_MASK    0X00000003

/**
 * Register: FPD_APU_CONFIG_1
 */
#define FPD_APU_CONFIG_1    ( ( FPD_APU_BASEADDR ) + 0X00000024 )

#define FPD_APU_CONFIG_1_L1RSTDISABLE_SHIFT   28
#define FPD_APU_CONFIG_1_L1RSTDISABLE_WIDTH   1
#define FPD_APU_CONFIG_1_L1RSTDISABLE_MASK    0X10000000

#define FPD_APU_CONFIG_1_CP15SDISABLE_SHIFT   0
#define FPD_APU_CONFIG_1_CP15SDISABLE_WIDTH   2
#define FPD_APU_CONFIG_1_CP15SDISABLE_MASK    0X00000003

/**
 * Register: FPD_APU_RVBARADDR0L
 */
#define FPD_APU_RVBARADDR0L    ( ( FPD_APU_BASEADDR ) + 0X00000040 )

#define FPD_APU_RVBARADDR0L_ADDR_SHIFT   2
#define FPD_APU_RVBARADDR0L_ADDR_WIDTH   30
#define FPD_APU_RVBARADDR0L_ADDR_MASK    0XFFFFFFFC

/**
 * Register: FPD_APU_RVBARADDR0H
 */
#define FPD_APU_RVBARADDR0H    ( ( FPD_APU_BASEADDR ) + 0X00000044 )

#define FPD_APU_RVBARADDR0H_ADDR_SHIFT   0
#define FPD_APU_RVBARADDR0H_ADDR_WIDTH   12
#define FPD_APU_RVBARADDR0H_ADDR_MASK    0X00000FFF

/**
 * Register: FPD_APU_RVBARADDR1L
 */
#define FPD_APU_RVBARADDR1L    ( ( FPD_APU_BASEADDR ) + 0X00000048 )

#define FPD_APU_RVBARADDR1L_ADDR_SHIFT   2
#define FPD_APU_RVBARADDR1L_ADDR_WIDTH   30
#define FPD_APU_RVBARADDR1L_ADDR_MASK    0XFFFFFFFC

/**
 * Register: FPD_APU_RVBARADDR1H
 */
#define FPD_APU_RVBARADDR1H    ( ( FPD_APU_BASEADDR ) + 0X0000004C )

#define FPD_APU_RVBARADDR1H_ADDR_SHIFT   0
#define FPD_APU_RVBARADDR1H_ADDR_WIDTH   12
#define FPD_APU_RVBARADDR1H_ADDR_MASK    0X00000FFF

/**
 * Register: FPD_APU_ACE_CTRL
 */
#define FPD_APU_ACE_CTRL    ( ( FPD_APU_BASEADDR ) + 0X00000060 )

#define FPD_APU_ACE_CTRL_AWQOS_SHIFT   16
#define FPD_APU_ACE_CTRL_AWQOS_WIDTH   4
#define FPD_APU_ACE_CTRL_AWQOS_MASK    0X000F0000

#define FPD_APU_ACE_CTRL_ARQOS_SHIFT   0
#define FPD_APU_ACE_CTRL_ARQOS_WIDTH   4
#define FPD_APU_ACE_CTRL_ARQOS_MASK    0X0000000F

/**
 * Register: FPD_APU_SNOOP_CTRL
 */
#define FPD_APU_SNOOP_CTRL    ( ( FPD_APU_BASEADDR ) + 0X00000080 )

#define FPD_APU_SNOOP_CTRL_ACE_INACT_SHIFT   4
#define FPD_APU_SNOOP_CTRL_ACE_INACT_WIDTH   1
#define FPD_APU_SNOOP_CTRL_ACE_INACT_MASK    0X00000010

#define FPD_APU_SNOOP_CTRL_ACP_INACT_SHIFT   0
#define FPD_APU_SNOOP_CTRL_ACP_INACT_WIDTH   1
#define FPD_APU_SNOOP_CTRL_ACP_INACT_MASK    0X00000001

/**
 * Register: FPD_APU_PWRCTL
 */
#define FPD_APU_PWRCTL    ( ( FPD_APU_BASEADDR ) + 0X00000090 )

#define FPD_APU_PWRCTL_CLREXMONREQ_SHIFT   17
#define FPD_APU_PWRCTL_CLREXMONREQ_WIDTH   1
#define FPD_APU_PWRCTL_CLREXMONREQ_MASK    0X00020000

#define FPD_APU_PWRCTL_L2FLUSHREQ_SHIFT   16
#define FPD_APU_PWRCTL_L2FLUSHREQ_WIDTH   1
#define FPD_APU_PWRCTL_L2FLUSHREQ_MASK    0X00010000

#define FPD_APU_PWRCTL_CPUPWRDWNREQ_SHIFT   0
#define FPD_APU_PWRCTL_CPUPWRDWNREQ_WIDTH   2
#define FPD_APU_PWRCTL_CPUPWRDWNREQ_MASK    0X00000003

/**
 * Register: FPD_APU_PWRSTAT
 */
#define FPD_APU_PWRSTAT    ( ( FPD_APU_BASEADDR ) + 0X00000094 )

#define FPD_APU_PWRSTAT_CLREXMONACK_SHIFT   17
#define FPD_APU_PWRSTAT_CLREXMONACK_WIDTH   1
#define FPD_APU_PWRSTAT_CLREXMONACK_MASK    0X00020000

#define FPD_APU_PWRSTAT_L2FLUSHDONE_SHIFT   16
#define FPD_APU_PWRSTAT_L2FLUSHDONE_WIDTH   1
#define FPD_APU_PWRSTAT_L2FLUSHDONE_MASK    0X00010000

#define FPD_APU_PWRSTAT_DBGNOPWRDWN_SHIFT   0
#define FPD_APU_PWRSTAT_DBGNOPWRDWN_WIDTH   2
#define FPD_APU_PWRSTAT_DBGNOPWRDWN_MASK    0X00000003

/**
 * Register: FPD_APU_ECO
 */
#define FPD_APU_ECO    ( ( FPD_APU_BASEADDR ) + 0X000000EC )

#define FPD_APU_ECO_SPARE_SHIFT   0
#define FPD_APU_ECO_SPARE_WIDTH   32
#define FPD_APU_ECO_SPARE_MASK    0XFFFFFFFF

/**
 * Register: FPD_APU_RAM_ADJ_0
 */
#define FPD_APU_RAM_ADJ_0    ( ( FPD_APU_BASEADDR ) + 0X000000F0 )

#define FPD_APU_RAM_ADJ_0_IF_BTB_STOV_SHIFT   30
#define FPD_APU_RAM_ADJ_0_IF_BTB_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_0_IF_BTB_STOV_MASK    0X40000000

#define FPD_APU_RAM_ADJ_0_IF_BTB_EMAS_SHIFT   29
#define FPD_APU_RAM_ADJ_0_IF_BTB_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_0_IF_BTB_EMAS_MASK    0X20000000

#define FPD_APU_RAM_ADJ_0_IF_BTB_EMAW_SHIFT   27
#define FPD_APU_RAM_ADJ_0_IF_BTB_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_0_IF_BTB_EMAW_MASK    0X18000000

#define FPD_APU_RAM_ADJ_0_IF_BTB_EMA_SHIFT   24
#define FPD_APU_RAM_ADJ_0_IF_BTB_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_0_IF_BTB_EMA_MASK    0X07000000

#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_STOV_SHIFT   22
#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_STOV_MASK    0X00400000

#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_EMAS_SHIFT   21
#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_EMAS_MASK    0X00200000

#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_EMAW_SHIFT   19
#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_EMAW_MASK    0X00180000

#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_EMA_SHIFT   16
#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_0_IF_GHB_T3T4_EMA_MASK    0X00070000

#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_STOV_SHIFT   14
#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_STOV_MASK    0X00004000

#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_EMAS_SHIFT   13
#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_EMAS_MASK    0X00002000

#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_EMAW_SHIFT   11
#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_EMAW_MASK    0X00001800

#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_EMA_SHIFT   8
#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_0_IF_GHB_T1T2_EMA_MASK    0X00000700

#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_STOV_SHIFT   6
#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_STOV_MASK    0X00000040

#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_EMAS_SHIFT   5
#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_EMAS_MASK    0X00000020

#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_EMAW_SHIFT   3
#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_EMAW_MASK    0X00000018

#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_EMA_SHIFT   0
#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_0_IF_GHB_T0_EMA_MASK    0X00000007

/**
 * Register: FPD_APU_RAM_ADJ_1
 */
#define FPD_APU_RAM_ADJ_1    ( ( FPD_APU_BASEADDR ) + 0X000000F4 )

#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_STOV_SHIFT   30
#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_STOV_MASK    0X40000000

#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_EMAS_SHIFT   29
#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_EMAS_MASK    0X20000000

#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_EMAW_SHIFT   27
#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_EMAW_MASK    0X18000000

#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_EMA_SHIFT   24
#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_1_LS_PF_PHT_EMA_MASK    0X07000000

#define FPD_APU_RAM_ADJ_1_IF_IP_STOV_SHIFT   22
#define FPD_APU_RAM_ADJ_1_IF_IP_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_1_IF_IP_STOV_MASK    0X00400000

#define FPD_APU_RAM_ADJ_1_IF_IP_EMAS_SHIFT   21
#define FPD_APU_RAM_ADJ_1_IF_IP_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_1_IF_IP_EMAS_MASK    0X00200000

#define FPD_APU_RAM_ADJ_1_IF_IP_EMAW_SHIFT   19
#define FPD_APU_RAM_ADJ_1_IF_IP_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_1_IF_IP_EMAW_MASK    0X00180000

#define FPD_APU_RAM_ADJ_1_IF_IP_EMA_SHIFT   16
#define FPD_APU_RAM_ADJ_1_IF_IP_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_1_IF_IP_EMA_MASK    0X00070000

#define FPD_APU_RAM_ADJ_1_IF_TAG_STOV_SHIFT   14
#define FPD_APU_RAM_ADJ_1_IF_TAG_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_1_IF_TAG_STOV_MASK    0X00004000

#define FPD_APU_RAM_ADJ_1_IF_TAG_EMAS_SHIFT   13
#define FPD_APU_RAM_ADJ_1_IF_TAG_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_1_IF_TAG_EMAS_MASK    0X00002000

#define FPD_APU_RAM_ADJ_1_IF_TAG_EMAW_SHIFT   11
#define FPD_APU_RAM_ADJ_1_IF_TAG_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_1_IF_TAG_EMAW_MASK    0X00001800

#define FPD_APU_RAM_ADJ_1_IF_TAG_EMA_SHIFT   8
#define FPD_APU_RAM_ADJ_1_IF_TAG_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_1_IF_TAG_EMA_MASK    0X00000700

#define FPD_APU_RAM_ADJ_1_IF_DATA_STOV_SHIFT   6
#define FPD_APU_RAM_ADJ_1_IF_DATA_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_1_IF_DATA_STOV_MASK    0X00000040

#define FPD_APU_RAM_ADJ_1_IF_DATA_EMAS_SHIFT   5
#define FPD_APU_RAM_ADJ_1_IF_DATA_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_1_IF_DATA_EMAS_MASK    0X00000020

#define FPD_APU_RAM_ADJ_1_IF_DATA_EMAW_SHIFT   3
#define FPD_APU_RAM_ADJ_1_IF_DATA_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_1_IF_DATA_EMAW_MASK    0X00000018

#define FPD_APU_RAM_ADJ_1_IF_DATA_EMA_SHIFT   0
#define FPD_APU_RAM_ADJ_1_IF_DATA_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_1_IF_DATA_EMA_MASK    0X00000007

/**
 * Register: FPD_APU_RAM_ADJ_2
 */
#define FPD_APU_RAM_ADJ_2    ( ( FPD_APU_BASEADDR ) + 0X000000F8 )

#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_STOV_SHIFT   30
#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_STOV_MASK    0X40000000

#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_EMAS_SHIFT   29
#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_EMAS_MASK    0X20000000

#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_EMAW_SHIFT   27
#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_EMAW_MASK    0X18000000

#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_EMA_SHIFT   24
#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_2_L2_SNP_TAG_EMA_MASK    0X07000000

#define FPD_APU_RAM_ADJ_2_L2_TLB_STOV_SHIFT   22
#define FPD_APU_RAM_ADJ_2_L2_TLB_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_2_L2_TLB_STOV_MASK    0X00400000

#define FPD_APU_RAM_ADJ_2_L2_TLB_EMAS_SHIFT   21
#define FPD_APU_RAM_ADJ_2_L2_TLB_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_2_L2_TLB_EMAS_MASK    0X00200000

#define FPD_APU_RAM_ADJ_2_L2_TLB_EMAW_SHIFT   19
#define FPD_APU_RAM_ADJ_2_L2_TLB_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_2_L2_TLB_EMAW_MASK    0X00180000

#define FPD_APU_RAM_ADJ_2_L2_TLB_EMA_SHIFT   16
#define FPD_APU_RAM_ADJ_2_L2_TLB_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_2_L2_TLB_EMA_MASK    0X00070000

#define FPD_APU_RAM_ADJ_2_LS_TAG_STOV_SHIFT   14
#define FPD_APU_RAM_ADJ_2_LS_TAG_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_2_LS_TAG_STOV_MASK    0X00004000

#define FPD_APU_RAM_ADJ_2_LS_TAG_EMAS_SHIFT   13
#define FPD_APU_RAM_ADJ_2_LS_TAG_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_2_LS_TAG_EMAS_MASK    0X00002000

#define FPD_APU_RAM_ADJ_2_LS_TAG_EMAW_SHIFT   11
#define FPD_APU_RAM_ADJ_2_LS_TAG_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_2_LS_TAG_EMAW_MASK    0X00001800

#define FPD_APU_RAM_ADJ_2_LS_TAG_EMA_SHIFT   8
#define FPD_APU_RAM_ADJ_2_LS_TAG_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_2_LS_TAG_EMA_MASK    0X00000700

#define FPD_APU_RAM_ADJ_2_LS_DATA_STOV_SHIFT   6
#define FPD_APU_RAM_ADJ_2_LS_DATA_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_2_LS_DATA_STOV_MASK    0X00000040

#define FPD_APU_RAM_ADJ_2_LS_DATA_EMAS_SHIFT   5
#define FPD_APU_RAM_ADJ_2_LS_DATA_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_2_LS_DATA_EMAS_MASK    0X00000020

#define FPD_APU_RAM_ADJ_2_LS_DATA_EMAW_SHIFT   3
#define FPD_APU_RAM_ADJ_2_LS_DATA_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_2_LS_DATA_EMAW_MASK    0X00000018

#define FPD_APU_RAM_ADJ_2_LS_DATA_EMA_SHIFT   0
#define FPD_APU_RAM_ADJ_2_LS_DATA_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_2_LS_DATA_EMA_MASK    0X00000007

/**
 * Register: FPD_APU_RAM_ADJ_3
 */
#define FPD_APU_RAM_ADJ_3    ( ( FPD_APU_BASEADDR ) + 0X000000FC )

#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_STOV_SHIFT   30
#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_STOV_MASK    0X40000000

#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_EMAS_SHIFT   29
#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_EMAS_MASK    0X20000000

#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_EMAW_SHIFT   27
#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_EMAW_MASK    0X18000000

#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_EMA_SHIFT   24
#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_3_L2_INCL_PLRU_EMA_MASK    0X07000000

#define FPD_APU_RAM_ADJ_3_L2_DIRTY_STOV_SHIFT   22
#define FPD_APU_RAM_ADJ_3_L2_DIRTY_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_3_L2_DIRTY_STOV_MASK    0X00400000

#define FPD_APU_RAM_ADJ_3_L2_DIRTY_EMAS_SHIFT   21
#define FPD_APU_RAM_ADJ_3_L2_DIRTY_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_3_L2_DIRTY_EMAS_MASK    0X00200000

#define FPD_APU_RAM_ADJ_3_L2_DIRTY_EMAW_SHIFT   19
#define FPD_APU_RAM_ADJ_3_L2_DIRTY_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_3_L2_DIRTY_EMAW_MASK    0X00180000

#define FPD_APU_RAM_ADJ_3_L2_DIRTY_EMA_SHIFT   16
#define FPD_APU_RAM_ADJ_3_L2_DIRTY_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_3_L2_DIRTY_EMA_MASK    0X00070000

#define FPD_APU_RAM_ADJ_3_L2_TAG_STOV_SHIFT   14
#define FPD_APU_RAM_ADJ_3_L2_TAG_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_3_L2_TAG_STOV_MASK    0X00004000

#define FPD_APU_RAM_ADJ_3_L2_TAG_EMAS_SHIFT   13
#define FPD_APU_RAM_ADJ_3_L2_TAG_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_3_L2_TAG_EMAS_MASK    0X00002000

#define FPD_APU_RAM_ADJ_3_L2_TAG_EMAW_SHIFT   11
#define FPD_APU_RAM_ADJ_3_L2_TAG_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_3_L2_TAG_EMAW_MASK    0X00001800

#define FPD_APU_RAM_ADJ_3_L2_TAG_EMA_SHIFT   8
#define FPD_APU_RAM_ADJ_3_L2_TAG_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_3_L2_TAG_EMA_MASK    0X00000700

#define FPD_APU_RAM_ADJ_3_L2_DATA_STOV_SHIFT   6
#define FPD_APU_RAM_ADJ_3_L2_DATA_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_3_L2_DATA_STOV_MASK    0X00000040

#define FPD_APU_RAM_ADJ_3_L2_DATA_EMAS_SHIFT   5
#define FPD_APU_RAM_ADJ_3_L2_DATA_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_3_L2_DATA_EMAS_MASK    0X00000020

#define FPD_APU_RAM_ADJ_3_L2_DATA_EMAW_SHIFT   3
#define FPD_APU_RAM_ADJ_3_L2_DATA_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_3_L2_DATA_EMAW_MASK    0X00000018

#define FPD_APU_RAM_ADJ_3_L2_DATA_EMA_SHIFT   0
#define FPD_APU_RAM_ADJ_3_L2_DATA_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_3_L2_DATA_EMA_MASK    0X00000007

/**
 * Register: FPD_APU_RAM_ADJ_4
 */
#define FPD_APU_RAM_ADJ_4    ( ( FPD_APU_BASEADDR ) + 0X00000100 )

#define FPD_APU_RAM_ADJ_4_ELA_STOV_SHIFT   14
#define FPD_APU_RAM_ADJ_4_ELA_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_4_ELA_STOV_MASK    0X00004000

#define FPD_APU_RAM_ADJ_4_ELA_EMAS_SHIFT   13
#define FPD_APU_RAM_ADJ_4_ELA_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_4_ELA_EMAS_MASK    0X00002000

#define FPD_APU_RAM_ADJ_4_ELA_EMAW_SHIFT   11
#define FPD_APU_RAM_ADJ_4_ELA_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_4_ELA_EMAW_MASK    0X00001800

#define FPD_APU_RAM_ADJ_4_ELA_EMA_SHIFT   8
#define FPD_APU_RAM_ADJ_4_ELA_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_4_ELA_EMA_MASK    0X00000700

#define FPD_APU_RAM_ADJ_4_ETF_STOV_SHIFT   6
#define FPD_APU_RAM_ADJ_4_ETF_STOV_WIDTH   1
#define FPD_APU_RAM_ADJ_4_ETF_STOV_MASK    0X00000040

#define FPD_APU_RAM_ADJ_4_ETF_EMAS_SHIFT   5
#define FPD_APU_RAM_ADJ_4_ETF_EMAS_WIDTH   1
#define FPD_APU_RAM_ADJ_4_ETF_EMAS_MASK    0X00000020

#define FPD_APU_RAM_ADJ_4_ETF_EMAW_SHIFT   3
#define FPD_APU_RAM_ADJ_4_ETF_EMAW_WIDTH   2
#define FPD_APU_RAM_ADJ_4_ETF_EMAW_MASK    0X00000018

#define FPD_APU_RAM_ADJ_4_ETF_EMA_SHIFT   0
#define FPD_APU_RAM_ADJ_4_ETF_EMA_WIDTH   3
#define FPD_APU_RAM_ADJ_4_ETF_EMA_MASK    0X00000007

/**
 * Register: FPD_APU_RAM_SEL_0
 */
#define FPD_APU_RAM_SEL_0    ( ( FPD_APU_BASEADDR ) + 0X00000110 )

#define FPD_APU_RAM_SEL_0_SEL_DATA_PAIR_SHIFT   12
#define FPD_APU_RAM_SEL_0_SEL_DATA_PAIR_WIDTH   3
#define FPD_APU_RAM_SEL_0_SEL_DATA_PAIR_MASK    0X00007000

#define FPD_APU_RAM_SEL_0_SEL_DATA_WENDQ_SHIFT   8
#define FPD_APU_RAM_SEL_0_SEL_DATA_WENDQ_WIDTH   2
#define FPD_APU_RAM_SEL_0_SEL_DATA_WENDQ_MASK    0X00000300

#define FPD_APU_RAM_SEL_0_SEL_TAG_PAIR_SHIFT   4
#define FPD_APU_RAM_SEL_0_SEL_TAG_PAIR_WIDTH   4
#define FPD_APU_RAM_SEL_0_SEL_TAG_PAIR_MASK    0X000000F0

#define FPD_APU_RAM_SEL_0_SEL_TAG_WENDQ_SHIFT   0
#define FPD_APU_RAM_SEL_0_SEL_TAG_WENDQ_WIDTH   1
#define FPD_APU_RAM_SEL_0_SEL_TAG_WENDQ_MASK    0X00000001

/**
 * Register: FPD_APU_RAM_SEL_1
 */
#define FPD_APU_RAM_SEL_1    ( ( FPD_APU_BASEADDR ) + 0X00000114 )

#define FPD_APU_RAM_SEL_1_SEL_LOGIC_PAIR_SHIFT   20
#define FPD_APU_RAM_SEL_1_SEL_LOGIC_PAIR_WIDTH   2
#define FPD_APU_RAM_SEL_1_SEL_LOGIC_PAIR_MASK    0X00300000

#define FPD_APU_RAM_SEL_1_SEL_LOGIC_WENDQ_SHIFT   16
#define FPD_APU_RAM_SEL_1_SEL_LOGIC_WENDQ_WIDTH   1
#define FPD_APU_RAM_SEL_1_SEL_LOGIC_WENDQ_MASK    0X00010000

#define FPD_APU_RAM_SEL_1_SEL_DIRTY_PAIR_SHIFT   12
#define FPD_APU_RAM_SEL_1_SEL_DIRTY_PAIR_WIDTH   1
#define FPD_APU_RAM_SEL_1_SEL_DIRTY_PAIR_MASK    0X00001000

#define FPD_APU_RAM_SEL_1_SEL_DIRTY_WENDQ_SHIFT   8
#define FPD_APU_RAM_SEL_1_SEL_DIRTY_WENDQ_WIDTH   2
#define FPD_APU_RAM_SEL_1_SEL_DIRTY_WENDQ_MASK    0X00000300

#define FPD_APU_RAM_SEL_1_SEL_INCL_PAIR_SHIFT   4
#define FPD_APU_RAM_SEL_1_SEL_INCL_PAIR_WIDTH   1
#define FPD_APU_RAM_SEL_1_SEL_INCL_PAIR_MASK    0X00000010

#ifdef __cplusplus
}
#endif


#endif /* _FPD_APU_H_ */
