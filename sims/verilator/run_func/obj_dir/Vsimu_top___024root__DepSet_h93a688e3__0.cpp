// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024root.h"

extern const VlUnpacked<CData/*3:0*/, 1024> Vsimu_top__ConstPool__TABLE_h542c445a_0;

VL_INLINE_OPT void Vsimu_top___024root___ico_sequent__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h0663ec88__0;
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h0663ec88__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h52e0dcfe__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h62b47b28__0;
    VlWide<4>/*127:0*/ __Vtemp_hcabe66ca__0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp 
        = (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
            & (0xeU == (IData)(vlSelf->btn_key_row)))
            ? 1U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                     & (0xdU == (IData)(vlSelf->btn_key_row)))
                     ? 0x10U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                 & (0xbU == (IData)(vlSelf->btn_key_row)))
                                 ? 0x100U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                              & (7U 
                                                 == (IData)(vlSelf->btn_key_row)))
                                              ? 0x1000U
                                              : (((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                  & (0xeU 
                                                     == (IData)(vlSelf->btn_key_row)))
                                                  ? 2U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                   & (0xdU 
                                                      == (IData)(vlSelf->btn_key_row)))
                                                   ? 0x20U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                    & (0xbU 
                                                       == (IData)(vlSelf->btn_key_row)))
                                                    ? 0x200U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlSelf->btn_key_row)))
                                                     ? 0x2000U
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                      & (0xeU 
                                                         == (IData)(vlSelf->btn_key_row)))
                                                      ? 4U
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                       & (0xdU 
                                                          == (IData)(vlSelf->btn_key_row)))
                                                       ? 0x40U
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                        & (0xbU 
                                                           == (IData)(vlSelf->btn_key_row)))
                                                        ? 0x400U
                                                        : 
                                                       (((3U 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                         & (7U 
                                                            == (IData)(vlSelf->btn_key_row)))
                                                         ? 0x4000U
                                                         : 
                                                        (((4U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                          & (0xeU 
                                                             == (IData)(vlSelf->btn_key_row)))
                                                          ? 8U
                                                          : 
                                                         (((4U 
                                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                           & (0xdU 
                                                              == (IData)(vlSelf->btn_key_row)))
                                                           ? 0x80U
                                                           : 
                                                          (((4U 
                                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                            & (0xbU 
                                                               == (IData)(vlSelf->btn_key_row)))
                                                            ? 0x800U
                                                            : 
                                                           (((4U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                             & (7U 
                                                                == (IData)(vlSelf->btn_key_row)))
                                                             ? 0x8000U
                                                             : 0U))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
            ? ((IData)(((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                         >> 0x13U) & (~ (IData)((0xfU 
                                                 == (IData)(vlSelf->btn_key_row))))))
                ? 1U : 0U) : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                               ? ((0xfU == (IData)(vlSelf->btn_key_row))
                                   ? 2U : 7U) : ((2U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                  ? 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->btn_key_row))
                                                   ? 3U
                                                   : 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->btn_key_row))
                                                    ? 4U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->btn_key_row))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                     ? 
                                                    (((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                                       >> 0x13U) 
                                                      & (0xfU 
                                                         == (IData)(vlSelf->btn_key_row)))
                                                      ? 0U
                                                      : 7U)
                                                     : 0U))))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34798810__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                     >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
              & (IData)(vlSelf->aresetn)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
              & (IData)(vlSelf->aresetn)));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h75bc9f3b__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                    >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34df15c7__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h2aa7111d__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                     >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76584fb0__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0U] 
        = vlSelf->ram_rdata;
    vlSelf->simu_top__DOT__soc__DOT__cpu_wready = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34798810__0));
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34798810__0));
    vlSelf->ram_wen = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb) 
                       & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb) 
           & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
    vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h75bc9f3b__0));
    vlSelf->simu_top__DOT__soc__DOT__m0_bready = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h75bc9f3b__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu_arready = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34df15c7__0));
    vlSelf->simu_top__DOT__soc__DOT__m0_arvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34df15c7__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu_awready = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h2aa7111d__0));
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h2aa7111d__0));
    vlSelf->simu_top__DOT__soc__DOT__m0_rready = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76584fb0__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76584fb0__0));
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
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xe000U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xff10U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state)) 
                 & (~ ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid))) 
                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable)))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_bready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h1eb7f308__1) 
                  << 1U));
    }
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid)));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid)));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0) 
              << 4U));
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
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rready;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h91bcae33__1) 
                  << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
        = ((- (IData)((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))) 
           & vlSelf->simu_top__DOT__soc__DOT__m0_rdata);
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
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    vlSelf->write_uart_valid = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
                       >> 2U))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)));
    __Vtableidx3 = ((0xfffffe00U & ((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                      << 9U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
                                                 << 9U) 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                                   << 7U))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        << 7U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                                  << 9U)))) 
                    | ((0x100U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                  << 8U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                                              << 7U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                                 << 6U) 
                                                | ((0x20U 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                                       << 3U)) 
                                                   | ((0x10U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                                          << 2U)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt 
        = Vsimu_top__ConstPool__TABLE_h542c445a_0[__Vtableidx3];
    vlSelf->ram_ren = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                 >> 3U)));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en 
        = ((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
           & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h2fa193f3__0))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
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
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->ram_ren) & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en));
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
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
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

void Vsimu_top___024root___eval_ico(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsimu_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vsimu_top__ConstPool__TABLE_h6a7ca004_0;
extern const VlUnpacked<IData/*31:0*/, 32> Vsimu_top__ConstPool__TABLE_hc0c6d660_0;

VL_INLINE_OPT void Vsimu_top___024root___act_sequent__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = (((0x1fafU == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                                    >> 0x10U))) << 3U) 
           | (((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr 
                            >> 0x10U)) << 2U) | (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                                                                   >> 1U))))))));
    __Vtableidx1 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir 
        = Vsimu_top__ConstPool__TABLE_h6a7ca004_0[__Vtableidx1];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_hc0c6d660_0[__Vtableidx1];
    vlSelf->simu_top__DOT__soc__DOT__m0_awready = 0U;
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 1U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 2U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 3U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 3U));
    }
    if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
            >> 4U))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 4U));
    }
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hc4af497b__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu_awready = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h2aa7111d__0));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
}

VL_INLINE_OPT void Vsimu_top___024root___act_sequent__TOP__1(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___act_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = (((0x1fafU == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                                    >> 0x10U))) << 3U) 
           | (((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu_araddr 
                            >> 0x10U)) << 2U) | (1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                                                                   >> 1U))))))));
    __Vtableidx2 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir 
        = Vsimu_top__ConstPool__TABLE_h6a7ca004_0[__Vtableidx2];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_hc0c6d660_0[__Vtableidx2];
    vlSelf->simu_top__DOT__soc__DOT__m0_arready = 0U;
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 1U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 2U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 3U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 3U));
    }
    if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
            >> 4U))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 4U));
    }
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6d8a810e__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu_arready = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34df15c7__0));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
}

