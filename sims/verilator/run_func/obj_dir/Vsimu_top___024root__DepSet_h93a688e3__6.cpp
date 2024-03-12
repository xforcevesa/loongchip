// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024root.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vsimu_top__ConstPool__TABLE_h143b7803_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vsimu_top__ConstPool__TABLE_h89ed0f95_0;

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__6(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0 = 0;
    CData/*0:0*/ __VdfgTmp_h61d4ac35__0;
    __VdfgTmp_h61d4ac35__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2450f594__0;
    __VdfgTmp_h2450f594__0 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1) 
                  << 2U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1) 
                  << 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1) 
                  << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1) 
                  << 1U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1) 
                  << 2U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1) 
                  << 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1) 
                  << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_ena 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT____VdfgTmp_h00af7739__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_ena 
        = (1U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT____VdfgTmp_h00af7739__0)));
    vlSelf->uart_rx = ((IData)(vlSelf->uart_rx__en0) 
                       & (IData)(vlSelf->simu_top__DOT__uart_rx__out__strong__out3));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 3U) & ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__max_repeat_time)
                       : (0U != (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
    vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe = 
        ((IData)(vlSelf->uart_rx__en0) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next 
        = (0x1ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                     + (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                 >> 0x10U))));
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (3U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = 3U;
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34798810__0));
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h2aa7111d__0));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push_data 
        = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr)) 
            << 0xdU) | (QData)((IData)((0x801U | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awsize) 
                                                   << 8U) 
                                                  | (0xf0U 
                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen) 
                                                        << 4U)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_last 
        = (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid) 
                    | ((~ ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable)) 
                           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num)))) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = 0U;
    } else {
        if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                              | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) {
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one;
            }
        } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = 0U;
                }
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 0x10U;
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 8U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr) 
                       | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_d) 
                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer
                                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer)) 
                           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr))) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0))));
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_lookup2lookup))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 2U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_op;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_size;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 4U));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset 
                    = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__wr_byte_en;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cache_hit) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 4U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_tag;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_uncache_en) 
                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)));
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_idle2lookup))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 2U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_op;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__preld_en;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_size;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                >> 4U));
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset 
                    = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__wr_byte_en;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = 1U;
        } else if (((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = 0U;
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index 
        = (0x1fU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en))) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64)) 
                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en))) 
                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill)) 
                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT____VdfgTmp_hce7fc8e0__0)) 
                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h6983a416__0) 
            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd) 
                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill) 
                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle))))))))) 
           & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv)));
    __VdfgTmp_h61d4ac35__0 = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                               & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
                              | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                                  >> 3U) & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))));
    __VdfgTmp_h2450f594__0 = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                               & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))) 
                              | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                  >> 3U) & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____VdfgTmp_hb9b19849__0 
        = (((QData)((IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
            << 0x3eU) | (((QData)((IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                          << 0x3dU) | (((QData)((IData)(
                                                        (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                            << 0x3aU) 
                                           | (((QData)((IData)(
                                                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig) 
                                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig) 
                                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig) 
                                                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                        << 0x36U) 
                                                       | (((QData)((IData)(
                                                                           (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig) 
                                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                              << 0x34U) 
                                                             | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                       << 0x31U) 
                                                                      | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                          << 0x30U) 
                                                                         | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                             << 0x2fU) 
                                                                            | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2eU) 
                                                                               | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1fU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1eU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1dU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1cU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1bU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1aU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x19U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x18U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x17U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x16U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x15U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x14U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x13U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x12U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x11U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x10U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xfU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xeU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xdU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xcU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xbU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xaU) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 9U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 8U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 7U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 6U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 5U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 4U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 3U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 2U) 
                                                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = (((QData)((IData)((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                             | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                   & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
            << 0x3fU) | (((QData)((IData)((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                            & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                           | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                                 & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                         | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                                               & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                                           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                          | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                                              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                                              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                             | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                                                   & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                                                      & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                   | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                                                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                                                         & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig)) 
                                                                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                      | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig)) 
                                                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig) 
                                                                            & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig)) 
                                                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                         | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig)) 
                                                                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig) 
                                                                               & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig)) 
                                                                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                            | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                               | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1fU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1eU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1dU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1cU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1bU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1aU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x19U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x18U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x17U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x16U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x15U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x14U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x13U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x12U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x11U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x10U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xfU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xeU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xdU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xcU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xbU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xaU) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 9U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 8U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 7U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 6U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 5U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 4U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 3U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 2U) 
                                                                                | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig)) 
                                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C)) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig) 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__B)) 
                                                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__sixth1__C))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlSelf->ram_ren = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                 >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                  ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                 >> 8U));
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai 
            = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai 
            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wlast) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 4U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state)) 
                 & (~ ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid))) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT____VdfgTmp_hce7fc8e0__0) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen) 
               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                  >> 0xcU)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward) 
                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                  >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill) 
           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen) 
               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                  >> 0xbU)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward) 
                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                  >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break) 
                       | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                           >> 4U) | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en 
        = ((IData)(__VdfgTmp_h61d4ac35__0) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc 
                                               >> 0x1dU) 
                                              == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                                                  >> 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en 
        = ((IData)(__VdfgTmp_h61d4ac35__0) & ((7U & 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                >> 0x14U)) 
                                              == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 
                                                  >> 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en 
        = ((IData)(__VdfgTmp_h2450f594__0) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc 
                                               >> 0x1dU) 
                                              == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                                  >> 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en 
        = ((IData)(__VdfgTmp_h2450f594__0) & ((7U & 
                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                >> 0x14U)) 
                                              == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 
                                                  >> 0x1dU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mul_result 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
           + (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____VdfgTmp_hb9b19849__0 
                << 1U) | (QData)((IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                >> 0xeU))))) 
              + (QData)((IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xfU))))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->ram_ren) & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
              ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                 >> 8U) : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr) 
            << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai));
    __Vtableidx5 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value 
        = Vsimu_top__ConstPool__TABLE_h143b7803_0[__Vtableidx5];
    __Vtableidx8 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vsimu_top__ConstPool__TABLE_h89ed0f95_0[__Vtableidx8];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
           & (0x78000U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hd44b3af7__0 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao 
        = (0xffU & ((4U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                     ? ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                         ? ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                             ? ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg)
                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))
                             : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr))
                         : ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                             ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                                        ? ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)
                                            : ((0x80U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                   >> 0x10U)
                                                : (0xc0U 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                        : ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                   >> 8U)
                                                : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl
                                                : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0x78000U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0x78000U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one 
        = ((2U & (VL_REDXOR_2(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h3175ceaa__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
            << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                         << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h3175ceaa__0;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type = 4U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                << 0xcU) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                            << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h63343402__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop) 
           & ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode)) 
              | (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode))));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_ena) {
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_addra];
        }
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_addra];
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_size 
        = ((1U & (- (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 0x1fU)))) | (2U & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                             >> 0x1eU)))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 5U) & (1U == (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 6U) & ((0U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                      | (8U == (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_op 
        = (1U & ((~ (IData)((0U != (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U])))) 
                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                    >> 5U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem 
        = (IData)((0U != (0x420U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__forward_enable 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            >> 6U) & ((0U != (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                     >> 0x1fU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                     >> 0x19U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable 
        = ((IData)((0U != (0x30000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_a 
        = ((0x200U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__lui_result 
        = ((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]
            : ((0x80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
                ? 4U : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin 
        = (IData)((0U != (0x7000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    if ((0x2000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
            = (((QData)((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
            = (((QData)((IData)((- (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
            = (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
            = (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__da_mode 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_da) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
    vlSelf->uart_tx = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe)) 
                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                 >> 4U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
        = (1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)
                  : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol)
                      ? (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))
                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))));
    vlSelf->uart_ctr_bus[0U] = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack;
    vlSelf->uart_ctr_bus[1U] = (IData)((((QData)((IData)(
                                                         (0xfU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw))));
    vlSelf->uart_ctr_bus[2U] = (IData)(((((QData)((IData)(
                                                          (0xfU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw))) 
                                        >> 0x20U));
    vlSelf->uart_ctr_bus[3U] = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT____VdfgTmp_hf971e730__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
              & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack 
        = ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                            >> 0xeU))) ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack)
            : (IData)(((0x78000U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack) 
           & (0x40U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (4U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (8U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0xcU == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x18U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x1cU == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x20U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x24U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x28U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x2cU == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__data_real_rd_size 
        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type))
            ? 2U : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h0a76f518__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_hdb34a219__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h9ac96f4b__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state;
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0;
    }
    if (vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg[vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__result_r 
        = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r)) 
            << 1U) | (QData)((IData)(((0x20U >= (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))) 
                                      & (IData)(((QData)((IData)(
                                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                                   ? 
                                                                  ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                                    >> 0x1fU)
                                                                    ? 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (~ 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))
                                                                    : 
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])
                                                                   : 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_a 
           | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__lui_result);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)
            ? (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__lui_result)
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__lui_result);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x 
        = (IData)((2ULL == (3ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx 
        = (IData)((3ULL == (3ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x 
        = (IData)((1ULL == (3ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((4ULL == (0xcULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x10ULL == (0x30ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x40ULL == (0xc0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x100ULL == (0x300ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x400ULL == (0xc00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x1000ULL == (0x3000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x4000ULL == (0xc000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x10000ULL == (0x30000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x40000ULL == (0xc0000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x100000ULL == (0x300000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x400000ULL == (0xc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x1000000ULL == (0x3000000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x4000000ULL == (0xc000000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x10000000ULL == (0x30000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_he6224cd4__0 
        = (IData)((0x40000000ULL == (0xc0000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((8ULL == (0xcULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x20ULL == (0x30ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x80ULL == (0xc0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x200ULL == (0x300ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x800ULL == (0xc00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x2000ULL == (0x3000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x8000ULL == (0xc000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x20000ULL == (0x30000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x200000ULL == (0x300000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x800000ULL == (0xc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x2000000ULL == (0x3000000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x8000000ULL == (0xc000000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x20000000ULL == (0x30000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__uu__DOT____VdfgTmp_hf6cd5b06__0 
        = (IData)((0x80000000ULL == (0xc0000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__uu__DOT____VdfgTmp_he6224cd4__0 = 0U;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[1U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [1U]) | (2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[1U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [1U]) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 1U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [2U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 2U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [3U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 2U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 3U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [4U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 3U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 4U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [5U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 4U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 5U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [6U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 6U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [7U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 6U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 7U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [8U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 7U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 8U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [9U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                   >> 8U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 9U))) << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xaU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xaU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xbU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xcU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xbU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xdU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xcU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xeU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xdU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0xfU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                     >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0xfU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x10U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0xfU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x10U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x11U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x11U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x12U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x11U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x12U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x13U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x12U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x13U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x14U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x13U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x14U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x15U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x14U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x15U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x16U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x15U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x16U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x17U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x16U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x17U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x18U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x17U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x18U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x19U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x18U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x19U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x19U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1aU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1bU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1cU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1dU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1eU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x1fU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x20U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x1fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x20U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x21U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x21U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x22U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x21U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x22U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x23U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x22U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x23U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x24U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x23U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x24U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x25U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x24U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x25U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x26U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x25U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x26U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x27U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x26U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x27U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x28U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x27U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x28U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x29U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x28U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x29U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x29U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2aU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2bU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2cU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2dU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2eU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x2fU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x30U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x2fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x30U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x31U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x30U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x31U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x32U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x31U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x32U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x33U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x32U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x33U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x34U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x33U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x34U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x35U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x34U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x35U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x36U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x35U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x36U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x37U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x36U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x37U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x38U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x37U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x38U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x39U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x38U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x39U))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x39U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3aU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3aU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3bU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3bU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3cU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3cU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3dU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3dU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3eU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3eU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 0x3fU))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
            [0x40U]) | (1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 0x3fU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffff80000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1fU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffff80000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffc0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1eU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffc0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffe0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1dU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffe0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffff0000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1cU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffff0000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffff8000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1bU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffff8000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffc000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x1aU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffc000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffe000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x19U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffe000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffff000000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0x18U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffff000000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffff800000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x17U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffff800000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffc00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x16U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffc00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffe00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x15U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffe00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffff00000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x14U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffff00000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffff80000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x13U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffff80000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3fffffffc0000ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 0x12U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3fffffffc0000ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1fffffffe0000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1fffffffe0000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffff0000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffff0000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffff8000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffff8000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffc000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffc000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffe000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffe000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xffffffff000ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xffffffff000ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7fffffff800ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7fffffff800ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3fffffffc00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3fffffffc00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1fffffffe00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1fffffffe00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffff00ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffff00ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffff80ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffff80ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffc0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffc0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffe0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffe0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xffffffff0ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xffffffff0ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7fffffff8ULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7fffffff8ULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3fffffffcULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3fffffffcULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1fffffffeULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             << 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1fffffffeULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 9U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xbU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xcU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x38U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x39U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x3aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x3aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffff8ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffff8ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffffffcULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffffffcULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 9U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x38U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x38U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x39U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffffffffe0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffffffffe0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffffff0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffffff0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffffff8ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffffff8ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffffffffcULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffffffffcULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          >> 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 8U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x38U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x39U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffffffff80ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 7U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffffffff80ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffffc0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffffc0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffffe0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffffe0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffffffff0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffffffff0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffffffff8ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffffffff8ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffffffffcULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffffffffcULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffffffffeULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 1U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffffffffeULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffffULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x36U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x37U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffffe00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 9U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffffe00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffff00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 8U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffff00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffff80ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 7U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffff80ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffffc0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffffc0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffffe0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffffe0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffffffff0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffffffff0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffffffff8ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 3U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffffffff8ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xfffffffffffffcULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 2U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xfffffffffffffcULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7ffffffffffffeULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7ffffffffffffeULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffffULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffffULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x34U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x35U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7ffffffffffff800ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xbU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7ffffffffffff800ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffffc00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xaU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffffc00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffffe00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 9U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffffe00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xfffffffffffff00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 8U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xfffffffffffff00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7ffffffffffff80ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 7U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7ffffffffffff80ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffffc0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffffc0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffffe0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 5U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffffe0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xfffffffffffff0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 4U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xfffffffffffff0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7ffffffffffff8ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7ffffffffffff8ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3ffffffffffffcULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3ffffffffffffcULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1ffffffffffffeULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1ffffffffffffeULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xfffffffffffffULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xfffffffffffffULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x32U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x33U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffffffe000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xdU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffffffe000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3ffffffffffff000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xcU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3ffffffffffff000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1ffffffffffff800ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xbU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1ffffffffffff800ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffffffc00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xaU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffffffc00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffffffe00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 9U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffffffe00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3ffffffffffff00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 8U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3ffffffffffff00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1ffffffffffff80ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 7U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1ffffffffffff80ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffffc0ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 6U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffffc0ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffffe0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffffe0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3ffffffffffff0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3ffffffffffff0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1ffffffffffff8ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1ffffffffffff8ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffffffffcULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffffffffcULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffffffffeULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 1U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffffffffeULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3ffffffffffffULL 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3ffffffffffffULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (2U & ((~ (IData)((0x1ffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 1U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x10U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x10U]) | (1U & (IData)((0x1ffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (2U & ((~ (IData)((0xffffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 2U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x11U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x11U]) | (1U & (IData)((0xffffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 2U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (2U & ((~ (IData)((0x7fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 3U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x12U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x12U]) | (1U & (IData)((0x7fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (2U & ((~ (IData)((0x3fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 4U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x13U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x13U]) | (1U & (IData)((0x3fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (2U & ((~ (IData)((0x1fffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 5U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x14U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x14U]) | (1U & (IData)((0x1fffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (2U & ((~ (IData)((0xfffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 6U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x15U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x15U]) | (1U & (IData)((0xfffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (2U & ((~ (IData)((0x7ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 7U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x16U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x16U]) | (1U & (IData)((0x7ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (2U & ((~ (IData)((0x3ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 8U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x17U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x17U]) | (1U & (IData)((0x3ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (2U & ((~ (IData)((0x1ffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 9U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x18U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x18U]) | (1U & (IData)((0x1ffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (2U & ((~ (IData)((0xffffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x19U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x19U]) | (1U & (IData)((0xffffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (2U & ((~ (IData)((0x7fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1aU]) | (1U & (IData)((0x7fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (2U & ((~ (IData)((0x3fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1bU]) | (1U & (IData)((0x3fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (2U & ((~ (IData)((0x1fffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1cU]) | (1U & (IData)((0x1fffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (2U & ((~ (IData)((0xfffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1dU]) | (1U & (IData)((0xfffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (2U & ((~ (IData)((0x7ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1eU]) | (1U & (IData)((0x7ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (2U & ((~ (IData)((0x3ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x1fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x1fU]) | (1U & (IData)((0x3ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x10U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (2U & ((~ (IData)((0x1ffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x20U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x20U]) | (1U & (IData)((0x1ffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x11U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (2U & ((~ (IData)((0xffffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x21U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x21U]) | (1U & (IData)((0xffffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x12U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (2U & ((~ (IData)((0x7fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x22U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x22U]) | (1U & (IData)((0x7fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x13U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (2U & ((~ (IData)((0x3fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x23U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x23U]) | (1U & (IData)((0x3fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (2U & ((~ (IData)((0x1fffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x24U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x24U]) | (1U & (IData)((0x1fffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x15U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (2U & ((~ (IData)((0xfffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x25U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x25U]) | (1U & (IData)((0xfffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x16U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (2U & ((~ (IData)((0x7ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x26U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x26U]) | (1U & (IData)((0x7ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x17U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (2U & ((~ (IData)((0x3ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x27U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x27U]) | (1U & (IData)((0x3ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (2U & ((~ (IData)((0x1ffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x28U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x28U]) | (1U & (IData)((0x1ffffffULL 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         >> 0x19U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (2U & ((~ (IData)((0xffffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x29U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x29U]) | (1U & (IData)((0xffffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (2U & ((~ (IData)((0x7fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2aU]) | (1U & (IData)((0x7fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (2U & ((~ (IData)((0x3fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2bU]) | (1U & (IData)((0x3fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (2U & ((~ (IData)((0x1fffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2cU]) | (1U & (IData)((0x1fffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (2U & ((~ (IData)((0xfffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2dU]) | (1U & (IData)((0xfffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (2U & ((~ (IData)((0x7ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2eU]) | (1U & (IData)((0x7ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x1fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (2U & ((~ (IData)((0x3ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x2fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x2fU]) | (1U & (IData)((0x3ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x20U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (2U & ((~ (IData)((0x1ffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x30U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x30U]) | (1U & (IData)((0x1ffffULL & 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                       >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (2U & ((~ (IData)((0xffffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x31U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x31U]) | (1U & (IData)((0xffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (2U & ((~ (IData)((0x7fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x32U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x32U]) | (1U & (IData)((0x7fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (2U & ((~ (IData)((0x3fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x33U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x33U]) | (1U & (IData)((0x3fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (2U & ((~ (IData)((0x1fffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x34U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x34U]) | (1U & (IData)((0x1fffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (2U & ((~ (IData)((0xfffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x35U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x35U]) | (1U & (IData)((0xfffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (2U & ((~ (IData)((0x7ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x36U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x36U]) | (1U & (IData)((0x7ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (2U & ((~ (IData)((0x3ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x37U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x37U]) | (1U & (IData)((0x3ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (2U & ((~ (IData)((0x1ffULL 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x38U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x38U]) | (1U & (IData)((0x1ffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (2U & ((~ (IData)((0xffULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2aU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x39U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x39U]) | (1U & (IData)((0xffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (2U & ((~ (IData)((0x7fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2bU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3aU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3aU]) | (1U & (IData)((0x7fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (2U & ((~ (IData)((0x3fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2cU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3bU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3bU]) | (1U & (IData)((0x3fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (2U & ((~ (IData)((0x1fULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2dU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3cU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3cU]) | (1U & (IData)((0x1fULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (2U & ((~ (IData)((0xfULL & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                           >> 0x2eU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3dU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3dU]) | (1U & (IData)((0xfULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                >> 0x2eU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (2U & ((~ (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3eU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3eU]) | (1U & (IData)((7ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x2fU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (2U & ((~ (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x3fU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x3fU]) | (1U & (IData)((3ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x30U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (2U & ((~ (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U)))) 
                              << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[0x40U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig
            [0x40U]) | (1U & (IData)((1ULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                              >> 0x31U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [2U]) | (2U & ((~ (IData)((0x7fffffffffff8000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xfU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[2U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [2U]) | (1U & (IData)((0x7fffffffffff8000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xfU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [3U]) | (2U & ((~ (IData)((0x3fffffffffffc000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xeU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[3U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [3U]) | (1U & (IData)((0x3fffffffffffc000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xeU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [4U]) | (2U & ((~ (IData)((0x1fffffffffffe000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xdU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[4U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [4U]) | (1U & (IData)((0x1fffffffffffe000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xdU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [5U]) | (2U & ((~ (IData)((0xffffffffffff000ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xcU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[5U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [5U]) | (1U & (IData)((0xffffffffffff000ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xcU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [6U]) | (2U & ((~ (IData)((0x7fffffffffff800ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xbU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[6U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [6U]) | (1U & (IData)((0x7fffffffffff800ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xbU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [7U]) | (2U & ((~ (IData)((0x3fffffffffffc00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 0xaU)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[7U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [7U]) | (1U & (IData)((0x3fffffffffffc00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 0xaU)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [8U]) | (2U & ((~ (IData)((0x1fffffffffffe00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 9U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[8U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [8U]) | (1U & (IData)((0x1fffffffffffe00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 9U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [9U]) | (2U & ((~ (IData)((0xffffffffffff00ULL 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                          << 8U)))) 
                           << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[9U] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [9U]) | (1U & (IData)((0xffffffffffff00ULL 
                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                      << 8U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (2U & ((~ (IData)((0x7fffffffffff80ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 7U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xaU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xaU]) | (1U & (IData)((0x7fffffffffff80ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 7U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (2U & ((~ (IData)((0x3fffffffffffc0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 6U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xbU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xbU]) | (1U & (IData)((0x3fffffffffffc0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 6U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (2U & ((~ (IData)((0x1fffffffffffe0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 5U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xcU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xcU]) | (1U & (IData)((0x1fffffffffffe0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 5U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (2U & ((~ (IData)((0xffffffffffff0ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 4U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xdU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xdU]) | (1U & (IData)((0xffffffffffff0ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 4U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (2U & ((~ (IData)((0x7fffffffffff8ULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 3U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xeU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xeU]) | (1U & (IData)((0x7fffffffffff8ULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (2U & ((~ (IData)((0x3fffffffffffcULL 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                            << 2U)))) 
                             << 1U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[0xfU] 
        = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig
            [0xfU]) | (1U & (IData)((0x3fffffffffffcULL 
                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                        << 2U)))));
}
