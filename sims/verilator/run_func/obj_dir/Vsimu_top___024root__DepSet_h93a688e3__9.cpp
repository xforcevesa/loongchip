// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024root.h"

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__10(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__10\n"); );
    // Init
    CData/*7:0*/ simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_hec1e7ebc__0;
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_hec1e7ebc__0 = 0;
    // Body
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_hec1e7ebc__0 
        = (0xffU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok))) 
                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                       >> 4U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_addra 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_hec1e7ebc__0) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok))))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_hec1e7ebc__0) 
           | ((- (IData)((((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) 
                          | (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank0)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank1)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank2)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank3)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank0)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank1)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank2)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank3)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index));
}

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__11(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__11\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h0663ec88__0;
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h0663ec88__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h62b47b28__0;
    VlWide<4>/*127:0*/ __Vtemp_hcabe66ca__0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [0U];
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [1U];
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [2U];
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [3U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [2U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_bid = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [0U];
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [1U];
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [2U];
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [3U];
    }
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [4U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rid = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [2U];
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [3U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [2U];
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [3U];
    }
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
        = ((- (IData)((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))) 
           & vlSelf->simu_top__DOT__soc__DOT__m0_rdata);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
        = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state))) 
            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)))) 
              & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                  & ((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                            >> 2U)) == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num)))
                  ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                        ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                           >> 0x18U) : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                        >> 0x18U)) 
                      << 0x18U) | ((0xff0000U & (((4U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                   >> 0x10U)) 
                                                 << 0x10U)) 
                                   | ((0xff00U & ((
                                                   (2U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                    >> 8U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                    >> 8U)) 
                                                  << 8U)) 
                                      | (0xffU & ((1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata
                                                   : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))
                  : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rdata 
        = (((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)))) 
            & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit))) 
                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[
                (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                       >> 2U))]) | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[
                                    (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                           >> 2U))]))) 
           | ((- (IData)((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)))) 
              & vlSelf->simu_top__DOT__soc__DOT__m0_rdata));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en 
        = ((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
           & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok 
        = (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req))) 
           | ((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)) 
                    & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num) 
                        == (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                  >> 2U))) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en 
        = ((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
           & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h2fa193f3__0))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_data_ok 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h63343402__0)) 
           & (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cache_hit) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req)))) 
              | ((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op)) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                       & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num) 
                           == (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                     >> 2U))) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en)))))));
    __Vtemp_h62b47b28__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer;
    __Vtemp_h62b47b28__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer;
    __Vtemp_h62b47b28__0[2U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))));
    __Vtemp_h62b47b28__0[3U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))) 
                                        >> 0x20U));
    __Vtemp_hcabe66ca__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer;
    __Vtemp_hcabe66ca__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer;
    __Vtemp_hcabe66ca__0[2U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))));
    __Vtemp_hcabe66ca__0[3U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))) 
                                        >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata 
        = (((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))) 
            & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit))) 
                & __Vtemp_h62b47b28__0[(3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                              >> 2U))]) 
               | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit))) 
                  & __Vtemp_hcabe66ca__0[(3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                                >> 2U))]))) 
           | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_rd_buff
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rdata);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en) 
                                 & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en) 
                                 & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en) 
                                 & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en) 
                                 & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en) 
                                 & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en) 
                                 & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en) 
                                 & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en) 
                                 & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_excp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank0))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en) 
                                    & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank1))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en) 
                                    & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank2))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en) 
                                    & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank3))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en) 
                                    & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank0))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en) 
                                    & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank1))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en) 
                                    & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank2))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en) 
                                    & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea 
        = (0xfU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank3))) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en) 
                                    & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_data_ok) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable) 
                    | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem)) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded 
        = (0xffU & (((- (IData)((0U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata) 
                    | (((- (IData)((1U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
                           >> 8U)) | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
                                          >> 0x10U)) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
                                            >> 0x18U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded 
        = (0xffffU & (((- (IData)((0U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata) 
                      | ((- (IData)((2U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
                            >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ms_forward_data 
        = (((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                              >> 6U)))) & (((- (IData)(
                                                       (1U 
                                                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                            >> 0xbU) 
                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                              >> 0xeU))))) 
                                            & (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded) 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & ((~ 
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                >> 0xeU)) 
                                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                 >> 0xbU))))) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded)) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                  >> 0xcU) 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                    >> 0xeU))))) 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded) 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded))) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 & ((~ 
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                      >> 0xeU)) 
                                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                       >> 0xcU))))) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                                >> 0xbU)))))))) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata)))))) 
           | (((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                 >> 7U)))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mul_result)) 
              | (((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 8U)))) & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mul_result 
                                                         >> 0x20U))) 
                 | (((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 9U)))) & (IData)(
                                                           (0x1ffffffffULL 
                                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                                ? 
                                                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31) 
                                                                 == 
                                                                 (1U 
                                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete)
                                                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer)
                                                                      : 
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                                      >> 0x1fU))))
                                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS
                                                                 : 
                                                                (~ 
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
                                                                  - 1ULL)))
                                                                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS)))) 
                    | (((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                          >> 0xaU)))) 
                        & (IData)((0x1ffffffffULL & 
                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31)
                                         ? (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR 
                                               - 1ULL))
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)
                                     : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)))) 
                       | ((- (IData)((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7c0U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))))))) 
                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp)) 
              & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_flush_sign) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp) 
                         | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                             >> 0xeU) | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                          >> 0x1dU) 
                                         | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp)) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U])))) 
                                            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                >> 0xeU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                  >> 0x16U)))))) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)))) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin))));
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h0663ec88__0 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid)) 
                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                     >> 6U)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en 
        = (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
             >> 5U) & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
          == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__forward_enable) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[2U];
    } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                 == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])) 
                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ms_forward_enable) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[0U] 
            = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ms_forward_data)) 
                        << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[1U] 
            = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ms_forward_data)) 
                         << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                       >> 0x20U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[2U] 
            = simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h0663ec88__0;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[0U] 
            = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)) 
                        << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[1U] 
            = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)) 
                         << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                       >> 0x20U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[2U] = 0U;
    }
    if ((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                    >> 5U)) == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__forward_enable) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[2U];
    } else if ((((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                           >> 5U)) == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])) 
                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ms_forward_enable) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[0U] 
            = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ms_forward_data)) 
                        << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[1U] 
            = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ms_forward_data)) 
                         << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                       >> 0x20U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[2U] 
            = simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h0663ec88__0;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[0U] 
            = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                        << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[1U] 
            = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                         << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                       >> 0x20U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[2U] = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_valid) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_valid) 
                   | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                       >> 5U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en))) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                    >> 0x1eU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en)) 
           & ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
              | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go 
        = (1U & (((~ ((0xffU != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count)) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable))) 
                  & ((~ (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                           >> 0x1eU) & (IData)(((0x20088000U 
                                                 == 
                                                 (0x3fff8000U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U])) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)))) 
                         | ((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en)))) 
                     & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem) 
                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst)))) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok))))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go 
        = (1U & ((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[2U] 
                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[2U] 
                        | (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                               >> 0x1eU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 2U)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid)) 
                            | (((IData)((0U != (0x8800U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U]))) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)) 
                               | ((IData)((0U != (0x80200U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U]))) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)))) 
                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar)) 
                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty)))))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target 
        = (((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h19962199__0) 
                        | ((0x15U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0x1aU)) | 
                           ((0x14U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0x1aU)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h38353e9a__0)))))) 
            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
               + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
           | ((- (IData)((0x13U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                    >> 0x1aU)))) & 
              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[0U] 
               + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[0U] 
           == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[0U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[0U] 
           < vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[0U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_delay 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign 
        = (1U & (((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[0U] 
                      >> 0x1fU)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[0U] 
                                    >> 0x1fU)) | ((~ 
                                                   ((~ 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[0U] 
                                                      >> 0x1fU)) 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[0U] 
                                                       >> 0x1fU))) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken 
        = ((((0x16U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                        >> 0x1aU)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd)) 
            | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd)) 
                & (0x17U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                             >> 0x1aU))) | (((0x18U 
                                              == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign)) 
                                            | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign)) 
                                                & (0x19U 
                                                   == 
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU))) 
                                               | (((0x1aU 
                                                    == 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign)) 
                                                  | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign)) 
                                                      & (0x1bU 
                                                         == 
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 0x1aU))) 
                                                     | ((0x13U 
                                                         == 
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 0x1aU)) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h1c4a3e54__0)))))))) 
           & ((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
           & ((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush_target 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target
            : ((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
           & ((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 6U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hfea85cf8__0) 
           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
               >> 7U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken) 
                         & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                              << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                           >> 0xdU)) 
                            != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hae3f4b83__0 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 7U) ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hfea85cf8__0) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hae3f4b83__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry) 
            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error)))) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
              & ((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                     >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry
            : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry
                : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era
                    : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT____VdfgTmp_h52ebff71__0)
                        ? ((IData)(4U) + vlSelf->debug0_wb_pc)
                        : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid))
                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush_target
                            : (((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT____VdfgTmp_h733b49d8__0) 
                                   >> 8U)) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc
                                : ((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer
            : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign)) 
                & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state)))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset 
            = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index 
            = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                        >> 4U));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset 
            = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index 
            = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                        >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef 
        = (IData)((0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra 
        = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index)) 
           | ((- (IData)(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                          | (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_addra 
        = (((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT____VdfgTmp_h00af7739__0))))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index)) 
           | ((- (IData)(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                          | ((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                             | (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock))) 
           & (((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef) 
                   | ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state) 
                          | (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state)))) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req)))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go));
}

