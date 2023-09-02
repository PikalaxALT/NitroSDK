//
//  I was generated automatically, don't edit me directly!!!
//
#ifndef NITRO_HW_ARM9_IOREG_G3X_H_
#define NITRO_HW_ARM9_IOREG_G3X_H_

#ifndef SDK_ASM
#include <nitro/types.h>
#include <nitro/hw/ARM9/mmap_global.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Definition of Register offsets, addresses and variables.
 */


/* DISP3DCNT */

#define REG_DISP3DCNT_OFFSET                               0x060
#define REG_DISP3DCNT_ADDR                                 (HW_REG_BASE + REG_DISP3DCNT_OFFSET)
#define reg_G3X_DISP3DCNT                                  (*( REGType16v *) REG_DISP3DCNT_ADDR)

/* RDLINES_COUNT */

#define REG_RDLINES_COUNT_OFFSET                           0x320
#define REG_RDLINES_COUNT_ADDR                             (HW_REG_BASE + REG_RDLINES_COUNT_OFFSET)
#define reg_G3X_RDLINES_COUNT                              (*(const REGType16v *) REG_RDLINES_COUNT_ADDR)

/* EDGE_COLOR_0 */

#define REG_EDGE_COLOR_0_OFFSET                            0x330
#define REG_EDGE_COLOR_0_ADDR                              (HW_REG_BASE + REG_EDGE_COLOR_0_OFFSET)
#define reg_G3X_EDGE_COLOR_0                               (*( REGType32v *) REG_EDGE_COLOR_0_ADDR)

/* EDGE_COLOR_0_L */

#define REG_EDGE_COLOR_0_L_OFFSET                          0x330
#define REG_EDGE_COLOR_0_L_ADDR                            (HW_REG_BASE + REG_EDGE_COLOR_0_L_OFFSET)
#define reg_G3X_EDGE_COLOR_0_L                             (*( REGType16v *) REG_EDGE_COLOR_0_L_ADDR)

/* EDGE_COLOR_0_H */

#define REG_EDGE_COLOR_0_H_OFFSET                          0x332
#define REG_EDGE_COLOR_0_H_ADDR                            (HW_REG_BASE + REG_EDGE_COLOR_0_H_OFFSET)
#define reg_G3X_EDGE_COLOR_0_H                             (*( REGType16v *) REG_EDGE_COLOR_0_H_ADDR)

/* EDGE_COLOR_1 */

#define REG_EDGE_COLOR_1_OFFSET                            0x334
#define REG_EDGE_COLOR_1_ADDR                              (HW_REG_BASE + REG_EDGE_COLOR_1_OFFSET)
#define reg_G3X_EDGE_COLOR_1                               (*( REGType32v *) REG_EDGE_COLOR_1_ADDR)

/* EDGE_COLOR_1_L */

#define REG_EDGE_COLOR_1_L_OFFSET                          0x334
#define REG_EDGE_COLOR_1_L_ADDR                            (HW_REG_BASE + REG_EDGE_COLOR_1_L_OFFSET)
#define reg_G3X_EDGE_COLOR_1_L                             (*( REGType16v *) REG_EDGE_COLOR_1_L_ADDR)

/* EDGE_COLOR_1_H */

#define REG_EDGE_COLOR_1_H_OFFSET                          0x336
#define REG_EDGE_COLOR_1_H_ADDR                            (HW_REG_BASE + REG_EDGE_COLOR_1_H_OFFSET)
#define reg_G3X_EDGE_COLOR_1_H                             (*( REGType16v *) REG_EDGE_COLOR_1_H_ADDR)

/* EDGE_COLOR_2 */

#define REG_EDGE_COLOR_2_OFFSET                            0x338
#define REG_EDGE_COLOR_2_ADDR                              (HW_REG_BASE + REG_EDGE_COLOR_2_OFFSET)
#define reg_G3X_EDGE_COLOR_2                               (*( REGType32v *) REG_EDGE_COLOR_2_ADDR)

/* EDGE_COLOR_2_L */

#define REG_EDGE_COLOR_2_L_OFFSET                          0x338
#define REG_EDGE_COLOR_2_L_ADDR                            (HW_REG_BASE + REG_EDGE_COLOR_2_L_OFFSET)
#define reg_G3X_EDGE_COLOR_2_L                             (*( REGType16v *) REG_EDGE_COLOR_2_L_ADDR)

/* EDGE_COLOR_2_H */

#define REG_EDGE_COLOR_2_H_OFFSET                          0x33a
#define REG_EDGE_COLOR_2_H_ADDR                            (HW_REG_BASE + REG_EDGE_COLOR_2_H_OFFSET)
#define reg_G3X_EDGE_COLOR_2_H                             (*( REGType16v *) REG_EDGE_COLOR_2_H_ADDR)

/* EDGE_COLOR_3 */

#define REG_EDGE_COLOR_3_OFFSET                            0x33c
#define REG_EDGE_COLOR_3_ADDR                              (HW_REG_BASE + REG_EDGE_COLOR_3_OFFSET)
#define reg_G3X_EDGE_COLOR_3                               (*( REGType32v *) REG_EDGE_COLOR_3_ADDR)

/* EDGE_COLOR_3_L */

#define REG_EDGE_COLOR_3_L_OFFSET                          0x33c
#define REG_EDGE_COLOR_3_L_ADDR                            (HW_REG_BASE + REG_EDGE_COLOR_3_L_OFFSET)
#define reg_G3X_EDGE_COLOR_3_L                             (*( REGType16v *) REG_EDGE_COLOR_3_L_ADDR)

/* EDGE_COLOR_3_H */

#define REG_EDGE_COLOR_3_H_OFFSET                          0x33e
#define REG_EDGE_COLOR_3_H_ADDR                            (HW_REG_BASE + REG_EDGE_COLOR_3_H_OFFSET)
#define reg_G3X_EDGE_COLOR_3_H                             (*( REGType16v *) REG_EDGE_COLOR_3_H_ADDR)

/* ALPHA_TEST_REF */

#define REG_ALPHA_TEST_REF_OFFSET                          0x340
#define REG_ALPHA_TEST_REF_ADDR                            (HW_REG_BASE + REG_ALPHA_TEST_REF_OFFSET)
#define reg_G3X_ALPHA_TEST_REF                             (*( REGType16v *) REG_ALPHA_TEST_REF_ADDR)

/* CLEAR_COLOR */

#define REG_CLEAR_COLOR_OFFSET                             0x350
#define REG_CLEAR_COLOR_ADDR                               (HW_REG_BASE + REG_CLEAR_COLOR_OFFSET)
#define reg_G3X_CLEAR_COLOR                                (*( REGType32v *) REG_CLEAR_COLOR_ADDR)

/* CLEAR_DEPTH */

#define REG_CLEAR_DEPTH_OFFSET                             0x354
#define REG_CLEAR_DEPTH_ADDR                               (HW_REG_BASE + REG_CLEAR_DEPTH_OFFSET)
#define reg_G3X_CLEAR_DEPTH                                (*( REGType16v *) REG_CLEAR_DEPTH_ADDR)

/* CLRIMAGE_OFFSET */

#define REG_CLRIMAGE_OFFSET_OFFSET                         0x356
#define REG_CLRIMAGE_OFFSET_ADDR                           (HW_REG_BASE + REG_CLRIMAGE_OFFSET_OFFSET)
#define reg_G3X_CLRIMAGE_OFFSET                            (*( REGType16v *) REG_CLRIMAGE_OFFSET_ADDR)

/* FOG_COLOR */

#define REG_FOG_COLOR_OFFSET                               0x358
#define REG_FOG_COLOR_ADDR                                 (HW_REG_BASE + REG_FOG_COLOR_OFFSET)
#define reg_G3X_FOG_COLOR                                  (*( REGType32v *) REG_FOG_COLOR_ADDR)

/* FOG_OFFSET */

#define REG_FOG_OFFSET_OFFSET                              0x35c
#define REG_FOG_OFFSET_ADDR                                (HW_REG_BASE + REG_FOG_OFFSET_OFFSET)
#define reg_G3X_FOG_OFFSET                                 (*( REGType16v *) REG_FOG_OFFSET_ADDR)

/* FOG_TABLE_0 */

#define REG_FOG_TABLE_0_OFFSET                             0x360
#define REG_FOG_TABLE_0_ADDR                               (HW_REG_BASE + REG_FOG_TABLE_0_OFFSET)
#define reg_G3X_FOG_TABLE_0                                (*( REGType32v *) REG_FOG_TABLE_0_ADDR)

/* FOG_TABLE_0_L */

#define REG_FOG_TABLE_0_L_OFFSET                           0x360
#define REG_FOG_TABLE_0_L_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_0_L_OFFSET)
#define reg_G3X_FOG_TABLE_0_L                              (*( REGType16v *) REG_FOG_TABLE_0_L_ADDR)

/* FOG_TABLE_0_H */

#define REG_FOG_TABLE_0_H_OFFSET                           0x362
#define REG_FOG_TABLE_0_H_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_0_H_OFFSET)
#define reg_G3X_FOG_TABLE_0_H                              (*( REGType16v *) REG_FOG_TABLE_0_H_ADDR)

/* FOG_TABLE_1 */

#define REG_FOG_TABLE_1_OFFSET                             0x364
#define REG_FOG_TABLE_1_ADDR                               (HW_REG_BASE + REG_FOG_TABLE_1_OFFSET)
#define reg_G3X_FOG_TABLE_1                                (*( REGType32v *) REG_FOG_TABLE_1_ADDR)

/* FOG_TABLE_1_L */

#define REG_FOG_TABLE_1_L_OFFSET                           0x364
#define REG_FOG_TABLE_1_L_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_1_L_OFFSET)
#define reg_G3X_FOG_TABLE_1_L                              (*( REGType16v *) REG_FOG_TABLE_1_L_ADDR)

/* FOG_TABLE_1_H */

#define REG_FOG_TABLE_1_H_OFFSET                           0x366
#define REG_FOG_TABLE_1_H_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_1_H_OFFSET)
#define reg_G3X_FOG_TABLE_1_H                              (*( REGType16v *) REG_FOG_TABLE_1_H_ADDR)

/* FOG_TABLE_2 */

#define REG_FOG_TABLE_2_OFFSET                             0x368
#define REG_FOG_TABLE_2_ADDR                               (HW_REG_BASE + REG_FOG_TABLE_2_OFFSET)
#define reg_G3X_FOG_TABLE_2                                (*( REGType32v *) REG_FOG_TABLE_2_ADDR)

/* FOG_TABLE_2_L */

#define REG_FOG_TABLE_2_L_OFFSET                           0x368
#define REG_FOG_TABLE_2_L_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_2_L_OFFSET)
#define reg_G3X_FOG_TABLE_2_L                              (*( REGType16v *) REG_FOG_TABLE_2_L_ADDR)

/* FOG_TABLE_2_H */

#define REG_FOG_TABLE_2_H_OFFSET                           0x36a
#define REG_FOG_TABLE_2_H_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_2_H_OFFSET)
#define reg_G3X_FOG_TABLE_2_H                              (*( REGType16v *) REG_FOG_TABLE_2_H_ADDR)

/* FOG_TABLE_3 */

#define REG_FOG_TABLE_3_OFFSET                             0x36c
#define REG_FOG_TABLE_3_ADDR                               (HW_REG_BASE + REG_FOG_TABLE_3_OFFSET)
#define reg_G3X_FOG_TABLE_3                                (*( REGType32v *) REG_FOG_TABLE_3_ADDR)

/* FOG_TABLE_3_L */

#define REG_FOG_TABLE_3_L_OFFSET                           0x36c
#define REG_FOG_TABLE_3_L_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_3_L_OFFSET)
#define reg_G3X_FOG_TABLE_3_L                              (*( REGType16v *) REG_FOG_TABLE_3_L_ADDR)

/* FOG_TABLE_3_H */

#define REG_FOG_TABLE_3_H_OFFSET                           0x36e
#define REG_FOG_TABLE_3_H_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_3_H_OFFSET)
#define reg_G3X_FOG_TABLE_3_H                              (*( REGType16v *) REG_FOG_TABLE_3_H_ADDR)

/* FOG_TABLE_4 */

#define REG_FOG_TABLE_4_OFFSET                             0x370
#define REG_FOG_TABLE_4_ADDR                               (HW_REG_BASE + REG_FOG_TABLE_4_OFFSET)
#define reg_G3X_FOG_TABLE_4                                (*( REGType32v *) REG_FOG_TABLE_4_ADDR)

/* FOG_TABLE_4_L */

#define REG_FOG_TABLE_4_L_OFFSET                           0x370
#define REG_FOG_TABLE_4_L_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_4_L_OFFSET)
#define reg_G3X_FOG_TABLE_4_L                              (*( REGType16v *) REG_FOG_TABLE_4_L_ADDR)

/* FOG_TABLE_4_H */

#define REG_FOG_TABLE_4_H_OFFSET                           0x372
#define REG_FOG_TABLE_4_H_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_4_H_OFFSET)
#define reg_G3X_FOG_TABLE_4_H                              (*( REGType16v *) REG_FOG_TABLE_4_H_ADDR)

/* FOG_TABLE_5 */

#define REG_FOG_TABLE_5_OFFSET                             0x374
#define REG_FOG_TABLE_5_ADDR                               (HW_REG_BASE + REG_FOG_TABLE_5_OFFSET)
#define reg_G3X_FOG_TABLE_5                                (*( REGType32v *) REG_FOG_TABLE_5_ADDR)

/* FOG_TABLE_5_L */

#define REG_FOG_TABLE_5_L_OFFSET                           0x374
#define REG_FOG_TABLE_5_L_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_5_L_OFFSET)
#define reg_G3X_FOG_TABLE_5_L                              (*( REGType16v *) REG_FOG_TABLE_5_L_ADDR)

/* FOG_TABLE_5_H */

#define REG_FOG_TABLE_5_H_OFFSET                           0x376
#define REG_FOG_TABLE_5_H_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_5_H_OFFSET)
#define reg_G3X_FOG_TABLE_5_H                              (*( REGType16v *) REG_FOG_TABLE_5_H_ADDR)

/* FOG_TABLE_6 */

#define REG_FOG_TABLE_6_OFFSET                             0x378
#define REG_FOG_TABLE_6_ADDR                               (HW_REG_BASE + REG_FOG_TABLE_6_OFFSET)
#define reg_G3X_FOG_TABLE_6                                (*( REGType32v *) REG_FOG_TABLE_6_ADDR)

/* FOG_TABLE_6_L */

#define REG_FOG_TABLE_6_L_OFFSET                           0x378
#define REG_FOG_TABLE_6_L_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_6_L_OFFSET)
#define reg_G3X_FOG_TABLE_6_L                              (*( REGType16v *) REG_FOG_TABLE_6_L_ADDR)

/* FOG_TABLE_6_H */

#define REG_FOG_TABLE_6_H_OFFSET                           0x37a
#define REG_FOG_TABLE_6_H_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_6_H_OFFSET)
#define reg_G3X_FOG_TABLE_6_H                              (*( REGType16v *) REG_FOG_TABLE_6_H_ADDR)

/* FOG_TABLE_7 */

#define REG_FOG_TABLE_7_OFFSET                             0x37c
#define REG_FOG_TABLE_7_ADDR                               (HW_REG_BASE + REG_FOG_TABLE_7_OFFSET)
#define reg_G3X_FOG_TABLE_7                                (*( REGType32v *) REG_FOG_TABLE_7_ADDR)

/* FOG_TABLE_7_L */

#define REG_FOG_TABLE_7_L_OFFSET                           0x37c
#define REG_FOG_TABLE_7_L_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_7_L_OFFSET)
#define reg_G3X_FOG_TABLE_7_L                              (*( REGType16v *) REG_FOG_TABLE_7_L_ADDR)

/* FOG_TABLE_7_H */

#define REG_FOG_TABLE_7_H_OFFSET                           0x37e
#define REG_FOG_TABLE_7_H_ADDR                             (HW_REG_BASE + REG_FOG_TABLE_7_H_OFFSET)
#define reg_G3X_FOG_TABLE_7_H                              (*( REGType16v *) REG_FOG_TABLE_7_H_ADDR)

/* TOON_TABLE_0 */

#define REG_TOON_TABLE_0_OFFSET                            0x380
#define REG_TOON_TABLE_0_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_0_OFFSET)
#define reg_G3X_TOON_TABLE_0                               (*( REGType32v *) REG_TOON_TABLE_0_ADDR)

/* TOON_TABLE_0_L */

#define REG_TOON_TABLE_0_L_OFFSET                          0x380
#define REG_TOON_TABLE_0_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_0_L_OFFSET)
#define reg_G3X_TOON_TABLE_0_L                             (*( REGType16v *) REG_TOON_TABLE_0_L_ADDR)

/* TOON_TABLE_0_H */

#define REG_TOON_TABLE_0_H_OFFSET                          0x382
#define REG_TOON_TABLE_0_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_0_H_OFFSET)
#define reg_G3X_TOON_TABLE_0_H                             (*( REGType16v *) REG_TOON_TABLE_0_H_ADDR)

/* TOON_TABLE_1 */

#define REG_TOON_TABLE_1_OFFSET                            0x384
#define REG_TOON_TABLE_1_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_1_OFFSET)
#define reg_G3X_TOON_TABLE_1                               (*( REGType32v *) REG_TOON_TABLE_1_ADDR)

/* TOON_TABLE_1_L */

#define REG_TOON_TABLE_1_L_OFFSET                          0x384
#define REG_TOON_TABLE_1_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_1_L_OFFSET)
#define reg_G3X_TOON_TABLE_1_L                             (*( REGType16v *) REG_TOON_TABLE_1_L_ADDR)

/* TOON_TABLE_1_H */

#define REG_TOON_TABLE_1_H_OFFSET                          0x386
#define REG_TOON_TABLE_1_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_1_H_OFFSET)
#define reg_G3X_TOON_TABLE_1_H                             (*( REGType16v *) REG_TOON_TABLE_1_H_ADDR)

/* TOON_TABLE_2 */

#define REG_TOON_TABLE_2_OFFSET                            0x388
#define REG_TOON_TABLE_2_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_2_OFFSET)
#define reg_G3X_TOON_TABLE_2                               (*( REGType32v *) REG_TOON_TABLE_2_ADDR)

/* TOON_TABLE_2_L */

#define REG_TOON_TABLE_2_L_OFFSET                          0x388
#define REG_TOON_TABLE_2_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_2_L_OFFSET)
#define reg_G3X_TOON_TABLE_2_L                             (*( REGType16v *) REG_TOON_TABLE_2_L_ADDR)

/* TOON_TABLE_2_H */

#define REG_TOON_TABLE_2_H_OFFSET                          0x38a
#define REG_TOON_TABLE_2_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_2_H_OFFSET)
#define reg_G3X_TOON_TABLE_2_H                             (*( REGType16v *) REG_TOON_TABLE_2_H_ADDR)

/* TOON_TABLE_3 */

#define REG_TOON_TABLE_3_OFFSET                            0x38c
#define REG_TOON_TABLE_3_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_3_OFFSET)
#define reg_G3X_TOON_TABLE_3                               (*( REGType32v *) REG_TOON_TABLE_3_ADDR)

/* TOON_TABLE_3_L */

#define REG_TOON_TABLE_3_L_OFFSET                          0x38c
#define REG_TOON_TABLE_3_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_3_L_OFFSET)
#define reg_G3X_TOON_TABLE_3_L                             (*( REGType16v *) REG_TOON_TABLE_3_L_ADDR)

/* TOON_TABLE_3_H */

#define REG_TOON_TABLE_3_H_OFFSET                          0x38e
#define REG_TOON_TABLE_3_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_3_H_OFFSET)
#define reg_G3X_TOON_TABLE_3_H                             (*( REGType16v *) REG_TOON_TABLE_3_H_ADDR)

/* TOON_TABLE_4 */

#define REG_TOON_TABLE_4_OFFSET                            0x390
#define REG_TOON_TABLE_4_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_4_OFFSET)
#define reg_G3X_TOON_TABLE_4                               (*( REGType32v *) REG_TOON_TABLE_4_ADDR)

/* TOON_TABLE_4_L */

#define REG_TOON_TABLE_4_L_OFFSET                          0x390
#define REG_TOON_TABLE_4_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_4_L_OFFSET)
#define reg_G3X_TOON_TABLE_4_L                             (*( REGType16v *) REG_TOON_TABLE_4_L_ADDR)

/* TOON_TABLE_4_H */

#define REG_TOON_TABLE_4_H_OFFSET                          0x392
#define REG_TOON_TABLE_4_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_4_H_OFFSET)
#define reg_G3X_TOON_TABLE_4_H                             (*( REGType16v *) REG_TOON_TABLE_4_H_ADDR)

/* TOON_TABLE_5 */

#define REG_TOON_TABLE_5_OFFSET                            0x394
#define REG_TOON_TABLE_5_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_5_OFFSET)
#define reg_G3X_TOON_TABLE_5                               (*( REGType32v *) REG_TOON_TABLE_5_ADDR)

/* TOON_TABLE_5_L */

#define REG_TOON_TABLE_5_L_OFFSET                          0x394
#define REG_TOON_TABLE_5_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_5_L_OFFSET)
#define reg_G3X_TOON_TABLE_5_L                             (*( REGType16v *) REG_TOON_TABLE_5_L_ADDR)

/* TOON_TABLE_5_H */

#define REG_TOON_TABLE_5_H_OFFSET                          0x396
#define REG_TOON_TABLE_5_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_5_H_OFFSET)
#define reg_G3X_TOON_TABLE_5_H                             (*( REGType16v *) REG_TOON_TABLE_5_H_ADDR)

/* TOON_TABLE_6 */

#define REG_TOON_TABLE_6_OFFSET                            0x398
#define REG_TOON_TABLE_6_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_6_OFFSET)
#define reg_G3X_TOON_TABLE_6                               (*( REGType32v *) REG_TOON_TABLE_6_ADDR)

/* TOON_TABLE_6_L */

#define REG_TOON_TABLE_6_L_OFFSET                          0x398
#define REG_TOON_TABLE_6_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_6_L_OFFSET)
#define reg_G3X_TOON_TABLE_6_L                             (*( REGType16v *) REG_TOON_TABLE_6_L_ADDR)

/* TOON_TABLE_6_H */

#define REG_TOON_TABLE_6_H_OFFSET                          0x39a
#define REG_TOON_TABLE_6_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_6_H_OFFSET)
#define reg_G3X_TOON_TABLE_6_H                             (*( REGType16v *) REG_TOON_TABLE_6_H_ADDR)

/* TOON_TABLE_7 */

#define REG_TOON_TABLE_7_OFFSET                            0x39c
#define REG_TOON_TABLE_7_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_7_OFFSET)
#define reg_G3X_TOON_TABLE_7                               (*( REGType32v *) REG_TOON_TABLE_7_ADDR)

/* TOON_TABLE_7_L */

#define REG_TOON_TABLE_7_L_OFFSET                          0x39c
#define REG_TOON_TABLE_7_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_7_L_OFFSET)
#define reg_G3X_TOON_TABLE_7_L                             (*( REGType16v *) REG_TOON_TABLE_7_L_ADDR)

/* TOON_TABLE_7_H */

#define REG_TOON_TABLE_7_H_OFFSET                          0x39e
#define REG_TOON_TABLE_7_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_7_H_OFFSET)
#define reg_G3X_TOON_TABLE_7_H                             (*( REGType16v *) REG_TOON_TABLE_7_H_ADDR)

/* TOON_TABLE_8 */

#define REG_TOON_TABLE_8_OFFSET                            0x3a0
#define REG_TOON_TABLE_8_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_8_OFFSET)
#define reg_G3X_TOON_TABLE_8                               (*( REGType32v *) REG_TOON_TABLE_8_ADDR)

/* TOON_TABLE_8_L */

#define REG_TOON_TABLE_8_L_OFFSET                          0x3a0
#define REG_TOON_TABLE_8_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_8_L_OFFSET)
#define reg_G3X_TOON_TABLE_8_L                             (*( REGType16v *) REG_TOON_TABLE_8_L_ADDR)

/* TOON_TABLE_8_H */

#define REG_TOON_TABLE_8_H_OFFSET                          0x3a2
#define REG_TOON_TABLE_8_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_8_H_OFFSET)
#define reg_G3X_TOON_TABLE_8_H                             (*( REGType16v *) REG_TOON_TABLE_8_H_ADDR)

/* TOON_TABLE_9 */

#define REG_TOON_TABLE_9_OFFSET                            0x3a4
#define REG_TOON_TABLE_9_ADDR                              (HW_REG_BASE + REG_TOON_TABLE_9_OFFSET)
#define reg_G3X_TOON_TABLE_9                               (*( REGType32v *) REG_TOON_TABLE_9_ADDR)

/* TOON_TABLE_9_L */

#define REG_TOON_TABLE_9_L_OFFSET                          0x3a4
#define REG_TOON_TABLE_9_L_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_9_L_OFFSET)
#define reg_G3X_TOON_TABLE_9_L                             (*( REGType16v *) REG_TOON_TABLE_9_L_ADDR)

/* TOON_TABLE_9_H */

#define REG_TOON_TABLE_9_H_OFFSET                          0x3a6
#define REG_TOON_TABLE_9_H_ADDR                            (HW_REG_BASE + REG_TOON_TABLE_9_H_OFFSET)
#define reg_G3X_TOON_TABLE_9_H                             (*( REGType16v *) REG_TOON_TABLE_9_H_ADDR)

/* TOON_TABLE_10 */

#define REG_TOON_TABLE_10_OFFSET                           0x3a8
#define REG_TOON_TABLE_10_ADDR                             (HW_REG_BASE + REG_TOON_TABLE_10_OFFSET)
#define reg_G3X_TOON_TABLE_10                              (*( REGType32v *) REG_TOON_TABLE_10_ADDR)

/* TOON_TABLE_10_L */

#define REG_TOON_TABLE_10_L_OFFSET                         0x3a8
#define REG_TOON_TABLE_10_L_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_10_L_OFFSET)
#define reg_G3X_TOON_TABLE_10_L                            (*( REGType16v *) REG_TOON_TABLE_10_L_ADDR)

/* TOON_TABLE_10_H */

#define REG_TOON_TABLE_10_H_OFFSET                         0x3aa
#define REG_TOON_TABLE_10_H_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_10_H_OFFSET)
#define reg_G3X_TOON_TABLE_10_H                            (*( REGType16v *) REG_TOON_TABLE_10_H_ADDR)

/* TOON_TABLE_11 */

#define REG_TOON_TABLE_11_OFFSET                           0x3ac
#define REG_TOON_TABLE_11_ADDR                             (HW_REG_BASE + REG_TOON_TABLE_11_OFFSET)
#define reg_G3X_TOON_TABLE_11                              (*( REGType32v *) REG_TOON_TABLE_11_ADDR)

/* TOON_TABLE_11_L */

#define REG_TOON_TABLE_11_L_OFFSET                         0x3ac
#define REG_TOON_TABLE_11_L_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_11_L_OFFSET)
#define reg_G3X_TOON_TABLE_11_L                            (*( REGType16v *) REG_TOON_TABLE_11_L_ADDR)

/* TOON_TABLE_11_H */

#define REG_TOON_TABLE_11_H_OFFSET                         0x3ae
#define REG_TOON_TABLE_11_H_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_11_H_OFFSET)
#define reg_G3X_TOON_TABLE_11_H                            (*( REGType16v *) REG_TOON_TABLE_11_H_ADDR)