VL_INLINE_OPT void Vsimu_top___024root___act_comb__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___act_comb__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
                       >> 2U))));
    __Vtableidx3 = ((0xfffffe00U & ((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                      << 9U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
                                                 << 9U) 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                                   << 7U))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        << 7U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                                  << 9U)))) 
                    | ((0x100U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                  << 8U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                                              << 7U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                                 << 6U) 
                                                | ((0x20U 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                                       << 3U)) 
                                                   | ((0x10U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                                          << 2U)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt 
        = Vsimu_top__ConstPool__TABLE_h542c445a_0[__Vtableidx3];
}

void Vsimu_top___024root___eval_act(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vsimu_top___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vsimu_top___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vsimu_top___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*6:0*/, 32> Vsimu_top__ConstPool__TABLE_h82244acd_0;

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    VlWide<5>/*159:0*/ __Vtemp_h8a7e2068__0;
    VlWide<5>/*159:0*/ __Vtemp_hbefd165a__0;
    VlWide<5>/*159:0*/ __Vtemp_hd195d21a__0;
    VlWide<7>/*223:0*/ __Vtemp_h1d9908d3__0;
    VlWide<7>/*223:0*/ __Vtemp_hbeec66b0__0;
    VlWide<5>/*159:0*/ __Vtemp_h18a03ea0__0;
    VlWide<5>/*159:0*/ __Vtemp_h8e423db9__0;
    VlWide<7>/*223:0*/ __Vtemp_h30ebc3f5__0;
    // Body
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v4 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v5 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v6 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v7 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v8 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v9 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v10 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v11 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v12 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v13 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v14 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v15 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v16 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v17 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v18 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v19 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v20 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v21 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v22 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v23 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v24 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v25 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v26 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v27 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v28 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v29 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v30 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v31 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v32 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v33 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v34 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v35 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v36 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v37 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v38 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v39 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v40 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v41 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v42 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v43 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v44 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v45 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v46 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v47 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v48 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v49 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v50 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v51 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v52 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v53 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v54 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v55 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v56 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v57 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v58 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v59 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v60 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v61 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v62 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v63 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v64 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v65 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v66 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v67 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v68 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v69 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v70 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v71 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v72 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v73 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v74 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v75 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v76 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v77 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v78 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v79 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v80 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v81 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v82 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v83 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v84 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v85 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v86 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v87 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v88 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v89 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v90 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v91 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v92 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v93 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v94 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v95 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v96 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v97 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v98 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v99 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v100 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v101 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v102 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v103 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v104 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v105 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v106 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v107 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v108 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v109 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v110 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v111 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v112 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v113 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v114 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v115 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v116 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v117 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v118 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v119 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v120 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v121 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v122 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v123 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v124 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v125 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v126 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v127 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v128 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v129 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v130 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v131 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v132 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v133 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v134 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v135 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v136 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v137 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v138 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v139 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v140 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v141 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v142 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v143 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v144 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v145 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v146 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v147 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v148 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v149 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v150 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v151 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v152 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v153 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v154 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v155 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v156 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v157 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v158 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v159 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v160 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v161 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v162 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v163 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v164 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v165 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v166 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v167 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v168 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v169 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v170 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v171 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v172 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v173 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v174 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v175 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v176 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v177 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v178 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v179 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v180 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v181 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v182 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v183 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v184 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v185 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v186 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v187 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v188 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v189 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v190 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v191 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v192 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v193 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v194 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v195 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v196 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v197 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v198 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v199 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v200 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v201 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v202 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v203 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v204 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v205 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v206 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v207 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v208 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v209 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v210 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v211 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v212 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v213 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v214 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v215 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v216 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v217 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v218 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v219 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v220 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v221 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v222 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v223 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = 0U;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast 
        = vlSelf->simu_top__DOT__soc__DOT__cpu_wlast;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid 
        = vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid 
        = vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U];
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U];
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v0 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v1 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v2 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v3 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v4 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v5 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v6 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v7 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v8 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v9 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v10 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v11 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v12 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v13 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v14 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v15 = 0U;
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v16 = 0U;
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = 2U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = 2U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay 
            = (0xffU == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random));
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay 
            = (0xffU == (0xffU & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random));
    }
    if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__p = 0x11U;
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
                       >> 2U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = 1U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index;
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target 
                       >> 2U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = 1U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index))) 
                        & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag) 
                       | (0xffffffffULL & ((0x13U == 
                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)) 
                                           << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index))));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 = 1U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index;
            } else {
                if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry)))) {
                    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error) 
                         & (0x13U != (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0x1aU)))) {
                        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 
                            = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target 
                               >> 2U);
                        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = 1U;
                        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 
                            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        >> 8U));
                        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 = 1U;
                        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 
                            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        >> 8U));
                    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error) 
                                | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hae3f4b83__0)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hfea85cf8__0)))) {
                        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken) {
                            if ((7U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter
                                 [(0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            >> 8U))])) {
                                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 
                                    = (7U & ((IData)(1U) 
                                             + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter
                                             [(0x1fU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  >> 8U))]));
                                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = 1U;
                                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 
                                    = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                >> 8U));
                            }
                        } else if ((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter
                                    [(0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                               >> 8U))])) {
                            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 
                                = (7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter
                                         [(0x1fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            >> 8U))] 
                                         - (IData)(1U)));
                            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = 1U;
                            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 
                                = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            >> 8U));
                        }
                    }
                }
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                        = ((~ ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index))) 
                           & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag);
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error) 
                            & (0x13U != (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index))) 
                            & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag) 
                           | (0xffffffffULL & ((0x13U 
                                                == 
                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0x1aU)) 
                                               << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index))));
                }
            }
        }
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [0U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v0 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [1U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v1 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v1 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [2U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v2 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v2 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [3U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v3 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v3 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [4U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v4 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v4 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [5U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v5 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v5 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [6U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v6 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v6 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [7U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v7 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v7 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [8U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v8 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v8 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [9U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v9 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v9 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [0xaU];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v10 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v10 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [0xbU];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v11 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v11 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [0xcU];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v12 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v12 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [0xdU];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v13 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v13 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [0xeU];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v14 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v14 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [0xfU];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v15 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v15 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes
            [0x10U];
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v16 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound_h1a6fe13a__0;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v16 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
            = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx)) 
                << 0x10U) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx)) 
                              << 0xfU) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx)) 
                                           << 0xeU) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx)) 
                                              << 0xdU) 
                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx)) 
                                                 << 0xcU) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx)) 
                                                    << 0xbU) 
                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx)) 
                                                       << 0xaU) 
                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x) 
                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx)) 
                                                          << 9U) 
                                                         | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x) 
                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx)) 
                                                             << 8U) 
                                                            | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x) 
                                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx)) 
                                                                << 7U) 
                                                               | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x) 
                                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx)) 
                                                                   << 6U) 
                                                                  | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x) 
                                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx)) 
                                                                      << 5U) 
                                                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x) 
                                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx)) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x) 
                                                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx)) 
                                                                            << 3U) 
                                                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx)) 
                                                                               << 2U) 
                                                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx))))))))))))))))));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_ena) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_dina;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_addra;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_dina;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_addra;
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_ena) {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_dina;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_addra;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_dina;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_addra;
        }
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_addra];
        }
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_addra];
        }
    }
    if (vlSelf->aresetn) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
            = (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count));
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr)));
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xf0U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr) 
                                   | ((0xbU | (4U & 
                                               ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI)) 
                                                << 2U))) 
                                      ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals))))));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((0x80U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h5e454d29__0) 
                            << 7U)) | ((0x40U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h5e454d29__0) 
                                                 << 5U)) 
                                       | ((0x20U & 
                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h5e454d29__0) 
                                            << 3U)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h5e454d29__0) 
                                                << 1U))))));
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)))) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 
                = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr));
        }
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr)));
        }
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr)));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
                     & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))) 
                    & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (1U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai));
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = 0U;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        } else if ((2U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)));
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
                                - (IData)(1U)));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in));
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                             ? ((IData)(0x16U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value))
                             : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value)));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        if (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)))) {
            vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir;
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 1U;
            vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 
                = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr));
        }
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3)))
                ? vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2
                : ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8070U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8050U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8040U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8030U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8020U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8010U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8060U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8000U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0);
        vlSelf->num_csn = ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                            ? ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfeU : 0xfdU)
                                : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfbU : 0xf7U))
                            : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xefU : 0xdfU)
                                : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xbfU : 0x7fU)));
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid 
                = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 0U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11))
                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9))
                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
             & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bready))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (4U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol 
                = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                         >> 6U));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared 
                = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                         >> 7U));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai));
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number 
            = (3U & ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                      ? ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                          ? ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? 0U : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                       ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                          >> 0x12U)
                                       : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                          >> 0x11U)))
                          : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x10U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0xfU))
                              : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0xeU) : 0U)))
                      : ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                          ? ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x15U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x14U))
                              : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x13U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x13U)))
                          : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x13U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x12U))
                              : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x11U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x10U))))));
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr 
                    = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                             >> 6U));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if (vlSelf->ram_ren) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 1U;
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 1U;
        } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 0U;
        }
        if ((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc) 
                   | (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc))))))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                               - (IData)(1U)) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle)));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next;
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc) 
                              - (IData)(1U)));
        }
        if ((((IData)(vlSelf->uart_rx__en0) & (1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                 == (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg) 
                              >> 1U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 1U;
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel;
        }
        if (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                 >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid))) 
               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
              & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                = (0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr);
            vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 1U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size 
                = vlSelf->simu_top__DOT__soc__DOT__cpu_awsize;
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) {
            vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = 0U;
            if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                        >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                    = (0xfffffU & (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                    & (0U == (3U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                    ? ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                    : (((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                        & (0U == (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                        ? ((IData)(2U) 
                                           + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                        : (((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                            & (0U == 
                                               (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                            ? ((IData)(3U) 
                                               + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                            : (((6U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                                ? ((IData)(1U) 
                                                   + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                                : (
                                                   ((0xcU 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                                    ? 
                                                   ((IData)(2U) 
                                                    + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr))))));
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = 1U;
                if ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                    if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb) 
                                     >> 3U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                            = (vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                               >> 0x18U);
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                            = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb) 
                                     >> 2U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                            = (vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                               >> 0x10U);
                    }
                } else if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb) 
                                 >> 1U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                        = (vlSelf->simu_top__DOT__soc__DOT__cpu_wdata 
                           >> 8U);
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu_wdata;
                }
            } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu)) 
                        & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                    = (0xffU & ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                 ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32
                                 : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                     ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                        >> 8U) : ((6U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                   >> 8U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                    >> 0x10U)
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                     >> 0x18U)
                                                     : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32))))));
                if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
                }
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr 
                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                       >> 8U);
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu) 
                        & (0xfU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb)))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32);
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr 
                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                       >> 8U);
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    if ((0U == (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb) 
                                      >> 1U)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                    >> 8U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (0xeU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32);
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    if ((0U == (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb) 
                                      >> 2U)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                    >> 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (0xdU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                           >> 0x18U);
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (0xbU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (7U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                }
            }
        } else if (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                        >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready))) 
                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid))) 
                     & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) 
                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
            vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 1U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id 
                = vlSelf->simu_top__DOT__soc__DOT__cpu_arid;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
                = vlSelf->simu_top__DOT__soc__DOT__cpu_arsize;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                = (0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu_araddr);
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb 
                = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu_araddr);
            if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 4U;
            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 2U;
            } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arsize))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 1U;
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) {
            vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
                        = (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count));
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                              ? 0U : ((0x1eU == (0x3fU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                    >> 0xeU)))
                                       ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                          >> 8U) : 0U)) 
                            << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast 
                        = ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size)) 
                           | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid 
                        = ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size)) 
                           | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
                        = (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                        = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                        = ((0xffff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                              << 8U));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xff00ffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                  << 0x10U));
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
                    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                  << 0x18U));
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                  << 8U));
                    } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else {
                vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
                vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
                }
                if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
                }
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 1U;
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                        >> 2U))) {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
                }
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
            vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = 0U;
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
            }
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                    >> 2U))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
                vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = 0x27fU;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = 0U;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = 0U;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 1U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr = 0U;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 1U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 = 0U;
        vlSelf->num_csn = 0xffU;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = 3U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr = 0U;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                                                  >> 3U)))
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra;
            }
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra];
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_ena) {
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
        }
        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 8U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 8U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                                >> 0x10U));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0x10U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_dina 
                       >> 0x18U);
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 1U;
                vlSelf->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0x18U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra;
            }
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra];
        }
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea)))))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg
                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_addra];
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = 0U;
    } else if (vlSelf->ram_ren) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur)));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr = 0x22U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 = 0ULL;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr = 1U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd = 8U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_req = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
            = (0xfffffff9U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
            = (0xfe00003fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
            = (0xefffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
            = (0xfffffff9U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
            = (0xfe00003fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
            = (0xefffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry 
            = (0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry 
            = (0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer = 0U;
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
            = ((0x38U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)) 
               | ((4U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                         << 1U)) | ((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                                             >> 5U)))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
            = ((0x27U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)) 
               | ((0x10U & (VL_REDXOR_8((0x28U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr))) 
                            << 4U)) | (8U & (VL_REDXOR_8(
                                                         (0x24U 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr))) 
                                             << 3U))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
            = ((0x1fU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)) 
               | (0x20U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                           << 1U)));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0xf8U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | ((4U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                         << 1U)) | ((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 7U)))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0xe7U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | ((0x10U & (VL_REDXOR_8((0x88U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr))) 
                            << 4U)) | (8U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                             << 1U))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0x9fU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | ((0x40U & (VL_REDXOR_8((0xa0U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr))) 
                            << 6U)) | (0x20U & (VL_REDXOR_8(
                                                            (0x90U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr))) 
                                                << 5U))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0x7fU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x80U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                           << 1U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 
            = (1ULL + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0xf8U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | ((4U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                         << 1U)) | ((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 7U)))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0xe7U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | ((0x10U & (VL_REDXOR_8((0x88U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr))) 
                            << 4U)) | (8U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                             << 1U))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0x9fU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | ((0x40U & (VL_REDXOR_8((0xa0U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr))) 
                            << 6U)) | (0x20U & (VL_REDXOR_8(
                                                            (0x90U 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr))) 
                                                << 5U))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0x7fU & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x80U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                           << 1U)));
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state = 0U;
            }
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = 0U;
                }
            }
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_rvalid) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bready))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter 
                = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter);
        }
        if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x16U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter 
                = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter);
        }
        if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x14U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter 
                = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter);
        }
        if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x13U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter 
                = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter);
        }
        if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x15U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter 
                = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter);
        }
        if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x17U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter 
                = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter);
        }
        if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x18U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter 
                = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter);
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en) {
            if (((0x15U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                            >> 0x1aU)) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_full)))) {
                vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 
                    = (0x3fffffffU & ((IData)(1U) + 
                                      ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
                                        << 0x1eU) | 
                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
                                        >> 2U))));
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = 1U;
                vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)));
            } else if (((0x13U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 0x1aU)) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_empty)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr 
                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr) 
                             - (IData)(1U)));
            }
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid 
                    = (vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid 
                       | (0xffffffffULL & ((IData)(1U) 
                                           << (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index))));
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid 
                    = ((~ ((IData)(1U) << (0x1fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            >> 8U)))) 
                       & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid);
            }
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                = (0xfffffff8U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                    = (8U | (0xffffffe7U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd));
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                = ((0xfffffff8U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                   | (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd));
            if ((0x3fU == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                    >> 0x10U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                    = (0x10U | (0xffffffe7U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd));
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                = ((0xfffffe00U & vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                   | (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                >> 8U)));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid) 
             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state) {
                if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = 0U;
                } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) {
                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc;
                }
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_delay) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
             & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock = 0U;
        }
        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
            } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid))) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 2U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush_target;
            } else if (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok))) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid)) 
                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 4U;
                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer 
                    = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush_target;
            }
        } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 4U;
            }
        } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
             & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW1_wen) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                = ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1) 
                   | (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                            >> 8U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                = ((0xffffffc7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1) 
                   | (0x38U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                               >> 8U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                = ((0xf1ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1) 
                   | (0xe000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                    << 0x18U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 
                = ((0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1) 
                   | (0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                     << 0x18U)));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW0_wen) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                = ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0) 
                   | (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                            >> 8U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                = ((0xffffffc7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0) 
                   | (0x38U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                               >> 8U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                = ((0xf1ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0) 
                   | (0xe000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                    << 0x18U)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 
                = ((0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0) 
                   | (0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                     << 0x18U)));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
             & (0x4300U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                    << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                 >> 8U));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
             & (0x8800U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry 
                = ((0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry) 
                   | (0xffffffc0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                      << 0x18U) | (0xffffc0U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                      >> 8U)))));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
             & (0xc00U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry 
                = ((0x3fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry) 
                   | (0xffffffc0U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                      << 0x18U) | (0xffffc0U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                      >> 8U)))));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
             & (0x400U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl 
                = ((0xffffe000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl) 
                   | (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                 >> 8U)));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                   >> 0x1fU);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                   >> 0x1fU);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer 
                = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                         >> 0x19U));
        }
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bready))))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 0U;
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
                & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 1U;
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read)
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier)))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read)
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6) 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d))))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 2U)))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5) 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r) 
                                                   | (((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                                                   | ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                                                   | (((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                                       >> 1U) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d)))))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read))
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier)))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)));
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_flush_sign))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid = 0U;
    } else {
        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin)) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = 1U;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid;
        }
    }
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count)));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = ((IData)(vlSelf->aresetn) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read) 
                                           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 1U)))));
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r 
        = ((IData)(vlSelf->aresetn) & (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset))
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d))))));
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = ((IData)(vlSelf->aresetn) & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)))) 
                                       & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu))) 
                                          | ((~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) 
                                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d))))));
    if (vlSelf->debug0_wb_rf_wen) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 
            = vlSelf->debug0_wb_rf_wdata;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 
            = vlSelf->debug0_wb_rf_wnum;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v0 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v1 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v2 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v3 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [0U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v4 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [0U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [0U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v5 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [0U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [0U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v6 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v7 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v7 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v8 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [1U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v9 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [1U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v10 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [1U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [1U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v11 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [1U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [1U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [1U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [1U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [1U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v12 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [1U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [1U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [1U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [1U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [1U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v13 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v14 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v14 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v15 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [2U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v16 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [2U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v17 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [2U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [2U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v18 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [2U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [2U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [2U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [2U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [2U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v19 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [2U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [2U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [2U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [2U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [2U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v20 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v21 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v21 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v22 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [3U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v23 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [3U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v24 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [3U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [3U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v25 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [3U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [3U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [3U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [3U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [3U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v26 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [3U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [3U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [3U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [3U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [3U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v27 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v28 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v28 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v29 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [4U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v30 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [4U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v31 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [4U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [4U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v32 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [4U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [4U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [4U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [4U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [4U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v33 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [4U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [4U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [4U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [4U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [4U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v34 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v35 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v35 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v36 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [5U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v37 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [5U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v38 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [5U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [5U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v39 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [5U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [5U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [5U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [5U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [5U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v40 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [5U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [5U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [5U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [5U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [5U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v41 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (6U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v42 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v42 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v43 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [6U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v44 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [6U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v45 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [6U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [6U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v46 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [6U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [6U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [6U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [6U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [6U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v47 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [6U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [6U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [6U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [6U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [6U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v48 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v49 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v49 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v50 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [7U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v51 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [7U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v52 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [7U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [7U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v53 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [7U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [7U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [7U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [7U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [7U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v54 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [7U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [7U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [7U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [7U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [7U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v55 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v56 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v56 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v57 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [8U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v58 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [8U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v59 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [8U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [8U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v60 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [8U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [8U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [8U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [8U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [8U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v61 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [8U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [8U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [8U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [8U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [8U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v62 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (9U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v63 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v63 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v64 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [9U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v65 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [9U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v66 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [9U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                           [9U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                              >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v67 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [9U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [9U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                               >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [9U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [9U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [9U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v68 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [9U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                          [9U] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [9U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                              [9U] == (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                    << 1U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                      >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [9U] >> 0xaU)) == 
                        (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                   >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v69 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0xaU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v70 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v70 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v71 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0xaU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v72 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0xaU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v73 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xaU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0xaU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                  >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v74 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0xaU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0xaU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xaU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xaU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xaU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v75 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xaU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [0xaU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xaU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xaU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xaU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v76 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0xbU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v77 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v77 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v78 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0xbU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v79 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0xbU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v80 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xbU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0xbU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                  >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v81 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0xbU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0xbU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xbU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xbU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xbU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v82 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xbU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [0xbU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xbU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xbU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xbU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v83 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0xcU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v84 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v84 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v85 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0xcU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v86 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0xcU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v87 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xcU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0xcU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                  >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v88 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0xcU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0xcU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xcU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xcU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xcU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v89 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xcU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [0xcU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xcU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xcU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xcU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v90 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0xdU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v91 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v91 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v92 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0xdU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v93 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0xdU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v94 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xdU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0xdU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                  >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v95 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0xdU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0xdU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xdU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xdU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xdU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v96 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xdU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [0xdU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xdU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xdU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xdU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v97 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0xeU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v98 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v98 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v99 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0xeU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v100 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0xeU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v101 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xeU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0xeU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                  >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v102 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0xeU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0xeU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xeU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xeU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xeU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v103 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xeU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [0xeU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xeU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xeU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xeU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v104 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0xfU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v105 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v105 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v106 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0xfU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v107 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0xfU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v108 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xfU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0xfU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                  >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v109 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0xfU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0xfU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xfU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xfU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xfU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v110 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0xfU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                            [0xfU] == (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0xfU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                [0xfU] == (0x7ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                               << 1U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                 >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0xfU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v111 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v112 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v112 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v113 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x10U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v114 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x10U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v115 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x10U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x10U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v116 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x10U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x10U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x10U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x10U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x10U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v117 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x10U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x10U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x10U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x10U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x10U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v118 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x11U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v119 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v119 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v120 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x11U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v121 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x11U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v122 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x11U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x11U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v123 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x11U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x11U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x11U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x11U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x11U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v124 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x11U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x11U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x11U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x11U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x11U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v125 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x12U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v126 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v126 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v127 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x12U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v128 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x12U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v129 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x12U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x12U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v130 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x12U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x12U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x12U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x12U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x12U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v131 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x12U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x12U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x12U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x12U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x12U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v132 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x13U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v133 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v133 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v134 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x13U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v135 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x13U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v136 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x13U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x13U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v137 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x13U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x13U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x13U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x13U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x13U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v138 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x13U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x13U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x13U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x13U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x13U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v139 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x14U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v140 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v140 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v141 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x14U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v142 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x14U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v143 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x14U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x14U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v144 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x14U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x14U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x14U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x14U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x14U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v145 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x14U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x14U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x14U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x14U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x14U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v146 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x15U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v147 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v147 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v148 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x15U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v149 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x15U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v150 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x15U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x15U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v151 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x15U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x15U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x15U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x15U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x15U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v152 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x15U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x15U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x15U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x15U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x15U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v153 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x16U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v154 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v154 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v155 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x16U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v156 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x16U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v157 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x16U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x16U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v158 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x16U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x16U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x16U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x16U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x16U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v159 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x16U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x16U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x16U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x16U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x16U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v160 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x17U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v161 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v161 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v162 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x17U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v163 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x17U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v164 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x17U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x17U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v165 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x17U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x17U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x17U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x17U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x17U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v166 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x17U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x17U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x17U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x17U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x17U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v167 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x18U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v168 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v168 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v169 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x18U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v170 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x18U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v171 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x18U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x18U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v172 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x18U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x18U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x18U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x18U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x18U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v173 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x18U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x18U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x18U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x18U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x18U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v174 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x19U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v175 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v175 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v176 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x19U]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v177 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x19U]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v178 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x19U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x19U] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v179 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x19U]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x19U] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x19U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x19U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x19U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v180 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x19U] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x19U] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x19U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x19U] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x19U] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v181 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x1aU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v182 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v182 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v183 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x1aU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v184 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x1aU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v185 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1aU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x1aU] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v186 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x1aU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x1aU] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1aU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1aU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1aU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v187 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1aU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x1aU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1aU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1aU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1aU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v188 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x1bU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v189 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v189 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v190 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x1bU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v191 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x1bU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v192 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1bU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x1bU] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v193 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x1bU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x1bU] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1bU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1bU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1bU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v194 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1bU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x1bU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1bU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1bU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1bU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v195 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x1cU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v196 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v196 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v197 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x1cU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v198 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x1cU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v199 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1cU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x1cU] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v200 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x1cU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x1cU] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1cU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1cU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1cU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v201 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1cU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x1cU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1cU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1cU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1cU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v202 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x1dU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v203 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v203 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v204 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x1dU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v205 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x1dU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v206 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1dU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x1dU] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v207 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x1dU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x1dU] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1dU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1dU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1dU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v208 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1dU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x1dU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1dU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1dU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1dU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v209 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x1eU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v210 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v210 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v211 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x1eU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v212 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x1eU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v213 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1eU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x1eU] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v214 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x1eU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x1eU] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1eU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1eU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1eU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v215 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1eU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x1eU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1eU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1eU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1eU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v216 = 1U;
            }
        }
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) 
         & (0x1fU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index)))) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v217 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e;
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v217 = 1U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en) {
        if (((0U == (IData)(vlSelf->debug0_wb_rf_wnum)) 
             | (1U == (IData)(vlSelf->debug0_wb_rf_wnum)))) {
            vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v218 = 1U;
        } else if ((2U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                [0x1fU]) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v219 = 1U;
            }
        } else if ((3U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                       [0x1fU]))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v220 = 1U;
            }
        } else if ((4U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1fU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                              [0x1fU] == (0x3ffU & 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x15U))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v221 = 1U;
            }
        } else if ((5U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if ((((~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                   [0x1fU]) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                               [0x1fU] == (0x3ffU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1fU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1fU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1fU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v222 = 1U;
            }
        } else if ((6U == (IData)(vlSelf->debug0_wb_rf_wnum))) {
            if (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                  [0x1fU] | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                             [0x1fU] == (0x3ffU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x15U)))) 
                 & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                     [0x1fU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                 [0x1fU] == (0x7ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                 << 1U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                   >> 0x1fU))))
                     : ((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                   [0x1fU] >> 0xaU)) 
                        == (0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 9U)))))) {
                vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v223 = 1U;
            }
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
            = (0xfffffffcU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                               << 0x18U) | (0xfffffcU 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                               >> 8U))));
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en) {
        if ((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval)) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
                   - (IData)(1U));
        } else if ((0U == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval)) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
                = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)
                    ? (0xfffffffcU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)
                    : 0xffffffffU);
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 
            = (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1);
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 
            = (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                           >> 8U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 
            = (0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                           >> 8U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 
            = (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0);
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                     >> 1U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                     >> 1U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 
            = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                     >> 4U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 
            = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                     >> 4U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 
            = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                     >> 2U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 
            = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                     >> 2U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 
            = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                     >> 6U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 
            = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
               >> 0xdU);
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 
            = (0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid);
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
        vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 
            = (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                        >> 0x18U));
        vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = 1U;
        vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin))) {
        __Vtemp_h8a7e2068__0[4U] = ((0x40U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                               & (~ 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h) 
                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w) 
                                                      | ((0x16U 
                                                          == 
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                           >> 0x1aU)) 
                                                         | ((0x17U 
                                                             == 
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                              >> 0x1aU)) 
                                                            | ((0x18U 
                                                                == 
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                 >> 0x1aU)) 
                                                               | ((0x19U 
                                                                   == 
                                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                    >> 0x1aU)) 
                                                                  | ((0x1aU 
                                                                      == 
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                       >> 0x1aU)) 
                                                                     | ((0x1bU 
                                                                         == 
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                          >> 0x1aU)) 
                                                                        | ((0x14U 
                                                                            == 
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                             >> 0x1aU)) 
                                                                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall) 
                                                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar))))))))))))))))))))) 
                                              << 6U)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w) 
                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))))) 
                                        << 5U) | ((0x15U 
                                                   == 
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU))
                                                   ? 1U
                                                   : 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__dst_is_rj)
                                                       ? 
                                                      ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                        << 0x1bU) 
                                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 5U))
                                                       : 
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
        __Vtemp_hbefd165a__0[4U] = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mem_sign_exted) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w))))) 
                                     << 0xaU) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__src2_is_4) 
                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i))) 
                                                  << 9U) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__need_ui5) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti) 
                                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui) 
                                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi) 
                                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori) 
                                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori) 
                                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi) 
                                                                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i) 
                                                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h53f2a534__0))))))))))))))))))))) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__src2_is_4) 
                                                        << 7U) 
                                                       | __Vtemp_h8a7e2068__0[4U]))));
        __Vtemp_hd195d21a__0[4U] = ((0xfffff800U & 
                                     ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hb469ad25__0) 
                                        & (0x60000U 
                                           == (0xf8000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                                       << 0x18U) | 
                                      ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hb469ad25__0) 
                                         & (0x68000U 
                                            == (0xf8000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w) 
                                         << 0x16U) 
                                        | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)) 
                                            << 0x15U) 
                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                               << 0x14U) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w)) 
                                                  << 0x13U) 
                                                 | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)) 
                                                     << 0x12U) 
                                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or) 
                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                                        << 0x11U) 
                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor) 
                                                           << 0x10U) 
                                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and) 
                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi)) 
                                                              << 0xfU) 
                                                             | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu) 
                                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                                                 << 0xeU) 
                                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w) 
                                                                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w) 
                                                                                | ((0x13U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                | ((0x15U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h53f2a534__0))))))))))))))))) 
                                                                         << 0xbU))))))))))))))) 
                                    | __Vtemp_hbefd165a__0[4U]);
        __Vtemp_h1d9908d3__0[5U] = ((((1U & (IData)(
                                                    ((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                                       >> 0x20U) 
                                                      & (1ULL 
                                                         | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                            >> 0x20U))) 
                                                     | ((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                          >> 0x20U) 
                                                         & (1ULL 
                                                            | ((QData)((IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                                >> 0x20U))) 
                                                               >> 0x20U))) 
                                                        | (((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__dst_is_rj))) 
                                                            >> 0x20U) 
                                                           & (1ULL 
                                                              | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)) 
                                                                 >> 0x20U)))))))
                                       ? (((IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                          | (((IData)(
                                                      (0x1ffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                         >> 0x20U))) 
                                             | ((IData)(
                                                        (0x1ffffffffULL 
                                                         & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__dst_is_rj))))) 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)))
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)
                                           ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)
                                           : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data)) 
                                     << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn) 
                                                << 1U) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp)));
        __Vtemp_h1d9908d3__0[6U] = (((1U & (IData)(
                                                   ((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                                      >> 0x20U) 
                                                     & (1ULL 
                                                        | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                           >> 0x20U))) 
                                                    | ((((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                         >> 0x20U) 
                                                        & (1ULL 
                                                           | ((QData)((IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                               >> 0x20U))) 
                                                              >> 0x20U))) 
                                                       | (((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__dst_is_rj))) 
                                                           >> 0x20U) 
                                                          & (1ULL 
                                                             | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)) 
                                                                >> 0x20U)))))))
                                      ? (((IData)((0x1ffffffffULL 
                                                   & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                         | (((IData)(
                                                     (0x1ffffffffULL 
                                                      & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                        >> 0x20U))) 
                                            | ((IData)(
                                                       (0x1ffffffffULL 
                                                        & (- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__dst_is_rj))))) 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)))
                                      : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)
                                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)
                                          : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data)) 
                                    >> 0x1eU);
        __Vtemp_hbeec66b0__0[6U] = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                     << 0x1cU) | ((0xfff80000U 
                                                   & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                                                       << 0x1bU) 
                                                      | ((0x4000000U 
                                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)) 
                                                             << 0x1aU)) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall) 
                                                                << 0x18U) 
                                                               | ((0xf00000U 
                                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                      << 0x14U)) 
                                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int) 
                                                                     << 0x13U))))))) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__csr_mask) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__csr_we) 
                                                         << 0x11U) 
                                                        | ((0x1fff8U 
                                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                               >> 7U)) 
                                                           | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h6983a416__0) 
                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__dst_is_rj) 
                                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w) 
                                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w) 
                                                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w))))) 
                                                               << 2U) 
                                                              | __Vtemp_h1d9908d3__0[6U]))))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U];
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_hef9191ce__0[1U];
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
            = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[1U]))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U] 
            = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h7006bcfa__0[1U]))) 
                       >> 0x20U));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            = ((0xc0000000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h))) 
                                << 0x1fU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b))) 
                                             << 0x1eU))) 
               | ((0xfc000000U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu)) 
                                   << 0x1dU) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu)) 
                                                 << 0x1cU) 
                                                | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu)) 
                                                    << 0x1bU) 
                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w) 
                                                      << 0x1aU))))) 
                  | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w) 
                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w)))) 
                      << 0x19U) | __Vtemp_hd195d21a__0[4U])));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
            = __Vtemp_h1d9908d3__0[5U];
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                << 0x1fU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch) 
                              << 0x1eU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w) 
                                            << 0x1dU) 
                                           | __Vtemp_hbeec66b0__0[6U])));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle) 
                << 0xbU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
                             << 0xaU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
                                          << 9U) | 
                                         ((0x100U & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            << 3U)) 
                                          | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____VdfgTmp_h1c4a3e54__0)) 
                                              << 7U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mem_sign_exted) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd) 
                                                             << 2U) 
                                                            | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill) 
                                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd) 
                                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb) 
                                                                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn) 
                                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar)))))) 
                                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill))))))))))));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid) {
        __Vtemp_h18a03ea0__0[2U] = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil)) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis)) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi)) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme)) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr)) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem)) 
                                                              << 0x3aU) 
                                                             | (0x3ffffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U])) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U])) 
                                                                       << 0x12U) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])) 
                                                                         >> 0xeU))))))))))) 
                                     << 7U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp) 
                                                << 6U) 
                                               | (0x3fU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])));
        __Vtemp_h18a03ea0__0[3U] = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil)) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis)) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi)) 
                                                     << 0x3dU) 
                                                    | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme)) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr)) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem)) 
                                                              << 0x3aU) 
                                                             | (0x3ffffffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U])) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U])) 
                                                                       << 0x12U) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])) 
                                                                         >> 0xeU))))))))))) 
                                     >> 0x19U) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil)) 
                                                             << 0x3fU) 
                                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis)) 
                                                                << 0x3eU) 
                                                               | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi)) 
                                                                   << 0x3dU) 
                                                                  | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme)) 
                                                                      << 0x3cU) 
                                                                     | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr)) 
                                                                         << 0x3bU) 
                                                                        | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem)) 
                                                                            << 0x3aU) 
                                                                           | (0x3ffffffffffffffULL 
                                                                              & (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U])) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U])) 
                                                                                << 0x12U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])) 
                                                                                >> 0xeU)))))))))) 
                                                           >> 0x20U)) 
                                                  << 7U));
        __Vtemp_h8e423db9__0[4U] = ((0x180U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                               >> 1U)) 
                                    | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil)) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis)) 
                                                     << 0x3eU) 
                                                    | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi)) 
                                                        << 0x3dU) 
                                                       | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme)) 
                                                           << 0x3cU) 
                                                          | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr)) 
                                                              << 0x3bU) 
                                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem)) 
                                                                 << 0x3aU) 
                                                                | (0x3ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U])) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U])) 
                                                                          << 0x12U) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])) 
                                                                            >> 0xeU)))))))))) 
                                                >> 0x20U)) 
                                       >> 0x19U));
        __Vtemp_h30ebc3f5__0[6U] = ((0x1800000U & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                   << 5U)) 
                                    | ((((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                         & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT____VdfgTmp_h63343402__0))) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last))) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem) 
                                         << 0x15U) 
                                        | ((0x1c0000U 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                               << 3U)) 
                                           | (((IData)(
                                                       (0x3ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U])) 
                                                            << 0x14U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U])) 
                                                              >> 0xcU)))) 
                                               >> 0x10U) 
                                              | ((IData)(
                                                         ((0x3ffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U])) 
                                                                 >> 0xcU))) 
                                                          >> 0x20U)) 
                                                 << 0x10U))))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U] 
            = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ms_forward_data)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U] 
            = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ms_forward_data)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))) 
                       >> 0x20U));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            = __Vtemp_h18a03ea0__0[2U];
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
            = __Vtemp_h18a03ea0__0[3U];
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
            = ((0xfffffe00U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                << 0x12U) | (0x3fe00U 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                >> 0xeU)))) 
               | __Vtemp_h8e423db9__0[4U]);
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
            = (((IData)((0x3ffffffffULL & (((QData)((IData)(
                                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U])) 
                                            << 0x14U) 
                                           | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U])) 
                                              >> 0xcU)))) 
                << 0x10U) | ((0xf800U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h295b4e0a__0 
                                                  >> 0x20U)) 
                                         << 0xbU)) 
                             | (((IData)((0U != vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1)) 
                                 << 0xaU) | ((0x200U 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                 >> 2U)) 
                                             | (0x1ffU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                   >> 0xeU))))));
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
            = ((0x2000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                              << 3U)) | __Vtemp_h30ebc3f5__0[6U]);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst = 1U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_arsize;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_araddr;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 8U)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                               >> 4U)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                       >> 0xdU));
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                & (IData)(vlSelf->ram_ren))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst = 1U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_arsize;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen));
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 8U)));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                               >> 4U)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = 1U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_awsize;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_awaddr;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 8U)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                               >> 4U)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                       >> 0xdU));
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = 1U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_awsize;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen));
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 8U)));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                               >> 4U)));
    }
    if (vlSelf->ram_ren) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag))))) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
        if ((1U & (~ (IData)(vlSelf->aresetn)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = 0ULL;
        }
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = 0x14U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = 4U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = 0x12345678U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = 4U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
    } else if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1bU;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                    }
                } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1aU;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                      & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                     & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                            & (0xd0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                        = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                           - (IData)(1U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                             & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                            & (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                            & (0x15U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)))) {
                    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                               & ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM) 
                                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL)))))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
                    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                                & (0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                ? ((0x3ff0003fffULL 
                                    & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                   | ((QData)((IData)(
                                                      (0x3fffU 
                                                       & ((IData)(1U) 
                                                          + (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                     >> 0xeU)))))) 
                                      << 0xeU)) : (
                                                   (((1U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 8U))) 
                                                     | (2U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                            >> 8U)))) 
                                                    | (3U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                           >> 8U))))
                                                    ? 
                                                   ((0x30003fffffULL 
                                                     & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                    | ((QData)((IData)(
                                                                       (0x3fffU 
                                                                        & ((IData)(1U) 
                                                                           + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                       << 0x16U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 8U)))
                                                     ? 
                                                    ((0x3c003fffffULL 
                                                      & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                     | ((QData)((IData)(
                                                                        (0xfffU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                        << 0x16U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 8U)))
                                                      ? 
                                                     ((0x3c00ffffffULL 
                                                       & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                      | ((QData)((IData)(
                                                                         (0x3ffU 
                                                                          & ((IData)(1U) 
                                                                             + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x18U)))))) 
                                                         << 0x18U))
                                                      : 
                                                     ((0x3001ffffffULL 
                                                       & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                      | ((QData)((IData)(
                                                                         (0x7ffU 
                                                                          & ((IData)(1U) 
                                                                             + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x19U)))))) 
                                                         << 0x19U))))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x19U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x18U;
            }
        } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if (((0xaU != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                         & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                            = (((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                  | (0xaU == (0xfU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U)))) 
                                 | (0xbU == (0xfU & 
                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U)))) 
                                | (0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))))
                                ? 2U : 3U);
                    } else if (((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xd0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                & (0xd0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                                ? 0x17U : 0x18U);
                    }
                } else if ((0x15U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x16U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     >= (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                 - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                } else if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
                } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    }
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x15U;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                }
            } else if (((0xaU != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                    = (7U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xcU));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 1U;
            } else if ((0x70U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                         > (0xffU & (((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                                     - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                        - (IData)(1U)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                    } else if ((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                        - (IData)(1U)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                            = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM) 
                                     - (IData)(1U)));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffffff00ULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffff00ffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffff00ffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffff00ffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xff00ffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((6U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        }
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x16U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x12U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x12U;
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT))) {
                if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) 
                              & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                             & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                               < (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                                             - (IData)(4U)))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
                }
                if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                      > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                 - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                            = ((4U <= vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                   - (IData)(4U)) : 0U);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                            = (0x3fffU & ((4U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT)
                                           : ((IData)(4U) 
                                              + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                    }
                }
            } else if (((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x10U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                        ? 0x11U : 0x12U);
            } else if (((0x12U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x15U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                     & (0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x13U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            }
        } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                    & (0x80U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
        } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                = ((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                     >> 8U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                     >> 8U)))) 
                    | (0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                        >> 8U)))) ? 3U
                    : ((((0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                         >> 8U))) | 
                         (0xcU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                           >> 8U)))) 
                        | (0xdU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                            >> 8U))))
                        ? 4U : 5U));
        } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
            if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                  >> 9U)))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                            = (0x3fffU & ((IData)((
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0x7fffffU 
                                               & ((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                              >> 8U)))
                                                   : 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                    ? (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U)))))))) 
                              << 8U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)(((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0x7fffffU 
                                               & ((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                              >> 8U)))
                                                   : 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                    ? (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U)))))))) 
                              << 8U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)(((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            } else if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xdU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xdU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffe000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xcU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x1fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x1fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = ((0x3ffffff000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                       | (IData)((IData)(((IData)((0x200U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                          << 0xbU))));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                       | ((QData)((IData)((0xfffffU 
                                           & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                         >> 0x10U)))))) 
                          << 0x10U));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                    = (0x3fffU & ((IData)((0x300U == 
                                           (0x300U 
                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                       > ((0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0x10U)) 
                                          - (0xfffU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                       ? ((0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0x10U)) 
                                          - (0xfffU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                       : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                   : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x7ffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x7ffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
            }
        }
    } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            } else if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            > (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                        - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                             < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                            & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                                 - (IData)(1U)));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(2U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0xaU;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        }
    } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                          != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT)) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_)))) {
                        if ((1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                         & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                                        & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                          < (0x3fffU 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(4U)))))) 
                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))) {
                            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                 == (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(1U))))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
                            }
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                        }
                        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                              > (0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                             - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                        } else if (((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                        } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                 != (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(1U))))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                    = (0x3fffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count)));
                            }
                            if ((0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                       - (IData)(1U));
                            }
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                            if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffffff00U 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffff00ffU 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xff00ffffU 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                            }
                        }
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        if ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                        }
                    }
                } else if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                }
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 7U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        if ((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                      >> 9U)))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                = (0x3fffffff00ULL 
                                   & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                = ((0x3f800000ffULL 
                                    & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                   | ((QData)((IData)(
                                                      (0x7fffffU 
                                                       & ((IData)(
                                                                  (0x200U 
                                                                   == 
                                                                   (0x300U 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                      >> 8U)))
                                                           : 
                                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                            ? (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                       >> 8U))
                                                            : 
                                                           ((IData)(1U) 
                                                            + (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                       >> 8U)))))))) 
                                      << 8U));
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                = (0x3fffU & ((IData)(
                                                      ((0x300U 
                                                        == 
                                                        (0x300U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                   ? 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x10U) 
                                                     - 
                                                     (0xfU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                   : 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x100U) 
                                                     - 
                                                     (0xffU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                        }
                    } else if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xdU))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x1fffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffc000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xdU))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x1fffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffe000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xcU))));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3ffffff000ULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xbU))));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0xfffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0xfffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7ffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7ffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                    ? 6U : 4U);
        }
    } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                  & (0x30U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                 | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                       >> 0xbU)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                        ? 3U : 4U);
            } else if (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x30U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x30U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                    = ((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                         >> 8U))) | 
                         (0xaU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                           >> 8U)))) 
                        | (0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                            >> 8U))))
                        ? 3U : ((((0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                  | (0xcU == (0xfU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U)))) 
                                 | (0xdU == (0xfU & 
                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U))))
                                 ? 4U : 5U));
            }
        } else if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                 > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                            - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                        > (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                    - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                        >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                         < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                        & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                             - (IData)(1U)));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(2U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 2U;
        }
    } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
             == (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                    == ((0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                        - (IData)(1U)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     < (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                       > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     <= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
            if (((IData)((0U != (6U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                 & (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                     | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                    | (0x50U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                        ? 3U : 0x10U);
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                         >> 2U) & (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x10U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if ((0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0xffU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            }
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
        }
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                        >> 8U));
        if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            }
            if ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
            }
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
            if ((IData)((((((0x202U == (0x202U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                          & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xbU)) & ((~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                              >> 8U)) 
                                          | (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                               >> 8U) 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                         >> 8U))) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 1U) & (IData)((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                              >> 8U))) 
                          & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xbU)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                    = (IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)));
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((IData)((((((0x204U == (0x204U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                                 & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                    >> 0xbU)) & ((~ 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                   >> 8U)) 
                                                 | (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                      >> 8U) 
                                                     & (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                >> 8U))) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                            >> 0xbU)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                 >> 8U)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                    = (IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)));
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                            >> 0xbU)) & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                    >> 8U))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
                    = (1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                             >> 4U));
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 5U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x90U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 6U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xffU;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 7U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((((((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                               | (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                              | (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                             | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                            | (0x50U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                           | (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                          | (0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                         | (0xffU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            } else {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                    = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
                if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                }
            }
        } else {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            }
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)))) {
                if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0x3fffffffffULL;
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                }
            }
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                         & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE) 
                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                          >> 0xdU)));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_buffer 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras
            [(7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr) 
                    - (IData)(1U)))];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (1U & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                         [0U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                  >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffffdU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (2U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [1U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0x16U)) 
                        << 1U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffffbU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (4U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [2U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0x16U)) 
                        << 2U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffff7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (8U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [3U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0x16U)) 
                        << 3U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffffefU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x10U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [4U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0x16U)) 
                           << 4U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffffdfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x20U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [5U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0x16U)) 
                           << 5U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffffbfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x40U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [6U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0x16U)) 
                           << 6U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffff7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x80U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [7U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0x16U)) 
                           << 7U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffeffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x100U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [8U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                            << 8U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffdffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x200U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [9U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                            << 9U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffbffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x400U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [0xaU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 0xcU) : 
                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                              >> 0x16U)) << 0xaU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffff7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x800U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [0xbU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 0xcU) : 
                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                              >> 0x16U)) << 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffefffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x1000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xcU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0xcU) : 
                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                               >> 0x16U)) << 0xcU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffdfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x2000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xdU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0xcU) : 
                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                               >> 0x16U)) << 0xdU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffbfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x4000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xeU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0xcU) : 
                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                               >> 0x16U)) << 0xeU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffff7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x8000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xfU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0xcU) : 
                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                               >> 0x16U)) << 0xfU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffeffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x10000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x10U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 0xcU)
                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0x16U)) << 0x10U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffdffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x20000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x11U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 0xcU)
                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0x16U)) << 0x11U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffbffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x40000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x12U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 0xcU)
                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0x16U)) << 0x12U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfff7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x80000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x13U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 0xcU)
                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0x16U)) << 0x13U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffefffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x100000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x14U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xcU)
                                 : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x16U)) << 0x14U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffdfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x200000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x15U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xcU)
                                 : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x16U)) << 0x15U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffbfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x400000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x16U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xcU)
                                 : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x16U)) << 0x16U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xff7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x800000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x17U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xcU)
                                 : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x16U)) << 0x17U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfeffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x1000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x18U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xcU)
                                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                     >> 0x16U)) << 0x18U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfdffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x2000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x19U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xcU)
                                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                     >> 0x16U)) << 0x19U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfbffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x4000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x1aU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xcU)
                                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                     >> 0x16U)) << 0x1aU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xf7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x8000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x1bU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xcU)
                                  : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                     >> 0x16U)) << 0x1bU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xefffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x10000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1cU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0xcU)
                                   : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0x16U)) << 0x1cU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xdfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x20000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1dU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0xcU)
                                   : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0x16U)) << 0x1dU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xbfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x40000000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1eU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0xcU)
                                   : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0x16U)) << 0x1eU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                    [0x1fU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 0x16U)) 
                  << 0x1fU));
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc;
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
         & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop)))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas;
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
         & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop)))) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go)) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_flush_sign))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_rd_buff = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable = 0U;
    }
    if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
                | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable))) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__complete_delay)))) {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count = 0x20U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r = 0ULL;
    } else if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count = 0xf0U;
    } else {
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count 
            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count) 
                        - (IData)(1U)));
        if ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_d 
                           >> 0x20U)))) {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
                = ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS)) 
                   << 1U);
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__result_r;
        } else {
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
                = (1ULL | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS)) 
                           << 1U));
            vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_d;
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_flush_sign))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid));
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x1a00U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh 
            = ((0xfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh) 
               | (0xfffff000U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                  << 0x18U) | (0xfff000U 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                  >> 8U)))));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x1900U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl 
            = ((0xfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl) 
               | (0xfffff000U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                  << 0x18U) | (0xfff000U 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                  >> 8U)))));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x3300U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x3200U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x3100U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x3000U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x10000U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x10100U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x700U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    } else if ((1U & ((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                          >> 0x17U)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT____VdfgTmp_h3abe2031__0[1U] 
                                        >> 0x1eU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv 
            = ((0x800000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])
                ? 0U : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT____VdfgTmp_h3abe2031__0[1U] 
                         << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT____VdfgTmp_h3abe2031__0[0U] 
                                   >> 0x1eU)));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era 
            = vlSelf->debug0_wb_pc;
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                & (0x600U == (0x3fff00U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wdata;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb 
            = vlSelf->simu_top__DOT__soc__DOT__cpu_wstrb;
    }
    __Vtableidx9 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data) 
                     << 1U) | (IData)(vlSelf->aresetn));
    vlSelf->num_a_g = Vsimu_top__ConstPool__TABLE_h82244acd_0
        [__Vtableidx9];
    if ((((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
          & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
             | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer)))) 
         & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0))))) {
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                    ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                     >> 5U)]) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                                 << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index))));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                    ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                     >> 5U)]) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                                 << (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index))));
        }
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state) {
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_way)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index) 
                                                                                >> 5U)] 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index) 
                    >> 5U)] | ((IData)(1U) << (0x1fU 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index))));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_way) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index) 
                                                                                >> 5U)] 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index) 
                    >> 5U)] | ((IData)(1U) << (0x1fU 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index))));
        }
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (1U & ((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                         [0U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                  >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffffdU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (2U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [1U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0x16U)) 
                        << 1U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffffbU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (4U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [2U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0x16U)) 
                        << 2U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffff7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (8U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [3U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0x16U)) 
                        << 3U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffffefU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x10U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [4U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0x16U)) 
                           << 4U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffffdfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x20U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [5U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0x16U)) 
                           << 5U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffffbfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x40U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [6U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0x16U)) 
                           << 6U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffff7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x80U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [7U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0x16U)) 
                           << 7U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffeffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x100U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [8U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                            << 8U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffdffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x200U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [9U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xcU) : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                            << 9U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffbffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x400U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [0xaU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                         >> 0xcU) : 
                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                              >> 0x16U)) << 0xaU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffff7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x800U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [0xbU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                         >> 0xcU) : 
                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                              >> 0x16U)) << 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffefffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x1000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xcU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0xcU) : 
                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                               >> 0x16U)) << 0xcU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffdfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x2000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xdU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0xcU) : 
                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                               >> 0x16U)) << 0xdU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffbfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x4000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xeU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0xcU) : 
                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                               >> 0x16U)) << 0xeU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffff7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x8000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xfU]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0xcU) : 
                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                               >> 0x16U)) << 0xfU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffeffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x10000U & (((0xcU == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x10U]) ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0xcU)
                                : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0x16U)) << 0x10U)));
    }
}
