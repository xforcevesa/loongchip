// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024root.h"

extern const VlUnpacked<CData/*3:0*/, 64> Vsimu_top__ConstPool__TABLE_hb2209b71_0;

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__1(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffdffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x20000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x11U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0xcU)
                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0x16U)) << 0x11U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffbffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x40000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x12U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0xcU)
                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0x16U)) << 0x12U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfff7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x80000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x13U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0xcU)
                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0x16U)) << 0x13U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffefffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x100000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x14U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xcU)
                                 : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x16U)) << 0x14U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffdfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x200000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x15U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xcU)
                                 : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x16U)) << 0x15U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffbfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x400000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x16U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xcU)
                                 : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x16U)) << 0x16U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xff7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x800000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x17U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xcU)
                                 : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x16U)) << 0x17U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfeffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x1000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x18U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xcU)
                                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                     >> 0x16U)) << 0x18U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfdffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x2000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x19U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xcU)
                                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                     >> 0x16U)) << 0x19U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfbffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x4000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x1aU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xcU)
                                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                     >> 0x16U)) << 0x1aU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xf7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x8000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x1bU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xcU)
                                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                     >> 0x16U)) << 0x1bU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xefffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x10000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1cU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0xcU)
                                   : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0x16U)) << 0x1cU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xdfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x20000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1dU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0xcU)
                                   : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0x16U)) << 0x1dU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xbfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x40000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1eU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0xcU)
                                   : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0x16U)) << 0x1eU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                    [0x1fU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0x16U)) 
                  << 0x1fU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                   [0U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                            [0U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xdU) == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                     [0U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0x17U) 
                                              == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0U] 
                                                     >> 0xaU))))) 
                  & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                      == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                      [0U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                     [0U])));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffffdU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [1U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [1U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [1U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [1U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [1U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [1U])) << 1U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffffbU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [2U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [2U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [2U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [2U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [2U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [2U])) << 2U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffff7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [3U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [3U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [3U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [3U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [3U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [3U])) << 3U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffffefU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [4U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [4U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [4U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [4U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [4U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [4U])) << 4U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffffdfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [5U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [5U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [5U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [5U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [5U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [5U])) << 5U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffffbfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [6U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [6U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [6U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [6U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [6U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [6U])) << 6U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffff7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [7U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [7U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [7U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [7U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [7U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [7U])) << 7U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffeffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [8U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [8U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [8U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [8U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [8U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [8U])) << 8U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffdffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [9U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [9U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [9U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [9U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [9U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [9U])) << 9U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffbffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xaU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xaU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xaU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xaU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xaU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xaU])) << 0xaU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffff7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xbU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xbU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xbU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xbU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xbU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xbU])) << 0xbU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffefffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xcU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xcU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xcU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xcU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xcU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xcU])) << 0xcU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffdfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xdU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xdU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xdU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xdU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xdU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xdU])) << 0xdU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffbfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xeU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xeU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xeU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xeU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xeU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xeU])) << 0xeU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffff7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xfU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xfU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xfU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xfU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xfU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xfU])) << 0xfU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffeffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x10U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x10U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x10U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x10U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x10U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x10U])) << 0x10U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffdffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x11U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x11U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x11U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x11U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x11U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x11U])) << 0x11U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffbffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x12U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x12U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x12U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x12U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x12U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x12U])) << 0x12U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfff7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x13U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x13U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x13U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x13U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x13U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x13U])) << 0x13U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffefffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x14U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x14U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x14U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x14U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x14U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x14U])) << 0x14U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffdfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x15U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x15U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x15U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x15U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x15U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x15U])) << 0x15U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffbfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x16U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x16U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x16U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x16U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x16U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x16U])) << 0x16U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xff7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x17U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x17U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x17U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x17U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x17U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x17U])) << 0x17U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfeffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x18U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x18U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x18U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x18U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x18U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x18U])) << 0x18U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfdffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x19U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x19U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x19U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x19U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x19U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x19U])) << 0x19U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfbffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1aU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1aU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1aU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1aU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1aU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1aU])) << 0x1aU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xf7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1bU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1bU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1bU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1bU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1bU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1bU])) << 0x1bU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xefffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1cU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1cU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1cU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1cU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1cU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1cU])) << 0x1cU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xdfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1dU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1dU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1dU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1dU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1dU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1dU])) << 0x1dU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xbfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1eU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1eU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1eU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1eU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1eU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1eU])) << 0x1eU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1fU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1fU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1fU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1fU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1fU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1fU])) << 0x1fU));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                   [0U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                            [0U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0xdU) == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                     [0U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0x17U) 
                                              == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0U] 
                                                     >> 0xaU))))) 
                  & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                      == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                      [0U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                     [0U])));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffffdU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [1U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [1U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [1U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [1U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [1U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [1U])) << 1U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffffbU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [2U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [2U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [2U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [2U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [2U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [2U])) << 2U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffff7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [3U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [3U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [3U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [3U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [3U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [3U])) << 3U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffffefU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [4U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [4U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [4U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [4U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [4U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [4U])) << 4U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffffdfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [5U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [5U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [5U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [5U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [5U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [5U])) << 5U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffffbfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [6U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [6U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [6U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [6U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [6U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [6U])) << 6U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffff7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [7U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [7U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [7U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [7U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [7U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [7U])) << 7U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffeffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [8U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [8U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [8U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [8U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [8U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [8U])) << 8U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffdffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [9U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [9U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xdU) == 
                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [9U]) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0x17U) 
                                               == (0x1ffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [9U] 
                                                      >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [9U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [9U])) << 9U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffbffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xaU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xaU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xaU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xaU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xaU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xaU])) << 0xaU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffff7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xbU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xbU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xbU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xbU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xbU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xbU])) << 0xbU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffefffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xcU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xcU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xcU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xcU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xcU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xcU])) << 0xcU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffdfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xdU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xdU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xdU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xdU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xdU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xdU])) << 0xdU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffbfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xeU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xeU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xeU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xeU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xeU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xeU])) << 0xeU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffff7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xfU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xfU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                           >> 0xdU) 
                                          == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xfU]) : 
                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                >> 0x17U) == (0x1ffU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0xfU] 
                                                 >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xfU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xfU])) << 0xfU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffeffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x10U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x10U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x10U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x10U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x10U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x10U])) << 0x10U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffdffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x11U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x11U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x11U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x11U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x11U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x11U])) << 0x11U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffbffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x12U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x12U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x12U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x12U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x12U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x12U])) << 0x12U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfff7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x13U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x13U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x13U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x13U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x13U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x13U])) << 0x13U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffefffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x14U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x14U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x14U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x14U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x14U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x14U])) << 0x14U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffdfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x15U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x15U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x15U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x15U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x15U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x15U])) << 0x15U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffbfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x16U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x16U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x16U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x16U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x16U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x16U])) << 0x16U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xff7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x17U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x17U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x17U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x17U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x17U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x17U])) << 0x17U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfeffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x18U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x18U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x18U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x18U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x18U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x18U])) << 0x18U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfdffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x19U] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x19U]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x19U])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x19U] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x19U]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x19U])) << 0x19U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfbffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1aU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1aU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1aU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1aU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1aU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1aU])) << 0x1aU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xf7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1bU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1bU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1bU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1bU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1bU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1bU])) << 0x1bU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xefffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1cU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1cU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1cU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1cU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1cU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1cU])) << 0x1cU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xdfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1dU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1dU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1dU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1dU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1dU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1dU])) << 0x1dU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xbfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1eU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1eU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1eU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1eU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1eU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1eU])) << 0x1eU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1fU] & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1fU]) ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xdU) 
                                            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1fU])
                                : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x17U) == (0x1ffU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0x1fU] 
                                                     >> 0xaU))))) 
                   & (((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1fU]) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1fU])) << 0x1fU));
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg 
                = ((0x8000U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                    ? ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                        ? ((0x2000U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                            ? ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                ? ((0x800U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                    ? ((0x400U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                        ? ((0x200U 
                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                            ? ((0x100U 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                ? (
                                                   (0x80U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor)))))))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace)))))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag)))))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data)))))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu))))))))
                                                : 0U)
                                            : 0U) : 0U)
                                    : ((0x400U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                        ? 0U : ((0x200U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                 ? 0U
                                                 : 
                                                ((0x100U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                   ? 
                                                  ((0x40U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((0x8000U 
                                                           & ((IData)(vlSelf->__SYM__switch) 
                                                              << 8U)) 
                                                          | ((0x2000U 
                                                              & ((IData)(vlSelf->__SYM__switch) 
                                                                 << 7U)) 
                                                             | ((0x800U 
                                                                 & ((IData)(vlSelf->__SYM__switch) 
                                                                    << 6U)) 
                                                                | ((0x200U 
                                                                    & ((IData)(vlSelf->__SYM__switch) 
                                                                       << 5U)) 
                                                                   | ((0x80U 
                                                                       & ((IData)(vlSelf->__SYM__switch) 
                                                                          << 4U)) 
                                                                      | ((0x20U 
                                                                          & ((IData)(vlSelf->__SYM__switch) 
                                                                             << 3U)) 
                                                                         | ((8U 
                                                                             & ((IData)(vlSelf->__SYM__switch) 
                                                                                << 2U)) 
                                                                            | (2U 
                                                                               & ((IData)(vlSelf->__SYM__switch) 
                                                                                << 1U)))))))))))))
                                                      : 
                                                     ((8U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)))))))))))
                                                   : 
                                                  ((0x40U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r)))))
                                                      : 
                                                     ((8U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : (IData)(vlSelf->__SYM__switch))))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data))))
                                                      : 
                                                     ((8U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data))))))
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data))))
                                                      : 
                                                     ((8U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data)))))
                                                     : 0U)))))))
                                : ((0x800U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                    ? 0U : ((0x400U 
                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                             ? 0U : 
                                            ((0x200U 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                              ? 0U : 
                                             ((0x100U 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                               ? 0U
                                               : ((0x80U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2)))))))))))))
                            : 0U) : ((0x2000U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                      ? 0U : ((0x1000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                               ? 0U
                                               : ((0x800U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                   ? 0U
                                                   : 
                                                  ((0x400U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 0U
                                                     : 
                                                    ((0x100U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((0x80U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 
                                                       ((0x20U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 
                                                        ((0x10U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7))))
                                                          : 
                                                         ((8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6)))))
                                                         : 
                                                        ((0x10U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5))))
                                                          : 
                                                         ((8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4))))))
                                                        : 
                                                       ((0x20U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 
                                                        ((0x10U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3))))
                                                          : 
                                                         ((8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2)))))
                                                         : 
                                                        ((0x10U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1))))
                                                          : 
                                                         ((8U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0)))))))))))))))
                    : 0U);
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals 
            = (0xbU | (4U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI)) 
                             << 2U)));
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = 0U;
        } else if ((1U & (((~ ((IData)(vlSelf->btn_step) 
                               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                          | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                             & ((IData)(vlSelf->btn_step) 
                                >> 1U))))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = 1U;
        }
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = 0U;
        } else if ((1U & (((~ (IData)(vlSelf->btn_step)) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                          | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                             & (IData)(vlSelf->btn_step))))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = 1U;
        }
        if ((IData)(((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                      >> 0x13U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                                   >> 3U)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = 0U;
        } else if ((((~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))) 
                     & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) 
                    | ((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                       & (0xfU == (IData)(vlSelf->btn_key_row))))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = 0U;
        } else if ((2U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0x10U > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)));
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
                    = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count) 
                                - (IData)(1U)));
            }
        } else if ((3U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1U] = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17] = 0U;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1U] = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0] = 4U;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1] = 4U;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[1U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v1;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[2U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v2;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[3U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v3;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v4) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[4U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v4;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v5) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[5U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v5;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v6) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[6U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v6;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v7) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[7U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v7;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v8) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[8U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v8;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v9) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[9U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v9;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v10) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0xaU] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v10;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v11) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0xbU] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v11;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v12) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0xcU] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v12;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v13) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0xdU] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v13;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v14) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0xeU] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v14;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v15) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0xfU] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v15;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v16) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0x10U] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v16;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2))));
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3))));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid = vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid = vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                       >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->__VdfgTmp_hcd04e225__0));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                       >> 1U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
    __Vtableidx7 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->aresetn))))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir 
        = Vsimu_top__ConstPool__TABLE_hb2209b71_0[__Vtableidx7];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5ab9ffe__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hff7f7566__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [1U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [1U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hea4a7560__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [2U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [2U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hea661353__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [3U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [3U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hff4ab609__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [4U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [4U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hff55f4d7__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [5U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [5U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf555b084__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [6U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [6U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5190a97__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [7U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [7U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf57bc034__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [8U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [8U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5a73968__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [9U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [9U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heac67075__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0xaU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0xaU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf58c7a13__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0xbU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0xbU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf56a8085__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0xcU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0xcU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5546a46__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0xdU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0xdU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5828441__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0xeU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0xeU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5bfe7da__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0xfU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0xfU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heaf7da66__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x10U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x10U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5469506__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x11U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x11U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf572f26a__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x12U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x12U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf52ed412__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x13U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x13U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf519cfce__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x14U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x14U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5774e35__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x15U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x15U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5a7c8cf__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x16U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x16U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf54157dc__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x17U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x17U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf58cfbf0__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x18U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x18U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heaece7ac__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x19U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x19U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hea92336b__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x1aU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x1aU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heaf640dd__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x1bU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x1bU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5bda0be__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x1cU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x1cU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hea99d98d__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x1dU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x1dU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5867dfe__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x1eU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x1eU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heac677e6__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
            [0x1fU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
           [0x1fU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba43b770__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb80d124__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [1U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [1U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h9490ea1a__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [2U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [2U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h94937df9__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [3U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [3U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h947a1e47__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [4U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [4U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h94643b01__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [5U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [5U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba494c52__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [6U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [6U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9417a89__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [7U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [7U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbbdbe25e__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [8U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [8U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba66cd3e__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [9U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [9U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba5d3b8f__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0xaU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0xaU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba4e4b09__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0xbU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0xbU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9454a5b__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0xcU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0xcU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba7195a8__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0xdU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0xdU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb91ab95b__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0xeU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0xeU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb91efad0__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0xfU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0xfU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb961624__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x10U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x10U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb92d4868__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x11U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x11U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb932af8c__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x12U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x12U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9356f10__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x13U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x13U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9327904__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x14U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x14U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb93ebbff__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x15U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x15U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba7ea521__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x16U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x16U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba7c2e1a__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x17U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x17U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9011c56__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x18U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x18U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb84ff26__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x19U] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x19U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb885d01__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x1aU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x1aU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb94c437__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x1bU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x1bU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba112d30__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x1cU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x1cU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb9e9c23__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x1dU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x1dU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba6de170__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x1eU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x1eU]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba5930a4__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
            [0x1fU] << 2U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
           [0x1fU]);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
            = (0xffffff7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
            = (0xffffff7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
            = (0xffffe000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd 
            = (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
            = (0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
            = (0xffff1fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
            = (0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl 
            = (3U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit = 0U;
    } else {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
             & (0x1200U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                = ((0xffffff80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0) 
                   | (0x7fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                               >> 8U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                = ((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0) 
                   | (0xffffff00U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                      << 0x18U) | (0xffff00U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                      >> 8U)))));
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_valid_wr_en) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                = ((0xffffff80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0) 
                   | (0x7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo0));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                = ((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0) 
                   | (0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo0));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
             & (0x1300U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                = ((0xffffff80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                   | (0x7fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                               >> 8U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                = ((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                   | (0xffffff00U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                      << 0x18U) | (0xffff00U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                      >> 8U)))));
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_valid_wr_en) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                = ((0xffffff80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                   | (0x7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo1));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                = ((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                   | (0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo1));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbehi_wen) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                = ((0x1fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi) 
                   | (0xffffe000U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                      << 0x18U) | (0xffe000U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                      >> 8U)))));
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_valid_wr_en) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                = ((0x1fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi) 
                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                      [(0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                      << 0xdU));
        } else if ((1U & ((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                              >> 0x17U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT____VdfgTmp_h3abe2031__0[0U] 
                                            >> 0x13U)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                = ((0x1fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi) 
                   | (((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                        ? 0U : (0x7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT____VdfgTmp_h3abe2031__0[0U])) 
                      << 0xdU));
        }
        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
              & (0x4400U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U]))) 
             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                >> 8U))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                = (0xfffff7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en 
                = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                         >> 8U));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en) 
                    & (0U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                = (0x800U | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat);
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en 
                = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg 
                         >> 1U));
        }
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
            = ((0xfffff803U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_int) 
                  << 3U));
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd 
                = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd) 
                   | (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                = ((0x8000ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat) 
                   | ((((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                         ? 0U : (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT____VdfgTmp_h3abe2031__0[0U] 
                                           >> 0x15U))) 
                       << 0x16U) | (((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                                      ? 0U : (0x3fU 
                                              & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT____VdfgTmp_h3abe2031__0[2U] 
                                                  << 1U) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT____VdfgTmp_h3abe2031__0[1U] 
                                                    >> 0x1fU)))) 
                                    << 0x10U)));
        } else {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                 & (0x100U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd 
                    = ((0xfffffff8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd) 
                       | (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                >> 8U)));
            }
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                 & (0x500U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                    = ((0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat) 
                       | (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                >> 8U)));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
             & (0x4000U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                    << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                 >> 8U));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush) {
            if ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl)) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl 
                    = (0xfffffffbU & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl);
            } else {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit = 0U;
            }
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                    & (0x6000U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl 
                = ((0xfffffffbU & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                   | (4U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                            >> 8U)));
            if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U])) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit = 0U;
            }
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT____VdfgTmp_h71ee0a69__0) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit 
                = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                         >> 7U));
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1;
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_flush_sign))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid 
            = ((~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin)) 
                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
            = (IData)((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff
                                          : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata))) 
                        << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)
                                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff
                                           : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata))) 
                         << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc))) 
                       >> 0x20U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc 
                << 0xdU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_index) 
                             << 8U) | ((0x80U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT____VdfgTmp_h733b49d8__0) 
                                                 >> 1U)) 
                                       | (((IData)(
                                                   (0U 
                                                    != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd)) 
                                           << 6U) | 
                                          ((((0x10U 
                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                                             & ((~ 
                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en))) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last))) 
                                            << 5U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_excp) 
                                               << 4U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef)))))))))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
            = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc 
               >> 0x13U);
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U] 
            = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__exe_result)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U] 
            = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__exe_result)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))) 
                       >> 0x20U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
            = ((((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
                  ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                     | ((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                            << 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                         >> 2U)))) : 
                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                << 0xfU) | ((0x4000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                        << 0xdU)) | 
                            (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp) 
                              << 0xdU) | ((0x1f80U 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                              >> 0x13U)) 
                                          | ((0x40U 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                 >> 4U)) 
                                             | ((0x20U 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                    >> 1U)) 
                                                | (0x1fU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])))))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
            = ((0xc0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                               << 0xbU)) | ((0x3fff8000U 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                << 0xcU)) 
                                            | (((0x40000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
                                                 ? 
                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                 | ((~ 
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                                    & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                        << 0x1eU) 
                                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                          >> 2U))))
                                                 : 
                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                               >> 0x11U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
            = ((0xf8000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                               << 0xeU)) | ((0x7fe0000U 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                << 0x11U)) 
                                            | ((0x1f800U 
                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                    << 0xdU) 
                                                   | (0x1800U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                         >> 0x13U)))) 
                                               | ((0x400U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                      << 5U)) 
                                                  | ((0x300U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                         >> 0x14U)) 
                                                     | (0x3fffffffU 
                                                        & ((0x3fffff80U 
                                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp_ale) 
                                                               << 7U)) 
                                                           | (0x7fU 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                                 >> 0x15U)))))))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__error_va 
                << 0x17U) | ((0x400000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                           << 0xbU)) 
                             | ((0x200000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                              << 0x10U)) 
                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst) 
                                    << 0x14U) | ((0xf0000U 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                     << 9U)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                                                     << 0xfU) 
                                                    | ((0x4000U 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                           << 0xaU)) 
                                                       | (0x7ffffffU 
                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                             >> 0x12U)))))))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
            = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__error_va 
               >> 9U);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
        = ((0x10000U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U]) << 0x10U)) | 
           ((0x8000U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [1U]) << 0xfU)) | (
                                                   (0x4000U 
                                                    & ((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [2U]) 
                                                       << 0xeU)) 
                                                   | ((0x2000U 
                                                       & ((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [3U]) 
                                                          << 0xdU)) 
                                                      | ((0x1000U 
                                                          & ((IData)(
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                     [4U]) 
                                                             << 0xcU)) 
                                                         | ((0x800U 
                                                             & ((IData)(
                                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                        [5U]) 
                                                                << 0xbU)) 
                                                            | ((0x400U 
                                                                & ((IData)(
                                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                           [6U]) 
                                                                   << 0xaU)) 
                                                               | ((0x200U 
                                                                   & ((IData)(
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                              [7U]) 
                                                                      << 9U)) 
                                                                  | ((0x100U 
                                                                      & ((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [8U]) 
                                                                         << 8U)) 
                                                                     | ((0x80U 
                                                                         & ((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [9U]) 
                                                                            << 7U)) 
                                                                        | ((0x40U 
                                                                            & ((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xaU]) 
                                                                               << 6U)) 
                                                                           | ((0x20U 
                                                                               & ((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xbU]) 
                                                                                << 5U)) 
                                                                              | ((0x10U 
                                                                                & ((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU]) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU]) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU]) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U]))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 1U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 1U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 1U)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 1U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 1U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 1U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 1U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 1U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 1U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 1U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 1U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 1U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 1U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 1U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 1U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 1U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 2U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 2U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 2U)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 2U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 2U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 2U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 2U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 2U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 2U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 2U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 2U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 2U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 2U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 2U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 2U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 2U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 2U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 3U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 3U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 3U)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 3U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 3U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 3U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 3U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 3U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 3U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 3U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 3U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 3U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 3U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 3U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 3U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 3U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 3U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 4U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 4U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 4U)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 4U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 4U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 4U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 4U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 4U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 4U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 4U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 4U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 4U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 4U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 4U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 4U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 4U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 4U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 5U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 5U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 5U)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 5U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 5U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 5U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 5U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 5U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 5U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 5U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 5U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 5U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 5U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 5U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 5U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 5U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 5U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 6U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 6U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 6U)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 6U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 6U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 6U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 6U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 6U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 6U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 6U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 6U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 6U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 6U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 6U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 6U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 6U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 6U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 7U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 7U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 7U)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 7U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 7U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 7U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 7U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 7U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 7U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 7U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 7U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 7U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 7U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 7U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 7U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 7U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 7U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 8U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 8U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 8U)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 8U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 8U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 8U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 8U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 8U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 8U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 8U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 8U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 8U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 8U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 8U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 8U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 8U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 8U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 9U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 9U)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 9U)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 9U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 9U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 9U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 9U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 9U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 9U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 9U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 9U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 9U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 9U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 9U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 9U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 9U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0xaU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0xaU)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 0xaU)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0xaU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0xaU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0xaU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0xaU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0xaU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0xaU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0xaU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0xaU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0xaU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0xaU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0xaU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0xaU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0xaU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0xaU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0xbU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0xbU)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 0xbU)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0xbU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0xbU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0xbU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0xbU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0xbU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0xbU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0xbU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0xbU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0xbU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0xbU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0xbU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0xbU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0xbU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0xcU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0xcU)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 0xcU)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0xcU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0xcU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0xcU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0xcU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0xcU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0xcU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0xcU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0xcU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0xcU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0xcU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0xcU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0xcU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0xcU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0xcU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0xdU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0xdU)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 0xdU)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0xdU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0xdU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0xdU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0xdU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0xdU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0xdU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0xdU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0xdU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0xdU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0xdU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0xdU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0xdU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0xdU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0xdU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0xeU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0xeU)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 0xeU)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0xeU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0xeU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0xeU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0xeU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0xeU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0xeU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0xeU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0xeU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0xeU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0xeU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0xeU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0xeU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0xeU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0xeU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0xfU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0xfU)) << 0xfU)) 
              | ((0x4000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [2U] >> 0xfU)) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0xfU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0xfU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0xfU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0xfU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0xfU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0xfU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0xfU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0xfU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0xfU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0xfU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0xfU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0xfU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0xfU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0xfU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x10U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x10U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x10U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x10U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x10U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x10U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x10U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x10U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x10U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x10U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x10U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x10U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x10U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x10U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x10U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x10U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x10U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x11U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x11U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x11U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x11U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x11U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x11U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x11U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x11U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x11U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x11U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x11U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x11U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x11U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x11U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x11U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x11U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x11U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x12U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x12U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x12U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x12U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x12U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x12U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x12U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x12U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x12U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x12U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x12U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x12U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x12U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x12U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x12U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x12U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x12U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x13U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x13U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x13U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x13U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x13U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x13U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x13U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x13U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x13U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x13U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x13U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x13U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x13U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x13U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x13U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x13U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x13U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x14U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x14U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x14U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x14U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x14U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x14U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x14U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x14U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x14U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x14U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x14U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x14U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x14U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x14U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x14U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x14U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x14U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x15U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x15U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x15U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x15U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x15U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x15U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x15U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x15U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x15U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x15U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x15U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x15U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x15U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x15U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x15U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x15U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x16U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x16U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x16U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x16U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x16U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x16U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x16U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x16U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x16U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x16U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x16U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x16U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x16U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x16U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x16U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x16U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x17U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x17U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x17U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x17U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x17U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x17U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x17U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x17U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x17U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x17U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x17U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x17U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x17U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x17U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x17U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x17U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x17U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x18U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x18U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x18U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x18U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x18U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x18U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x18U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x18U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x18U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x18U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x18U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x18U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x18U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x18U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x18U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x18U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x18U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x19U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x19U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x19U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x19U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x19U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x19U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x19U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x19U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x19U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x19U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x19U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x19U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x19U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x19U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x19U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x19U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x19U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1aU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x1aU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x1aU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x1aU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x1aU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1aU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x1aU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x1aU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x1aU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x1aU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x1aU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x1aU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x1aU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x1aU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x1aU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x1aU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x1aU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1bU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x1bU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x1bU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x1bU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x1bU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1bU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x1bU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x1bU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x1bU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x1bU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x1bU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x1bU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x1bU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x1bU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x1bU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x1bU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x1bU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1cU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x1cU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x1cU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x1cU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x1cU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1cU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x1cU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x1cU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x1cU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x1cU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x1cU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x1cU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x1cU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x1cU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x1cU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x1cU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x1cU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1dU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x1dU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x1dU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x1dU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x1dU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1dU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x1dU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x1dU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x1dU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x1dU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x1dU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x1dU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x1dU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x1dU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x1dU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x1dU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x1dU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1eU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x1eU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x1eU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x1eU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x1eU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1eU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x1eU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x1eU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x1eU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x1eU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x1eU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x1eU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x1eU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x1eU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x1eU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x1eU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1fU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x1fU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x1fU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x1fU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x1fU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1fU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x1fU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x1fU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x1fU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x1fU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x1fU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x1fU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x1fU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x1fU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x1fU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x1fU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x1fU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x20U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x20U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x20U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x20U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x20U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x20U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x20U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x20U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x20U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x20U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x20U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x20U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x20U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x20U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x20U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x20U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x20U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x21U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x21U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x21U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x21U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x21U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x21U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x21U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x21U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x21U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x21U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x21U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x21U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x21U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x21U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x21U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x21U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x21U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x22U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x22U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x22U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x22U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x22U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x22U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x22U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x22U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x22U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x22U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x22U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x22U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x22U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x22U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x22U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x22U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x22U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x23U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x23U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x23U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x23U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x23U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x23U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x23U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x23U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x23U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x23U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x23U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x23U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x23U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x23U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x23U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x23U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x23U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x24U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x24U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x24U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x24U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x24U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x24U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x24U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x24U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x24U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x24U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x24U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x24U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x24U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x24U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x24U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x24U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x24U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x25U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x25U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x25U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x25U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x25U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x25U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x25U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x25U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x25U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x25U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x25U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x25U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x25U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x25U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x25U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x25U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x25U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x26U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x26U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x26U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x26U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x26U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x26U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x26U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x26U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x26U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x26U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x26U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x26U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x26U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x26U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x26U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x26U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x26U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x27U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x27U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x27U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x27U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x27U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x27U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x27U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x27U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x27U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x27U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x27U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x27U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x27U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x27U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x27U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x27U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x27U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x28U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x28U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x28U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x28U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x28U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x28U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x28U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x28U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x28U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x28U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x28U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x28U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x28U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x28U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x28U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x28U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x28U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x29U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x29U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x29U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x29U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x29U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x29U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x29U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x29U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x29U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x29U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x29U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x29U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x29U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x29U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x29U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x29U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2aU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x2aU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x2aU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x2aU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x2aU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2aU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x2aU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x2aU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x2aU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x2aU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x2aU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x2aU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x2aU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x2aU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x2aU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x2aU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x2aU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2bU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x2bU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x2bU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x2bU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x2bU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2bU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x2bU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x2bU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x2bU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x2bU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x2bU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x2bU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x2bU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x2bU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x2bU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x2bU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x2bU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2cU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x2cU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x2cU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x2cU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x2cU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2cU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x2cU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x2cU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x2cU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x2cU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x2cU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x2cU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x2cU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x2cU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x2cU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x2cU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x2cU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2dU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x2dU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x2dU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x2dU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x2dU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2dU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x2dU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x2dU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x2dU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x2dU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x2dU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x2dU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x2dU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x2dU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x2dU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x2dU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x2dU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2eU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x2eU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x2eU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x2eU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x2eU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2eU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x2eU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x2eU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x2eU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x2eU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x2eU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x2eU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x2eU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x2eU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x2eU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x2eU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x2eU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2fU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x2fU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x2fU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x2fU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x2fU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2fU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x2fU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x2fU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x2fU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x2fU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x2fU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x2fU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x2fU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x2fU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x2fU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x2fU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x30U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x30U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x30U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x30U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x30U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x30U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x30U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x30U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x30U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x30U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x30U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x30U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x30U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x30U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x30U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x30U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x30U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x31U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x31U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x31U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x31U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x31U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x31U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x31U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x31U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x31U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x31U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x31U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x31U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x31U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x31U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x31U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x31U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x31U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x32U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x32U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x32U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x32U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x32U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x32U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x32U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x32U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x32U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x32U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x32U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x32U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x32U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x32U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x32U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x32U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x32U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x33U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x33U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x33U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x33U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x33U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x33U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x33U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x33U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x33U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x33U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x33U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x33U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x33U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x33U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x33U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x33U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x33U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x34U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x34U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x34U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x34U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x34U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x34U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x34U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x34U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x34U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x34U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x34U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x34U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x34U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x34U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x34U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x34U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x34U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x35U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x35U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x35U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x35U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x35U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x35U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x35U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x35U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x35U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x35U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x35U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x35U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x35U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x35U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x35U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x35U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x35U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x36U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x36U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x36U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x36U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x36U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x36U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x36U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x36U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x36U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x36U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x36U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x36U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x36U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x36U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x36U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x36U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x36U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x37U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x37U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x37U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x37U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x37U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x37U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x37U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x37U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x37U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x37U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x37U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x37U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x37U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x37U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x37U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x37U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x37U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x38U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x38U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x38U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x38U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x38U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x38U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x38U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x38U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x38U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x38U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x38U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x38U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x38U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x38U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x38U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x38U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x38U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x39U)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x39U)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x39U)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x39U)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x39U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x39U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x39U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x39U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x39U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x39U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x39U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x39U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x39U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x39U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x39U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x39U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x39U)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x3aU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x3aU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x3aU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x3aU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x3aU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x3aU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x3aU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x3aU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x3aU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x3aU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x3aU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x3aU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x3aU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x3aU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x3aU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x3aU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x3aU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x3bU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x3bU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x3bU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x3bU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x3bU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x3bU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x3bU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x3bU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x3bU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x3bU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x3bU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x3bU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x3bU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x3bU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x3bU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x3bU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x3bU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x3cU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x3cU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x3cU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x3cU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x3cU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x3cU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x3cU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x3cU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x3cU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x3cU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x3cU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x3cU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x3cU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x3cU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x3cU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x3cU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x3cU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x3dU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x3dU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x3dU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x3dU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x3dU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x3dU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x3dU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x3dU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x3dU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x3dU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x3dU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x3dU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x3dU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x3dU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x3dU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x3dU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x3dU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x3eU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x3eU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x3eU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x3eU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x3eU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x3eU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x3eU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x3eU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x3eU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x3eU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x3eU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x3eU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x3eU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x3eU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x3eU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x3eU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
        = ((0x10000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x3fU)) << 0x10U)) 
           | ((0x8000U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [1U] >> 0x3fU)) 
                          << 0xfU)) | ((0x4000U & ((IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0x3fU)) 
                                                   << 0xeU)) 
                                       | ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [3U] 
                                                       >> 0x3fU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [4U] 
                                                          >> 0x3fU)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x3fU)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [6U] 
                                                                >> 0x3fU)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                   [7U] 
                                                                   >> 0x3fU)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                      [8U] 
                                                                      >> 0x3fU)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                         [9U] 
                                                                         >> 0x3fU)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                            [0xaU] 
                                                                            >> 0x3fU)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                               [0xbU] 
                                                                               >> 0x3fU)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xcU] 
                                                                                >> 0x3fU)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xdU] 
                                                                                >> 0x3fU)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xeU] 
                                                                                >> 0x3fU)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0xfU] 
                                                                                >> 0x3fU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                                [0x10U] 
                                                                                >> 0x3fU)))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [9U] >> 0x3fU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [0xaU] 
                                                              >> 0x3fU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xbU] 
                                                             >> 0x3fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [9U] >> 0x3fU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xbU] >> 0x3fU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xaU] >> 0x3fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [9U] >> 0x3fU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [0xaU] 
                                                                >> 0x3fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [0xbU] 
                                                                  >> 0x3fU)))) 
                                                   | ((IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xaU] 
                                                               >> 0x3fU)) 
                                                      & (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xbU] 
                                                                 >> 0x3fU))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x3fU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x3fU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x3fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x3fU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x3fU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x3fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x3fU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x3fU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x3fU)))) 
                        | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xdU] >> 0x3fU)) 
                           & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                      [0xeU] >> 0x3fU))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x3fU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x3fU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x3fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x3fU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x3fU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x3fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x3fU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x3fU)))) 
                                                   | ((IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [1U] 
                                                               >> 0x3fU)) 
                                                      & (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [2U] 
                                                                 >> 0x3fU))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x3fU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x3fU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x3fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x3fU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x3fU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x3fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x3fU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x3fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x3fU)))) 
                                                   | ((IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [4U] 
                                                               >> 0x3fU)) 
                                                      & (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [5U] 
                                                                 >> 0x3fU))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__second4__C 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [6U] >> 0x3fU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [7U] 
                                                              >> 0x3fU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [8U] 
                                                             >> 0x3fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [6U] >> 0x3fU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [8U] >> 0x3fU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [7U] >> 0x3fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [6U] >> 0x3fU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [7U] 
                                                                >> 0x3fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [8U] 
                                                                  >> 0x3fU)))) 
                                                   | ((IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [7U] 
                                                               >> 0x3fU)) 
                                                      & (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [8U] 
                                                                 >> 0x3fU))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x3eU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x3eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x3eU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x3eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x3eU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x3eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x3eU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x3eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 0x3eU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xeU] 
                                                       >> 0x3eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x3dU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x3dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x3dU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x3dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x3dU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x3dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x3dU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x3dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 0x3dU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xeU] 
                                                       >> 0x3dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x3cU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x3cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x3cU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x3cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x3cU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x3cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x3bU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x3bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x3aU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x3aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x3cU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x3cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                         [7U]) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                         [8U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 1U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [8U] 
                                                  >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 2U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [8U] 
                                                  >> 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 3U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [8U] 
                                                  >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 4U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [8U] 
                                                  >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 5U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [8U] 
                                                  >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 6U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [8U] 
                                                  >> 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 7U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [8U] 
                                                  >> 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 8U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [8U] 
                                                  >> 8U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 9U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [8U] 
                                                  >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0xaU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [8U] 
                                                    >> 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0xbU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [8U] 
                                                    >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0xcU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [8U] 
                                                    >> 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0xdU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [8U] 
                                                    >> 0xdU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0xeU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [8U] 
                                                    >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0xfU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [8U] 
                                                    >> 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x10U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x11U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x11U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x12U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x13U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x13U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x14U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x14U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x15U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x16U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x16U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x17U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x17U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x18U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x19U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x1aU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x1aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x1bU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x1cU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x1cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x1dU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x1eU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x1fU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x20U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x21U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x21U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x22U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x22U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x23U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x23U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x24U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x24U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x25U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x25U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x26U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x26U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x27U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x27U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x28U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x28U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x29U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x29U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x2aU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x2aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x2bU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x2bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x2cU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x2cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x2dU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x2dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x2eU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x2eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x2fU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x2fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x30U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x30U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x31U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x31U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x32U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x32U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x33U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x33U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x34U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x34U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x35U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x35U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x36U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x36U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x37U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x37U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x38U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x38U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first3__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [7U] >> 0x39U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [8U] 
                                                     >> 0x39U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x3bU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x3bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 0x3cU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xeU] 
                                                       >> 0x3cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x3bU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x3bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x3aU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x3aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x3aU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x3aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                         [0xaU]) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0xbU])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 1U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 2U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 3U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 4U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 5U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 6U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 7U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 8U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 8U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 9U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xbU] 
                                                    >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0xaU)) & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xbU] 
                                                      >> 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0xbU)) & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xbU] 
                                                      >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0xcU)) & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xbU] 
                                                      >> 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0xdU)) & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xbU] 
                                                      >> 0xdU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0xeU)) & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xbU] 
                                                      >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0xfU)) & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xbU] 
                                                      >> 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x10U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x11U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x11U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x12U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x13U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x13U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x14U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x14U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x15U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x16U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x16U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x17U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x17U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x18U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x19U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x1aU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x1aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x1bU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x1cU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x1cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x1dU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x1eU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x1fU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x20U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x21U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x21U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x22U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x22U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x23U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x23U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x24U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x24U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x25U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x25U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x26U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x26U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x27U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x27U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x28U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x28U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x29U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x29U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x2aU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x2aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x2bU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x2bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x2cU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x2cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x2dU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x2dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x2eU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x2eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x2fU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x2fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x30U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x30U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x31U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x31U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x32U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x32U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x33U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x33U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x34U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x34U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x35U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x35U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x36U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x36U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x37U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x37U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x38U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x38U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first2__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xaU] >> 0x39U)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xbU] 
                                                       >> 0x39U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                         [1U]) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                         [2U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 1U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [2U] 
                                                  >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 2U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [2U] 
                                                  >> 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 3U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [2U] 
                                                  >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 4U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [2U] 
                                                  >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 5U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [2U] 
                                                  >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 6U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [2U] 
                                                  >> 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 7U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [2U] 
                                                  >> 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 8U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [2U] 
                                                  >> 8U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 9U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [2U] 
                                                  >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0xaU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [2U] 
                                                    >> 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0xbU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [2U] 
                                                    >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0xcU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [2U] 
                                                    >> 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0xdU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [2U] 
                                                    >> 0xdU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0xeU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [2U] 
                                                    >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0xfU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [2U] 
                                                    >> 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x10U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x11U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x11U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x12U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x13U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x13U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x14U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x14U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x15U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x16U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x16U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x17U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x17U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x18U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x19U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x1aU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x1aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x1bU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x1cU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x1cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x1dU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x1eU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x1fU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x20U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x21U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x21U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x22U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x22U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x23U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x23U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x24U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x24U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x25U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x25U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x26U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x26U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x27U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x27U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x28U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x28U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x29U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x29U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x2aU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x2aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x2bU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x2bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x2cU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x2cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x2dU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x2dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x2eU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x2eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x2fU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x2fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x30U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x30U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x31U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x31U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x32U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x32U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x33U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x33U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x34U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x34U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x35U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x35U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x36U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x36U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x37U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x37U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x38U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x38U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [1U] >> 0x39U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [2U] 
                                                     >> 0x39U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x3bU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x3bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 0x3bU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xeU] 
                                                       >> 0x3bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x3aU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x3aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                         [4U]) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                         [5U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 1U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [5U] 
                                                  >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 2U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [5U] 
                                                  >> 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 3U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [5U] 
                                                  >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 4U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [5U] 
                                                  >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 5U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [5U] 
                                                  >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 6U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [5U] 
                                                  >> 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 7U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [5U] 
                                                  >> 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 8U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [5U] 
                                                  >> 8U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 9U)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [5U] 
                                                  >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0xaU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [5U] 
                                                    >> 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0xbU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [5U] 
                                                    >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0xcU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [5U] 
                                                    >> 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0xdU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [5U] 
                                                    >> 0xdU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0xeU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [5U] 
                                                    >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0xfU)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [5U] 
                                                    >> 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x10U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x11U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x11U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x12U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x13U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x13U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x14U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x14U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x15U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x16U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x16U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x17U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x17U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x18U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x19U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x1aU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x1aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x1bU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x1cU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x1cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x1dU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x1eU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x1fU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x20U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x21U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x21U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x22U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x22U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x23U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x23U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x24U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x24U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x25U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x25U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x26U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x26U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x27U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x27U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x28U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x28U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x29U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x29U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x2aU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x2aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x2bU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x2bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x2cU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x2cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x2dU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x2dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x2eU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x2eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x2fU)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x2fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x30U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x30U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x31U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x31U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x32U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x32U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x33U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x33U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x34U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x34U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x35U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x35U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x36U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x36U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x37U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x37U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x38U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x38U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [4U] >> 0x39U)) & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U] 
                                                     >> 0x39U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 0x3aU)) & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xeU] 
                                                       >> 0x3aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                         [0xdU]) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [0xeU])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 1U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 2U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 3U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 4U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 5U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 6U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 7U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 8U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 8U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0 
        = (1U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xdU] >> 9U)) & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xeU] 
                                                    >> 9U))));
}