/* TOON_TABLE_12 */

#define REG_TOON_TABLE_12_OFFSET                           0x3b0
#define REG_TOON_TABLE_12_ADDR                             (HW_REG_BASE + REG_TOON_TABLE_12_OFFSET)
#define reg_G3X_TOON_TABLE_12                              (*( REGType32v *) REG_TOON_TABLE_12_ADDR)

/* TOON_TABLE_12_L */

#define REG_TOON_TABLE_12_L_OFFSET                         0x3b0
#define REG_TOON_TABLE_12_L_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_12_L_OFFSET)
#define reg_G3X_TOON_TABLE_12_L                            (*( REGType16v *) REG_TOON_TABLE_12_L_ADDR)

/* TOON_TABLE_12_H */

#define REG_TOON_TABLE_12_H_OFFSET                         0x3b2
#define REG_TOON_TABLE_12_H_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_12_H_OFFSET)
#define reg_G3X_TOON_TABLE_12_H                            (*( REGType16v *) REG_TOON_TABLE_12_H_ADDR)

/* TOON_TABLE_13 */

#define REG_TOON_TABLE_13_OFFSET                           0x3b4
#define REG_TOON_TABLE_13_ADDR                             (HW_REG_BASE + REG_TOON_TABLE_13_OFFSET)
#define reg_G3X_TOON_TABLE_13                              (*( REGType32v *) REG_TOON_TABLE_13_ADDR)

/* TOON_TABLE_13_L */

#define REG_TOON_TABLE_13_L_OFFSET                         0x3b4
#define REG_TOON_TABLE_13_L_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_13_L_OFFSET)
#define reg_G3X_TOON_TABLE_13_L                            (*( REGType16v *) REG_TOON_TABLE_13_L_ADDR)

/* TOON_TABLE_13_H */

#define REG_TOON_TABLE_13_H_OFFSET                         0x3b6
#define REG_TOON_TABLE_13_H_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_13_H_OFFSET)
#define reg_G3X_TOON_TABLE_13_H                            (*( REGType16v *) REG_TOON_TABLE_13_H_ADDR)

/* TOON_TABLE_14 */

#define REG_TOON_TABLE_14_OFFSET                           0x3b8
#define REG_TOON_TABLE_14_ADDR                             (HW_REG_BASE + REG_TOON_TABLE_14_OFFSET)
#define reg_G3X_TOON_TABLE_14                              (*( REGType32v *) REG_TOON_TABLE_14_ADDR)

/* TOON_TABLE_14_L */

#define REG_TOON_TABLE_14_L_OFFSET                         0x3b8
#define REG_TOON_TABLE_14_L_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_14_L_OFFSET)
#define reg_G3X_TOON_TABLE_14_L                            (*( REGType16v *) REG_TOON_TABLE_14_L_ADDR)

/* TOON_TABLE_14_H */

#define REG_TOON_TABLE_14_H_OFFSET                         0x3ba
#define REG_TOON_TABLE_14_H_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_14_H_OFFSET)
#define reg_G3X_TOON_TABLE_14_H                            (*( REGType16v *) REG_TOON_TABLE_14_H_ADDR)

/* TOON_TABLE_15 */

#define REG_TOON_TABLE_15_OFFSET                           0x3bc
#define REG_TOON_TABLE_15_ADDR                             (HW_REG_BASE + REG_TOON_TABLE_15_OFFSET)
#define reg_G3X_TOON_TABLE_15                              (*( REGType32v *) REG_TOON_TABLE_15_ADDR)

/* TOON_TABLE_15_L */

#define REG_TOON_TABLE_15_L_OFFSET                         0x3bc
#define REG_TOON_TABLE_15_L_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_15_L_OFFSET)
#define reg_G3X_TOON_TABLE_15_L                            (*( REGType16v *) REG_TOON_TABLE_15_L_ADDR)

/* TOON_TABLE_15_H */

#define REG_TOON_TABLE_15_H_OFFSET                         0x3be
#define REG_TOON_TABLE_15_H_ADDR                           (HW_REG_BASE + REG_TOON_TABLE_15_H_OFFSET)
#define reg_G3X_TOON_TABLE_15_H                            (*( REGType16v *) REG_TOON_TABLE_15_H_ADDR)

/* GXFIFO */

#define REG_GXFIFO_OFFSET                                  0x400
#define REG_GXFIFO_ADDR                                    (HW_REG_BASE + REG_GXFIFO_OFFSET)
#define reg_G3X_GXFIFO                                     (*( REGType32v *) REG_GXFIFO_ADDR)

/* GXSTAT */

#define REG_GXSTAT_OFFSET                                  0x600
#define REG_GXSTAT_ADDR                                    (HW_REG_BASE + REG_GXSTAT_OFFSET)
#define reg_G3X_GXSTAT                                     (*( REGType32v *) REG_GXSTAT_ADDR)

/* LISTRAM_COUNT */

#define REG_LISTRAM_COUNT_OFFSET                           0x604
#define REG_LISTRAM_COUNT_ADDR                             (HW_REG_BASE + REG_LISTRAM_COUNT_OFFSET)
#define reg_G3X_LISTRAM_COUNT                              (*(const REGType16v *) REG_LISTRAM_COUNT_ADDR)

/* VTXRAM_COUNT */

#define REG_VTXRAM_COUNT_OFFSET                            0x606
#define REG_VTXRAM_COUNT_ADDR                              (HW_REG_BASE + REG_VTXRAM_COUNT_OFFSET)
#define reg_G3X_VTXRAM_COUNT                               (*(const REGType16v *) REG_VTXRAM_COUNT_ADDR)

/* DISP_1DOT_DEPTH */

#define REG_DISP_1DOT_DEPTH_OFFSET                         0x610
#define REG_DISP_1DOT_DEPTH_ADDR                           (HW_REG_BASE + REG_DISP_1DOT_DEPTH_OFFSET)
#define reg_G3X_DISP_1DOT_DEPTH                            (*( REGType16v *) REG_DISP_1DOT_DEPTH_ADDR)

/* POS_RESULT_X */

#define REG_POS_RESULT_X_OFFSET                            0x620
#define REG_POS_RESULT_X_ADDR                              (HW_REG_BASE + REG_POS_RESULT_X_OFFSET)
#define reg_G3X_POS_RESULT_X                               (*(const REGType32v *) REG_POS_RESULT_X_ADDR)

/* POS_RESULT_Y */

#define REG_POS_RESULT_Y_OFFSET                            0x624
#define REG_POS_RESULT_Y_ADDR                              (HW_REG_BASE + REG_POS_RESULT_Y_OFFSET)
#define reg_G3X_POS_RESULT_Y                               (*(const REGType32v *) REG_POS_RESULT_Y_ADDR)

/* POS_RESULT_Z */

#define REG_POS_RESULT_Z_OFFSET                            0x628
#define REG_POS_RESULT_Z_ADDR                              (HW_REG_BASE + REG_POS_RESULT_Z_OFFSET)
#define reg_G3X_POS_RESULT_Z                               (*(const REGType32v *) REG_POS_RESULT_Z_ADDR)

/* POS_RESULT_W */

#define REG_POS_RESULT_W_OFFSET                            0x62c
#define REG_POS_RESULT_W_ADDR                              (HW_REG_BASE + REG_POS_RESULT_W_OFFSET)
#define reg_G3X_POS_RESULT_W                               (*(const REGType32v *) REG_POS_RESULT_W_ADDR)

/* VEC_RESULT_X */

#define REG_VEC_RESULT_X_OFFSET                            0x630
#define REG_VEC_RESULT_X_ADDR                              (HW_REG_BASE + REG_VEC_RESULT_X_OFFSET)
#define reg_G3X_VEC_RESULT_X                               (*(const REGType16v *) REG_VEC_RESULT_X_ADDR)

/* VEC_RESULT_Y */

#define REG_VEC_RESULT_Y_OFFSET                            0x632
#define REG_VEC_RESULT_Y_ADDR                              (HW_REG_BASE + REG_VEC_RESULT_Y_OFFSET)
#define reg_G3X_VEC_RESULT_Y                               (*(const REGType16v *) REG_VEC_RESULT_Y_ADDR)

/* VEC_RESULT_Z */

#define REG_VEC_RESULT_Z_OFFSET                            0x634
#define REG_VEC_RESULT_Z_ADDR                              (HW_REG_BASE + REG_VEC_RESULT_Z_OFFSET)
#define reg_G3X_VEC_RESULT_Z                               (*(const REGType16v *) REG_VEC_RESULT_Z_ADDR)

/* CLIPMTX_RESULT_0 */

#define REG_CLIPMTX_RESULT_0_OFFSET                        0x640
#define REG_CLIPMTX_RESULT_0_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_0_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_0                           (*(const REGType32v *) REG_CLIPMTX_RESULT_0_ADDR)

/* CLIPMTX_RESULT_1 */

#define REG_CLIPMTX_RESULT_1_OFFSET                        0x644
#define REG_CLIPMTX_RESULT_1_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_1_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_1                           (*(const REGType32v *) REG_CLIPMTX_RESULT_1_ADDR)

/* CLIPMTX_RESULT_2 */

#define REG_CLIPMTX_RESULT_2_OFFSET                        0x648
#define REG_CLIPMTX_RESULT_2_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_2_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_2                           (*(const REGType32v *) REG_CLIPMTX_RESULT_2_ADDR)

/* CLIPMTX_RESULT_3 */

#define REG_CLIPMTX_RESULT_3_OFFSET                        0x64c
#define REG_CLIPMTX_RESULT_3_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_3_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_3                           (*(const REGType32v *) REG_CLIPMTX_RESULT_3_ADDR)

/* CLIPMTX_RESULT_4 */

#define REG_CLIPMTX_RESULT_4_OFFSET                        0x650
#define REG_CLIPMTX_RESULT_4_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_4_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_4                           (*(const REGType32v *) REG_CLIPMTX_RESULT_4_ADDR)

/* CLIPMTX_RESULT_5 */

#define REG_CLIPMTX_RESULT_5_OFFSET                        0x654
#define REG_CLIPMTX_RESULT_5_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_5_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_5                           (*(const REGType32v *) REG_CLIPMTX_RESULT_5_ADDR)

/* CLIPMTX_RESULT_6 */

#define REG_CLIPMTX_RESULT_6_OFFSET                        0x658
#define REG_CLIPMTX_RESULT_6_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_6_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_6                           (*(const REGType32v *) REG_CLIPMTX_RESULT_6_ADDR)

/* CLIPMTX_RESULT_7 */

#define REG_CLIPMTX_RESULT_7_OFFSET                        0x65c
#define REG_CLIPMTX_RESULT_7_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_7_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_7                           (*(const REGType32v *) REG_CLIPMTX_RESULT_7_ADDR)

/* CLIPMTX_RESULT_8 */

#define REG_CLIPMTX_RESULT_8_OFFSET                        0x660
#define REG_CLIPMTX_RESULT_8_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_8_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_8                           (*(const REGType32v *) REG_CLIPMTX_RESULT_8_ADDR)

/* CLIPMTX_RESULT_9 */

#define REG_CLIPMTX_RESULT_9_OFFSET                        0x664
#define REG_CLIPMTX_RESULT_9_ADDR                          (HW_REG_BASE + REG_CLIPMTX_RESULT_9_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_9                           (*(const REGType32v *) REG_CLIPMTX_RESULT_9_ADDR)

/* CLIPMTX_RESULT_10 */

#define REG_CLIPMTX_RESULT_10_OFFSET                       0x668
#define REG_CLIPMTX_RESULT_10_ADDR                         (HW_REG_BASE + REG_CLIPMTX_RESULT_10_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_10                          (*(const REGType32v *) REG_CLIPMTX_RESULT_10_ADDR)

/* CLIPMTX_RESULT_11 */

#define REG_CLIPMTX_RESULT_11_OFFSET                       0x66c
#define REG_CLIPMTX_RESULT_11_ADDR                         (HW_REG_BASE + REG_CLIPMTX_RESULT_11_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_11                          (*(const REGType32v *) REG_CLIPMTX_RESULT_11_ADDR)

/* CLIPMTX_RESULT_12 */

#define REG_CLIPMTX_RESULT_12_OFFSET                       0x670
#define REG_CLIPMTX_RESULT_12_ADDR                         (HW_REG_BASE + REG_CLIPMTX_RESULT_12_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_12                          (*(const REGType32v *) REG_CLIPMTX_RESULT_12_ADDR)

/* CLIPMTX_RESULT_13 */

#define REG_CLIPMTX_RESULT_13_OFFSET                       0x674
#define REG_CLIPMTX_RESULT_13_ADDR                         (HW_REG_BASE + REG_CLIPMTX_RESULT_13_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_13                          (*(const REGType32v *) REG_CLIPMTX_RESULT_13_ADDR)

/* CLIPMTX_RESULT_14 */

#define REG_CLIPMTX_RESULT_14_OFFSET                       0x678
#define REG_CLIPMTX_RESULT_14_ADDR                         (HW_REG_BASE + REG_CLIPMTX_RESULT_14_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_14                          (*(const REGType32v *) REG_CLIPMTX_RESULT_14_ADDR)

/* CLIPMTX_RESULT_15 */

#define REG_CLIPMTX_RESULT_15_OFFSET                       0x67c
#define REG_CLIPMTX_RESULT_15_ADDR                         (HW_REG_BASE + REG_CLIPMTX_RESULT_15_OFFSET)
#define reg_G3X_CLIPMTX_RESULT_15                          (*(const REGType32v *) REG_CLIPMTX_RESULT_15_ADDR)

/* VECMTX_RESULT_0 */

#define REG_VECMTX_RESULT_0_OFFSET                         0x680
#define REG_VECMTX_RESULT_0_ADDR                           (HW_REG_BASE + REG_VECMTX_RESULT_0_OFFSET)
#define reg_G3X_VECMTX_RESULT_0                            (*(const REGType32v *) REG_VECMTX_RESULT_0_ADDR)

/* VECMTX_RESULT_1 */

#define REG_VECMTX_RESULT_1_OFFSET                         0x684
#define REG_VECMTX_RESULT_1_ADDR                           (HW_REG_BASE + REG_VECMTX_RESULT_1_OFFSET)
#define reg_G3X_VECMTX_RESULT_1                            (*(const REGType32v *) REG_VECMTX_RESULT_1_ADDR)

/* VECMTX_RESULT_2 */

#define REG_VECMTX_RESULT_2_OFFSET                         0x688
#define REG_VECMTX_RESULT_2_ADDR                           (HW_REG_BASE + REG_VECMTX_RESULT_2_OFFSET)
#define reg_G3X_VECMTX_RESULT_2                            (*(const REGType32v *) REG_VECMTX_RESULT_2_ADDR)

/* VECMTX_RESULT_3 */

#define REG_VECMTX_RESULT_3_OFFSET                         0x68c
#define REG_VECMTX_RESULT_3_ADDR                           (HW_REG_BASE + REG_VECMTX_RESULT_3_OFFSET)
#define reg_G3X_VECMTX_RESULT_3                            (*(const REGType32v *) REG_VECMTX_RESULT_3_ADDR)

/* VECMTX_RESULT_4 */

#define REG_VECMTX_RESULT_4_OFFSET                         0x690
#define REG_VECMTX_RESULT_4_ADDR                           (HW_REG_BASE + REG_VECMTX_RESULT_4_OFFSET)
#define reg_G3X_VECMTX_RESULT_4                            (*(const REGType32v *) REG_VECMTX_RESULT_4_ADDR)

/* VECMTX_RESULT_5 */

#define REG_VECMTX_RESULT_5_OFFSET                         0x694
#define REG_VECMTX_RESULT_5_ADDR                           (HW_REG_BASE + REG_VECMTX_RESULT_5_OFFSET)
#define reg_G3X_VECMTX_RESULT_5                            (*(const REGType32v *) REG_VECMTX_RESULT_5_ADDR)

/* VECMTX_RESULT_6 */

#define REG_VECMTX_RESULT_6_OFFSET                         0x698
#define REG_VECMTX_RESULT_6_ADDR                           (HW_REG_BASE + REG_VECMTX_RESULT_6_OFFSET)
#define reg_G3X_VECMTX_RESULT_6                            (*(const REGType32v *) REG_VECMTX_RESULT_6_ADDR)

/* VECMTX_RESULT_7 */

#define REG_VECMTX_RESULT_7_OFFSET                         0x69c
#define REG_VECMTX_RESULT_7_ADDR                           (HW_REG_BASE + REG_VECMTX_RESULT_7_OFFSET)
#define reg_G3X_VECMTX_RESULT_7                            (*(const REGType32v *) REG_VECMTX_RESULT_7_ADDR)

/* VECMTX_RESULT_8 */

#define REG_VECMTX_RESULT_8_OFFSET                         0x6a0
#define REG_VECMTX_RESULT_8_ADDR                           (HW_REG_BASE + REG_VECMTX_RESULT_8_OFFSET)
#define reg_G3X_VECMTX_RESULT_8                            (*(const REGType32v *) REG_VECMTX_RESULT_8_ADDR)


/*
 * Definitions of Register fields
 */


/* DISP3DCNT */

#define REG_G3X_DISP3DCNT_PRI_SHIFT                        14
#define REG_G3X_DISP3DCNT_PRI_SIZE                         1
#define REG_G3X_DISP3DCNT_PRI_MASK                         0x4000

#define REG_G3X_DISP3DCNT_GO_SHIFT                         13
#define REG_G3X_DISP3DCNT_GO_SIZE                          1
#define REG_G3X_DISP3DCNT_GO_MASK                          0x2000

#define REG_G3X_DISP3DCNT_RO_SHIFT                         12
#define REG_G3X_DISP3DCNT_RO_SIZE                          1
#define REG_G3X_DISP3DCNT_RO_MASK                          0x1000

#define REG_G3X_DISP3DCNT_FOG_SHIFT_SHIFT                  8
#define REG_G3X_DISP3DCNT_FOG_SHIFT_SIZE                   4
#define REG_G3X_DISP3DCNT_FOG_SHIFT_MASK                   0x0f00

#define REG_G3X_DISP3DCNT_FME_SHIFT                        7
#define REG_G3X_DISP3DCNT_FME_SIZE                         1
#define REG_G3X_DISP3DCNT_FME_MASK                         0x0080

#define REG_G3X_DISP3DCNT_FMOD_SHIFT                       6
#define REG_G3X_DISP3DCNT_FMOD_SIZE                        1
#define REG_G3X_DISP3DCNT_FMOD_MASK                        0x0040

#define REG_G3X_DISP3DCNT_EME_SHIFT                        5
#define REG_G3X_DISP3DCNT_EME_SIZE                         1
#define REG_G3X_DISP3DCNT_EME_MASK                         0x0020

#define REG_G3X_DISP3DCNT_AAE_SHIFT                        4
#define REG_G3X_DISP3DCNT_AAE_SIZE                         1
#define REG_G3X_DISP3DCNT_AAE_MASK                         0x0010

#define REG_G3X_DISP3DCNT_ABE_SHIFT                        3
#define REG_G3X_DISP3DCNT_ABE_SIZE                         1
#define REG_G3X_DISP3DCNT_ABE_MASK                         0x0008

#define REG_G3X_DISP3DCNT_ATE_SHIFT                        2
#define REG_G3X_DISP3DCNT_ATE_SIZE                         1
#define REG_G3X_DISP3DCNT_ATE_MASK                         0x0004

#define REG_G3X_DISP3DCNT_THS_SHIFT                        1
#define REG_G3X_DISP3DCNT_THS_SIZE                         1
#define REG_G3X_DISP3DCNT_THS_MASK                         0x0002

#define REG_G3X_DISP3DCNT_TME_SHIFT                        0
#define REG_G3X_DISP3DCNT_TME_SIZE                         1
#define REG_G3X_DISP3DCNT_TME_MASK                         0x0001

#ifndef SDK_ASM
#define REG_G3X_DISP3DCNT_FIELD( pri, go, ro, fog_shift, fme, fmod, eme, aae, abe, ate, ths, tme ) \
    (u16)( \
    ((u32)(pri) << REG_G3X_DISP3DCNT_PRI_SHIFT) | \
    ((u32)(go) << REG_G3X_DISP3DCNT_GO_SHIFT) | \
    ((u32)(ro) << REG_G3X_DISP3DCNT_RO_SHIFT) | \
    ((u32)(fog_shift) << REG_G3X_DISP3DCNT_FOG_SHIFT_SHIFT) | \
    ((u32)(fme) << REG_G3X_DISP3DCNT_FME_SHIFT) | \
    ((u32)(fmod) << REG_G3X_DISP3DCNT_FMOD_SHIFT) | \
    ((u32)(eme) << REG_G3X_DISP3DCNT_EME_SHIFT) | \
    ((u32)(aae) << REG_G3X_DISP3DCNT_AAE_SHIFT) | \
    ((u32)(abe) << REG_G3X_DISP3DCNT_ABE_SHIFT) | \
    ((u32)(ate) << REG_G3X_DISP3DCNT_ATE_SHIFT) | \
    ((u32)(ths) << REG_G3X_DISP3DCNT_THS_SHIFT) | \
    ((u32)(tme) << REG_G3X_DISP3DCNT_TME_SHIFT))
#endif


/* RDLINES_COUNT */

#define REG_G3X_RDLINES_COUNT_RENDERED_LINES_MIN_SHIFT     0
#define REG_G3X_RDLINES_COUNT_RENDERED_LINES_MIN_SIZE      6
#define REG_G3X_RDLINES_COUNT_RENDERED_LINES_MIN_MASK      0x003f

#ifndef SDK_ASM
#define REG_G3X_RDLINES_COUNT_FIELD( rendered_lines_min ) \
    (u16)( \
    ((u32)(rendered_lines_min) << REG_G3X_RDLINES_COUNT_RENDERED_LINES_MIN_SHIFT))
#endif


/* EDGE_COLOR_0 */

#define REG_G3X_EDGE_COLOR_0_BLUE1_SHIFT                   26
#define REG_G3X_EDGE_COLOR_0_BLUE1_SIZE                    5
#define REG_G3X_EDGE_COLOR_0_BLUE1_MASK                    0x7c000000

#define REG_G3X_EDGE_COLOR_0_GREEN1_SHIFT                  21
#define REG_G3X_EDGE_COLOR_0_GREEN1_SIZE                   5
#define REG_G3X_EDGE_COLOR_0_GREEN1_MASK                   0x03e00000

#define REG_G3X_EDGE_COLOR_0_RED1_SHIFT                    16
#define REG_G3X_EDGE_COLOR_0_RED1_SIZE                     5
#define REG_G3X_EDGE_COLOR_0_RED1_MASK                     0x001f0000

#define REG_G3X_EDGE_COLOR_0_BLUE0_SHIFT                   10
#define REG_G3X_EDGE_COLOR_0_BLUE0_SIZE                    5
#define REG_G3X_EDGE_COLOR_0_BLUE0_MASK                    0x00007c00

#define REG_G3X_EDGE_COLOR_0_GREEN0_SHIFT                  5
#define REG_G3X_EDGE_COLOR_0_GREEN0_SIZE                   5
#define REG_G3X_EDGE_COLOR_0_GREEN0_MASK                   0x000003e0

#define REG_G3X_EDGE_COLOR_0_RED0_SHIFT                    0
#define REG_G3X_EDGE_COLOR_0_RED0_SIZE                     5
#define REG_G3X_EDGE_COLOR_0_RED0_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_0_FIELD( blue1, green1, red1, blue0, green0, red0 ) \
    (u32)( \
    ((u32)(blue1) << REG_G3X_EDGE_COLOR_0_BLUE1_SHIFT) | \
    ((u32)(green1) << REG_G3X_EDGE_COLOR_0_GREEN1_SHIFT) | \
    ((u32)(red1) << REG_G3X_EDGE_COLOR_0_RED1_SHIFT) | \
    ((u32)(blue0) << REG_G3X_EDGE_COLOR_0_BLUE0_SHIFT) | \
    ((u32)(green0) << REG_G3X_EDGE_COLOR_0_GREEN0_SHIFT) | \
    ((u32)(red0) << REG_G3X_EDGE_COLOR_0_RED0_SHIFT))
#endif


/* EDGE_COLOR_0_L */

#define REG_G3X_EDGE_COLOR_0_L_BLUE0_SHIFT                 10
#define REG_G3X_EDGE_COLOR_0_L_BLUE0_SIZE                  5
#define REG_G3X_EDGE_COLOR_0_L_BLUE0_MASK                  0x7c00

#define REG_G3X_EDGE_COLOR_0_L_GREEN0_SHIFT                5
#define REG_G3X_EDGE_COLOR_0_L_GREEN0_SIZE                 5
#define REG_G3X_EDGE_COLOR_0_L_GREEN0_MASK                 0x03e0

#define REG_G3X_EDGE_COLOR_0_L_RED0_SHIFT                  0
#define REG_G3X_EDGE_COLOR_0_L_RED0_SIZE                   5
#define REG_G3X_EDGE_COLOR_0_L_RED0_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_0_L_FIELD( blue0, green0, red0 ) \
    (u16)( \
    ((u32)(blue0) << REG_G3X_EDGE_COLOR_0_L_BLUE0_SHIFT) | \
    ((u32)(green0) << REG_G3X_EDGE_COLOR_0_L_GREEN0_SHIFT) | \
    ((u32)(red0) << REG_G3X_EDGE_COLOR_0_L_RED0_SHIFT))
#endif


/* EDGE_COLOR_0_H */

#define REG_G3X_EDGE_COLOR_0_H_BLUE1_SHIFT                 10
#define REG_G3X_EDGE_COLOR_0_H_BLUE1_SIZE                  5
#define REG_G3X_EDGE_COLOR_0_H_BLUE1_MASK                  0x7c00

#define REG_G3X_EDGE_COLOR_0_H_GREEN1_SHIFT                5
#define REG_G3X_EDGE_COLOR_0_H_GREEN1_SIZE                 5
#define REG_G3X_EDGE_COLOR_0_H_GREEN1_MASK                 0x03e0

#define REG_G3X_EDGE_COLOR_0_H_RED1_SHIFT                  0
#define REG_G3X_EDGE_COLOR_0_H_RED1_SIZE                   5
#define REG_G3X_EDGE_COLOR_0_H_RED1_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_0_H_FIELD( blue1, green1, red1 ) \
    (u16)( \
    ((u32)(blue1) << REG_G3X_EDGE_COLOR_0_H_BLUE1_SHIFT) | \
    ((u32)(green1) << REG_G3X_EDGE_COLOR_0_H_GREEN1_SHIFT) | \
    ((u32)(red1) << REG_G3X_EDGE_COLOR_0_H_RED1_SHIFT))
#endif


/* EDGE_COLOR_1 */

#define REG_G3X_EDGE_COLOR_1_BLUE3_SHIFT                   26
#define REG_G3X_EDGE_COLOR_1_BLUE3_SIZE                    5
#define REG_G3X_EDGE_COLOR_1_BLUE3_MASK                    0x7c000000

#define REG_G3X_EDGE_COLOR_1_GREEN3_SHIFT                  21
#define REG_G3X_EDGE_COLOR_1_GREEN3_SIZE                   5
#define REG_G3X_EDGE_COLOR_1_GREEN3_MASK                   0x03e00000