void Vsimu_top___024root___nba_sequent__TOP__0(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__1(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__2(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__3(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__4(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__5(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__6(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__7(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__8(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__9(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___act_sequent__TOP__1(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___act_sequent__TOP__0(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___act_comb__TOP__0(Vsimu_top___024root* vlSelf);

void Vsimu_top___024root___eval_nba(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimu_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vsimu_top___024root___nba_sequent__TOP__1(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__2(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__3(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__4(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__5(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__6(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__7(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__8(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__9(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimu_top___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimu_top___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimu_top___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimu_top___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vsimu_top___024root___eval_triggers__ico(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__ico(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimu_top___024root___eval_ico(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___eval_triggers__act(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__act(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimu_top___024root___eval_act(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__nba(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimu_top___024root___eval(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vsimu_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vsimu_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../testbench/simu_top.v", 50, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vsimu_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsimu_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsimu_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../testbench/simu_top.v", 50, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vsimu_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsimu_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../testbench/simu_top.v", 50, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsimu_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsimu_top___024root___eval_debug_assertions(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
    if (VL_UNLIKELY((vlSelf->aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((vlSelf->enable_delay & 0xfeU))) {
        Verilated::overWidthError("enable_delay");}
    if (VL_UNLIKELY((vlSelf->random_seed & 0xff800000U))) {
        Verilated::overWidthError("random_seed");}
    if (VL_UNLIKELY((vlSelf->uart_rx & 0xfeU))) {
        Verilated::overWidthError("uart_rx");}
    if (VL_UNLIKELY((vlSelf->uart_tx & 0xfeU))) {
        Verilated::overWidthError("uart_tx");}
    if (VL_UNLIKELY((vlSelf->btn_key_row & 0xf0U))) {
        Verilated::overWidthError("btn_key_row");}
    if (VL_UNLIKELY((vlSelf->btn_step & 0xfcU))) {
        Verilated::overWidthError("btn_step");}
}
#endif  // VL_DEBUG