#define REG_G3X_EDGE_COLOR_1_RED3_SHIFT                    16
#define REG_G3X_EDGE_COLOR_1_RED3_SIZE                     5
#define REG_G3X_EDGE_COLOR_1_RED3_MASK                     0x001f0000

#define REG_G3X_EDGE_COLOR_1_BLUE2_SHIFT                   10
#define REG_G3X_EDGE_COLOR_1_BLUE2_SIZE                    5
#define REG_G3X_EDGE_COLOR_1_BLUE2_MASK                    0x00007c00

#define REG_G3X_EDGE_COLOR_1_GREEN2_SHIFT                  5
#define REG_G3X_EDGE_COLOR_1_GREEN2_SIZE                   5
#define REG_G3X_EDGE_COLOR_1_GREEN2_MASK                   0x000003e0

#define REG_G3X_EDGE_COLOR_1_RED2_SHIFT                    0
#define REG_G3X_EDGE_COLOR_1_RED2_SIZE                     5
#define REG_G3X_EDGE_COLOR_1_RED2_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_1_FIELD( blue3, green3, red3, blue2, green2, red2 ) \
    (u32)( \
    ((u32)(blue3) << REG_G3X_EDGE_COLOR_1_BLUE3_SHIFT) | \
    ((u32)(green3) << REG_G3X_EDGE_COLOR_1_GREEN3_SHIFT) | \
    ((u32)(red3) << REG_G3X_EDGE_COLOR_1_RED3_SHIFT) | \
    ((u32)(blue2) << REG_G3X_EDGE_COLOR_1_BLUE2_SHIFT) | \
    ((u32)(green2) << REG_G3X_EDGE_COLOR_1_GREEN2_SHIFT) | \
    ((u32)(red2) << REG_G3X_EDGE_COLOR_1_RED2_SHIFT))
#endif


/* EDGE_COLOR_1_L */

#define REG_G3X_EDGE_COLOR_1_L_BLUE2_SHIFT                 10
#define REG_G3X_EDGE_COLOR_1_L_BLUE2_SIZE                  5
#define REG_G3X_EDGE_COLOR_1_L_BLUE2_MASK                  0x7c00

#define REG_G3X_EDGE_COLOR_1_L_GREEN2_SHIFT                5
#define REG_G3X_EDGE_COLOR_1_L_GREEN2_SIZE                 5
#define REG_G3X_EDGE_COLOR_1_L_GREEN2_MASK                 0x03e0

#define REG_G3X_EDGE_COLOR_1_L_RED2_SHIFT                  0
#define REG_G3X_EDGE_COLOR_1_L_RED2_SIZE                   5
#define REG_G3X_EDGE_COLOR_1_L_RED2_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_1_L_FIELD( blue2, green2, red2 ) \
    (u16)( \
    ((u32)(blue2) << REG_G3X_EDGE_COLOR_1_L_BLUE2_SHIFT) | \
    ((u32)(green2) << REG_G3X_EDGE_COLOR_1_L_GREEN2_SHIFT) | \
    ((u32)(red2) << REG_G3X_EDGE_COLOR_1_L_RED2_SHIFT))
#endif


/* EDGE_COLOR_1_H */

#define REG_G3X_EDGE_COLOR_1_H_BLUE3_SHIFT                 10
#define REG_G3X_EDGE_COLOR_1_H_BLUE3_SIZE                  5
#define REG_G3X_EDGE_COLOR_1_H_BLUE3_MASK                  0x7c00

#define REG_G3X_EDGE_COLOR_1_H_GREEN3_SHIFT                5
#define REG_G3X_EDGE_COLOR_1_H_GREEN3_SIZE                 5
#define REG_G3X_EDGE_COLOR_1_H_GREEN3_MASK                 0x03e0

#define REG_G3X_EDGE_COLOR_1_H_RED3_SHIFT                  0
#define REG_G3X_EDGE_COLOR_1_H_RED3_SIZE                   5
#define REG_G3X_EDGE_COLOR_1_H_RED3_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_1_H_FIELD( blue3, green3, red3 ) \
    (u16)( \
    ((u32)(blue3) << REG_G3X_EDGE_COLOR_1_H_BLUE3_SHIFT) | \
    ((u32)(green3) << REG_G3X_EDGE_COLOR_1_H_GREEN3_SHIFT) | \
    ((u32)(red3) << REG_G3X_EDGE_COLOR_1_H_RED3_SHIFT))
#endif


/* EDGE_COLOR_2 */

#define REG_G3X_EDGE_COLOR_2_BLUE5_SHIFT                   26
#define REG_G3X_EDGE_COLOR_2_BLUE5_SIZE                    5
#define REG_G3X_EDGE_COLOR_2_BLUE5_MASK                    0x7c000000

#define REG_G3X_EDGE_COLOR_2_GREEN5_SHIFT                  21
#define REG_G3X_EDGE_COLOR_2_GREEN5_SIZE                   5
#define REG_G3X_EDGE_COLOR_2_GREEN5_MASK                   0x03e00000

#define REG_G3X_EDGE_COLOR_2_RED5_SHIFT                    16
#define REG_G3X_EDGE_COLOR_2_RED5_SIZE                     5
#define REG_G3X_EDGE_COLOR_2_RED5_MASK                     0x001f0000

#define REG_G3X_EDGE_COLOR_2_BLUE4_SHIFT                   10
#define REG_G3X_EDGE_COLOR_2_BLUE4_SIZE                    5
#define REG_G3X_EDGE_COLOR_2_BLUE4_MASK                    0x00007c00

#define REG_G3X_EDGE_COLOR_2_GREEN4_SHIFT                  5
#define REG_G3X_EDGE_COLOR_2_GREEN4_SIZE                   5
#define REG_G3X_EDGE_COLOR_2_GREEN4_MASK                   0x000003e0

#define REG_G3X_EDGE_COLOR_2_RED4_SHIFT                    0
#define REG_G3X_EDGE_COLOR_2_RED4_SIZE                     5
#define REG_G3X_EDGE_COLOR_2_RED4_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_2_FIELD( blue5, green5, red5, blue4, green4, red4 ) \
    (u32)( \
    ((u32)(blue5) << REG_G3X_EDGE_COLOR_2_BLUE5_SHIFT) | \
    ((u32)(green5) << REG_G3X_EDGE_COLOR_2_GREEN5_SHIFT) | \
    ((u32)(red5) << REG_G3X_EDGE_COLOR_2_RED5_SHIFT) | \
    ((u32)(blue4) << REG_G3X_EDGE_COLOR_2_BLUE4_SHIFT) | \
    ((u32)(green4) << REG_G3X_EDGE_COLOR_2_GREEN4_SHIFT) | \
    ((u32)(red4) << REG_G3X_EDGE_COLOR_2_RED4_SHIFT))
#endif


/* EDGE_COLOR_2_L */

#define REG_G3X_EDGE_COLOR_2_L_BLUE4_SHIFT                 10
#define REG_G3X_EDGE_COLOR_2_L_BLUE4_SIZE                  5
#define REG_G3X_EDGE_COLOR_2_L_BLUE4_MASK                  0x7c00

#define REG_G3X_EDGE_COLOR_2_L_GREEN4_SHIFT                5
#define REG_G3X_EDGE_COLOR_2_L_GREEN4_SIZE                 5
#define REG_G3X_EDGE_COLOR_2_L_GREEN4_MASK                 0x03e0

#define REG_G3X_EDGE_COLOR_2_L_RED4_SHIFT                  0
#define REG_G3X_EDGE_COLOR_2_L_RED4_SIZE                   5
#define REG_G3X_EDGE_COLOR_2_L_RED4_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_2_L_FIELD( blue4, green4, red4 ) \
    (u16)( \
    ((u32)(blue4) << REG_G3X_EDGE_COLOR_2_L_BLUE4_SHIFT) | \
    ((u32)(green4) << REG_G3X_EDGE_COLOR_2_L_GREEN4_SHIFT) | \
    ((u32)(red4) << REG_G3X_EDGE_COLOR_2_L_RED4_SHIFT))
#endif


/* EDGE_COLOR_2_H */

#define REG_G3X_EDGE_COLOR_2_H_BLUE5_SHIFT                 10
#define REG_G3X_EDGE_COLOR_2_H_BLUE5_SIZE                  5
#define REG_G3X_EDGE_COLOR_2_H_BLUE5_MASK                  0x7c00

#define REG_G3X_EDGE_COLOR_2_H_GREEN5_SHIFT                5
#define REG_G3X_EDGE_COLOR_2_H_GREEN5_SIZE                 5
#define REG_G3X_EDGE_COLOR_2_H_GREEN5_MASK                 0x03e0

#define REG_G3X_EDGE_COLOR_2_H_RED5_SHIFT                  0
#define REG_G3X_EDGE_COLOR_2_H_RED5_SIZE                   5
#define REG_G3X_EDGE_COLOR_2_H_RED5_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_2_H_FIELD( blue5, green5, red5 ) \
    (u16)( \
    ((u32)(blue5) << REG_G3X_EDGE_COLOR_2_H_BLUE5_SHIFT) | \
    ((u32)(green5) << REG_G3X_EDGE_COLOR_2_H_GREEN5_SHIFT) | \
    ((u32)(red5) << REG_G3X_EDGE_COLOR_2_H_RED5_SHIFT))
#endif


/* EDGE_COLOR_3 */

#define REG_G3X_EDGE_COLOR_3_BLUE7_SHIFT                   26
#define REG_G3X_EDGE_COLOR_3_BLUE7_SIZE                    5
#define REG_G3X_EDGE_COLOR_3_BLUE7_MASK                    0x7c000000

#define REG_G3X_EDGE_COLOR_3_GREEN7_SHIFT                  21
#define REG_G3X_EDGE_COLOR_3_GREEN7_SIZE                   5
#define REG_G3X_EDGE_COLOR_3_GREEN7_MASK                   0x03e00000

#define REG_G3X_EDGE_COLOR_3_RED7_SHIFT                    16
#define REG_G3X_EDGE_COLOR_3_RED7_SIZE                     5
#define REG_G3X_EDGE_COLOR_3_RED7_MASK                     0x001f0000

#define REG_G3X_EDGE_COLOR_3_BLUE6_SHIFT                   10
#define REG_G3X_EDGE_COLOR_3_BLUE6_SIZE                    5
#define REG_G3X_EDGE_COLOR_3_BLUE6_MASK                    0x00007c00

#define REG_G3X_EDGE_COLOR_3_GREEN6_SHIFT                  5
#define REG_G3X_EDGE_COLOR_3_GREEN6_SIZE                   5
#define REG_G3X_EDGE_COLOR_3_GREEN6_MASK                   0x000003e0

#define REG_G3X_EDGE_COLOR_3_RED6_SHIFT                    0
#define REG_G3X_EDGE_COLOR_3_RED6_SIZE                     5
#define REG_G3X_EDGE_COLOR_3_RED6_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_3_FIELD( blue7, green7, red7, blue6, green6, red6 ) \
    (u32)( \
    ((u32)(blue7) << REG_G3X_EDGE_COLOR_3_BLUE7_SHIFT) | \
    ((u32)(green7) << REG_G3X_EDGE_COLOR_3_GREEN7_SHIFT) | \
    ((u32)(red7) << REG_G3X_EDGE_COLOR_3_RED7_SHIFT) | \
    ((u32)(blue6) << REG_G3X_EDGE_COLOR_3_BLUE6_SHIFT) | \
    ((u32)(green6) << REG_G3X_EDGE_COLOR_3_GREEN6_SHIFT) | \
    ((u32)(red6) << REG_G3X_EDGE_COLOR_3_RED6_SHIFT))
#endif


/* EDGE_COLOR_3_L */

#define REG_G3X_EDGE_COLOR_3_L_BLUE6_SHIFT                 10
#define REG_G3X_EDGE_COLOR_3_L_BLUE6_SIZE                  5
#define REG_G3X_EDGE_COLOR_3_L_BLUE6_MASK                  0x7c00

#define REG_G3X_EDGE_COLOR_3_L_GREEN6_SHIFT                5
#define REG_G3X_EDGE_COLOR_3_L_GREEN6_SIZE                 5
#define REG_G3X_EDGE_COLOR_3_L_GREEN6_MASK                 0x03e0

#define REG_G3X_EDGE_COLOR_3_L_RED6_SHIFT                  0
#define REG_G3X_EDGE_COLOR_3_L_RED6_SIZE                   5
#define REG_G3X_EDGE_COLOR_3_L_RED6_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_3_L_FIELD( blue6, green6, red6 ) \
    (u16)( \
    ((u32)(blue6) << REG_G3X_EDGE_COLOR_3_L_BLUE6_SHIFT) | \
    ((u32)(green6) << REG_G3X_EDGE_COLOR_3_L_GREEN6_SHIFT) | \
    ((u32)(red6) << REG_G3X_EDGE_COLOR_3_L_RED6_SHIFT))
#endif


/* EDGE_COLOR_3_H */

#define REG_G3X_EDGE_COLOR_3_H_BLUE7_SHIFT                 10
#define REG_G3X_EDGE_COLOR_3_H_BLUE7_SIZE                  5
#define REG_G3X_EDGE_COLOR_3_H_BLUE7_MASK                  0x7c00

#define REG_G3X_EDGE_COLOR_3_H_GREEN7_SHIFT                5
#define REG_G3X_EDGE_COLOR_3_H_GREEN7_SIZE                 5
#define REG_G3X_EDGE_COLOR_3_H_GREEN7_MASK                 0x03e0

#define REG_G3X_EDGE_COLOR_3_H_RED7_SHIFT                  0
#define REG_G3X_EDGE_COLOR_3_H_RED7_SIZE                   5
#define REG_G3X_EDGE_COLOR_3_H_RED7_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_EDGE_COLOR_3_H_FIELD( blue7, green7, red7 ) \
    (u16)( \
    ((u32)(blue7) << REG_G3X_EDGE_COLOR_3_H_BLUE7_SHIFT) | \
    ((u32)(green7) << REG_G3X_EDGE_COLOR_3_H_GREEN7_SHIFT) | \
    ((u32)(red7) << REG_G3X_EDGE_COLOR_3_H_RED7_SHIFT))
#endif


/* ALPHA_TEST_REF */

#define REG_G3X_ALPHA_TEST_REF_ALPHA_REFERENCE_SHIFT       0
#define REG_G3X_ALPHA_TEST_REF_ALPHA_REFERENCE_SIZE        5
#define REG_G3X_ALPHA_TEST_REF_ALPHA_REFERENCE_MASK        0x001f

#ifndef SDK_ASM
#define REG_G3X_ALPHA_TEST_REF_FIELD( alpha_reference ) \
    (u16)( \
    ((u32)(alpha_reference) << REG_G3X_ALPHA_TEST_REF_ALPHA_REFERENCE_SHIFT))
#endif


/* CLEAR_COLOR */

#define REG_G3X_CLEAR_COLOR_POLYGONID_SHIFT                24
#define REG_G3X_CLEAR_COLOR_POLYGONID_SIZE                 6
#define REG_G3X_CLEAR_COLOR_POLYGONID_MASK                 0x3f000000

#define REG_G3X_CLEAR_COLOR_ALPHA_SHIFT                    16
#define REG_G3X_CLEAR_COLOR_ALPHA_SIZE                     5
#define REG_G3X_CLEAR_COLOR_ALPHA_MASK                     0x001f0000

#define REG_G3X_CLEAR_COLOR_F_SHIFT                        15
#define REG_G3X_CLEAR_COLOR_F_SIZE                         1
#define REG_G3X_CLEAR_COLOR_F_MASK                         0x00008000

#define REG_G3X_CLEAR_COLOR_BLUE_SHIFT                     10
#define REG_G3X_CLEAR_COLOR_BLUE_SIZE                      5
#define REG_G3X_CLEAR_COLOR_BLUE_MASK                      0x00007c00

#define REG_G3X_CLEAR_COLOR_GREEN_SHIFT                    5
#define REG_G3X_CLEAR_COLOR_GREEN_SIZE                     5
#define REG_G3X_CLEAR_COLOR_GREEN_MASK                     0x000003e0

#define REG_G3X_CLEAR_COLOR_RED_SHIFT                      0
#define REG_G3X_CLEAR_COLOR_RED_SIZE                       5
#define REG_G3X_CLEAR_COLOR_RED_MASK                       0x0000001f

#ifndef SDK_ASM
#define REG_G3X_CLEAR_COLOR_FIELD( polygonid, alpha, f, blue, green, red ) \
    (u32)( \
    ((u32)(polygonid) << REG_G3X_CLEAR_COLOR_POLYGONID_SHIFT) | \
    ((u32)(alpha) << REG_G3X_CLEAR_COLOR_ALPHA_SHIFT) | \
    ((u32)(f) << REG_G3X_CLEAR_COLOR_F_SHIFT) | \
    ((u32)(blue) << REG_G3X_CLEAR_COLOR_BLUE_SHIFT) | \
    ((u32)(green) << REG_G3X_CLEAR_COLOR_GREEN_SHIFT) | \
    ((u32)(red) << REG_G3X_CLEAR_COLOR_RED_SHIFT))
#endif


/* CLEAR_DEPTH */

#define REG_G3X_CLEAR_DEPTH_CLEARDEPTH_SHIFT               0
#define REG_G3X_CLEAR_DEPTH_CLEARDEPTH_SIZE                15
#define REG_G3X_CLEAR_DEPTH_CLEARDEPTH_MASK                0x7fff

#ifndef SDK_ASM
#define REG_G3X_CLEAR_DEPTH_FIELD( cleardepth ) \
    (u16)( \
    ((u32)(cleardepth) << REG_G3X_CLEAR_DEPTH_CLEARDEPTH_SHIFT))
#endif


/* CLRIMAGE_OFFSET */

#define REG_G3X_CLRIMAGE_OFFSET_OFFSETY_SHIFT              8
#define REG_G3X_CLRIMAGE_OFFSET_OFFSETY_SIZE               8
#define REG_G3X_CLRIMAGE_OFFSET_OFFSETY_MASK               0xff00

#define REG_G3X_CLRIMAGE_OFFSET_OFFSETX_SHIFT              0
#define REG_G3X_CLRIMAGE_OFFSET_OFFSETX_SIZE               8
#define REG_G3X_CLRIMAGE_OFFSET_OFFSETX_MASK               0x00ff

#ifndef SDK_ASM
#define REG_G3X_CLRIMAGE_OFFSET_FIELD( offsety, offsetx ) \
    (u16)( \
    ((u32)(offsety) << REG_G3X_CLRIMAGE_OFFSET_OFFSETY_SHIFT) | \
    ((u32)(offsetx) << REG_G3X_CLRIMAGE_OFFSET_OFFSETX_SHIFT))
#endif


/* FOG_COLOR */

#define REG_G3X_FOG_COLOR_FOG_ALPHA_SHIFT                  16
#define REG_G3X_FOG_COLOR_FOG_ALPHA_SIZE                   5
#define REG_G3X_FOG_COLOR_FOG_ALPHA_MASK                   0x001f0000

#define REG_G3X_FOG_COLOR_FOG_BLUE_SHIFT                   10
#define REG_G3X_FOG_COLOR_FOG_BLUE_SIZE                    5
#define REG_G3X_FOG_COLOR_FOG_BLUE_MASK                    0x00007c00

#define REG_G3X_FOG_COLOR_FOG_GREEN_SHIFT                  5
#define REG_G3X_FOG_COLOR_FOG_GREEN_SIZE                   5
#define REG_G3X_FOG_COLOR_FOG_GREEN_MASK                   0x000003e0

#define REG_G3X_FOG_COLOR_FOG_RED_SHIFT                    0
#define REG_G3X_FOG_COLOR_FOG_RED_SIZE                     5
#define REG_G3X_FOG_COLOR_FOG_RED_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_FOG_COLOR_FIELD( fog_alpha, fog_blue, fog_green, fog_red ) \
    (u32)( \
    ((u32)(fog_alpha) << REG_G3X_FOG_COLOR_FOG_ALPHA_SHIFT) | \
    ((u32)(fog_blue) << REG_G3X_FOG_COLOR_FOG_BLUE_SHIFT) | \
    ((u32)(fog_green) << REG_G3X_FOG_COLOR_FOG_GREEN_SHIFT) | \
    ((u32)(fog_red) << REG_G3X_FOG_COLOR_FOG_RED_SHIFT))
#endif


/* FOG_OFFSET */

#define REG_G3X_FOG_OFFSET_FOG_OFFSET_SHIFT                0
#define REG_G3X_FOG_OFFSET_FOG_OFFSET_SIZE                 15
#define REG_G3X_FOG_OFFSET_FOG_OFFSET_MASK                 0x7fff

#ifndef SDK_ASM
#define REG_G3X_FOG_OFFSET_FIELD( fog_offset ) \
    (u16)( \
    ((u32)(fog_offset) << REG_G3X_FOG_OFFSET_FOG_OFFSET_SHIFT))
#endif


/* FOG_TABLE_0 */

#define REG_G3X_FOG_TABLE_0_DENSITY3_SHIFT                 24
#define REG_G3X_FOG_TABLE_0_DENSITY3_SIZE                  7
#define REG_G3X_FOG_TABLE_0_DENSITY3_MASK                  0x7f000000

#define REG_G3X_FOG_TABLE_0_DENSITY2_SHIFT                 16
#define REG_G3X_FOG_TABLE_0_DENSITY2_SIZE                  7
#define REG_G3X_FOG_TABLE_0_DENSITY2_MASK                  0x007f0000

#define REG_G3X_FOG_TABLE_0_DENSITY1_SHIFT                 8
#define REG_G3X_FOG_TABLE_0_DENSITY1_SIZE                  7
#define REG_G3X_FOG_TABLE_0_DENSITY1_MASK                  0x00007f00

#define REG_G3X_FOG_TABLE_0_DENSITY0_SHIFT                 0
#define REG_G3X_FOG_TABLE_0_DENSITY0_SIZE                  7
#define REG_G3X_FOG_TABLE_0_DENSITY0_MASK                  0x0000007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_0_FIELD( density3, density2, density1, density0 ) \
    (u32)( \
    ((u32)(density3) << REG_G3X_FOG_TABLE_0_DENSITY3_SHIFT) | \
    ((u32)(density2) << REG_G3X_FOG_TABLE_0_DENSITY2_SHIFT) | \
    ((u32)(density1) << REG_G3X_FOG_TABLE_0_DENSITY1_SHIFT) | \
    ((u32)(density0) << REG_G3X_FOG_TABLE_0_DENSITY0_SHIFT))
#endif


/* FOG_TABLE_0_L */

#define REG_G3X_FOG_TABLE_0_L_DENSITY1_SHIFT               8
#define REG_G3X_FOG_TABLE_0_L_DENSITY1_SIZE                7
#define REG_G3X_FOG_TABLE_0_L_DENSITY1_MASK                0x7f00

#define REG_G3X_FOG_TABLE_0_L_DENSITY0_SHIFT               0
#define REG_G3X_FOG_TABLE_0_L_DENSITY0_SIZE                7
#define REG_G3X_FOG_TABLE_0_L_DENSITY0_MASK                0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_0_L_FIELD( density1, density0 ) \
    (u16)( \
    ((u32)(density1) << REG_G3X_FOG_TABLE_0_L_DENSITY1_SHIFT) | \
    ((u32)(density0) << REG_G3X_FOG_TABLE_0_L_DENSITY0_SHIFT))
#endif


/* FOG_TABLE_0_H */

#define REG_G3X_FOG_TABLE_0_H_DENSITY3_SHIFT               8
#define REG_G3X_FOG_TABLE_0_H_DENSITY3_SIZE                7
#define REG_G3X_FOG_TABLE_0_H_DENSITY3_MASK                0x7f00

#define REG_G3X_FOG_TABLE_0_H_DENSITY2_SHIFT               0
#define REG_G3X_FOG_TABLE_0_H_DENSITY2_SIZE                7
#define REG_G3X_FOG_TABLE_0_H_DENSITY2_MASK                0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_0_H_FIELD( density3, density2 ) \
    (u16)( \
    ((u32)(density3) << REG_G3X_FOG_TABLE_0_H_DENSITY3_SHIFT) | \
    ((u32)(density2) << REG_G3X_FOG_TABLE_0_H_DENSITY2_SHIFT))
#endif


/* FOG_TABLE_1 */

#define REG_G3X_FOG_TABLE_1_DENSITY7_SHIFT                 24
#define REG_G3X_FOG_TABLE_1_DENSITY7_SIZE                  7
#define REG_G3X_FOG_TABLE_1_DENSITY7_MASK                  0x7f000000

#define REG_G3X_FOG_TABLE_1_DENSITY6_SHIFT                 16
#define REG_G3X_FOG_TABLE_1_DENSITY6_SIZE                  7
#define REG_G3X_FOG_TABLE_1_DENSITY6_MASK                  0x007f0000

#define REG_G3X_FOG_TABLE_1_DENSITY5_SHIFT                 8
#define REG_G3X_FOG_TABLE_1_DENSITY5_SIZE                  7
#define REG_G3X_FOG_TABLE_1_DENSITY5_MASK                  0x00007f00

#define REG_G3X_FOG_TABLE_1_DENSITY4_SHIFT                 0
#define REG_G3X_FOG_TABLE_1_DENSITY4_SIZE                  7
#define REG_G3X_FOG_TABLE_1_DENSITY4_MASK                  0x0000007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_1_FIELD( density7, density6, density5, density4 ) \
    (u32)( \
    ((u32)(density7) << REG_G3X_FOG_TABLE_1_DENSITY7_SHIFT) | \
    ((u32)(density6) << REG_G3X_FOG_TABLE_1_DENSITY6_SHIFT) | \
    ((u32)(density5) << REG_G3X_FOG_TABLE_1_DENSITY5_SHIFT) | \
    ((u32)(density4) << REG_G3X_FOG_TABLE_1_DENSITY4_SHIFT))
#endif


/* FOG_TABLE_1_L */

#define REG_G3X_FOG_TABLE_1_L_DENSITY5_SHIFT               8
#define REG_G3X_FOG_TABLE_1_L_DENSITY5_SIZE                7
#define REG_G3X_FOG_TABLE_1_L_DENSITY5_MASK                0x7f00

#define REG_G3X_FOG_TABLE_1_L_DENSITY4_SHIFT               0
#define REG_G3X_FOG_TABLE_1_L_DENSITY4_SIZE                7
#define REG_G3X_FOG_TABLE_1_L_DENSITY4_MASK                0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_1_L_FIELD( density5, density4 ) \
    (u16)( \
    ((u32)(density5) << REG_G3X_FOG_TABLE_1_L_DENSITY5_SHIFT) | \
    ((u32)(density4) << REG_G3X_FOG_TABLE_1_L_DENSITY4_SHIFT))
#endif


/* FOG_TABLE_1_H */

#define REG_G3X_FOG_TABLE_1_H_DENSITY7_SHIFT               8
#define REG_G3X_FOG_TABLE_1_H_DENSITY7_SIZE                7
#define REG_G3X_FOG_TABLE_1_H_DENSITY7_MASK                0x7f00

#define REG_G3X_FOG_TABLE_1_H_DENSITY6_SHIFT               0
#define REG_G3X_FOG_TABLE_1_H_DENSITY6_SIZE                7
#define REG_G3X_FOG_TABLE_1_H_DENSITY6_MASK                0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_1_H_FIELD( density7, density6 ) \
    (u16)( \
    ((u32)(density7) << REG_G3X_FOG_TABLE_1_H_DENSITY7_SHIFT) | \
    ((u32)(density6) << REG_G3X_FOG_TABLE_1_H_DENSITY6_SHIFT))
#endif


/* FOG_TABLE_2 */

#define REG_G3X_FOG_TABLE_2_DENSITY11_SHIFT                24
#define REG_G3X_FOG_TABLE_2_DENSITY11_SIZE                 7
#define REG_G3X_FOG_TABLE_2_DENSITY11_MASK                 0x7f000000

#define REG_G3X_FOG_TABLE_2_DENSITY10_SHIFT                16
#define REG_G3X_FOG_TABLE_2_DENSITY10_SIZE                 7
#define REG_G3X_FOG_TABLE_2_DENSITY10_MASK                 0x007f0000

#define REG_G3X_FOG_TABLE_2_DENSITY9_SHIFT                 8
#define REG_G3X_FOG_TABLE_2_DENSITY9_SIZE                  7
#define REG_G3X_FOG_TABLE_2_DENSITY9_MASK                  0x00007f00

#define REG_G3X_FOG_TABLE_2_DENSITY8_SHIFT                 0
#define REG_G3X_FOG_TABLE_2_DENSITY8_SIZE                  7
#define REG_G3X_FOG_TABLE_2_DENSITY8_MASK                  0x0000007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_2_FIELD( density11, density10, density9, density8 ) \
    (u32)( \
    ((u32)(density11) << REG_G3X_FOG_TABLE_2_DENSITY11_SHIFT) | \
    ((u32)(density10) << REG_G3X_FOG_TABLE_2_DENSITY10_SHIFT) | \
    ((u32)(density9) << REG_G3X_FOG_TABLE_2_DENSITY9_SHIFT) | \
    ((u32)(density8) << REG_G3X_FOG_TABLE_2_DENSITY8_SHIFT))
#endif


/* FOG_TABLE_2_L */

#define REG_G3X_FOG_TABLE_2_L_DENSITY9_SHIFT               8
#define REG_G3X_FOG_TABLE_2_L_DENSITY9_SIZE                7
#define REG_G3X_FOG_TABLE_2_L_DENSITY9_MASK                0x7f00

#define REG_G3X_FOG_TABLE_2_L_DENSITY8_SHIFT               0
#define REG_G3X_FOG_TABLE_2_L_DENSITY8_SIZE                7
#define REG_G3X_FOG_TABLE_2_L_DENSITY8_MASK                0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_2_L_FIELD( density9, density8 ) \
    (u16)( \
    ((u32)(density9) << REG_G3X_FOG_TABLE_2_L_DENSITY9_SHIFT) | \
    ((u32)(density8) << REG_G3X_FOG_TABLE_2_L_DENSITY8_SHIFT))
#endif


/* FOG_TABLE_2_H */

#define REG_G3X_FOG_TABLE_2_H_DENSITY11_SHIFT              8
#define REG_G3X_FOG_TABLE_2_H_DENSITY11_SIZE               7
#define REG_G3X_FOG_TABLE_2_H_DENSITY11_MASK               0x7f00

#define REG_G3X_FOG_TABLE_2_H_DENSITY10_SHIFT              0
#define REG_G3X_FOG_TABLE_2_H_DENSITY10_SIZE               7
#define REG_G3X_FOG_TABLE_2_H_DENSITY10_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_2_H_FIELD( density11, density10 ) \
    (u16)( \
    ((u32)(density11) << REG_G3X_FOG_TABLE_2_H_DENSITY11_SHIFT) | \
    ((u32)(density10) << REG_G3X_FOG_TABLE_2_H_DENSITY10_SHIFT))
#endif


/* FOG_TABLE_3 */

#define REG_G3X_FOG_TABLE_3_DENSITY15_SHIFT                24
#define REG_G3X_FOG_TABLE_3_DENSITY15_SIZE                 7
#define REG_G3X_FOG_TABLE_3_DENSITY15_MASK                 0x7f000000

#define REG_G3X_FOG_TABLE_3_DENSITY14_SHIFT                16
#define REG_G3X_FOG_TABLE_3_DENSITY14_SIZE                 7
#define REG_G3X_FOG_TABLE_3_DENSITY14_MASK                 0x007f0000

#define REG_G3X_FOG_TABLE_3_DENSITY13_SHIFT                8
#define REG_G3X_FOG_TABLE_3_DENSITY13_SIZE                 7
#define REG_G3X_FOG_TABLE_3_DENSITY13_MASK                 0x00007f00

#define REG_G3X_FOG_TABLE_3_DENSITY12_SHIFT                0
#define REG_G3X_FOG_TABLE_3_DENSITY12_SIZE                 7
#define REG_G3X_FOG_TABLE_3_DENSITY12_MASK                 0x0000007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_3_FIELD( density15, density14, density13, density12 ) \
    (u32)( \
    ((u32)(density15) << REG_G3X_FOG_TABLE_3_DENSITY15_SHIFT) | \
    ((u32)(density14) << REG_G3X_FOG_TABLE_3_DENSITY14_SHIFT) | \
    ((u32)(density13) << REG_G3X_FOG_TABLE_3_DENSITY13_SHIFT) | \
    ((u32)(density12) << REG_G3X_FOG_TABLE_3_DENSITY12_SHIFT))
#endif


/* FOG_TABLE_3_L */

#define REG_G3X_FOG_TABLE_3_L_DENSITY13_SHIFT              8
#define REG_G3X_FOG_TABLE_3_L_DENSITY13_SIZE               7
#define REG_G3X_FOG_TABLE_3_L_DENSITY13_MASK               0x7f00

#define REG_G3X_FOG_TABLE_3_L_DENSITY12_SHIFT              0
#define REG_G3X_FOG_TABLE_3_L_DENSITY12_SIZE               7
#define REG_G3X_FOG_TABLE_3_L_DENSITY12_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_3_L_FIELD( density13, density12 ) \
    (u16)( \
    ((u32)(density13) << REG_G3X_FOG_TABLE_3_L_DENSITY13_SHIFT) | \
    ((u32)(density12) << REG_G3X_FOG_TABLE_3_L_DENSITY12_SHIFT))
#endif


/* FOG_TABLE_3_H */

#define REG_G3X_FOG_TABLE_3_H_DENSITY15_SHIFT              8
#define REG_G3X_FOG_TABLE_3_H_DENSITY15_SIZE               7
#define REG_G3X_FOG_TABLE_3_H_DENSITY15_MASK               0x7f00

#define REG_G3X_FOG_TABLE_3_H_DENSITY14_SHIFT              0
#define REG_G3X_FOG_TABLE_3_H_DENSITY14_SIZE               7
#define REG_G3X_FOG_TABLE_3_H_DENSITY14_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_3_H_FIELD( density15, density14 ) \
    (u16)( \
    ((u32)(density15) << REG_G3X_FOG_TABLE_3_H_DENSITY15_SHIFT) | \
    ((u32)(density14) << REG_G3X_FOG_TABLE_3_H_DENSITY14_SHIFT))
#endif


/* FOG_TABLE_4 */

#define REG_G3X_FOG_TABLE_4_DENSITY19_SHIFT                24
#define REG_G3X_FOG_TABLE_4_DENSITY19_SIZE                 7
#define REG_G3X_FOG_TABLE_4_DENSITY19_MASK                 0x7f000000

#define REG_G3X_FOG_TABLE_4_DENSITY18_SHIFT                16
#define REG_G3X_FOG_TABLE_4_DENSITY18_SIZE                 7
#define REG_G3X_FOG_TABLE_4_DENSITY18_MASK                 0x007f0000

#define REG_G3X_FOG_TABLE_4_DENSITY17_SHIFT                8
#define REG_G3X_FOG_TABLE_4_DENSITY17_SIZE                 7
#define REG_G3X_FOG_TABLE_4_DENSITY17_MASK                 0x00007f00

#define REG_G3X_FOG_TABLE_4_DENSITY16_SHIFT                0
#define REG_G3X_FOG_TABLE_4_DENSITY16_SIZE                 7
#define REG_G3X_FOG_TABLE_4_DENSITY16_MASK                 0x0000007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_4_FIELD( density19, density18, density17, density16 ) \
    (u32)( \
    ((u32)(density19) << REG_G3X_FOG_TABLE_4_DENSITY19_SHIFT) | \
    ((u32)(density18) << REG_G3X_FOG_TABLE_4_DENSITY18_SHIFT) | \
    ((u32)(density17) << REG_G3X_FOG_TABLE_4_DENSITY17_SHIFT) | \
    ((u32)(density16) << REG_G3X_FOG_TABLE_4_DENSITY16_SHIFT))
#endif


/* FOG_TABLE_4_L */

#define REG_G3X_FOG_TABLE_4_L_DENSITY17_SHIFT              8
#define REG_G3X_FOG_TABLE_4_L_DENSITY17_SIZE               7
#define REG_G3X_FOG_TABLE_4_L_DENSITY17_MASK               0x7f00

#define REG_G3X_FOG_TABLE_4_L_DENSITY16_SHIFT              0
#define REG_G3X_FOG_TABLE_4_L_DENSITY16_SIZE               7
#define REG_G3X_FOG_TABLE_4_L_DENSITY16_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_4_L_FIELD( density17, density16 ) \
    (u16)( \
    ((u32)(density17) << REG_G3X_FOG_TABLE_4_L_DENSITY17_SHIFT) | \
    ((u32)(density16) << REG_G3X_FOG_TABLE_4_L_DENSITY16_SHIFT))
#endif


/* FOG_TABLE_4_H */

#define REG_G3X_FOG_TABLE_4_H_DENSITY19_SHIFT              8
#define REG_G3X_FOG_TABLE_4_H_DENSITY19_SIZE               7
#define REG_G3X_FOG_TABLE_4_H_DENSITY19_MASK               0x7f00

#define REG_G3X_FOG_TABLE_4_H_DENSITY18_SHIFT              0
#define REG_G3X_FOG_TABLE_4_H_DENSITY18_SIZE               7
#define REG_G3X_FOG_TABLE_4_H_DENSITY18_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_4_H_FIELD( density19, density18 ) \
    (u16)( \
    ((u32)(density19) << REG_G3X_FOG_TABLE_4_H_DENSITY19_SHIFT) | \
    ((u32)(density18) << REG_G3X_FOG_TABLE_4_H_DENSITY18_SHIFT))
#endif


/* FOG_TABLE_5 */

#define REG_G3X_FOG_TABLE_5_DENSITY23_SHIFT                24
#define REG_G3X_FOG_TABLE_5_DENSITY23_SIZE                 7
#define REG_G3X_FOG_TABLE_5_DENSITY23_MASK                 0x7f000000

#define REG_G3X_FOG_TABLE_5_DENSITY22_SHIFT                16
#define REG_G3X_FOG_TABLE_5_DENSITY22_SIZE                 7
#define REG_G3X_FOG_TABLE_5_DENSITY22_MASK                 0x007f0000

#define REG_G3X_FOG_TABLE_5_DENSITY21_SHIFT                8
#define REG_G3X_FOG_TABLE_5_DENSITY21_SIZE                 7
#define REG_G3X_FOG_TABLE_5_DENSITY21_MASK                 0x00007f00

#define REG_G3X_FOG_TABLE_5_DENSITY20_SHIFT                0
#define REG_G3X_FOG_TABLE_5_DENSITY20_SIZE                 7
#define REG_G3X_FOG_TABLE_5_DENSITY20_MASK                 0x0000007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_5_FIELD( density23, density22, density21, density20 ) \
    (u32)( \
    ((u32)(density23) << REG_G3X_FOG_TABLE_5_DENSITY23_SHIFT) | \
    ((u32)(density22) << REG_G3X_FOG_TABLE_5_DENSITY22_SHIFT) | \
    ((u32)(density21) << REG_G3X_FOG_TABLE_5_DENSITY21_SHIFT) | \
    ((u32)(density20) << REG_G3X_FOG_TABLE_5_DENSITY20_SHIFT))
#endif


/* FOG_TABLE_5_L */

#define REG_G3X_FOG_TABLE_5_L_DENSITY21_SHIFT              8
#define REG_G3X_FOG_TABLE_5_L_DENSITY21_SIZE               7
#define REG_G3X_FOG_TABLE_5_L_DENSITY21_MASK               0x7f00

#define REG_G3X_FOG_TABLE_5_L_DENSITY20_SHIFT              0
#define REG_G3X_FOG_TABLE_5_L_DENSITY20_SIZE               7
#define REG_G3X_FOG_TABLE_5_L_DENSITY20_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_5_L_FIELD( density21, density20 ) \
    (u16)( \
    ((u32)(density21) << REG_G3X_FOG_TABLE_5_L_DENSITY21_SHIFT) | \
    ((u32)(density20) << REG_G3X_FOG_TABLE_5_L_DENSITY20_SHIFT))
#endif


/* FOG_TABLE_5_H */

#define REG_G3X_FOG_TABLE_5_H_DENSITY23_SHIFT              8
#define REG_G3X_FOG_TABLE_5_H_DENSITY23_SIZE               7
#define REG_G3X_FOG_TABLE_5_H_DENSITY23_MASK               0x7f00

#define REG_G3X_FOG_TABLE_5_H_DENSITY22_SHIFT              0
#define REG_G3X_FOG_TABLE_5_H_DENSITY22_SIZE               7
#define REG_G3X_FOG_TABLE_5_H_DENSITY22_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_5_H_FIELD( density23, density22 ) \
    (u16)( \
    ((u32)(density23) << REG_G3X_FOG_TABLE_5_H_DENSITY23_SHIFT) | \
    ((u32)(density22) << REG_G3X_FOG_TABLE_5_H_DENSITY22_SHIFT))
#endif


/* FOG_TABLE_6 */

#define REG_G3X_FOG_TABLE_6_DENSITY27_SHIFT                24
#define REG_G3X_FOG_TABLE_6_DENSITY27_SIZE                 7
#define REG_G3X_FOG_TABLE_6_DENSITY27_MASK                 0x7f000000

#define REG_G3X_FOG_TABLE_6_DENSITY26_SHIFT                16
#define REG_G3X_FOG_TABLE_6_DENSITY26_SIZE                 7
#define REG_G3X_FOG_TABLE_6_DENSITY26_MASK                 0x007f0000

#define REG_G3X_FOG_TABLE_6_DENSITY25_SHIFT                8
#define REG_G3X_FOG_TABLE_6_DENSITY25_SIZE                 7
#define REG_G3X_FOG_TABLE_6_DENSITY25_MASK                 0x00007f00

#define REG_G3X_FOG_TABLE_6_DENSITY24_SHIFT                0
#define REG_G3X_FOG_TABLE_6_DENSITY24_SIZE                 7
#define REG_G3X_FOG_TABLE_6_DENSITY24_MASK                 0x0000007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_6_FIELD( density27, density26, density25, density24 ) \
    (u32)( \
    ((u32)(density27) << REG_G3X_FOG_TABLE_6_DENSITY27_SHIFT) | \
    ((u32)(density26) << REG_G3X_FOG_TABLE_6_DENSITY26_SHIFT) | \
    ((u32)(density25) << REG_G3X_FOG_TABLE_6_DENSITY25_SHIFT) | \
    ((u32)(density24) << REG_G3X_FOG_TABLE_6_DENSITY24_SHIFT))
#endif


/* FOG_TABLE_6_L */

#define REG_G3X_FOG_TABLE_6_L_DENSITY25_SHIFT              8
#define REG_G3X_FOG_TABLE_6_L_DENSITY25_SIZE               7
#define REG_G3X_FOG_TABLE_6_L_DENSITY25_MASK               0x7f00

#define REG_G3X_FOG_TABLE_6_L_DENSITY24_SHIFT              0
#define REG_G3X_FOG_TABLE_6_L_DENSITY24_SIZE               7
#define REG_G3X_FOG_TABLE_6_L_DENSITY24_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_6_L_FIELD( density25, density24 ) \
    (u16)( \
    ((u32)(density25) << REG_G3X_FOG_TABLE_6_L_DENSITY25_SHIFT) | \
    ((u32)(density24) << REG_G3X_FOG_TABLE_6_L_DENSITY24_SHIFT))
#endif


/* FOG_TABLE_6_H */

#define REG_G3X_FOG_TABLE_6_H_DENSITY27_SHIFT              8
#define REG_G3X_FOG_TABLE_6_H_DENSITY27_SIZE               7
#define REG_G3X_FOG_TABLE_6_H_DENSITY27_MASK               0x7f00

#define REG_G3X_FOG_TABLE_6_H_DENSITY26_SHIFT              0
#define REG_G3X_FOG_TABLE_6_H_DENSITY26_SIZE               7
#define REG_G3X_FOG_TABLE_6_H_DENSITY26_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_6_H_FIELD( density27, density26 ) \
    (u16)( \
    ((u32)(density27) << REG_G3X_FOG_TABLE_6_H_DENSITY27_SHIFT) | \
    ((u32)(density26) << REG_G3X_FOG_TABLE_6_H_DENSITY26_SHIFT))
#endif


/* FOG_TABLE_7 */

#define REG_G3X_FOG_TABLE_7_DENSITY31_SHIFT                24
#define REG_G3X_FOG_TABLE_7_DENSITY31_SIZE                 7
#define REG_G3X_FOG_TABLE_7_DENSITY31_MASK                 0x7f000000

#define REG_G3X_FOG_TABLE_7_DENSITY30_SHIFT                16
#define REG_G3X_FOG_TABLE_7_DENSITY30_SIZE                 7
#define REG_G3X_FOG_TABLE_7_DENSITY30_MASK                 0x007f0000

#define REG_G3X_FOG_TABLE_7_DENSITY29_SHIFT                8
#define REG_G3X_FOG_TABLE_7_DENSITY29_SIZE                 7
#define REG_G3X_FOG_TABLE_7_DENSITY29_MASK                 0x00007f00

#define REG_G3X_FOG_TABLE_7_DENSITY28_SHIFT                0
#define REG_G3X_FOG_TABLE_7_DENSITY28_SIZE                 7
#define REG_G3X_FOG_TABLE_7_DENSITY28_MASK                 0x0000007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_7_FIELD( density31, density30, density29, density28 ) \
    (u32)( \
    ((u32)(density31) << REG_G3X_FOG_TABLE_7_DENSITY31_SHIFT) | \
    ((u32)(density30) << REG_G3X_FOG_TABLE_7_DENSITY30_SHIFT) | \
    ((u32)(density29) << REG_G3X_FOG_TABLE_7_DENSITY29_SHIFT) | \
    ((u32)(density28) << REG_G3X_FOG_TABLE_7_DENSITY28_SHIFT))
#endif


/* FOG_TABLE_7_L */

#define REG_G3X_FOG_TABLE_7_L_DENSITY29_SHIFT              8
#define REG_G3X_FOG_TABLE_7_L_DENSITY29_SIZE               7
#define REG_G3X_FOG_TABLE_7_L_DENSITY29_MASK               0x7f00

#define REG_G3X_FOG_TABLE_7_L_DENSITY28_SHIFT              0
#define REG_G3X_FOG_TABLE_7_L_DENSITY28_SIZE               7
#define REG_G3X_FOG_TABLE_7_L_DENSITY28_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_7_L_FIELD( density29, density28 ) \
    (u16)( \
    ((u32)(density29) << REG_G3X_FOG_TABLE_7_L_DENSITY29_SHIFT) | \
    ((u32)(density28) << REG_G3X_FOG_TABLE_7_L_DENSITY28_SHIFT))
#endif


/* FOG_TABLE_7_H */

#define REG_G3X_FOG_TABLE_7_H_DENSITY31_SHIFT              8
#define REG_G3X_FOG_TABLE_7_H_DENSITY31_SIZE               7
#define REG_G3X_FOG_TABLE_7_H_DENSITY31_MASK               0x7f00

#define REG_G3X_FOG_TABLE_7_H_DENSITY30_SHIFT              0
#define REG_G3X_FOG_TABLE_7_H_DENSITY30_SIZE               7
#define REG_G3X_FOG_TABLE_7_H_DENSITY30_MASK               0x007f

#ifndef SDK_ASM
#define REG_G3X_FOG_TABLE_7_H_FIELD( density31, density30 ) \
    (u16)( \
    ((u32)(density31) << REG_G3X_FOG_TABLE_7_H_DENSITY31_SHIFT) | \
    ((u32)(density30) << REG_G3X_FOG_TABLE_7_H_DENSITY30_SHIFT))
#endif


/* TOON_TABLE_0 */

#define REG_G3X_TOON_TABLE_0_BLUE1_SHIFT                   26
#define REG_G3X_TOON_TABLE_0_BLUE1_SIZE                    5
#define REG_G3X_TOON_TABLE_0_BLUE1_MASK                    0x7c000000

#define REG_G3X_TOON_TABLE_0_GREEN1_SHIFT                  21
#define REG_G3X_TOON_TABLE_0_GREEN1_SIZE                   5
#define REG_G3X_TOON_TABLE_0_GREEN1_MASK                   0x03e00000

#define REG_G3X_TOON_TABLE_0_RED1_SHIFT                    16
#define REG_G3X_TOON_TABLE_0_RED1_SIZE                     5
#define REG_G3X_TOON_TABLE_0_RED1_MASK                     0x001f0000

#define REG_G3X_TOON_TABLE_0_BLUE0_SHIFT                   10
#define REG_G3X_TOON_TABLE_0_BLUE0_SIZE                    5
#define REG_G3X_TOON_TABLE_0_BLUE0_MASK                    0x00007c00

#define REG_G3X_TOON_TABLE_0_GREEN0_SHIFT                  5
#define REG_G3X_TOON_TABLE_0_GREEN0_SIZE                   5
#define REG_G3X_TOON_TABLE_0_GREEN0_MASK                   0x000003e0

#define REG_G3X_TOON_TABLE_0_RED0_SHIFT                    0
#define REG_G3X_TOON_TABLE_0_RED0_SIZE                     5
#define REG_G3X_TOON_TABLE_0_RED0_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_0_FIELD( blue1, green1, red1, blue0, green0, red0 ) \
    (u32)( \
    ((u32)(blue1) << REG_G3X_TOON_TABLE_0_BLUE1_SHIFT) | \
    ((u32)(green1) << REG_G3X_TOON_TABLE_0_GREEN1_SHIFT) | \
    ((u32)(red1) << REG_G3X_TOON_TABLE_0_RED1_SHIFT) | \
    ((u32)(blue0) << REG_G3X_TOON_TABLE_0_BLUE0_SHIFT) | \
    ((u32)(green0) << REG_G3X_TOON_TABLE_0_GREEN0_SHIFT) | \
    ((u32)(red0) << REG_G3X_TOON_TABLE_0_RED0_SHIFT))
#endif


/* TOON_TABLE_0_L */

#define REG_G3X_TOON_TABLE_0_L_BLUE0_SHIFT                 10
#define REG_G3X_TOON_TABLE_0_L_BLUE0_SIZE                  5
#define REG_G3X_TOON_TABLE_0_L_BLUE0_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_0_L_GREEN0_SHIFT                5
#define REG_G3X_TOON_TABLE_0_L_GREEN0_SIZE                 5
#define REG_G3X_TOON_TABLE_0_L_GREEN0_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_0_L_RED0_SHIFT                  0
#define REG_G3X_TOON_TABLE_0_L_RED0_SIZE                   5
#define REG_G3X_TOON_TABLE_0_L_RED0_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_0_L_FIELD( blue0, green0, red0 ) \
    (u16)( \
    ((u32)(blue0) << REG_G3X_TOON_TABLE_0_L_BLUE0_SHIFT) | \
    ((u32)(green0) << REG_G3X_TOON_TABLE_0_L_GREEN0_SHIFT) | \
    ((u32)(red0) << REG_G3X_TOON_TABLE_0_L_RED0_SHIFT))
#endif


/* TOON_TABLE_0_H */

#define REG_G3X_TOON_TABLE_0_H_BLUE1_SHIFT                 10
#define REG_G3X_TOON_TABLE_0_H_BLUE1_SIZE                  5
#define REG_G3X_TOON_TABLE_0_H_BLUE1_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_0_H_GREEN1_SHIFT                5
#define REG_G3X_TOON_TABLE_0_H_GREEN1_SIZE                 5
#define REG_G3X_TOON_TABLE_0_H_GREEN1_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_0_H_RED1_SHIFT                  0
#define REG_G3X_TOON_TABLE_0_H_RED1_SIZE                   5
#define REG_G3X_TOON_TABLE_0_H_RED1_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_0_H_FIELD( blue1, green1, red1 ) \
    (u16)( \
    ((u32)(blue1) << REG_G3X_TOON_TABLE_0_H_BLUE1_SHIFT) | \
    ((u32)(green1) << REG_G3X_TOON_TABLE_0_H_GREEN1_SHIFT) | \
    ((u32)(red1) << REG_G3X_TOON_TABLE_0_H_RED1_SHIFT))
#endif


/* TOON_TABLE_1 */

#define REG_G3X_TOON_TABLE_1_BLUE3_SHIFT                   26
#define REG_G3X_TOON_TABLE_1_BLUE3_SIZE                    5
#define REG_G3X_TOON_TABLE_1_BLUE3_MASK                    0x7c000000

#define REG_G3X_TOON_TABLE_1_GREEN3_SHIFT                  21
#define REG_G3X_TOON_TABLE_1_GREEN3_SIZE                   5
#define REG_G3X_TOON_TABLE_1_GREEN3_MASK                   0x03e00000

#define REG_G3X_TOON_TABLE_1_RED3_SHIFT                    16
#define REG_G3X_TOON_TABLE_1_RED3_SIZE                     5
#define REG_G3X_TOON_TABLE_1_RED3_MASK                     0x001f0000

#define REG_G3X_TOON_TABLE_1_BLUE2_SHIFT                   10
#define REG_G3X_TOON_TABLE_1_BLUE2_SIZE                    5
#define REG_G3X_TOON_TABLE_1_BLUE2_MASK                    0x00007c00

#define REG_G3X_TOON_TABLE_1_GREEN2_SHIFT                  5
#define REG_G3X_TOON_TABLE_1_GREEN2_SIZE                   5
#define REG_G3X_TOON_TABLE_1_GREEN2_MASK                   0x000003e0

#define REG_G3X_TOON_TABLE_1_RED2_SHIFT                    0
#define REG_G3X_TOON_TABLE_1_RED2_SIZE                     5
#define REG_G3X_TOON_TABLE_1_RED2_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_1_FIELD( blue3, green3, red3, blue2, green2, red2 ) \
    (u32)( \
    ((u32)(blue3) << REG_G3X_TOON_TABLE_1_BLUE3_SHIFT) | \
    ((u32)(green3) << REG_G3X_TOON_TABLE_1_GREEN3_SHIFT) | \
    ((u32)(red3) << REG_G3X_TOON_TABLE_1_RED3_SHIFT) | \
    ((u32)(blue2) << REG_G3X_TOON_TABLE_1_BLUE2_SHIFT) | \
    ((u32)(green2) << REG_G3X_TOON_TABLE_1_GREEN2_SHIFT) | \
    ((u32)(red2) << REG_G3X_TOON_TABLE_1_RED2_SHIFT))
#endif


/* TOON_TABLE_1_L */

#define REG_G3X_TOON_TABLE_1_L_BLUE2_SHIFT                 10
#define REG_G3X_TOON_TABLE_1_L_BLUE2_SIZE                  5
#define REG_G3X_TOON_TABLE_1_L_BLUE2_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_1_L_GREEN2_SHIFT                5
#define REG_G3X_TOON_TABLE_1_L_GREEN2_SIZE                 5
#define REG_G3X_TOON_TABLE_1_L_GREEN2_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_1_L_RED2_SHIFT                  0
#define REG_G3X_TOON_TABLE_1_L_RED2_SIZE                   5
#define REG_G3X_TOON_TABLE_1_L_RED2_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_1_L_FIELD( blue2, green2, red2 ) \
    (u16)( \
    ((u32)(blue2) << REG_G3X_TOON_TABLE_1_L_BLUE2_SHIFT) | \
    ((u32)(green2) << REG_G3X_TOON_TABLE_1_L_GREEN2_SHIFT) | \
    ((u32)(red2) << REG_G3X_TOON_TABLE_1_L_RED2_SHIFT))
#endif


/* TOON_TABLE_1_H */

#define REG_G3X_TOON_TABLE_1_H_BLUE3_SHIFT                 10
#define REG_G3X_TOON_TABLE_1_H_BLUE3_SIZE                  5
#define REG_G3X_TOON_TABLE_1_H_BLUE3_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_1_H_GREEN3_SHIFT                5
#define REG_G3X_TOON_TABLE_1_H_GREEN3_SIZE                 5
#define REG_G3X_TOON_TABLE_1_H_GREEN3_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_1_H_RED3_SHIFT                  0
#define REG_G3X_TOON_TABLE_1_H_RED3_SIZE                   5
#define REG_G3X_TOON_TABLE_1_H_RED3_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_1_H_FIELD( blue3, green3, red3 ) \
    (u16)( \
    ((u32)(blue3) << REG_G3X_TOON_TABLE_1_H_BLUE3_SHIFT) | \
    ((u32)(green3) << REG_G3X_TOON_TABLE_1_H_GREEN3_SHIFT) | \
    ((u32)(red3) << REG_G3X_TOON_TABLE_1_H_RED3_SHIFT))
#endif


/* TOON_TABLE_2 */

#define REG_G3X_TOON_TABLE_2_BLUE5_SHIFT                   26
#define REG_G3X_TOON_TABLE_2_BLUE5_SIZE                    5
#define REG_G3X_TOON_TABLE_2_BLUE5_MASK                    0x7c000000

#define REG_G3X_TOON_TABLE_2_GREEN5_SHIFT                  21
#define REG_G3X_TOON_TABLE_2_GREEN5_SIZE                   5
#define REG_G3X_TOON_TABLE_2_GREEN5_MASK                   0x03e00000

#define REG_G3X_TOON_TABLE_2_RED5_SHIFT                    16
#define REG_G3X_TOON_TABLE_2_RED5_SIZE                     5
#define REG_G3X_TOON_TABLE_2_RED5_MASK                     0x001f0000

#define REG_G3X_TOON_TABLE_2_BLUE4_SHIFT                   10
#define REG_G3X_TOON_TABLE_2_BLUE4_SIZE                    5
#define REG_G3X_TOON_TABLE_2_BLUE4_MASK                    0x00007c00

#define REG_G3X_TOON_TABLE_2_GREEN4_SHIFT                  5
#define REG_G3X_TOON_TABLE_2_GREEN4_SIZE                   5
#define REG_G3X_TOON_TABLE_2_GREEN4_MASK                   0x000003e0

#define REG_G3X_TOON_TABLE_2_RED4_SHIFT                    0
#define REG_G3X_TOON_TABLE_2_RED4_SIZE                     5
#define REG_G3X_TOON_TABLE_2_RED4_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_2_FIELD( blue5, green5, red5, blue4, green4, red4 ) \
    (u32)( \
    ((u32)(blue5) << REG_G3X_TOON_TABLE_2_BLUE5_SHIFT) | \
    ((u32)(green5) << REG_G3X_TOON_TABLE_2_GREEN5_SHIFT) | \
    ((u32)(red5) << REG_G3X_TOON_TABLE_2_RED5_SHIFT) | \
    ((u32)(blue4) << REG_G3X_TOON_TABLE_2_BLUE4_SHIFT) | \
    ((u32)(green4) << REG_G3X_TOON_TABLE_2_GREEN4_SHIFT) | \
    ((u32)(red4) << REG_G3X_TOON_TABLE_2_RED4_SHIFT))
#endif


/* TOON_TABLE_2_L */

#define REG_G3X_TOON_TABLE_2_L_BLUE4_SHIFT                 10
#define REG_G3X_TOON_TABLE_2_L_BLUE4_SIZE                  5
#define REG_G3X_TOON_TABLE_2_L_BLUE4_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_2_L_GREEN4_SHIFT                5
#define REG_G3X_TOON_TABLE_2_L_GREEN4_SIZE                 5
#define REG_G3X_TOON_TABLE_2_L_GREEN4_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_2_L_RED4_SHIFT                  0
#define REG_G3X_TOON_TABLE_2_L_RED4_SIZE                   5
#define REG_G3X_TOON_TABLE_2_L_RED4_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_2_L_FIELD( blue4, green4, red4 ) \
    (u16)( \
    ((u32)(blue4) << REG_G3X_TOON_TABLE_2_L_BLUE4_SHIFT) | \
    ((u32)(green4) << REG_G3X_TOON_TABLE_2_L_GREEN4_SHIFT) | \
    ((u32)(red4) << REG_G3X_TOON_TABLE_2_L_RED4_SHIFT))
#endif


/* TOON_TABLE_2_H */

#define REG_G3X_TOON_TABLE_2_H_BLUE5_SHIFT                 10
#define REG_G3X_TOON_TABLE_2_H_BLUE5_SIZE                  5
#define REG_G3X_TOON_TABLE_2_H_BLUE5_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_2_H_GREEN5_SHIFT                5
#define REG_G3X_TOON_TABLE_2_H_GREEN5_SIZE                 5
#define REG_G3X_TOON_TABLE_2_H_GREEN5_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_2_H_RED5_SHIFT                  0
#define REG_G3X_TOON_TABLE_2_H_RED5_SIZE                   5
#define REG_G3X_TOON_TABLE_2_H_RED5_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_2_H_FIELD( blue5, green5, red5 ) \
    (u16)( \
    ((u32)(blue5) << REG_G3X_TOON_TABLE_2_H_BLUE5_SHIFT) | \
    ((u32)(green5) << REG_G3X_TOON_TABLE_2_H_GREEN5_SHIFT) | \
    ((u32)(red5) << REG_G3X_TOON_TABLE_2_H_RED5_SHIFT))
#endif


/* TOON_TABLE_3 */

#define REG_G3X_TOON_TABLE_3_BLUE7_SHIFT                   26
#define REG_G3X_TOON_TABLE_3_BLUE7_SIZE                    5
#define REG_G3X_TOON_TABLE_3_BLUE7_MASK                    0x7c000000

#define REG_G3X_TOON_TABLE_3_GREEN7_SHIFT                  21
#define REG_G3X_TOON_TABLE_3_GREEN7_SIZE                   5
#define REG_G3X_TOON_TABLE_3_GREEN7_MASK                   0x03e00000

#define REG_G3X_TOON_TABLE_3_RED7_SHIFT                    16
#define REG_G3X_TOON_TABLE_3_RED7_SIZE                     5
#define REG_G3X_TOON_TABLE_3_RED7_MASK                     0x001f0000

#define REG_G3X_TOON_TABLE_3_BLUE6_SHIFT                   10
#define REG_G3X_TOON_TABLE_3_BLUE6_SIZE                    5
#define REG_G3X_TOON_TABLE_3_BLUE6_MASK                    0x00007c00

#define REG_G3X_TOON_TABLE_3_GREEN6_SHIFT                  5
#define REG_G3X_TOON_TABLE_3_GREEN6_SIZE                   5
#define REG_G3X_TOON_TABLE_3_GREEN6_MASK                   0x000003e0

#define REG_G3X_TOON_TABLE_3_RED6_SHIFT                    0
#define REG_G3X_TOON_TABLE_3_RED6_SIZE                     5
#define REG_G3X_TOON_TABLE_3_RED6_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_3_FIELD( blue7, green7, red7, blue6, green6, red6 ) \
    (u32)( \
    ((u32)(blue7) << REG_G3X_TOON_TABLE_3_BLUE7_SHIFT) | \
    ((u32)(green7) << REG_G3X_TOON_TABLE_3_GREEN7_SHIFT) | \
    ((u32)(red7) << REG_G3X_TOON_TABLE_3_RED7_SHIFT) | \
    ((u32)(blue6) << REG_G3X_TOON_TABLE_3_BLUE6_SHIFT) | \
    ((u32)(green6) << REG_G3X_TOON_TABLE_3_GREEN6_SHIFT) | \
    ((u32)(red6) << REG_G3X_TOON_TABLE_3_RED6_SHIFT))
#endif


/* TOON_TABLE_3_L */

#define REG_G3X_TOON_TABLE_3_L_BLUE6_SHIFT                 10
#define REG_G3X_TOON_TABLE_3_L_BLUE6_SIZE                  5
#define REG_G3X_TOON_TABLE_3_L_BLUE6_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_3_L_GREEN6_SHIFT                5
#define REG_G3X_TOON_TABLE_3_L_GREEN6_SIZE                 5
#define REG_G3X_TOON_TABLE_3_L_GREEN6_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_3_L_RED6_SHIFT                  0
#define REG_G3X_TOON_TABLE_3_L_RED6_SIZE                   5
#define REG_G3X_TOON_TABLE_3_L_RED6_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_3_L_FIELD( blue6, green6, red6 ) \
    (u16)( \
    ((u32)(blue6) << REG_G3X_TOON_TABLE_3_L_BLUE6_SHIFT) | \
    ((u32)(green6) << REG_G3X_TOON_TABLE_3_L_GREEN6_SHIFT) | \
    ((u32)(red6) << REG_G3X_TOON_TABLE_3_L_RED6_SHIFT))
#endif


/* TOON_TABLE_3_H */

#define REG_G3X_TOON_TABLE_3_H_BLUE7_SHIFT                 10
#define REG_G3X_TOON_TABLE_3_H_BLUE7_SIZE                  5
#define REG_G3X_TOON_TABLE_3_H_BLUE7_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_3_H_GREEN7_SHIFT                5
#define REG_G3X_TOON_TABLE_3_H_GREEN7_SIZE                 5
#define REG_G3X_TOON_TABLE_3_H_GREEN7_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_3_H_RED7_SHIFT                  0
#define REG_G3X_TOON_TABLE_3_H_RED7_SIZE                   5
#define REG_G3X_TOON_TABLE_3_H_RED7_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_3_H_FIELD( blue7, green7, red7 ) \
    (u16)( \
    ((u32)(blue7) << REG_G3X_TOON_TABLE_3_H_BLUE7_SHIFT) | \
    ((u32)(green7) << REG_G3X_TOON_TABLE_3_H_GREEN7_SHIFT) | \
    ((u32)(red7) << REG_G3X_TOON_TABLE_3_H_RED7_SHIFT))
#endif


/* TOON_TABLE_4 */

#define REG_G3X_TOON_TABLE_4_BLUE9_SHIFT                   26
#define REG_G3X_TOON_TABLE_4_BLUE9_SIZE                    5
#define REG_G3X_TOON_TABLE_4_BLUE9_MASK                    0x7c000000

#define REG_G3X_TOON_TABLE_4_GREEN9_SHIFT                  21
#define REG_G3X_TOON_TABLE_4_GREEN9_SIZE                   5
#define REG_G3X_TOON_TABLE_4_GREEN9_MASK                   0x03e00000

#define REG_G3X_TOON_TABLE_4_RED9_SHIFT                    16
#define REG_G3X_TOON_TABLE_4_RED9_SIZE                     5
#define REG_G3X_TOON_TABLE_4_RED9_MASK                     0x001f0000

#define REG_G3X_TOON_TABLE_4_BLUE8_SHIFT                   10
#define REG_G3X_TOON_TABLE_4_BLUE8_SIZE                    5
#define REG_G3X_TOON_TABLE_4_BLUE8_MASK                    0x00007c00

#define REG_G3X_TOON_TABLE_4_GREEN8_SHIFT                  5
#define REG_G3X_TOON_TABLE_4_GREEN8_SIZE                   5
#define REG_G3X_TOON_TABLE_4_GREEN8_MASK                   0x000003e0

#define REG_G3X_TOON_TABLE_4_RED8_SHIFT                    0
#define REG_G3X_TOON_TABLE_4_RED8_SIZE                     5
#define REG_G3X_TOON_TABLE_4_RED8_MASK                     0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_4_FIELD( blue9, green9, red9, blue8, green8, red8 ) \
    (u32)( \
    ((u32)(blue9) << REG_G3X_TOON_TABLE_4_BLUE9_SHIFT) | \
    ((u32)(green9) << REG_G3X_TOON_TABLE_4_GREEN9_SHIFT) | \
    ((u32)(red9) << REG_G3X_TOON_TABLE_4_RED9_SHIFT) | \
    ((u32)(blue8) << REG_G3X_TOON_TABLE_4_BLUE8_SHIFT) | \
    ((u32)(green8) << REG_G3X_TOON_TABLE_4_GREEN8_SHIFT) | \
    ((u32)(red8) << REG_G3X_TOON_TABLE_4_RED8_SHIFT))
#endif


/* TOON_TABLE_4_L */

#define REG_G3X_TOON_TABLE_4_L_BLUE8_SHIFT                 10
#define REG_G3X_TOON_TABLE_4_L_BLUE8_SIZE                  5
#define REG_G3X_TOON_TABLE_4_L_BLUE8_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_4_L_GREEN8_SHIFT                5
#define REG_G3X_TOON_TABLE_4_L_GREEN8_SIZE                 5
#define REG_G3X_TOON_TABLE_4_L_GREEN8_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_4_L_RED8_SHIFT                  0
#define REG_G3X_TOON_TABLE_4_L_RED8_SIZE                   5
#define REG_G3X_TOON_TABLE_4_L_RED8_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_4_L_FIELD( blue8, green8, red8 ) \
    (u16)( \
    ((u32)(blue8) << REG_G3X_TOON_TABLE_4_L_BLUE8_SHIFT) | \
    ((u32)(green8) << REG_G3X_TOON_TABLE_4_L_GREEN8_SHIFT) | \
    ((u32)(red8) << REG_G3X_TOON_TABLE_4_L_RED8_SHIFT))
#endif


/* TOON_TABLE_4_H */

#define REG_G3X_TOON_TABLE_4_H_BLUE9_SHIFT                 10
#define REG_G3X_TOON_TABLE_4_H_BLUE9_SIZE                  5
#define REG_G3X_TOON_TABLE_4_H_BLUE9_MASK                  0x7c00

#define REG_G3X_TOON_TABLE_4_H_GREEN9_SHIFT                5
#define REG_G3X_TOON_TABLE_4_H_GREEN9_SIZE                 5
#define REG_G3X_TOON_TABLE_4_H_GREEN9_MASK                 0x03e0

#define REG_G3X_TOON_TABLE_4_H_RED9_SHIFT                  0
#define REG_G3X_TOON_TABLE_4_H_RED9_SIZE                   5
#define REG_G3X_TOON_TABLE_4_H_RED9_MASK                   0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_4_H_FIELD( blue9, green9, red9 ) \
    (u16)( \
    ((u32)(blue9) << REG_G3X_TOON_TABLE_4_H_BLUE9_SHIFT) | \
    ((u32)(green9) << REG_G3X_TOON_TABLE_4_H_GREEN9_SHIFT) | \
    ((u32)(red9) << REG_G3X_TOON_TABLE_4_H_RED9_SHIFT))
#endif


/* TOON_TABLE_5 */

#define REG_G3X_TOON_TABLE_5_BLUE11_SHIFT                  26
#define REG_G3X_TOON_TABLE_5_BLUE11_SIZE                   5
#define REG_G3X_TOON_TABLE_5_BLUE11_MASK                   0x7c000000

#define REG_G3X_TOON_TABLE_5_GREEN11_SHIFT                 21
#define REG_G3X_TOON_TABLE_5_GREEN11_SIZE                  5
#define REG_G3X_TOON_TABLE_5_GREEN11_MASK                  0x03e00000

#define REG_G3X_TOON_TABLE_5_RED11_SHIFT                   16
#define REG_G3X_TOON_TABLE_5_RED11_SIZE                    5
#define REG_G3X_TOON_TABLE_5_RED11_MASK                    0x001f0000

#define REG_G3X_TOON_TABLE_5_BLUE10_SHIFT                  10
#define REG_G3X_TOON_TABLE_5_BLUE10_SIZE                   5
#define REG_G3X_TOON_TABLE_5_BLUE10_MASK                   0x00007c00

#define REG_G3X_TOON_TABLE_5_GREEN10_SHIFT                 5
#define REG_G3X_TOON_TABLE_5_GREEN10_SIZE                  5
#define REG_G3X_TOON_TABLE_5_GREEN10_MASK                  0x000003e0

#define REG_G3X_TOON_TABLE_5_RED10_SHIFT                   0
#define REG_G3X_TOON_TABLE_5_RED10_SIZE                    5
#define REG_G3X_TOON_TABLE_5_RED10_MASK                    0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_5_FIELD( blue11, green11, red11, blue10, green10, red10 ) \
    (u32)( \
    ((u32)(blue11) << REG_G3X_TOON_TABLE_5_BLUE11_SHIFT) | \
    ((u32)(green11) << REG_G3X_TOON_TABLE_5_GREEN11_SHIFT) | \
    ((u32)(red11) << REG_G3X_TOON_TABLE_5_RED11_SHIFT) | \
    ((u32)(blue10) << REG_G3X_TOON_TABLE_5_BLUE10_SHIFT) | \
    ((u32)(green10) << REG_G3X_TOON_TABLE_5_GREEN10_SHIFT) | \
    ((u32)(red10) << REG_G3X_TOON_TABLE_5_RED10_SHIFT))
#endif


/* TOON_TABLE_5_L */

#define REG_G3X_TOON_TABLE_5_L_BLUE10_SHIFT                10
#define REG_G3X_TOON_TABLE_5_L_BLUE10_SIZE                 5
#define REG_G3X_TOON_TABLE_5_L_BLUE10_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_5_L_GREEN10_SHIFT               5
#define REG_G3X_TOON_TABLE_5_L_GREEN10_SIZE                5
#define REG_G3X_TOON_TABLE_5_L_GREEN10_MASK                0x03e0

#define REG_G3X_TOON_TABLE_5_L_RED10_SHIFT                 0
#define REG_G3X_TOON_TABLE_5_L_RED10_SIZE                  5
#define REG_G3X_TOON_TABLE_5_L_RED10_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_5_L_FIELD( blue10, green10, red10 ) \
    (u16)( \
    ((u32)(blue10) << REG_G3X_TOON_TABLE_5_L_BLUE10_SHIFT) | \
    ((u32)(green10) << REG_G3X_TOON_TABLE_5_L_GREEN10_SHIFT) | \
    ((u32)(red10) << REG_G3X_TOON_TABLE_5_L_RED10_SHIFT))
#endif


/* TOON_TABLE_5_H */

#define REG_G3X_TOON_TABLE_5_H_BLUE11_SHIFT                10
#define REG_G3X_TOON_TABLE_5_H_BLUE11_SIZE                 5
#define REG_G3X_TOON_TABLE_5_H_BLUE11_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_5_H_GREEN11_SHIFT               5
#define REG_G3X_TOON_TABLE_5_H_GREEN11_SIZE                5
#define REG_G3X_TOON_TABLE_5_H_GREEN11_MASK                0x03e0

#define REG_G3X_TOON_TABLE_5_H_RED11_SHIFT                 0
#define REG_G3X_TOON_TABLE_5_H_RED11_SIZE                  5
#define REG_G3X_TOON_TABLE_5_H_RED11_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_5_H_FIELD( blue11, green11, red11 ) \
    (u16)( \
    ((u32)(blue11) << REG_G3X_TOON_TABLE_5_H_BLUE11_SHIFT) | \
    ((u32)(green11) << REG_G3X_TOON_TABLE_5_H_GREEN11_SHIFT) | \
    ((u32)(red11) << REG_G3X_TOON_TABLE_5_H_RED11_SHIFT))
#endif


/* TOON_TABLE_6 */

#define REG_G3X_TOON_TABLE_6_BLUE13_SHIFT                  26
#define REG_G3X_TOON_TABLE_6_BLUE13_SIZE                   5
#define REG_G3X_TOON_TABLE_6_BLUE13_MASK                   0x7c000000

#define REG_G3X_TOON_TABLE_6_GREEN13_SHIFT                 21
#define REG_G3X_TOON_TABLE_6_GREEN13_SIZE                  5
#define REG_G3X_TOON_TABLE_6_GREEN13_MASK                  0x03e00000

#define REG_G3X_TOON_TABLE_6_RED13_SHIFT                   16
#define REG_G3X_TOON_TABLE_6_RED13_SIZE                    5
#define REG_G3X_TOON_TABLE_6_RED13_MASK                    0x001f0000

#define REG_G3X_TOON_TABLE_6_BLUE12_SHIFT                  10
#define REG_G3X_TOON_TABLE_6_BLUE12_SIZE                   5
#define REG_G3X_TOON_TABLE_6_BLUE12_MASK                   0x00007c00

#define REG_G3X_TOON_TABLE_6_GREEN12_SHIFT                 5
#define REG_G3X_TOON_TABLE_6_GREEN12_SIZE                  5
#define REG_G3X_TOON_TABLE_6_GREEN12_MASK                  0x000003e0

#define REG_G3X_TOON_TABLE_6_RED12_SHIFT                   0
#define REG_G3X_TOON_TABLE_6_RED12_SIZE                    5
#define REG_G3X_TOON_TABLE_6_RED12_MASK                    0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_6_FIELD( blue13, green13, red13, blue12, green12, red12 ) \
    (u32)( \
    ((u32)(blue13) << REG_G3X_TOON_TABLE_6_BLUE13_SHIFT) | \
    ((u32)(green13) << REG_G3X_TOON_TABLE_6_GREEN13_SHIFT) | \
    ((u32)(red13) << REG_G3X_TOON_TABLE_6_RED13_SHIFT) | \
    ((u32)(blue12) << REG_G3X_TOON_TABLE_6_BLUE12_SHIFT) | \
    ((u32)(green12) << REG_G3X_TOON_TABLE_6_GREEN12_SHIFT) | \
    ((u32)(red12) << REG_G3X_TOON_TABLE_6_RED12_SHIFT))
#endif


/* TOON_TABLE_6_L */

#define REG_G3X_TOON_TABLE_6_L_BLUE12_SHIFT                10
#define REG_G3X_TOON_TABLE_6_L_BLUE12_SIZE                 5
#define REG_G3X_TOON_TABLE_6_L_BLUE12_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_6_L_GREEN12_SHIFT               5
#define REG_G3X_TOON_TABLE_6_L_GREEN12_SIZE                5
#define REG_G3X_TOON_TABLE_6_L_GREEN12_MASK                0x03e0

#define REG_G3X_TOON_TABLE_6_L_RED12_SHIFT                 0
#define REG_G3X_TOON_TABLE_6_L_RED12_SIZE                  5
#define REG_G3X_TOON_TABLE_6_L_RED12_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_6_L_FIELD( blue12, green12, red12 ) \
    (u16)( \
    ((u32)(blue12) << REG_G3X_TOON_TABLE_6_L_BLUE12_SHIFT) | \
    ((u32)(green12) << REG_G3X_TOON_TABLE_6_L_GREEN12_SHIFT) | \
    ((u32)(red12) << REG_G3X_TOON_TABLE_6_L_RED12_SHIFT))
#endif


/* TOON_TABLE_6_H */

#define REG_G3X_TOON_TABLE_6_H_BLUE13_SHIFT                10
#define REG_G3X_TOON_TABLE_6_H_BLUE13_SIZE                 5
#define REG_G3X_TOON_TABLE_6_H_BLUE13_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_6_H_GREEN13_SHIFT               5
#define REG_G3X_TOON_TABLE_6_H_GREEN13_SIZE                5
#define REG_G3X_TOON_TABLE_6_H_GREEN13_MASK                0x03e0

#define REG_G3X_TOON_TABLE_6_H_RED13_SHIFT                 0
#define REG_G3X_TOON_TABLE_6_H_RED13_SIZE                  5
#define REG_G3X_TOON_TABLE_6_H_RED13_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_6_H_FIELD( blue13, green13, red13 ) \
    (u16)( \
    ((u32)(blue13) << REG_G3X_TOON_TABLE_6_H_BLUE13_SHIFT) | \
    ((u32)(green13) << REG_G3X_TOON_TABLE_6_H_GREEN13_SHIFT) | \
    ((u32)(red13) << REG_G3X_TOON_TABLE_6_H_RED13_SHIFT))
#endif


/* TOON_TABLE_7 */

#define REG_G3X_TOON_TABLE_7_BLUE15_SHIFT                  26
#define REG_G3X_TOON_TABLE_7_BLUE15_SIZE                   5
#define REG_G3X_TOON_TABLE_7_BLUE15_MASK                   0x7c000000

#define REG_G3X_TOON_TABLE_7_GREEN15_SHIFT                 21
#define REG_G3X_TOON_TABLE_7_GREEN15_SIZE                  5
#define REG_G3X_TOON_TABLE_7_GREEN15_MASK                  0x03e00000

#define REG_G3X_TOON_TABLE_7_RED15_SHIFT                   16
#define REG_G3X_TOON_TABLE_7_RED15_SIZE                    5
#define REG_G3X_TOON_TABLE_7_RED15_MASK                    0x001f0000

#define REG_G3X_TOON_TABLE_7_BLUE14_SHIFT                  10
#define REG_G3X_TOON_TABLE_7_BLUE14_SIZE                   5
#define REG_G3X_TOON_TABLE_7_BLUE14_MASK                   0x00007c00

#define REG_G3X_TOON_TABLE_7_GREEN14_SHIFT                 5
#define REG_G3X_TOON_TABLE_7_GREEN14_SIZE                  5
#define REG_G3X_TOON_TABLE_7_GREEN14_MASK                  0x000003e0

#define REG_G3X_TOON_TABLE_7_RED14_SHIFT                   0
#define REG_G3X_TOON_TABLE_7_RED14_SIZE                    5
#define REG_G3X_TOON_TABLE_7_RED14_MASK                    0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_7_FIELD( blue15, green15, red15, blue14, green14, red14 ) \
    (u32)( \
    ((u32)(blue15) << REG_G3X_TOON_TABLE_7_BLUE15_SHIFT) | \
    ((u32)(green15) << REG_G3X_TOON_TABLE_7_GREEN15_SHIFT) | \
    ((u32)(red15) << REG_G3X_TOON_TABLE_7_RED15_SHIFT) | \
    ((u32)(blue14) << REG_G3X_TOON_TABLE_7_BLUE14_SHIFT) | \
    ((u32)(green14) << REG_G3X_TOON_TABLE_7_GREEN14_SHIFT) | \
    ((u32)(red14) << REG_G3X_TOON_TABLE_7_RED14_SHIFT))
#endif


/* TOON_TABLE_7_L */

#define REG_G3X_TOON_TABLE_7_L_BLUE14_SHIFT                10
#define REG_G3X_TOON_TABLE_7_L_BLUE14_SIZE                 5
#define REG_G3X_TOON_TABLE_7_L_BLUE14_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_7_L_GREEN14_SHIFT               5
#define REG_G3X_TOON_TABLE_7_L_GREEN14_SIZE                5
#define REG_G3X_TOON_TABLE_7_L_GREEN14_MASK                0x03e0

#define REG_G3X_TOON_TABLE_7_L_RED14_SHIFT                 0
#define REG_G3X_TOON_TABLE_7_L_RED14_SIZE                  5
#define REG_G3X_TOON_TABLE_7_L_RED14_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_7_L_FIELD( blue14, green14, red14 ) \
    (u16)( \
    ((u32)(blue14) << REG_G3X_TOON_TABLE_7_L_BLUE14_SHIFT) | \
    ((u32)(green14) << REG_G3X_TOON_TABLE_7_L_GREEN14_SHIFT) | \
    ((u32)(red14) << REG_G3X_TOON_TABLE_7_L_RED14_SHIFT))
#endif


/* TOON_TABLE_7_H */

#define REG_G3X_TOON_TABLE_7_H_BLUE15_SHIFT                10
#define REG_G3X_TOON_TABLE_7_H_BLUE15_SIZE                 5
#define REG_G3X_TOON_TABLE_7_H_BLUE15_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_7_H_GREEN15_SHIFT               5
#define REG_G3X_TOON_TABLE_7_H_GREEN15_SIZE                5
#define REG_G3X_TOON_TABLE_7_H_GREEN15_MASK                0x03e0

#define REG_G3X_TOON_TABLE_7_H_RED15_SHIFT                 0
#define REG_G3X_TOON_TABLE_7_H_RED15_SIZE                  5
#define REG_G3X_TOON_TABLE_7_H_RED15_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_7_H_FIELD( blue15, green15, red15 ) \
    (u16)( \
    ((u32)(blue15) << REG_G3X_TOON_TABLE_7_H_BLUE15_SHIFT) | \
    ((u32)(green15) << REG_G3X_TOON_TABLE_7_H_GREEN15_SHIFT) | \
    ((u32)(red15) << REG_G3X_TOON_TABLE_7_H_RED15_SHIFT))
#endif


/* TOON_TABLE_8 */

#define REG_G3X_TOON_TABLE_8_BLUE17_SHIFT                  26
#define REG_G3X_TOON_TABLE_8_BLUE17_SIZE                   5
#define REG_G3X_TOON_TABLE_8_BLUE17_MASK                   0x7c000000

#define REG_G3X_TOON_TABLE_8_GREEN17_SHIFT                 21
#define REG_G3X_TOON_TABLE_8_GREEN17_SIZE                  5
#define REG_G3X_TOON_TABLE_8_GREEN17_MASK                  0x03e00000

#define REG_G3X_TOON_TABLE_8_RED17_SHIFT                   16
#define REG_G3X_TOON_TABLE_8_RED17_SIZE                    5
#define REG_G3X_TOON_TABLE_8_RED17_MASK                    0x001f0000

#define REG_G3X_TOON_TABLE_8_BLUE16_SHIFT                  10
#define REG_G3X_TOON_TABLE_8_BLUE16_SIZE                   5
#define REG_G3X_TOON_TABLE_8_BLUE16_MASK                   0x00007c00

#define REG_G3X_TOON_TABLE_8_GREEN16_SHIFT                 5
#define REG_G3X_TOON_TABLE_8_GREEN16_SIZE                  5
#define REG_G3X_TOON_TABLE_8_GREEN16_MASK                  0x000003e0

#define REG_G3X_TOON_TABLE_8_RED16_SHIFT                   0
#define REG_G3X_TOON_TABLE_8_RED16_SIZE                    5
#define REG_G3X_TOON_TABLE_8_RED16_MASK                    0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_8_FIELD( blue17, green17, red17, blue16, green16, red16 ) \
    (u32)( \
    ((u32)(blue17) << REG_G3X_TOON_TABLE_8_BLUE17_SHIFT) | \
    ((u32)(green17) << REG_G3X_TOON_TABLE_8_GREEN17_SHIFT) | \
    ((u32)(red17) << REG_G3X_TOON_TABLE_8_RED17_SHIFT) | \
    ((u32)(blue16) << REG_G3X_TOON_TABLE_8_BLUE16_SHIFT) | \
    ((u32)(green16) << REG_G3X_TOON_TABLE_8_GREEN16_SHIFT) | \
    ((u32)(red16) << REG_G3X_TOON_TABLE_8_RED16_SHIFT))
#endif


/* TOON_TABLE_8_L */

#define REG_G3X_TOON_TABLE_8_L_BLUE16_SHIFT                10
#define REG_G3X_TOON_TABLE_8_L_BLUE16_SIZE                 5
#define REG_G3X_TOON_TABLE_8_L_BLUE16_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_8_L_GREEN16_SHIFT               5
#define REG_G3X_TOON_TABLE_8_L_GREEN16_SIZE                5
#define REG_G3X_TOON_TABLE_8_L_GREEN16_MASK                0x03e0

#define REG_G3X_TOON_TABLE_8_L_RED16_SHIFT                 0
#define REG_G3X_TOON_TABLE_8_L_RED16_SIZE                  5
#define REG_G3X_TOON_TABLE_8_L_RED16_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_8_L_FIELD( blue16, green16, red16 ) \
    (u16)( \
    ((u32)(blue16) << REG_G3X_TOON_TABLE_8_L_BLUE16_SHIFT) | \
    ((u32)(green16) << REG_G3X_TOON_TABLE_8_L_GREEN16_SHIFT) | \
    ((u32)(red16) << REG_G3X_TOON_TABLE_8_L_RED16_SHIFT))
#endif


/* TOON_TABLE_8_H */

#define REG_G3X_TOON_TABLE_8_H_BLUE17_SHIFT                10
#define REG_G3X_TOON_TABLE_8_H_BLUE17_SIZE                 5
#define REG_G3X_TOON_TABLE_8_H_BLUE17_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_8_H_GREEN17_SHIFT               5
#define REG_G3X_TOON_TABLE_8_H_GREEN17_SIZE                5
#define REG_G3X_TOON_TABLE_8_H_GREEN17_MASK                0x03e0

#define REG_G3X_TOON_TABLE_8_H_RED17_SHIFT                 0
#define REG_G3X_TOON_TABLE_8_H_RED17_SIZE                  5
#define REG_G3X_TOON_TABLE_8_H_RED17_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_8_H_FIELD( blue17, green17, red17 ) \
    (u16)( \
    ((u32)(blue17) << REG_G3X_TOON_TABLE_8_H_BLUE17_SHIFT) | \
    ((u32)(green17) << REG_G3X_TOON_TABLE_8_H_GREEN17_SHIFT) | \
    ((u32)(red17) << REG_G3X_TOON_TABLE_8_H_RED17_SHIFT))
#endif


/* TOON_TABLE_9 */

#define REG_G3X_TOON_TABLE_9_BLUE19_SHIFT                  26
#define REG_G3X_TOON_TABLE_9_BLUE19_SIZE                   5
#define REG_G3X_TOON_TABLE_9_BLUE19_MASK                   0x7c000000

#define REG_G3X_TOON_TABLE_9_GREEN19_SHIFT                 21
#define REG_G3X_TOON_TABLE_9_GREEN19_SIZE                  5
#define REG_G3X_TOON_TABLE_9_GREEN19_MASK                  0x03e00000

#define REG_G3X_TOON_TABLE_9_RED19_SHIFT                   16
#define REG_G3X_TOON_TABLE_9_RED19_SIZE                    5
#define REG_G3X_TOON_TABLE_9_RED19_MASK                    0x001f0000

#define REG_G3X_TOON_TABLE_9_BLUE18_SHIFT                  10
#define REG_G3X_TOON_TABLE_9_BLUE18_SIZE                   5
#define REG_G3X_TOON_TABLE_9_BLUE18_MASK                   0x00007c00

#define REG_G3X_TOON_TABLE_9_GREEN18_SHIFT                 5
#define REG_G3X_TOON_TABLE_9_GREEN18_SIZE                  5
#define REG_G3X_TOON_TABLE_9_GREEN18_MASK                  0x000003e0

#define REG_G3X_TOON_TABLE_9_RED18_SHIFT                   0
#define REG_G3X_TOON_TABLE_9_RED18_SIZE                    5
#define REG_G3X_TOON_TABLE_9_RED18_MASK                    0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_9_FIELD( blue19, green19, red19, blue18, green18, red18 ) \
    (u32)( \
    ((u32)(blue19) << REG_G3X_TOON_TABLE_9_BLUE19_SHIFT) | \
    ((u32)(green19) << REG_G3X_TOON_TABLE_9_GREEN19_SHIFT) | \
    ((u32)(red19) << REG_G3X_TOON_TABLE_9_RED19_SHIFT) | \
    ((u32)(blue18) << REG_G3X_TOON_TABLE_9_BLUE18_SHIFT) | \
    ((u32)(green18) << REG_G3X_TOON_TABLE_9_GREEN18_SHIFT) | \
    ((u32)(red18) << REG_G3X_TOON_TABLE_9_RED18_SHIFT))
#endif


/* TOON_TABLE_9_L */

#define REG_G3X_TOON_TABLE_9_L_BLUE18_SHIFT                10
#define REG_G3X_TOON_TABLE_9_L_BLUE18_SIZE                 5
#define REG_G3X_TOON_TABLE_9_L_BLUE18_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_9_L_GREEN18_SHIFT               5
#define REG_G3X_TOON_TABLE_9_L_GREEN18_SIZE                5
#define REG_G3X_TOON_TABLE_9_L_GREEN18_MASK                0x03e0

#define REG_G3X_TOON_TABLE_9_L_RED18_SHIFT                 0
#define REG_G3X_TOON_TABLE_9_L_RED18_SIZE                  5
#define REG_G3X_TOON_TABLE_9_L_RED18_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_9_L_FIELD( blue18, green18, red18 ) \
    (u16)( \
    ((u32)(blue18) << REG_G3X_TOON_TABLE_9_L_BLUE18_SHIFT) | \
    ((u32)(green18) << REG_G3X_TOON_TABLE_9_L_GREEN18_SHIFT) | \
    ((u32)(red18) << REG_G3X_TOON_TABLE_9_L_RED18_SHIFT))
#endif


/* TOON_TABLE_9_H */

#define REG_G3X_TOON_TABLE_9_H_BLUE19_SHIFT                10
#define REG_G3X_TOON_TABLE_9_H_BLUE19_SIZE                 5
#define REG_G3X_TOON_TABLE_9_H_BLUE19_MASK                 0x7c00

#define REG_G3X_TOON_TABLE_9_H_GREEN19_SHIFT               5
#define REG_G3X_TOON_TABLE_9_H_GREEN19_SIZE                5
#define REG_G3X_TOON_TABLE_9_H_GREEN19_MASK                0x03e0

#define REG_G3X_TOON_TABLE_9_H_RED19_SHIFT                 0
#define REG_G3X_TOON_TABLE_9_H_RED19_SIZE                  5
#define REG_G3X_TOON_TABLE_9_H_RED19_MASK                  0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_9_H_FIELD( blue19, green19, red19 ) \
    (u16)( \
    ((u32)(blue19) << REG_G3X_TOON_TABLE_9_H_BLUE19_SHIFT) | \
    ((u32)(green19) << REG_G3X_TOON_TABLE_9_H_GREEN19_SHIFT) | \
    ((u32)(red19) << REG_G3X_TOON_TABLE_9_H_RED19_SHIFT))
#endif


/* TOON_TABLE_10 */

#define REG_G3X_TOON_TABLE_10_BLUE21_SHIFT                 26
#define REG_G3X_TOON_TABLE_10_BLUE21_SIZE                  5
#define REG_G3X_TOON_TABLE_10_BLUE21_MASK                  0x7c000000

#define REG_G3X_TOON_TABLE_10_GREEN21_SHIFT                21
#define REG_G3X_TOON_TABLE_10_GREEN21_SIZE                 5
#define REG_G3X_TOON_TABLE_10_GREEN21_MASK                 0x03e00000

#define REG_G3X_TOON_TABLE_10_RED21_SHIFT                  16
#define REG_G3X_TOON_TABLE_10_RED21_SIZE                   5
#define REG_G3X_TOON_TABLE_10_RED21_MASK                   0x001f0000

#define REG_G3X_TOON_TABLE_10_BLUE20_SHIFT                 10
#define REG_G3X_TOON_TABLE_10_BLUE20_SIZE                  5
#define REG_G3X_TOON_TABLE_10_BLUE20_MASK                  0x00007c00

#define REG_G3X_TOON_TABLE_10_GREEN20_SHIFT                5
#define REG_G3X_TOON_TABLE_10_GREEN20_SIZE                 5
#define REG_G3X_TOON_TABLE_10_GREEN20_MASK                 0x000003e0

#define REG_G3X_TOON_TABLE_10_RED20_SHIFT                  0
#define REG_G3X_TOON_TABLE_10_RED20_SIZE                   5
#define REG_G3X_TOON_TABLE_10_RED20_MASK                   0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_10_FIELD( blue21, green21, red21, blue20, green20, red20 ) \
    (u32)( \
    ((u32)(blue21) << REG_G3X_TOON_TABLE_10_BLUE21_SHIFT) | \
    ((u32)(green21) << REG_G3X_TOON_TABLE_10_GREEN21_SHIFT) | \
    ((u32)(red21) << REG_G3X_TOON_TABLE_10_RED21_SHIFT) | \
    ((u32)(blue20) << REG_G3X_TOON_TABLE_10_BLUE20_SHIFT) | \
    ((u32)(green20) << REG_G3X_TOON_TABLE_10_GREEN20_SHIFT) | \
    ((u32)(red20) << REG_G3X_TOON_TABLE_10_RED20_SHIFT))
#endif


/* TOON_TABLE_10_L */

#define REG_G3X_TOON_TABLE_10_L_BLUE20_SHIFT               10
#define REG_G3X_TOON_TABLE_10_L_BLUE20_SIZE                5
#define REG_G3X_TOON_TABLE_10_L_BLUE20_MASK                0x7c00

#define REG_G3X_TOON_TABLE_10_L_GREEN20_SHIFT              5
#define REG_G3X_TOON_TABLE_10_L_GREEN20_SIZE               5
#define REG_G3X_TOON_TABLE_10_L_GREEN20_MASK               0x03e0

#define REG_G3X_TOON_TABLE_10_L_RED20_SHIFT                0
#define REG_G3X_TOON_TABLE_10_L_RED20_SIZE                 5
#define REG_G3X_TOON_TABLE_10_L_RED20_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_10_L_FIELD( blue20, green20, red20 ) \
    (u16)( \
    ((u32)(blue20) << REG_G3X_TOON_TABLE_10_L_BLUE20_SHIFT) | \
    ((u32)(green20) << REG_G3X_TOON_TABLE_10_L_GREEN20_SHIFT) | \
    ((u32)(red20) << REG_G3X_TOON_TABLE_10_L_RED20_SHIFT))
#endif


/* TOON_TABLE_10_H */

#define REG_G3X_TOON_TABLE_10_H_BLUE21_SHIFT               10
#define REG_G3X_TOON_TABLE_10_H_BLUE21_SIZE                5
#define REG_G3X_TOON_TABLE_10_H_BLUE21_MASK                0x7c00

#define REG_G3X_TOON_TABLE_10_H_GREEN21_SHIFT              5
#define REG_G3X_TOON_TABLE_10_H_GREEN21_SIZE               5
#define REG_G3X_TOON_TABLE_10_H_GREEN21_MASK               0x03e0

#define REG_G3X_TOON_TABLE_10_H_RED21_SHIFT                0
#define REG_G3X_TOON_TABLE_10_H_RED21_SIZE                 5
#define REG_G3X_TOON_TABLE_10_H_RED21_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_10_H_FIELD( blue21, green21, red21 ) \
    (u16)( \
    ((u32)(blue21) << REG_G3X_TOON_TABLE_10_H_BLUE21_SHIFT) | \
    ((u32)(green21) << REG_G3X_TOON_TABLE_10_H_GREEN21_SHIFT) | \
    ((u32)(red21) << REG_G3X_TOON_TABLE_10_H_RED21_SHIFT))
#endif


/* TOON_TABLE_11 */

#define REG_G3X_TOON_TABLE_11_BLUE23_SHIFT                 26
#define REG_G3X_TOON_TABLE_11_BLUE23_SIZE                  5
#define REG_G3X_TOON_TABLE_11_BLUE23_MASK                  0x7c000000

#define REG_G3X_TOON_TABLE_11_GREEN23_SHIFT                21
#define REG_G3X_TOON_TABLE_11_GREEN23_SIZE                 5
#define REG_G3X_TOON_TABLE_11_GREEN23_MASK                 0x03e00000

#define REG_G3X_TOON_TABLE_11_RED23_SHIFT                  16
#define REG_G3X_TOON_TABLE_11_RED23_SIZE                   5
#define REG_G3X_TOON_TABLE_11_RED23_MASK                   0x001f0000

#define REG_G3X_TOON_TABLE_11_BLUE22_SHIFT                 10
#define REG_G3X_TOON_TABLE_11_BLUE22_SIZE                  5
#define REG_G3X_TOON_TABLE_11_BLUE22_MASK                  0x00007c00

#define REG_G3X_TOON_TABLE_11_GREEN22_SHIFT                5
#define REG_G3X_TOON_TABLE_11_GREEN22_SIZE                 5
#define REG_G3X_TOON_TABLE_11_GREEN22_MASK                 0x000003e0

#define REG_G3X_TOON_TABLE_11_RED22_SHIFT                  0
#define REG_G3X_TOON_TABLE_11_RED22_SIZE                   5
#define REG_G3X_TOON_TABLE_11_RED22_MASK                   0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_11_FIELD( blue23, green23, red23, blue22, green22, red22 ) \
    (u32)( \
    ((u32)(blue23) << REG_G3X_TOON_TABLE_11_BLUE23_SHIFT) | \
    ((u32)(green23) << REG_G3X_TOON_TABLE_11_GREEN23_SHIFT) | \
    ((u32)(red23) << REG_G3X_TOON_TABLE_11_RED23_SHIFT) | \
    ((u32)(blue22) << REG_G3X_TOON_TABLE_11_BLUE22_SHIFT) | \
    ((u32)(green22) << REG_G3X_TOON_TABLE_11_GREEN22_SHIFT) | \
    ((u32)(red22) << REG_G3X_TOON_TABLE_11_RED22_SHIFT))
#endif


/* TOON_TABLE_11_L */

#define REG_G3X_TOON_TABLE_11_L_BLUE22_SHIFT               10
#define REG_G3X_TOON_TABLE_11_L_BLUE22_SIZE                5
#define REG_G3X_TOON_TABLE_11_L_BLUE22_MASK                0x7c00

#define REG_G3X_TOON_TABLE_11_L_GREEN22_SHIFT              5
#define REG_G3X_TOON_TABLE_11_L_GREEN22_SIZE               5
#define REG_G3X_TOON_TABLE_11_L_GREEN22_MASK               0x03e0

#define REG_G3X_TOON_TABLE_11_L_RED22_SHIFT                0
#define REG_G3X_TOON_TABLE_11_L_RED22_SIZE                 5
#define REG_G3X_TOON_TABLE_11_L_RED22_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_11_L_FIELD( blue22, green22, red22 ) \
    (u16)( \
    ((u32)(blue22) << REG_G3X_TOON_TABLE_11_L_BLUE22_SHIFT) | \
    ((u32)(green22) << REG_G3X_TOON_TABLE_11_L_GREEN22_SHIFT) | \
    ((u32)(red22) << REG_G3X_TOON_TABLE_11_L_RED22_SHIFT))
#endif


/* TOON_TABLE_11_H */

#define REG_G3X_TOON_TABLE_11_H_BLUE23_SHIFT               10
#define REG_G3X_TOON_TABLE_11_H_BLUE23_SIZE                5
#define REG_G3X_TOON_TABLE_11_H_BLUE23_MASK                0x7c00

#define REG_G3X_TOON_TABLE_11_H_GREEN23_SHIFT              5
#define REG_G3X_TOON_TABLE_11_H_GREEN23_SIZE               5
#define REG_G3X_TOON_TABLE_11_H_GREEN23_MASK               0x03e0

#define REG_G3X_TOON_TABLE_11_H_RED23_SHIFT                0
#define REG_G3X_TOON_TABLE_11_H_RED23_SIZE                 5
#define REG_G3X_TOON_TABLE_11_H_RED23_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_11_H_FIELD( blue23, green23, red23 ) \
    (u16)( \
    ((u32)(blue23) << REG_G3X_TOON_TABLE_11_H_BLUE23_SHIFT) | \
    ((u32)(green23) << REG_G3X_TOON_TABLE_11_H_GREEN23_SHIFT) | \
    ((u32)(red23) << REG_G3X_TOON_TABLE_11_H_RED23_SHIFT))
#endif


/* TOON_TABLE_12 */

#define REG_G3X_TOON_TABLE_12_BLUE25_SHIFT                 26
#define REG_G3X_TOON_TABLE_12_BLUE25_SIZE                  5
#define REG_G3X_TOON_TABLE_12_BLUE25_MASK                  0x7c000000

#define REG_G3X_TOON_TABLE_12_GREEN25_SHIFT                21
#define REG_G3X_TOON_TABLE_12_GREEN25_SIZE                 5
#define REG_G3X_TOON_TABLE_12_GREEN25_MASK                 0x03e00000

#define REG_G3X_TOON_TABLE_12_RED25_SHIFT                  16
#define REG_G3X_TOON_TABLE_12_RED25_SIZE                   5
#define REG_G3X_TOON_TABLE_12_RED25_MASK                   0x001f0000

#define REG_G3X_TOON_TABLE_12_BLUE24_SHIFT                 10
#define REG_G3X_TOON_TABLE_12_BLUE24_SIZE                  5
#define REG_G3X_TOON_TABLE_12_BLUE24_MASK                  0x00007c00

#define REG_G3X_TOON_TABLE_12_GREEN24_SHIFT                5
#define REG_G3X_TOON_TABLE_12_GREEN24_SIZE                 5
#define REG_G3X_TOON_TABLE_12_GREEN24_MASK                 0x000003e0

#define REG_G3X_TOON_TABLE_12_RED24_SHIFT                  0
#define REG_G3X_TOON_TABLE_12_RED24_SIZE                   5
#define REG_G3X_TOON_TABLE_12_RED24_MASK                   0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_12_FIELD( blue25, green25, red25, blue24, green24, red24 ) \
    (u32)( \
    ((u32)(blue25) << REG_G3X_TOON_TABLE_12_BLUE25_SHIFT) | \
    ((u32)(green25) << REG_G3X_TOON_TABLE_12_GREEN25_SHIFT) | \
    ((u32)(red25) << REG_G3X_TOON_TABLE_12_RED25_SHIFT) | \
    ((u32)(blue24) << REG_G3X_TOON_TABLE_12_BLUE24_SHIFT) | \
    ((u32)(green24) << REG_G3X_TOON_TABLE_12_GREEN24_SHIFT) | \
    ((u32)(red24) << REG_G3X_TOON_TABLE_12_RED24_SHIFT))
#endif


/* TOON_TABLE_12_L */

#define REG_G3X_TOON_TABLE_12_L_BLUE24_SHIFT               10
#define REG_G3X_TOON_TABLE_12_L_BLUE24_SIZE                5
#define REG_G3X_TOON_TABLE_12_L_BLUE24_MASK                0x7c00

#define REG_G3X_TOON_TABLE_12_L_GREEN24_SHIFT              5
#define REG_G3X_TOON_TABLE_12_L_GREEN24_SIZE               5
#define REG_G3X_TOON_TABLE_12_L_GREEN24_MASK               0x03e0

#define REG_G3X_TOON_TABLE_12_L_RED24_SHIFT                0
#define REG_G3X_TOON_TABLE_12_L_RED24_SIZE                 5
#define REG_G3X_TOON_TABLE_12_L_RED24_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_12_L_FIELD( blue24, green24, red24 ) \
    (u16)( \
    ((u32)(blue24) << REG_G3X_TOON_TABLE_12_L_BLUE24_SHIFT) | \
    ((u32)(green24) << REG_G3X_TOON_TABLE_12_L_GREEN24_SHIFT) | \
    ((u32)(red24) << REG_G3X_TOON_TABLE_12_L_RED24_SHIFT))
#endif


/* TOON_TABLE_12_H */

#define REG_G3X_TOON_TABLE_12_H_BLUE25_SHIFT               10
#define REG_G3X_TOON_TABLE_12_H_BLUE25_SIZE                5
#define REG_G3X_TOON_TABLE_12_H_BLUE25_MASK                0x7c00

#define REG_G3X_TOON_TABLE_12_H_GREEN25_SHIFT              5
#define REG_G3X_TOON_TABLE_12_H_GREEN25_SIZE               5
#define REG_G3X_TOON_TABLE_12_H_GREEN25_MASK               0x03e0

#define REG_G3X_TOON_TABLE_12_H_RED25_SHIFT                0
#define REG_G3X_TOON_TABLE_12_H_RED25_SIZE                 5
#define REG_G3X_TOON_TABLE_12_H_RED25_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_12_H_FIELD( blue25, green25, red25 ) \
    (u16)( \
    ((u32)(blue25) << REG_G3X_TOON_TABLE_12_H_BLUE25_SHIFT) | \
    ((u32)(green25) << REG_G3X_TOON_TABLE_12_H_GREEN25_SHIFT) | \
    ((u32)(red25) << REG_G3X_TOON_TABLE_12_H_RED25_SHIFT))
#endif


/* TOON_TABLE_13 */

#define REG_G3X_TOON_TABLE_13_BLUE27_SHIFT                 26
#define REG_G3X_TOON_TABLE_13_BLUE27_SIZE                  5
#define REG_G3X_TOON_TABLE_13_BLUE27_MASK                  0x7c000000

#define REG_G3X_TOON_TABLE_13_GREEN27_SHIFT                21
#define REG_G3X_TOON_TABLE_13_GREEN27_SIZE                 5
#define REG_G3X_TOON_TABLE_13_GREEN27_MASK                 0x03e00000

#define REG_G3X_TOON_TABLE_13_RED27_SHIFT                  16
#define REG_G3X_TOON_TABLE_13_RED27_SIZE                   5
#define REG_G3X_TOON_TABLE_13_RED27_MASK                   0x001f0000

#define REG_G3X_TOON_TABLE_13_BLUE26_SHIFT                 10
#define REG_G3X_TOON_TABLE_13_BLUE26_SIZE                  5
#define REG_G3X_TOON_TABLE_13_BLUE26_MASK                  0x00007c00

#define REG_G3X_TOON_TABLE_13_GREEN26_SHIFT                5
#define REG_G3X_TOON_TABLE_13_GREEN26_SIZE                 5
#define REG_G3X_TOON_TABLE_13_GREEN26_MASK                 0x000003e0

#define REG_G3X_TOON_TABLE_13_RED26_SHIFT                  0
#define REG_G3X_TOON_TABLE_13_RED26_SIZE                   5
#define REG_G3X_TOON_TABLE_13_RED26_MASK                   0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_13_FIELD( blue27, green27, red27, blue26, green26, red26 ) \
    (u32)( \
    ((u32)(blue27) << REG_G3X_TOON_TABLE_13_BLUE27_SHIFT) | \
    ((u32)(green27) << REG_G3X_TOON_TABLE_13_GREEN27_SHIFT) | \
    ((u32)(red27) << REG_G3X_TOON_TABLE_13_RED27_SHIFT) | \
    ((u32)(blue26) << REG_G3X_TOON_TABLE_13_BLUE26_SHIFT) | \
    ((u32)(green26) << REG_G3X_TOON_TABLE_13_GREEN26_SHIFT) | \
    ((u32)(red26) << REG_G3X_TOON_TABLE_13_RED26_SHIFT))
#endif


/* TOON_TABLE_13_L */

#define REG_G3X_TOON_TABLE_13_L_BLUE26_SHIFT               10
#define REG_G3X_TOON_TABLE_13_L_BLUE26_SIZE                5
#define REG_G3X_TOON_TABLE_13_L_BLUE26_MASK                0x7c00

#define REG_G3X_TOON_TABLE_13_L_GREEN26_SHIFT              5
#define REG_G3X_TOON_TABLE_13_L_GREEN26_SIZE               5
#define REG_G3X_TOON_TABLE_13_L_GREEN26_MASK               0x03e0

#define REG_G3X_TOON_TABLE_13_L_RED26_SHIFT                0
#define REG_G3X_TOON_TABLE_13_L_RED26_SIZE                 5
#define REG_G3X_TOON_TABLE_13_L_RED26_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_13_L_FIELD( blue26, green26, red26 ) \
    (u16)( \
    ((u32)(blue26) << REG_G3X_TOON_TABLE_13_L_BLUE26_SHIFT) | \
    ((u32)(green26) << REG_G3X_TOON_TABLE_13_L_GREEN26_SHIFT) | \
    ((u32)(red26) << REG_G3X_TOON_TABLE_13_L_RED26_SHIFT))
#endif


/* TOON_TABLE_13_H */

#define REG_G3X_TOON_TABLE_13_H_BLUE27_SHIFT               10
#define REG_G3X_TOON_TABLE_13_H_BLUE27_SIZE                5
#define REG_G3X_TOON_TABLE_13_H_BLUE27_MASK                0x7c00

#define REG_G3X_TOON_TABLE_13_H_GREEN27_SHIFT              5
#define REG_G3X_TOON_TABLE_13_H_GREEN27_SIZE               5
#define REG_G3X_TOON_TABLE_13_H_GREEN27_MASK               0x03e0

#define REG_G3X_TOON_TABLE_13_H_RED27_SHIFT                0
#define REG_G3X_TOON_TABLE_13_H_RED27_SIZE                 5
#define REG_G3X_TOON_TABLE_13_H_RED27_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_13_H_FIELD( blue27, green27, red27 ) \
    (u16)( \
    ((u32)(blue27) << REG_G3X_TOON_TABLE_13_H_BLUE27_SHIFT) | \
    ((u32)(green27) << REG_G3X_TOON_TABLE_13_H_GREEN27_SHIFT) | \
    ((u32)(red27) << REG_G3X_TOON_TABLE_13_H_RED27_SHIFT))
#endif


/* TOON_TABLE_14 */

#define REG_G3X_TOON_TABLE_14_BLUE29_SHIFT                 26
#define REG_G3X_TOON_TABLE_14_BLUE29_SIZE                  5
#define REG_G3X_TOON_TABLE_14_BLUE29_MASK                  0x7c000000

#define REG_G3X_TOON_TABLE_14_GREEN29_SHIFT                21
#define REG_G3X_TOON_TABLE_14_GREEN29_SIZE                 5
#define REG_G3X_TOON_TABLE_14_GREEN29_MASK                 0x03e00000

#define REG_G3X_TOON_TABLE_14_RED29_SHIFT                  16
#define REG_G3X_TOON_TABLE_14_RED29_SIZE                   5
#define REG_G3X_TOON_TABLE_14_RED29_MASK                   0x001f0000

#define REG_G3X_TOON_TABLE_14_BLUE28_SHIFT                 10
#define REG_G3X_TOON_TABLE_14_BLUE28_SIZE                  5
#define REG_G3X_TOON_TABLE_14_BLUE28_MASK                  0x00007c00

#define REG_G3X_TOON_TABLE_14_GREEN28_SHIFT                5
#define REG_G3X_TOON_TABLE_14_GREEN28_SIZE                 5
#define REG_G3X_TOON_TABLE_14_GREEN28_MASK                 0x000003e0

#define REG_G3X_TOON_TABLE_14_RED28_SHIFT                  0
#define REG_G3X_TOON_TABLE_14_RED28_SIZE                   5
#define REG_G3X_TOON_TABLE_14_RED28_MASK                   0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_14_FIELD( blue29, green29, red29, blue28, green28, red28 ) \
    (u32)( \
    ((u32)(blue29) << REG_G3X_TOON_TABLE_14_BLUE29_SHIFT) | \
    ((u32)(green29) << REG_G3X_TOON_TABLE_14_GREEN29_SHIFT) | \
    ((u32)(red29) << REG_G3X_TOON_TABLE_14_RED29_SHIFT) | \
    ((u32)(blue28) << REG_G3X_TOON_TABLE_14_BLUE28_SHIFT) | \
    ((u32)(green28) << REG_G3X_TOON_TABLE_14_GREEN28_SHIFT) | \
    ((u32)(red28) << REG_G3X_TOON_TABLE_14_RED28_SHIFT))
#endif


/* TOON_TABLE_14_L */

#define REG_G3X_TOON_TABLE_14_L_BLUE28_SHIFT               10
#define REG_G3X_TOON_TABLE_14_L_BLUE28_SIZE                5
#define REG_G3X_TOON_TABLE_14_L_BLUE28_MASK                0x7c00

#define REG_G3X_TOON_TABLE_14_L_GREEN28_SHIFT              5
#define REG_G3X_TOON_TABLE_14_L_GREEN28_SIZE               5
#define REG_G3X_TOON_TABLE_14_L_GREEN28_MASK               0x03e0

#define REG_G3X_TOON_TABLE_14_L_RED28_SHIFT                0
#define REG_G3X_TOON_TABLE_14_L_RED28_SIZE                 5
#define REG_G3X_TOON_TABLE_14_L_RED28_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_14_L_FIELD( blue28, green28, red28 ) \
    (u16)( \
    ((u32)(blue28) << REG_G3X_TOON_TABLE_14_L_BLUE28_SHIFT) | \
    ((u32)(green28) << REG_G3X_TOON_TABLE_14_L_GREEN28_SHIFT) | \
    ((u32)(red28) << REG_G3X_TOON_TABLE_14_L_RED28_SHIFT))
#endif


/* TOON_TABLE_14_H */

#define REG_G3X_TOON_TABLE_14_H_BLUE29_SHIFT               10
#define REG_G3X_TOON_TABLE_14_H_BLUE29_SIZE                5
#define REG_G3X_TOON_TABLE_14_H_BLUE29_MASK                0x7c00

#define REG_G3X_TOON_TABLE_14_H_GREEN29_SHIFT              5
#define REG_G3X_TOON_TABLE_14_H_GREEN29_SIZE               5
#define REG_G3X_TOON_TABLE_14_H_GREEN29_MASK               0x03e0

#define REG_G3X_TOON_TABLE_14_H_RED29_SHIFT                0
#define REG_G3X_TOON_TABLE_14_H_RED29_SIZE                 5
#define REG_G3X_TOON_TABLE_14_H_RED29_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_14_H_FIELD( blue29, green29, red29 ) \
    (u16)( \
    ((u32)(blue29) << REG_G3X_TOON_TABLE_14_H_BLUE29_SHIFT) | \
    ((u32)(green29) << REG_G3X_TOON_TABLE_14_H_GREEN29_SHIFT) | \
    ((u32)(red29) << REG_G3X_TOON_TABLE_14_H_RED29_SHIFT))
#endif


/* TOON_TABLE_15 */

#define REG_G3X_TOON_TABLE_15_BLUE31_SHIFT                 26
#define REG_G3X_TOON_TABLE_15_BLUE31_SIZE                  5
#define REG_G3X_TOON_TABLE_15_BLUE31_MASK                  0x7c000000

#define REG_G3X_TOON_TABLE_15_GREEN31_SHIFT                21
#define REG_G3X_TOON_TABLE_15_GREEN31_SIZE                 5
#define REG_G3X_TOON_TABLE_15_GREEN31_MASK                 0x03e00000

#define REG_G3X_TOON_TABLE_15_RED31_SHIFT                  16
#define REG_G3X_TOON_TABLE_15_RED31_SIZE                   5
#define REG_G3X_TOON_TABLE_15_RED31_MASK                   0x001f0000

#define REG_G3X_TOON_TABLE_15_BLUE30_SHIFT                 10
#define REG_G3X_TOON_TABLE_15_BLUE30_SIZE                  5
#define REG_G3X_TOON_TABLE_15_BLUE30_MASK                  0x00007c00

#define REG_G3X_TOON_TABLE_15_GREEN30_SHIFT                5
#define REG_G3X_TOON_TABLE_15_GREEN30_SIZE                 5
#define REG_G3X_TOON_TABLE_15_GREEN30_MASK                 0x000003e0

#define REG_G3X_TOON_TABLE_15_RED30_SHIFT                  0
#define REG_G3X_TOON_TABLE_15_RED30_SIZE                   5
#define REG_G3X_TOON_TABLE_15_RED30_MASK                   0x0000001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_15_FIELD( blue31, green31, red31, blue30, green30, red30 ) \
    (u32)( \
    ((u32)(blue31) << REG_G3X_TOON_TABLE_15_BLUE31_SHIFT) | \
    ((u32)(green31) << REG_G3X_TOON_TABLE_15_GREEN31_SHIFT) | \
    ((u32)(red31) << REG_G3X_TOON_TABLE_15_RED31_SHIFT) | \
    ((u32)(blue30) << REG_G3X_TOON_TABLE_15_BLUE30_SHIFT) | \
    ((u32)(green30) << REG_G3X_TOON_TABLE_15_GREEN30_SHIFT) | \
    ((u32)(red30) << REG_G3X_TOON_TABLE_15_RED30_SHIFT))
#endif


/* TOON_TABLE_15_L */

#define REG_G3X_TOON_TABLE_15_L_BLUE30_SHIFT               10
#define REG_G3X_TOON_TABLE_15_L_BLUE30_SIZE                5
#define REG_G3X_TOON_TABLE_15_L_BLUE30_MASK                0x7c00

#define REG_G3X_TOON_TABLE_15_L_GREEN30_SHIFT              5
#define REG_G3X_TOON_TABLE_15_L_GREEN30_SIZE               5
#define REG_G3X_TOON_TABLE_15_L_GREEN30_MASK               0x03e0

#define REG_G3X_TOON_TABLE_15_L_RED30_SHIFT                0
#define REG_G3X_TOON_TABLE_15_L_RED30_SIZE                 5
#define REG_G3X_TOON_TABLE_15_L_RED30_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_15_L_FIELD( blue30, green30, red30 ) \
    (u16)( \
    ((u32)(blue30) << REG_G3X_TOON_TABLE_15_L_BLUE30_SHIFT) | \
    ((u32)(green30) << REG_G3X_TOON_TABLE_15_L_GREEN30_SHIFT) | \
    ((u32)(red30) << REG_G3X_TOON_TABLE_15_L_RED30_SHIFT))
#endif


/* TOON_TABLE_15_H */

#define REG_G3X_TOON_TABLE_15_H_BLUE31_SHIFT               10
#define REG_G3X_TOON_TABLE_15_H_BLUE31_SIZE                5
#define REG_G3X_TOON_TABLE_15_H_BLUE31_MASK                0x7c00

#define REG_G3X_TOON_TABLE_15_H_GREEN31_SHIFT              5
#define REG_G3X_TOON_TABLE_15_H_GREEN31_SIZE               5
#define REG_G3X_TOON_TABLE_15_H_GREEN31_MASK               0x03e0

#define REG_G3X_TOON_TABLE_15_H_RED31_SHIFT                0
#define REG_G3X_TOON_TABLE_15_H_RED31_SIZE                 5
#define REG_G3X_TOON_TABLE_15_H_RED31_MASK                 0x001f

#ifndef SDK_ASM
#define REG_G3X_TOON_TABLE_15_H_FIELD( blue31, green31, red31 ) \
    (u16)( \
    ((u32)(blue31) << REG_G3X_TOON_TABLE_15_H_BLUE31_SHIFT) | \
    ((u32)(green31) << REG_G3X_TOON_TABLE_15_H_GREEN31_SHIFT) | \
    ((u32)(red31) << REG_G3X_TOON_TABLE_15_H_RED31_SHIFT))
#endif


/* GXFIFO */

/* GXSTAT */

#define REG_G3X_GXSTAT_FI_SHIFT                            30
#define REG_G3X_GXSTAT_FI_SIZE                             2
#define REG_G3X_GXSTAT_FI_MASK                             0xc0000000

#define REG_G3X_GXSTAT_B_SHIFT                             27
#define REG_G3X_GXSTAT_B_SIZE                              1
#define REG_G3X_GXSTAT_B_MASK                              0x08000000

#define REG_G3X_GXSTAT_E_SHIFT                             26
#define REG_G3X_GXSTAT_E_SIZE                              1
#define REG_G3X_GXSTAT_E_MASK                              0x04000000

#define REG_G3X_GXSTAT_H_SHIFT                             25
#define REG_G3X_GXSTAT_H_SIZE                              1
#define REG_G3X_GXSTAT_H_MASK                              0x02000000

#define REG_G3X_GXSTAT_F_SHIFT                             24
#define REG_G3X_GXSTAT_F_SIZE                              1
#define REG_G3X_GXSTAT_F_MASK                              0x01000000

#define REG_G3X_GXSTAT_FIFOCNT_SHIFT                       16
#define REG_G3X_GXSTAT_FIFOCNT_SIZE                        8
#define REG_G3X_GXSTAT_FIFOCNT_MASK                        0x00ff0000

#define REG_G3X_GXSTAT_SE_SHIFT                            15
#define REG_G3X_GXSTAT_SE_SIZE                             1
#define REG_G3X_GXSTAT_SE_MASK                             0x00008000

#define REG_G3X_GXSTAT_SB_SHIFT                            14
#define REG_G3X_GXSTAT_SB_SIZE                             1
#define REG_G3X_GXSTAT_SB_MASK                             0x00004000

#define REG_G3X_GXSTAT_PJ_SHIFT                            13
#define REG_G3X_GXSTAT_PJ_SIZE                             1
#define REG_G3X_GXSTAT_PJ_MASK                             0x00002000

#define REG_G3X_GXSTAT_PV_SHIFT                            8
#define REG_G3X_GXSTAT_PV_SIZE                             5
#define REG_G3X_GXSTAT_PV_MASK                             0x00001f00

#define REG_G3X_GXSTAT_TR_SHIFT                            1
#define REG_G3X_GXSTAT_TR_SIZE                             1
#define REG_G3X_GXSTAT_TR_MASK                             0x00000002

#define REG_G3X_GXSTAT_TB_SHIFT                            0
#define REG_G3X_GXSTAT_TB_SIZE                             1
#define REG_G3X_GXSTAT_TB_MASK                             0x00000001

#ifndef SDK_ASM
#define REG_G3X_GXSTAT_FIELD( fi, b, e, h, f, fifocnt, se, sb, pj, pv, tr, tb ) \
    (u32)( \
    ((u32)(fi) << REG_G3X_GXSTAT_FI_SHIFT) | \
    ((u32)(b) << REG_G3X_GXSTAT_B_SHIFT) | \
    ((u32)(e) << REG_G3X_GXSTAT_E_SHIFT) | \
    ((u32)(h) << REG_G3X_GXSTAT_H_SHIFT) | \
    ((u32)(f) << REG_G3X_GXSTAT_F_SHIFT) | \
    ((u32)(fifocnt) << REG_G3X_GXSTAT_FIFOCNT_SHIFT) | \
    ((u32)(se) << REG_G3X_GXSTAT_SE_SHIFT) | \
    ((u32)(sb) << REG_G3X_GXSTAT_SB_SHIFT) | \
    ((u32)(pj) << REG_G3X_GXSTAT_PJ_SHIFT) | \
    ((u32)(pv) << REG_G3X_GXSTAT_PV_SHIFT) | \
    ((u32)(tr) << REG_G3X_GXSTAT_TR_SHIFT) | \
    ((u32)(tb) << REG_G3X_GXSTAT_TB_SHIFT))
#endif


/* LISTRAM_COUNT */

#define REG_G3X_LISTRAM_COUNT_RAMCNT_SHIFT                 0
#define REG_G3X_LISTRAM_COUNT_RAMCNT_SIZE                  12
#define REG_G3X_LISTRAM_COUNT_RAMCNT_MASK                  0x0fff

#ifndef SDK_ASM
#define REG_G3X_LISTRAM_COUNT_FIELD( ramcnt ) \
    (u16)( \
    ((u32)(ramcnt) << REG_G3X_LISTRAM_COUNT_RAMCNT_SHIFT))
#endif


/* VTXRAM_COUNT */

#define REG_G3X_VTXRAM_COUNT_VTXCNT_SHIFT                  0
#define REG_G3X_VTXRAM_COUNT_VTXCNT_SIZE                   13
#define REG_G3X_VTXRAM_COUNT_VTXCNT_MASK                   0x1fff

#ifndef SDK_ASM
#define REG_G3X_VTXRAM_COUNT_FIELD( vtxcnt ) \
    (u16)( \
    ((u32)(vtxcnt) << REG_G3X_VTXRAM_COUNT_VTXCNT_SHIFT))
#endif


/* DISP_1DOT_DEPTH */

#define REG_G3X_DISP_1DOT_DEPTH_INTEGER_W_SHIFT            3
#define REG_G3X_DISP_1DOT_DEPTH_INTEGER_W_SIZE             12
#define REG_G3X_DISP_1DOT_DEPTH_INTEGER_W_MASK             0x7ff8

#define REG_G3X_DISP_1DOT_DEPTH_DECIMAL_W_SHIFT            0
#define REG_G3X_DISP_1DOT_DEPTH_DECIMAL_W_SIZE             3
#define REG_G3X_DISP_1DOT_DEPTH_DECIMAL_W_MASK             0x0007

#ifndef SDK_ASM
#define REG_G3X_DISP_1DOT_DEPTH_FIELD( integer_w, decimal_w ) \
    (u16)( \
    ((u32)(integer_w) << REG_G3X_DISP_1DOT_DEPTH_INTEGER_W_SHIFT) | \
    ((u32)(decimal_w) << REG_G3X_DISP_1DOT_DEPTH_DECIMAL_W_SHIFT))
#endif


/* POS_RESULT_X */

#define REG_G3X_POS_RESULT_X_SX_SHIFT                      31
#define REG_G3X_POS_RESULT_X_SX_SIZE                       1
#define REG_G3X_POS_RESULT_X_SX_MASK                       0x80000000

#define REG_G3X_POS_RESULT_X_INTEGER_X_SHIFT               12
#define REG_G3X_POS_RESULT_X_INTEGER_X_SIZE                19
#define REG_G3X_POS_RESULT_X_INTEGER_X_MASK                0x7ffff000

#define REG_G3X_POS_RESULT_X_DECIMAL_X_SHIFT               0
#define REG_G3X_POS_RESULT_X_DECIMAL_X_SIZE                12
#define REG_G3X_POS_RESULT_X_DECIMAL_X_MASK                0x00000fff

#ifndef SDK_ASM
#define REG_G3X_POS_RESULT_X_FIELD( sx, integer_x, decimal_x ) \
    (u32)( \
    ((u32)(sx) << REG_G3X_POS_RESULT_X_SX_SHIFT) | \
    ((u32)(integer_x) << REG_G3X_POS_RESULT_X_INTEGER_X_SHIFT) | \
    ((u32)(decimal_x) << REG_G3X_POS_RESULT_X_DECIMAL_X_SHIFT))
#endif


/* POS_RESULT_Y */

#define REG_G3X_POS_RESULT_Y_SY_SHIFT                      31
#define REG_G3X_POS_RESULT_Y_SY_SIZE                       1
#define REG_G3X_POS_RESULT_Y_SY_MASK                       0x80000000

#define REG_G3X_POS_RESULT_Y_INTEGER_Y_SHIFT               12
#define REG_G3X_POS_RESULT_Y_INTEGER_Y_SIZE                19
#define REG_G3X_POS_RESULT_Y_INTEGER_Y_MASK                0x7ffff000

#define REG_G3X_POS_RESULT_Y_DECIMAL_Y_SHIFT               0
#define REG_G3X_POS_RESULT_Y_DECIMAL_Y_SIZE                12
#define REG_G3X_POS_RESULT_Y_DECIMAL_Y_MASK                0x00000fff

#ifndef SDK_ASM
#define REG_G3X_POS_RESULT_Y_FIELD( sy, integer_y, decimal_y ) \
    (u32)( \
    ((u32)(sy) << REG_G3X_POS_RESULT_Y_SY_SHIFT) | \
    ((u32)(integer_y) << REG_G3X_POS_RESULT_Y_INTEGER_Y_SHIFT) | \
    ((u32)(decimal_y) << REG_G3X_POS_RESULT_Y_DECIMAL_Y_SHIFT))
#endif


/* POS_RESULT_Z */

#define REG_G3X_POS_RESULT_Z_SZ_SHIFT                      31
#define REG_G3X_POS_RESULT_Z_SZ_SIZE                       1
#define REG_G3X_POS_RESULT_Z_SZ_MASK                       0x80000000

#define REG_G3X_POS_RESULT_Z_INTEGER_Z_SHIFT               12
#define REG_G3X_POS_RESULT_Z_INTEGER_Z_SIZE                19
#define REG_G3X_POS_RESULT_Z_INTEGER_Z_MASK                0x7ffff000

#define REG_G3X_POS_RESULT_Z_DECIMAL_Z_SHIFT               0
#define REG_G3X_POS_RESULT_Z_DECIMAL_Z_SIZE                12
#define REG_G3X_POS_RESULT_Z_DECIMAL_Z_MASK                0x00000fff

#ifndef SDK_ASM
#define REG_G3X_POS_RESULT_Z_FIELD( sz, integer_z, decimal_z ) \
    (u32)( \
    ((u32)(sz) << REG_G3X_POS_RESULT_Z_SZ_SHIFT) | \
    ((u32)(integer_z) << REG_G3X_POS_RESULT_Z_INTEGER_Z_SHIFT) | \
    ((u32)(decimal_z) << REG_G3X_POS_RESULT_Z_DECIMAL_Z_SHIFT))
#endif


/* POS_RESULT_W */

#define REG_G3X_POS_RESULT_W_SW_SHIFT                      31
#define REG_G3X_POS_RESULT_W_SW_SIZE                       1
#define REG_G3X_POS_RESULT_W_SW_MASK                       0x80000000

#define REG_G3X_POS_RESULT_W_INTEGER_W_SHIFT               12
#define REG_G3X_POS_RESULT_W_INTEGER_W_SIZE                19
#define REG_G3X_POS_RESULT_W_INTEGER_W_MASK                0x7ffff000

#define REG_G3X_POS_RESULT_W_DECIMAL_W_SHIFT               0
#define REG_G3X_POS_RESULT_W_DECIMAL_W_SIZE                12
#define REG_G3X_POS_RESULT_W_DECIMAL_W_MASK                0x00000fff

#ifndef SDK_ASM
#define REG_G3X_POS_RESULT_W_FIELD( sw, integer_w, decimal_w ) \
    (u32)( \
    ((u32)(sw) << REG_G3X_POS_RESULT_W_SW_SHIFT) | \
    ((u32)(integer_w) << REG_G3X_POS_RESULT_W_INTEGER_W_SHIFT) | \
    ((u32)(decimal_w) << REG_G3X_POS_RESULT_W_DECIMAL_W_SHIFT))
#endif


/* VEC_RESULT_X */

#define REG_G3X_VEC_RESULT_X_SX_SHIFT                      15
#define REG_G3X_VEC_RESULT_X_SX_SIZE                       1
#define REG_G3X_VEC_RESULT_X_SX_MASK                       0x8000

#define REG_G3X_VEC_RESULT_X_INTEGER_X_SHIFT               12
#define REG_G3X_VEC_RESULT_X_INTEGER_X_SIZE                3
#define REG_G3X_VEC_RESULT_X_INTEGER_X_MASK                0x7000

#define REG_G3X_VEC_RESULT_X_DECIMAL_X_SHIFT               0
#define REG_G3X_VEC_RESULT_X_DECIMAL_X_SIZE                12
#define REG_G3X_VEC_RESULT_X_DECIMAL_X_MASK                0x0fff

#ifndef SDK_ASM
#define REG_G3X_VEC_RESULT_X_FIELD( sx, integer_x, decimal_x ) \
    (u16)( \
    ((u32)(sx) << REG_G3X_VEC_RESULT_X_SX_SHIFT) | \
    ((u32)(integer_x) << REG_G3X_VEC_RESULT_X_INTEGER_X_SHIFT) | \
    ((u32)(decimal_x) << REG_G3X_VEC_RESULT_X_DECIMAL_X_SHIFT))
#endif


/* VEC_RESULT_Y */

#define REG_G3X_VEC_RESULT_Y_SY_SHIFT                      15
#define REG_G3X_VEC_RESULT_Y_SY_SIZE                       1
#define REG_G3X_VEC_RESULT_Y_SY_MASK                       0x8000

#define REG_G3X_VEC_RESULT_Y_INTEGER_Y_SHIFT               12
#define REG_G3X_VEC_RESULT_Y_INTEGER_Y_SIZE                3
#define REG_G3X_VEC_RESULT_Y_INTEGER_Y_MASK                0x7000

#define REG_G3X_VEC_RESULT_Y_DECIMAL_Y_SHIFT               0
#define REG_G3X_VEC_RESULT_Y_DECIMAL_Y_SIZE                12
#define REG_G3X_VEC_RESULT_Y_DECIMAL_Y_MASK                0x0fff

#ifndef SDK_ASM
#define REG_G3X_VEC_RESULT_Y_FIELD( sy, integer_y, decimal_y ) \
    (u16)( \
    ((u32)(sy) << REG_G3X_VEC_RESULT_Y_SY_SHIFT) | \
    ((u32)(integer_y) << REG_G3X_VEC_RESULT_Y_INTEGER_Y_SHIFT) | \
    ((u32)(decimal_y) << REG_G3X_VEC_RESULT_Y_DECIMAL_Y_SHIFT))
#endif


/* VEC_RESULT_Z */

#define REG_G3X_VEC_RESULT_Z_SZ_SHIFT                      15
#define REG_G3X_VEC_RESULT_Z_SZ_SIZE                       1
#define REG_G3X_VEC_RESULT_Z_SZ_MASK                       0x8000

#define REG_G3X_VEC_RESULT_Z_INTEGER_Z_SHIFT               12
#define REG_G3X_VEC_RESULT_Z_INTEGER_Z_SIZE                3
#define REG_G3X_VEC_RESULT_Z_INTEGER_Z_MASK                0x7000

#define REG_G3X_VEC_RESULT_Z_DECIMAL_Z_SHIFT               0
#define REG_G3X_VEC_RESULT_Z_DECIMAL_Z_SIZE                12
#define REG_G3X_VEC_RESULT_Z_DECIMAL_Z_MASK                0x0fff

#ifndef SDK_ASM
#define REG_G3X_VEC_RESULT_Z_FIELD( sz, integer_z, decimal_z ) \
    (u16)( \
    ((u32)(sz) << REG_G3X_VEC_RESULT_Z_SZ_SHIFT) | \
    ((u32)(integer_z) << REG_G3X_VEC_RESULT_Z_INTEGER_Z_SHIFT) | \
    ((u32)(decimal_z) << REG_G3X_VEC_RESULT_Z_DECIMAL_Z_SHIFT))
#endif


/* CLIPMTX_RESULT_0 */

#define REG_G3X_CLIPMTX_RESULT_0_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_0_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_0_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_0_INTEGER_m0_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_0_INTEGER_m0_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_0_INTEGER_m0_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_0_DECIMAL_m0_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_0_DECIMAL_m0_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_0_DECIMAL_m0_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_0_FIELD( s, integer_m0, decimal_m0 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_0_S_SHIFT) | \
    ((u32)(integer_m0) << REG_G3X_CLIPMTX_RESULT_0_INTEGER_m0_SHIFT) | \
    ((u32)(decimal_m0) << REG_G3X_CLIPMTX_RESULT_0_DECIMAL_m0_SHIFT))
#endif


/* CLIPMTX_RESULT_1 */

#define REG_G3X_CLIPMTX_RESULT_1_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_1_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_1_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_1_INTEGER_m1_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_1_INTEGER_m1_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_1_INTEGER_m1_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_1_DECIMAL_m1_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_1_DECIMAL_m1_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_1_DECIMAL_m1_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_1_FIELD( s, integer_m1, decimal_m1 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_1_S_SHIFT) | \
    ((u32)(integer_m1) << REG_G3X_CLIPMTX_RESULT_1_INTEGER_m1_SHIFT) | \
    ((u32)(decimal_m1) << REG_G3X_CLIPMTX_RESULT_1_DECIMAL_m1_SHIFT))
#endif


/* CLIPMTX_RESULT_2 */

#define REG_G3X_CLIPMTX_RESULT_2_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_2_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_2_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_2_INTEGER_m2_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_2_INTEGER_m2_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_2_INTEGER_m2_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_2_DECIMAL_m2_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_2_DECIMAL_m2_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_2_DECIMAL_m2_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_2_FIELD( s, integer_m2, decimal_m2 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_2_S_SHIFT) | \
    ((u32)(integer_m2) << REG_G3X_CLIPMTX_RESULT_2_INTEGER_m2_SHIFT) | \
    ((u32)(decimal_m2) << REG_G3X_CLIPMTX_RESULT_2_DECIMAL_m2_SHIFT))
#endif


/* CLIPMTX_RESULT_3 */

#define REG_G3X_CLIPMTX_RESULT_3_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_3_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_3_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_3_INTEGER_m3_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_3_INTEGER_m3_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_3_INTEGER_m3_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_3_DECIMAL_m3_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_3_DECIMAL_m3_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_3_DECIMAL_m3_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_3_FIELD( s, integer_m3, decimal_m3 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_3_S_SHIFT) | \
    ((u32)(integer_m3) << REG_G3X_CLIPMTX_RESULT_3_INTEGER_m3_SHIFT) | \
    ((u32)(decimal_m3) << REG_G3X_CLIPMTX_RESULT_3_DECIMAL_m3_SHIFT))
#endif


/* CLIPMTX_RESULT_4 */

#define REG_G3X_CLIPMTX_RESULT_4_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_4_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_4_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_4_INTEGER_m4_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_4_INTEGER_m4_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_4_INTEGER_m4_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_4_DECIMAL_m4_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_4_DECIMAL_m4_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_4_DECIMAL_m4_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_4_FIELD( s, integer_m4, decimal_m4 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_4_S_SHIFT) | \
    ((u32)(integer_m4) << REG_G3X_CLIPMTX_RESULT_4_INTEGER_m4_SHIFT) | \
    ((u32)(decimal_m4) << REG_G3X_CLIPMTX_RESULT_4_DECIMAL_m4_SHIFT))
#endif


/* CLIPMTX_RESULT_5 */

#define REG_G3X_CLIPMTX_RESULT_5_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_5_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_5_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_5_INTEGER_m5_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_5_INTEGER_m5_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_5_INTEGER_m5_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_5_DECIMAL_m5_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_5_DECIMAL_m5_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_5_DECIMAL_m5_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_5_FIELD( s, integer_m5, decimal_m5 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_5_S_SHIFT) | \
    ((u32)(integer_m5) << REG_G3X_CLIPMTX_RESULT_5_INTEGER_m5_SHIFT) | \
    ((u32)(decimal_m5) << REG_G3X_CLIPMTX_RESULT_5_DECIMAL_m5_SHIFT))
#endif


/* CLIPMTX_RESULT_6 */

#define REG_G3X_CLIPMTX_RESULT_6_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_6_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_6_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_6_INTEGER_m6_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_6_INTEGER_m6_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_6_INTEGER_m6_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_6_DECIMAL_m6_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_6_DECIMAL_m6_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_6_DECIMAL_m6_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_6_FIELD( s, integer_m6, decimal_m6 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_6_S_SHIFT) | \
    ((u32)(integer_m6) << REG_G3X_CLIPMTX_RESULT_6_INTEGER_m6_SHIFT) | \
    ((u32)(decimal_m6) << REG_G3X_CLIPMTX_RESULT_6_DECIMAL_m6_SHIFT))
#endif


/* CLIPMTX_RESULT_7 */

#define REG_G3X_CLIPMTX_RESULT_7_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_7_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_7_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_7_INTEGER_m7_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_7_INTEGER_m7_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_7_INTEGER_m7_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_7_DECIMAL_m7_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_7_DECIMAL_m7_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_7_DECIMAL_m7_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_7_FIELD( s, integer_m7, decimal_m7 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_7_S_SHIFT) | \
    ((u32)(integer_m7) << REG_G3X_CLIPMTX_RESULT_7_INTEGER_m7_SHIFT) | \
    ((u32)(decimal_m7) << REG_G3X_CLIPMTX_RESULT_7_DECIMAL_m7_SHIFT))
#endif


/* CLIPMTX_RESULT_8 */

#define REG_G3X_CLIPMTX_RESULT_8_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_8_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_8_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_8_INTEGER_m8_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_8_INTEGER_m8_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_8_INTEGER_m8_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_8_DECIMAL_m8_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_8_DECIMAL_m8_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_8_DECIMAL_m8_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_8_FIELD( s, integer_m8, decimal_m8 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_8_S_SHIFT) | \
    ((u32)(integer_m8) << REG_G3X_CLIPMTX_RESULT_8_INTEGER_m8_SHIFT) | \
    ((u32)(decimal_m8) << REG_G3X_CLIPMTX_RESULT_8_DECIMAL_m8_SHIFT))
#endif


/* CLIPMTX_RESULT_9 */

#define REG_G3X_CLIPMTX_RESULT_9_S_SHIFT                   31
#define REG_G3X_CLIPMTX_RESULT_9_S_SIZE                    1
#define REG_G3X_CLIPMTX_RESULT_9_S_MASK                    0x80000000

#define REG_G3X_CLIPMTX_RESULT_9_INTEGER_m9_SHIFT          12
#define REG_G3X_CLIPMTX_RESULT_9_INTEGER_m9_SIZE           19
#define REG_G3X_CLIPMTX_RESULT_9_INTEGER_m9_MASK           0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_9_DECIMAL_m9_SHIFT          0
#define REG_G3X_CLIPMTX_RESULT_9_DECIMAL_m9_SIZE           12
#define REG_G3X_CLIPMTX_RESULT_9_DECIMAL_m9_MASK           0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_9_FIELD( s, integer_m9, decimal_m9 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_9_S_SHIFT) | \
    ((u32)(integer_m9) << REG_G3X_CLIPMTX_RESULT_9_INTEGER_m9_SHIFT) | \
    ((u32)(decimal_m9) << REG_G3X_CLIPMTX_RESULT_9_DECIMAL_m9_SHIFT))
#endif


/* CLIPMTX_RESULT_10 */

#define REG_G3X_CLIPMTX_RESULT_10_S_SHIFT                  31
#define REG_G3X_CLIPMTX_RESULT_10_S_SIZE                   1
#define REG_G3X_CLIPMTX_RESULT_10_S_MASK                   0x80000000

#define REG_G3X_CLIPMTX_RESULT_10_INTEGER_m10_SHIFT        12
#define REG_G3X_CLIPMTX_RESULT_10_INTEGER_m10_SIZE         19
#define REG_G3X_CLIPMTX_RESULT_10_INTEGER_m10_MASK         0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_10_DECIMAL_m10_SHIFT        0
#define REG_G3X_CLIPMTX_RESULT_10_DECIMAL_m10_SIZE         12
#define REG_G3X_CLIPMTX_RESULT_10_DECIMAL_m10_MASK         0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_10_FIELD( s, integer_m10, decimal_m10 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_10_S_SHIFT) | \
    ((u32)(integer_m10) << REG_G3X_CLIPMTX_RESULT_10_INTEGER_m10_SHIFT) | \
    ((u32)(decimal_m10) << REG_G3X_CLIPMTX_RESULT_10_DECIMAL_m10_SHIFT))
#endif


/* CLIPMTX_RESULT_11 */

#define REG_G3X_CLIPMTX_RESULT_11_S_SHIFT                  31
#define REG_G3X_CLIPMTX_RESULT_11_S_SIZE                   1
#define REG_G3X_CLIPMTX_RESULT_11_S_MASK                   0x80000000

#define REG_G3X_CLIPMTX_RESULT_11_INTEGER_m11_SHIFT        12
#define REG_G3X_CLIPMTX_RESULT_11_INTEGER_m11_SIZE         19
#define REG_G3X_CLIPMTX_RESULT_11_INTEGER_m11_MASK         0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_11_DECIMAL_m11_SHIFT        0
#define REG_G3X_CLIPMTX_RESULT_11_DECIMAL_m11_SIZE         12
#define REG_G3X_CLIPMTX_RESULT_11_DECIMAL_m11_MASK         0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_11_FIELD( s, integer_m11, decimal_m11 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_11_S_SHIFT) | \
    ((u32)(integer_m11) << REG_G3X_CLIPMTX_RESULT_11_INTEGER_m11_SHIFT) | \
    ((u32)(decimal_m11) << REG_G3X_CLIPMTX_RESULT_11_DECIMAL_m11_SHIFT))
#endif


/* CLIPMTX_RESULT_12 */

#define REG_G3X_CLIPMTX_RESULT_12_S_SHIFT                  31
#define REG_G3X_CLIPMTX_RESULT_12_S_SIZE                   1
#define REG_G3X_CLIPMTX_RESULT_12_S_MASK                   0x80000000

#define REG_G3X_CLIPMTX_RESULT_12_INTEGER_m12_SHIFT        12
#define REG_G3X_CLIPMTX_RESULT_12_INTEGER_m12_SIZE         19
#define REG_G3X_CLIPMTX_RESULT_12_INTEGER_m12_MASK         0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_12_DECIMAL_m12_SHIFT        0
#define REG_G3X_CLIPMTX_RESULT_12_DECIMAL_m12_SIZE         12
#define REG_G3X_CLIPMTX_RESULT_12_DECIMAL_m12_MASK         0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_12_FIELD( s, integer_m12, decimal_m12 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_12_S_SHIFT) | \
    ((u32)(integer_m12) << REG_G3X_CLIPMTX_RESULT_12_INTEGER_m12_SHIFT) | \
    ((u32)(decimal_m12) << REG_G3X_CLIPMTX_RESULT_12_DECIMAL_m12_SHIFT))
#endif


/* CLIPMTX_RESULT_13 */

#define REG_G3X_CLIPMTX_RESULT_13_S_SHIFT                  31
#define REG_G3X_CLIPMTX_RESULT_13_S_SIZE                   1
#define REG_G3X_CLIPMTX_RESULT_13_S_MASK                   0x80000000

#define REG_G3X_CLIPMTX_RESULT_13_INTEGER_m13_SHIFT        12
#define REG_G3X_CLIPMTX_RESULT_13_INTEGER_m13_SIZE         19
#define REG_G3X_CLIPMTX_RESULT_13_INTEGER_m13_MASK         0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_13_DECIMAL_m13_SHIFT        0
#define REG_G3X_CLIPMTX_RESULT_13_DECIMAL_m13_SIZE         12
#define REG_G3X_CLIPMTX_RESULT_13_DECIMAL_m13_MASK         0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_13_FIELD( s, integer_m13, decimal_m13 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_13_S_SHIFT) | \
    ((u32)(integer_m13) << REG_G3X_CLIPMTX_RESULT_13_INTEGER_m13_SHIFT) | \
    ((u32)(decimal_m13) << REG_G3X_CLIPMTX_RESULT_13_DECIMAL_m13_SHIFT))
#endif


/* CLIPMTX_RESULT_14 */

#define REG_G3X_CLIPMTX_RESULT_14_S_SHIFT                  31
#define REG_G3X_CLIPMTX_RESULT_14_S_SIZE                   1
#define REG_G3X_CLIPMTX_RESULT_14_S_MASK                   0x80000000

#define REG_G3X_CLIPMTX_RESULT_14_INTEGER_m14_SHIFT        12
#define REG_G3X_CLIPMTX_RESULT_14_INTEGER_m14_SIZE         19
#define REG_G3X_CLIPMTX_RESULT_14_INTEGER_m14_MASK         0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_14_DECIMAL_m14_SHIFT        0
#define REG_G3X_CLIPMTX_RESULT_14_DECIMAL_m14_SIZE         12
#define REG_G3X_CLIPMTX_RESULT_14_DECIMAL_m14_MASK         0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_14_FIELD( s, integer_m14, decimal_m14 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_14_S_SHIFT) | \
    ((u32)(integer_m14) << REG_G3X_CLIPMTX_RESULT_14_INTEGER_m14_SHIFT) | \
    ((u32)(decimal_m14) << REG_G3X_CLIPMTX_RESULT_14_DECIMAL_m14_SHIFT))
#endif


/* CLIPMTX_RESULT_15 */

#define REG_G3X_CLIPMTX_RESULT_15_S_SHIFT                  31
#define REG_G3X_CLIPMTX_RESULT_15_S_SIZE                   1
#define REG_G3X_CLIPMTX_RESULT_15_S_MASK                   0x80000000

#define REG_G3X_CLIPMTX_RESULT_15_INTEGER_m15_SHIFT        12
#define REG_G3X_CLIPMTX_RESULT_15_INTEGER_m15_SIZE         19
#define REG_G3X_CLIPMTX_RESULT_15_INTEGER_m15_MASK         0x7ffff000

#define REG_G3X_CLIPMTX_RESULT_15_DECIMAL_m15_SHIFT        0
#define REG_G3X_CLIPMTX_RESULT_15_DECIMAL_m15_SIZE         12
#define REG_G3X_CLIPMTX_RESULT_15_DECIMAL_m15_MASK         0x00000fff

#ifndef SDK_ASM
#define REG_G3X_CLIPMTX_RESULT_15_FIELD( s, integer_m15, decimal_m15 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_CLIPMTX_RESULT_15_S_SHIFT) | \
    ((u32)(integer_m15) << REG_G3X_CLIPMTX_RESULT_15_INTEGER_m15_SHIFT) | \
    ((u32)(decimal_m15) << REG_G3X_CLIPMTX_RESULT_15_DECIMAL_m15_SHIFT))
#endif


/* VECMTX_RESULT_0 */

#define REG_G3X_VECMTX_RESULT_0_S_SHIFT                    31
#define REG_G3X_VECMTX_RESULT_0_S_SIZE                     1
#define REG_G3X_VECMTX_RESULT_0_S_MASK                     0x80000000

#define REG_G3X_VECMTX_RESULT_0_INTEGER_m0_SHIFT           12
#define REG_G3X_VECMTX_RESULT_0_INTEGER_m0_SIZE            19
#define REG_G3X_VECMTX_RESULT_0_INTEGER_m0_MASK            0x7ffff000

#define REG_G3X_VECMTX_RESULT_0_DECIMAL_m0_SHIFT           0
#define REG_G3X_VECMTX_RESULT_0_DECIMAL_m0_SIZE            12
#define REG_G3X_VECMTX_RESULT_0_DECIMAL_m0_MASK            0x00000fff

#ifndef SDK_ASM
#define REG_G3X_VECMTX_RESULT_0_FIELD( s, integer_m0, decimal_m0 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_VECMTX_RESULT_0_S_SHIFT) | \
    ((u32)(integer_m0) << REG_G3X_VECMTX_RESULT_0_INTEGER_m0_SHIFT) | \
    ((u32)(decimal_m0) << REG_G3X_VECMTX_RESULT_0_DECIMAL_m0_SHIFT))
#endif


/* VECMTX_RESULT_1 */

#define REG_G3X_VECMTX_RESULT_1_S_SHIFT                    31
#define REG_G3X_VECMTX_RESULT_1_S_SIZE                     1
#define REG_G3X_VECMTX_RESULT_1_S_MASK                     0x80000000

#define REG_G3X_VECMTX_RESULT_1_INTEGER_m1_SHIFT           12
#define REG_G3X_VECMTX_RESULT_1_INTEGER_m1_SIZE            19
#define REG_G3X_VECMTX_RESULT_1_INTEGER_m1_MASK            0x7ffff000

#define REG_G3X_VECMTX_RESULT_1_DECIMAL_m1_SHIFT           0
#define REG_G3X_VECMTX_RESULT_1_DECIMAL_m1_SIZE            12
#define REG_G3X_VECMTX_RESULT_1_DECIMAL_m1_MASK            0x00000fff

#ifndef SDK_ASM
#define REG_G3X_VECMTX_RESULT_1_FIELD( s, integer_m1, decimal_m1 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_VECMTX_RESULT_1_S_SHIFT) | \
    ((u32)(integer_m1) << REG_G3X_VECMTX_RESULT_1_INTEGER_m1_SHIFT) | \
    ((u32)(decimal_m1) << REG_G3X_VECMTX_RESULT_1_DECIMAL_m1_SHIFT))
#endif


/* VECMTX_RESULT_2 */

#define REG_G3X_VECMTX_RESULT_2_S_SHIFT                    31
#define REG_G3X_VECMTX_RESULT_2_S_SIZE                     1
#define REG_G3X_VECMTX_RESULT_2_S_MASK                     0x80000000

#define REG_G3X_VECMTX_RESULT_2_INTEGER_m2_SHIFT           12
#define REG_G3X_VECMTX_RESULT_2_INTEGER_m2_SIZE            19
#define REG_G3X_VECMTX_RESULT_2_INTEGER_m2_MASK            0x7ffff000

#define REG_G3X_VECMTX_RESULT_2_DECIMAL_m2_SHIFT           0
#define REG_G3X_VECMTX_RESULT_2_DECIMAL_m2_SIZE            12
#define REG_G3X_VECMTX_RESULT_2_DECIMAL_m2_MASK            0x00000fff

#ifndef SDK_ASM
#define REG_G3X_VECMTX_RESULT_2_FIELD( s, integer_m2, decimal_m2 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_VECMTX_RESULT_2_S_SHIFT) | \
    ((u32)(integer_m2) << REG_G3X_VECMTX_RESULT_2_INTEGER_m2_SHIFT) | \
    ((u32)(decimal_m2) << REG_G3X_VECMTX_RESULT_2_DECIMAL_m2_SHIFT))
#endif


/* VECMTX_RESULT_3 */

#define REG_G3X_VECMTX_RESULT_3_S_SHIFT                    31
#define REG_G3X_VECMTX_RESULT_3_S_SIZE                     1
#define REG_G3X_VECMTX_RESULT_3_S_MASK                     0x80000000

#define REG_G3X_VECMTX_RESULT_3_INTEGER_m3_SHIFT           12
#define REG_G3X_VECMTX_RESULT_3_INTEGER_m3_SIZE            19
#define REG_G3X_VECMTX_RESULT_3_INTEGER_m3_MASK            0x7ffff000

#define REG_G3X_VECMTX_RESULT_3_DECIMAL_m3_SHIFT           0
#define REG_G3X_VECMTX_RESULT_3_DECIMAL_m3_SIZE            12
#define REG_G3X_VECMTX_RESULT_3_DECIMAL_m3_MASK            0x00000fff

#ifndef SDK_ASM
#define REG_G3X_VECMTX_RESULT_3_FIELD( s, integer_m3, decimal_m3 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_VECMTX_RESULT_3_S_SHIFT) | \
    ((u32)(integer_m3) << REG_G3X_VECMTX_RESULT_3_INTEGER_m3_SHIFT) | \
    ((u32)(decimal_m3) << REG_G3X_VECMTX_RESULT_3_DECIMAL_m3_SHIFT))
#endif


/* VECMTX_RESULT_4 */

#define REG_G3X_VECMTX_RESULT_4_S_SHIFT                    31
#define REG_G3X_VECMTX_RESULT_4_S_SIZE                     1
#define REG_G3X_VECMTX_RESULT_4_S_MASK                     0x80000000

#define REG_G3X_VECMTX_RESULT_4_INTEGER_m4_SHIFT           12
#define REG_G3X_VECMTX_RESULT_4_INTEGER_m4_SIZE            19
#define REG_G3X_VECMTX_RESULT_4_INTEGER_m4_MASK            0x7ffff000

#define REG_G3X_VECMTX_RESULT_4_DECIMAL_m4_SHIFT           0
#define REG_G3X_VECMTX_RESULT_4_DECIMAL_m4_SIZE            12
#define REG_G3X_VECMTX_RESULT_4_DECIMAL_m4_MASK            0x00000fff

#ifndef SDK_ASM
#define REG_G3X_VECMTX_RESULT_4_FIELD( s, integer_m4, decimal_m4 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_VECMTX_RESULT_4_S_SHIFT) | \
    ((u32)(integer_m4) << REG_G3X_VECMTX_RESULT_4_INTEGER_m4_SHIFT) | \
    ((u32)(decimal_m4) << REG_G3X_VECMTX_RESULT_4_DECIMAL_m4_SHIFT))
#endif


/* VECMTX_RESULT_5 */

#define REG_G3X_VECMTX_RESULT_5_S_SHIFT                    31
#define REG_G3X_VECMTX_RESULT_5_S_SIZE                     1
#define REG_G3X_VECMTX_RESULT_5_S_MASK                     0x80000000

#define REG_G3X_VECMTX_RESULT_5_INTEGER_m5_SHIFT           12
#define REG_G3X_VECMTX_RESULT_5_INTEGER_m5_SIZE            19
#define REG_G3X_VECMTX_RESULT_5_INTEGER_m5_MASK            0x7ffff000

#define REG_G3X_VECMTX_RESULT_5_DECIMAL_m5_SHIFT           0
#define REG_G3X_VECMTX_RESULT_5_DECIMAL_m5_SIZE            12
#define REG_G3X_VECMTX_RESULT_5_DECIMAL_m5_MASK            0x00000fff

#ifndef SDK_ASM
#define REG_G3X_VECMTX_RESULT_5_FIELD( s, integer_m5, decimal_m5 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_VECMTX_RESULT_5_S_SHIFT) | \
    ((u32)(integer_m5) << REG_G3X_VECMTX_RESULT_5_INTEGER_m5_SHIFT) | \
    ((u32)(decimal_m5) << REG_G3X_VECMTX_RESULT_5_DECIMAL_m5_SHIFT))
#endif


/* VECMTX_RESULT_6 */

#define REG_G3X_VECMTX_RESULT_6_S_SHIFT                    31
#define REG_G3X_VECMTX_RESULT_6_S_SIZE                     1
#define REG_G3X_VECMTX_RESULT_6_S_MASK                     0x80000000

#define REG_G3X_VECMTX_RESULT_6_INTEGER_m6_SHIFT           12
#define REG_G3X_VECMTX_RESULT_6_INTEGER_m6_SIZE            19
#define REG_G3X_VECMTX_RESULT_6_INTEGER_m6_MASK            0x7ffff000

#define REG_G3X_VECMTX_RESULT_6_DECIMAL_m6_SHIFT           0
#define REG_G3X_VECMTX_RESULT_6_DECIMAL_m6_SIZE            12
#define REG_G3X_VECMTX_RESULT_6_DECIMAL_m6_MASK            0x00000fff

#ifndef SDK_ASM
#define REG_G3X_VECMTX_RESULT_6_FIELD( s, integer_m6, decimal_m6 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_VECMTX_RESULT_6_S_SHIFT) | \
    ((u32)(integer_m6) << REG_G3X_VECMTX_RESULT_6_INTEGER_m6_SHIFT) | \
    ((u32)(decimal_m6) << REG_G3X_VECMTX_RESULT_6_DECIMAL_m6_SHIFT))
#endif


/* VECMTX_RESULT_7 */

#define REG_G3X_VECMTX_RESULT_7_S_SHIFT                    31
#define REG_G3X_VECMTX_RESULT_7_S_SIZE                     1
#define REG_G3X_VECMTX_RESULT_7_S_MASK                     0x80000000

#define REG_G3X_VECMTX_RESULT_7_INTEGER_m7_SHIFT           12
#define REG_G3X_VECMTX_RESULT_7_INTEGER_m7_SIZE            19
#define REG_G3X_VECMTX_RESULT_7_INTEGER_m7_MASK            0x7ffff000

#define REG_G3X_VECMTX_RESULT_7_DECIMAL_m7_SHIFT           0
#define REG_G3X_VECMTX_RESULT_7_DECIMAL_m7_SIZE            12
#define REG_G3X_VECMTX_RESULT_7_DECIMAL_m7_MASK            0x00000fff

#ifndef SDK_ASM
#define REG_G3X_VECMTX_RESULT_7_FIELD( s, integer_m7, decimal_m7 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_VECMTX_RESULT_7_S_SHIFT) | \
    ((u32)(integer_m7) << REG_G3X_VECMTX_RESULT_7_INTEGER_m7_SHIFT) | \
    ((u32)(decimal_m7) << REG_G3X_VECMTX_RESULT_7_DECIMAL_m7_SHIFT))
#endif


/* VECMTX_RESULT_8 */

#define REG_G3X_VECMTX_RESULT_8_S_SHIFT                    31
#define REG_G3X_VECMTX_RESULT_8_S_SIZE                     1
#define REG_G3X_VECMTX_RESULT_8_S_MASK                     0x80000000

#define REG_G3X_VECMTX_RESULT_8_INTEGER_m8_SHIFT           12
#define REG_G3X_VECMTX_RESULT_8_INTEGER_m8_SIZE            19
#define REG_G3X_VECMTX_RESULT_8_INTEGER_m8_MASK            0x7ffff000

#define REG_G3X_VECMTX_RESULT_8_DECIMAL_m8_SHIFT           0
#define REG_G3X_VECMTX_RESULT_8_DECIMAL_m8_SIZE            12
#define REG_G3X_VECMTX_RESULT_8_DECIMAL_m8_MASK            0x00000fff

#ifndef SDK_ASM
#define REG_G3X_VECMTX_RESULT_8_FIELD( s, integer_m8, decimal_m8 ) \
    (u32)( \
    ((u32)(s) << REG_G3X_VECMTX_RESULT_8_S_SHIFT) | \
    ((u32)(integer_m8) << REG_G3X_VECMTX_RESULT_8_INTEGER_m8_SHIFT) | \
    ((u32)(decimal_m8) << REG_G3X_VECMTX_RESULT_8_DECIMAL_m8_SHIFT))
#endif


#ifdef __cplusplus
} /* extern "C" */
#endif

/* NITRO_HW_ARM9_IOREG_G3X_H_ */
#endif
