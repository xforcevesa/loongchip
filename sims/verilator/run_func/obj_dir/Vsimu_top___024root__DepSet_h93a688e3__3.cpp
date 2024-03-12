// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024root.h"

extern const VlUnpacked<CData/*0:0*/, 2048> Vsimu_top__ConstPool__TABLE_he9a8fcb9_0;

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__3(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__3\n"); );
    // Init
    SData/*10:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0xcU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [1U] 
                                                      >> 0xcU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [2U] 
                                                        >> 0xcU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0xdU))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [1U] 
                                                             >> 0xdU))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0xdU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0xdU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0xdU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [1U] 
                                                             >> 0xdU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0xdU)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [1U] 
                                                               >> 0xdU))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [2U] 
                                                                 >> 0xdU)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0xdU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [1U] 
                                                      >> 0xdU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [2U] 
                                                        >> 0xdU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0xeU))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [1U] 
                                                             >> 0xeU))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0xeU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0xeU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0xeU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [1U] 
                                                             >> 0xeU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0xeU)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [1U] 
                                                               >> 0xeU))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [2U] 
                                                                 >> 0xeU)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0xeU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [1U] 
                                                      >> 0xeU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [2U] 
                                                        >> 0xeU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0xfU))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [1U] 
                                                             >> 0xfU))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [2U] 
                                                            >> 0xfU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0xfU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0xfU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [1U] 
                                                             >> 0xfU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0xfU)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [1U] 
                                                               >> 0xfU))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [2U] 
                                                                 >> 0xfU)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0xfU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [1U] 
                                                      >> 0xfU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [2U] 
                                                        >> 0xfU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x10U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x10U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x10U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x10U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x10U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x10U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x10U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x10U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x10U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x10U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x10U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x11U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x11U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x11U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x11U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x11U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x11U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x11U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x11U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x11U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x11U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x11U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x12U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x12U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x12U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x12U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x12U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x12U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x12U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x12U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x12U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x12U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x12U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x13U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x13U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x13U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x13U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x13U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x13U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x13U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x13U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x13U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x13U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x13U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x14U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x14U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x14U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x14U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x14U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x14U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x14U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x14U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x14U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x14U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x14U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x15U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x15U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x15U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x15U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x15U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x15U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x15U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x15U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x15U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x15U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x15U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x16U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x16U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x16U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x16U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x16U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x16U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x16U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x16U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x16U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x16U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x16U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x17U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x17U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x17U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x17U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x17U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x17U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x17U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x17U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x17U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x17U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x17U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x18U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x18U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x18U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x18U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x18U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x18U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x18U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x18U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x18U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x18U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x18U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x19U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x19U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x19U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x19U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x19U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x19U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x19U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x19U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x19U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x19U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x19U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x1aU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x1aU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x1aU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1aU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x1aU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x1aU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x1aU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x1aU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x1aU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x1aU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x1aU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x1bU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x1bU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x1bU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1bU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x1bU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x1bU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x1bU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x1bU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x1bU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x1bU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x1bU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x1cU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x1cU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x1cU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1cU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x1cU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x1cU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x1cU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x1cU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x1cU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x1cU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x1cU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x1dU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x1dU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x1dU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1dU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x1dU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x1dU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x1dU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x1dU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x1dU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x1dU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x1dU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x1eU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x1eU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x1eU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1eU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x1eU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x1eU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x1eU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x1eU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x1eU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x1eU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x1eU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x1fU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x1fU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x1fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x1fU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x1fU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x1fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x1fU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x1fU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x1fU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x1fU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x1fU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x20U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x20U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x20U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x20U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x20U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x20U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x20U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x20U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x20U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x20U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x20U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x21U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x21U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x21U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x21U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x21U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x21U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x21U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x21U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x21U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x21U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x21U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x22U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x22U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x22U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x22U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x22U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x22U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x22U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x22U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x22U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x22U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x22U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x23U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x23U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x23U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x23U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x23U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x23U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x23U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x23U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x23U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x23U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x23U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x24U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x24U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x24U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x24U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x24U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x24U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x24U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x24U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x24U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x24U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x24U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x25U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x25U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x25U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x25U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x25U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x25U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x25U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x25U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x25U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x25U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x25U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x26U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x26U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x26U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x26U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x26U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x26U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x26U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x26U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x26U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x26U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x26U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x27U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x27U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x27U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x27U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x27U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x27U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x27U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x27U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x27U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x27U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x27U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x28U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x28U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x28U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x28U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x28U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x28U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x28U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x28U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x28U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x28U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x28U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x29U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x29U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x29U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x29U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x29U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x29U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x29U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x29U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x29U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x29U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x29U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x2aU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x2aU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x2aU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2aU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x2aU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x2aU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x2aU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x2aU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x2aU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x2aU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x2aU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x2bU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x2bU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x2bU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2bU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x2bU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x2bU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x2bU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x2bU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x2bU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x2bU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x2bU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x2cU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x2cU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x2cU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2cU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x2cU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x2cU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x2cU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x2cU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x2cU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x2cU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x2cU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x2dU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x2dU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x2dU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2dU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x2dU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x2dU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x2dU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x2dU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x2dU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x2dU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x2dU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x2eU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x2eU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x2eU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2eU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x2eU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x2eU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x2eU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x2eU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x2eU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x2eU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x2eU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x2fU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x2fU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x2fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x2fU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x2fU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x2fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x2fU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x2fU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x2fU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x2fU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x2fU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x30U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x30U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x30U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x30U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x30U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x30U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x30U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x30U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x30U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x30U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x30U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x31U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x31U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x31U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x31U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x31U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x31U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x31U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x31U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x31U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x31U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x31U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x32U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x32U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x32U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x32U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x32U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x32U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x32U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x32U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x32U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x32U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x32U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x33U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x33U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x33U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x33U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x33U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x33U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x33U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x33U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x33U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x33U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x33U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x34U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x34U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x34U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x34U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x34U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x34U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x34U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x34U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x34U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x34U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x34U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x35U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x35U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x35U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x35U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x35U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x35U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x35U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x35U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x35U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x35U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x35U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x36U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x36U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x36U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x36U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x36U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x36U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x36U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x36U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x36U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x36U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x36U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x37U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x37U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x37U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x37U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x37U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x37U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x37U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x37U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x37U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x37U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x37U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x38U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x38U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x38U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x38U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x38U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x38U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x38U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x38U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x38U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x38U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x38U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__A 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0U] >> 0x39U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [1U] 
                                                              >> 0x39U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [2U] 
                                                             >> 0x39U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0U] >> 0x39U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [2U] >> 0x39U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [1U] >> 0x39U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0U] >> 0x39U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [2U] 
                                                                  >> 0x39U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second2__B 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0U] >> 0x39U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [1U] 
                                                       >> 0x39U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [2U] 
                                                         >> 0x39U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first5__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x3bU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x3bU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x3bU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x3bU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x3bU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x3bU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x3bU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x3bU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x3bU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x3bU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x3bU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x3bU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x3bU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x3bU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x3bU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x3bU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x3bU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x3bU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x3bU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x3bU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x3bU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x3bU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x3bU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x3bU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x3aU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x3aU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x3aU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x3aU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x3aU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x3aU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x3aU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x3aU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x3aU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x3aU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x3aU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x3aU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                             [3U])) & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                  [4U])) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                 [5U]))) 
                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U])) & ((~ (IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                     [5U])) 
                                          & (IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U]))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [3U]) & (((~ (IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U])) 
                                         & (~ (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U]))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [3U]) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                           [4U]) | (IData)(
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [5U]))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 1U))) & ((~ (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [4U] 
                                                           >> 1U))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [5U] 
                                                          >> 1U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 1U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [5U] 
                                                              >> 1U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 1U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 1U)) & (((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 1U))) 
                                                 & (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [5U] 
                                                               >> 1U)))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 1U)) & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 1U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 2U))) & ((~ (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [4U] 
                                                           >> 2U))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [5U] 
                                                          >> 2U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 2U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [5U] 
                                                              >> 2U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 2U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 2U)) & (((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 2U))) 
                                                 & (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [5U] 
                                                               >> 2U)))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 2U)) & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 2U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 3U))) & ((~ (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [4U] 
                                                           >> 3U))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [5U] 
                                                          >> 3U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 3U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [5U] 
                                                              >> 3U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 3U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 3U)) & (((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 3U))) 
                                                 & (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [5U] 
                                                               >> 3U)))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 3U)) & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 3U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 4U))) & ((~ (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [4U] 
                                                           >> 4U))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [5U] 
                                                          >> 4U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 4U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [5U] 
                                                              >> 4U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 4U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 4U)) & (((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 4U))) 
                                                 & (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [5U] 
                                                               >> 4U)))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 4U)) & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 4U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 5U))) & ((~ (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [4U] 
                                                           >> 5U))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [5U] 
                                                          >> 5U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 5U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [5U] 
                                                              >> 5U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 5U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 5U)) & (((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 5U))) 
                                                 & (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [5U] 
                                                               >> 5U)))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 5U)) & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 5U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 6U))) & ((~ (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [4U] 
                                                           >> 6U))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [5U] 
                                                          >> 6U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 6U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [5U] 
                                                              >> 6U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 6U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 6U)) & (((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 6U))) 
                                                 & (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [5U] 
                                                               >> 6U)))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 6U)) & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 6U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 7U))) & ((~ (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [4U] 
                                                           >> 7U))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [5U] 
                                                          >> 7U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 7U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [5U] 
                                                              >> 7U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 7U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 7U)) & (((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 7U))) 
                                                 & (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [5U] 
                                                               >> 7U)))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 7U)) & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 7U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 8U))) & ((~ (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [4U] 
                                                           >> 8U))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [5U] 
                                                          >> 8U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 8U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [5U] 
                                                              >> 8U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 8U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 8U)) & (((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 8U))) 
                                                 & (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [5U] 
                                                               >> 8U)))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 8U)) & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 8U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 9U))) & ((~ (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [4U] 
                                                           >> 9U))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [5U] 
                                                          >> 9U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 9U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [5U] 
                                                              >> 9U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 9U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 9U)) & (((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 9U))) 
                                                 & (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [5U] 
                                                               >> 9U)))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 9U)) & ((IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [4U] 
                                                    >> 9U)) 
                                           | (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [5U] 
                                                      >> 9U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0xaU))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xaU))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [5U] 
                                                            >> 0xaU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0xaU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0xaU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xaU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0xaU)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [4U] 
                                                               >> 0xaU))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [5U] 
                                                                 >> 0xaU)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0xaU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [4U] 
                                                      >> 0xaU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [5U] 
                                                        >> 0xaU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0xbU))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xbU))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [5U] 
                                                            >> 0xbU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0xbU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0xbU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xbU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0xbU)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [4U] 
                                                               >> 0xbU))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [5U] 
                                                                 >> 0xbU)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0xbU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [4U] 
                                                      >> 0xbU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [5U] 
                                                        >> 0xbU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0xcU))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xcU))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [5U] 
                                                            >> 0xcU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0xcU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0xcU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xcU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0xcU)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [4U] 
                                                               >> 0xcU))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [5U] 
                                                                 >> 0xcU)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0xcU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [4U] 
                                                      >> 0xcU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [5U] 
                                                        >> 0xcU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0xdU))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xdU))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [5U] 
                                                            >> 0xdU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0xdU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0xdU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xdU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0xdU)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [4U] 
                                                               >> 0xdU))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [5U] 
                                                                 >> 0xdU)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0xdU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [4U] 
                                                      >> 0xdU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [5U] 
                                                        >> 0xdU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0xeU))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xeU))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [5U] 
                                                            >> 0xeU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0xeU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0xeU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xeU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0xeU)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [4U] 
                                                               >> 0xeU))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [5U] 
                                                                 >> 0xeU)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0xeU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [4U] 
                                                      >> 0xeU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [5U] 
                                                        >> 0xeU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0xfU))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xfU))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [5U] 
                                                            >> 0xfU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0xfU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0xfU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [4U] 
                                                             >> 0xfU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0xfU)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [4U] 
                                                               >> 0xfU))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [5U] 
                                                                 >> 0xfU)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0xfU)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [4U] 
                                                      >> 0xfU)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [5U] 
                                                        >> 0xfU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x10U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x10U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x10U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x10U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x10U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x10U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x10U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x10U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x10U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x10U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x10U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x10U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x11U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x11U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x11U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x11U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x11U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x11U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x11U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x11U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x11U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x11U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x11U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x11U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x12U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x12U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x12U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x12U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x12U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x12U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x12U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x12U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x12U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x12U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x12U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x12U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x13U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x13U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x13U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x13U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x13U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x13U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x13U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x13U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x13U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x13U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x13U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x13U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x14U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x14U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x14U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x14U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x14U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x14U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x14U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x14U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x14U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x14U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x14U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x14U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x15U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x15U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x15U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x15U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x15U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x15U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x15U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x15U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x15U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x15U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x15U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x15U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x16U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x16U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x16U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x16U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x16U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x16U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x16U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x16U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x16U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x16U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x16U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x16U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x17U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x17U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x17U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x17U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x17U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x17U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x17U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x17U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x17U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x17U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x17U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x17U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x18U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x18U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x18U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x18U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x18U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x18U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x18U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x18U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x18U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x18U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x18U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x18U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x19U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x19U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x19U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x19U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x19U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x19U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x19U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x19U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x19U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x19U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x19U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x19U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x1aU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x1aU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1aU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x1aU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x1aU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x1aU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x1aU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x1aU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x1aU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x1aU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x1aU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x1aU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x1bU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x1bU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1bU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x1bU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x1bU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x1bU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x1bU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x1bU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x1bU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x1bU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x1bU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x1bU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x1cU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x1cU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1cU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x1cU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x1cU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x1cU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x1cU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x1cU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x1cU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x1cU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x1cU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x1cU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x1dU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x1dU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1dU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x1dU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x1dU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x1dU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x1dU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x1dU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x1dU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x1dU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x1dU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x1dU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x1eU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x1eU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1eU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x1eU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x1eU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x1eU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x1eU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x1eU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x1eU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x1eU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x1eU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x1eU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x1fU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x1fU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x1fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x1fU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x1fU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x1fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x1fU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x1fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x1fU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x1fU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x1fU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x1fU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x20U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x20U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x20U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x20U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x20U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x20U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x20U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x20U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x20U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x20U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x20U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x20U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x21U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x21U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x21U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x21U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x21U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x21U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x21U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x21U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x21U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x21U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x21U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x21U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x22U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x22U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x22U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x22U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x22U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x22U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x22U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x22U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x22U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x22U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x22U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x22U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x23U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x23U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x23U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x23U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x23U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x23U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x23U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x23U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x23U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x23U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x23U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x23U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x24U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x24U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x24U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x24U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x24U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x24U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x24U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x24U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x24U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x24U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x24U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x24U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x25U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x25U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x25U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x25U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x25U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x25U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x25U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x25U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x25U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x25U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x25U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x25U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x26U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x26U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x26U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x26U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x26U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x26U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x26U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x26U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x26U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x26U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x26U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x26U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x27U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x27U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x27U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x27U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x27U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x27U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x27U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x27U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x27U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x27U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x27U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x27U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x28U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x28U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x28U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x28U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x28U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x28U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x28U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x28U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x28U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x28U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x28U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x28U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x29U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x29U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x29U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x29U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x29U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x29U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x29U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x29U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x29U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x29U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x29U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x29U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x2aU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x2aU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2aU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x2aU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x2aU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x2aU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x2aU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x2aU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x2aU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x2aU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x2aU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x2aU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x2bU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x2bU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2bU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x2bU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x2bU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x2bU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x2bU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x2bU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x2bU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x2bU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x2bU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x2bU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x2cU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x2cU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2cU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x2cU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x2cU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x2cU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x2cU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x2cU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x2cU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x2cU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x2cU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x2cU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x2dU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x2dU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2dU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x2dU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x2dU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x2dU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x2dU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x2dU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x2dU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x2dU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x2dU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x2dU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x2eU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x2eU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2eU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x2eU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x2eU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x2eU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x2eU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x2eU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x2eU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x2eU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x2eU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x2eU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x2fU))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x2fU))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x2fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x2fU))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x2fU))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x2fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x2fU)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x2fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x2fU)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x2fU)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x2fU)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x2fU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x30U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x30U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x30U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x30U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x30U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x30U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x30U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x30U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x30U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x30U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x30U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x30U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x31U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x31U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x31U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x31U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x31U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x31U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x31U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x31U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x31U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x31U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x31U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x31U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x32U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x32U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x32U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x32U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x32U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x32U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x32U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x32U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x32U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x32U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x32U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x32U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x33U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x33U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x33U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x33U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x33U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x33U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x33U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x33U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x33U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x33U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x33U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x33U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x34U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x34U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x34U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x34U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x34U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x34U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x34U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x34U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x34U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x34U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x34U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x34U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x35U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x35U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x35U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x35U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x35U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x35U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x35U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x35U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x35U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x35U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x35U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x35U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x36U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x36U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x36U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x36U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x36U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x36U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x36U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x36U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x36U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x36U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x36U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x36U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x37U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x37U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x37U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x37U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x37U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x37U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x37U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x37U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x37U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x37U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x37U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x37U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x38U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x38U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x38U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x38U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x38U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x38U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x38U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x38U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x38U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x38U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x38U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x38U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second4__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [3U] >> 0x39U))) & ((~ (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [4U] 
                                                              >> 0x39U))) 
                                                  & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [5U] 
                                                             >> 0x39U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [3U] >> 0x39U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [5U] >> 0x39U))) 
                      & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [4U] >> 0x39U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [3U] >> 0x39U)) & (
                                                   ((~ (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                [4U] 
                                                                >> 0x39U))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                  [5U] 
                                                                  >> 0x39U)))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second2__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [3U] >> 0x39U)) & ((IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [4U] 
                                                       >> 0x39U)) 
                                              | (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [5U] 
                                                         >> 0x39U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first4__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x3aU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x3aU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x3aU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x3aU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x3aU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x3aU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x3aU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x3aU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x3aU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x3aU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x3aU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x3aU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                             [0xcU])) & ((~ (IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                    [0xdU])) 
                                         & (IData)(
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                   [0xeU]))) 
                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU])) & ((~ (IData)(
                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                       [0xeU])) 
                                            & (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU]))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xcU]) & (((~ (IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU])) 
                                           & (~ (IData)(
                                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU]))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0xcU]) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                             [0xdU]) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                               [0xeU]))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 1U))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 1U))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [0xeU] 
                                                            >> 1U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 1U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xeU] >> 1U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 1U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 1U)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 1U))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xeU] 
                                                                 >> 1U)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 1U)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU] 
                                                      >> 1U)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU] 
                                                        >> 1U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 2U))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 2U))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [0xeU] 
                                                            >> 2U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 2U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xeU] >> 2U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 2U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 2U)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 2U))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xeU] 
                                                                 >> 2U)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 2U)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU] 
                                                      >> 2U)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU] 
                                                        >> 2U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 3U))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 3U))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [0xeU] 
                                                            >> 3U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 3U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xeU] >> 3U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 3U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 3U)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 3U))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xeU] 
                                                                 >> 3U)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 3U)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU] 
                                                      >> 3U)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU] 
                                                        >> 3U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 4U))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 4U))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [0xeU] 
                                                            >> 4U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 4U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xeU] >> 4U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 4U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 4U)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 4U))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xeU] 
                                                                 >> 4U)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 4U)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU] 
                                                      >> 4U)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU] 
                                                        >> 4U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 5U))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 5U))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [0xeU] 
                                                            >> 5U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 5U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xeU] >> 5U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 5U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 5U)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 5U))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xeU] 
                                                                 >> 5U)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 5U)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU] 
                                                      >> 5U)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU] 
                                                        >> 5U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 6U))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 6U))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [0xeU] 
                                                            >> 6U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 6U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xeU] >> 6U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 6U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 6U)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 6U))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xeU] 
                                                                 >> 6U)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 6U)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU] 
                                                      >> 6U)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU] 
                                                        >> 6U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 7U))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 7U))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [0xeU] 
                                                            >> 7U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 7U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xeU] >> 7U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 7U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 7U)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 7U))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xeU] 
                                                                 >> 7U)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 7U)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU] 
                                                      >> 7U)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU] 
                                                        >> 7U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 8U))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 8U))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [0xeU] 
                                                            >> 8U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 8U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xeU] >> 8U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 8U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 8U)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 8U))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xeU] 
                                                                 >> 8U)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 8U)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU] 
                                                      >> 8U)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU] 
                                                        >> 8U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 9U))) & ((~ (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 9U))) 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                            [0xeU] 
                                                            >> 9U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 9U))) & 
                     ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                  [0xeU] >> 9U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xdU] 
                                                             >> 9U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 9U)) & ((
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 9U))) 
                                                   & (~ (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                                 [0xeU] 
                                                                 >> 9U)))) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 9U)) & ((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                      [0xdU] 
                                                      >> 9U)) 
                                             | (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xeU] 
                                                        >> 9U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0xaU))) & (
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 0xaU))) 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [0xeU] 
                                                              >> 0xaU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0xaU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0xaU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0xaU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0xaU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0xaU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0xaU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0xaU)) & ((IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xdU] 
                                                        >> 0xaU)) 
                                               | (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [0xeU] 
                                                          >> 0xaU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0xbU))) & (
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 0xbU))) 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [0xeU] 
                                                              >> 0xbU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0xbU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0xbU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0xbU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0xbU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0xbU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0xbU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0xbU)) & ((IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xdU] 
                                                        >> 0xbU)) 
                                               | (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [0xeU] 
                                                          >> 0xbU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0xcU))) & (
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 0xcU))) 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [0xeU] 
                                                              >> 0xcU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0xcU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0xcU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0xcU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0xcU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0xcU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0xcU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0xcU)) & ((IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xdU] 
                                                        >> 0xcU)) 
                                               | (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [0xeU] 
                                                          >> 0xcU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0xdU))) & (
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 0xdU))) 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [0xeU] 
                                                              >> 0xdU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0xdU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0xdU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0xdU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0xdU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0xdU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0xdU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0xdU)) & ((IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xdU] 
                                                        >> 0xdU)) 
                                               | (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [0xeU] 
                                                          >> 0xdU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0xeU))) & (
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 0xeU))) 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [0xeU] 
                                                              >> 0xeU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0xeU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0xeU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0xeU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0xeU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0xeU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0xeU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0xeU)) & ((IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xdU] 
                                                        >> 0xeU)) 
                                               | (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [0xeU] 
                                                          >> 0xeU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0xfU))) & (
                                                   (~ (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                               [0xdU] 
                                                               >> 0xfU))) 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                              [0xeU] 
                                                              >> 0xfU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0xfU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0xfU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0xfU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0xfU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0xfU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0xfU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0xfU)) & ((IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                        [0xdU] 
                                                        >> 0xfU)) 
                                               | (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                          [0xeU] 
                                                          >> 0xfU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x10U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x10U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x10U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x10U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x10U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x10U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x10U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x10U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x10U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x10U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x10U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x10U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x11U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x11U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x11U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x11U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x11U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x11U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x11U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x11U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x11U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x11U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x11U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x11U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x12U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x12U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x12U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x12U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x12U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x12U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x12U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x12U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x12U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x12U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x12U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x12U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x13U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x13U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x13U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x13U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x13U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x13U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x13U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x13U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x13U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x13U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x13U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x13U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x14U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x14U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x14U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x14U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x14U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x14U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x14U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x14U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x14U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x14U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x14U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x14U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x15U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x15U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x15U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x15U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x15U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x15U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x15U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x15U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x15U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x15U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x15U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x15U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x16U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x16U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x16U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x16U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x16U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x16U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x16U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x16U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x16U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x16U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x16U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x16U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x17U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x17U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x17U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x17U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x17U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x17U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x17U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x17U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x17U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x17U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x17U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x17U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x18U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x18U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x18U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x18U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x18U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x18U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x18U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x18U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x18U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x18U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x18U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x18U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x19U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x19U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x19U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x19U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x19U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x19U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x19U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x19U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x19U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x19U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x19U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x19U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x1aU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x1aU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x1aU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x1aU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x1aU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x1aU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x1aU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x1aU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x1aU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x1aU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x1aU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x1aU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x1bU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x1bU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x1bU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x1bU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x1bU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x1bU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x1bU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x1bU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x1bU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x1bU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x1bU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x1bU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x1cU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x1cU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x1cU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x1cU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x1cU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x1cU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x1cU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x1cU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x1cU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x1cU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x1cU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x1cU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x1dU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x1dU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x1dU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x1dU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x1dU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x1dU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x1dU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x1dU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x1dU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x1dU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x1dU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x1eU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x1eU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x1eU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x1eU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x1eU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x1eU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x1eU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x1eU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x1eU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x1eU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x1eU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x1eU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x1fU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x1fU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x1fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x1fU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x1fU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x1fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x1fU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x1fU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x1fU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x1fU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x1fU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x1fU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x20U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x20U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x20U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x20U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x20U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x20U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x20U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x20U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x20U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x20U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x20U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x20U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x21U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x21U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x21U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x21U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x21U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x21U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x21U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x21U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x21U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x21U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x21U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x21U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x22U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x22U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x22U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x22U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x22U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x22U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x22U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x22U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x22U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x22U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x22U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x22U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x23U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x23U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x23U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x23U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x23U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x23U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x23U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x23U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x23U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x23U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x23U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x23U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x24U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x24U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x24U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x24U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x24U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x24U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x24U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x24U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x24U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x24U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x24U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x24U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x25U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x25U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x25U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x25U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x25U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x25U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x25U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x25U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x25U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x25U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x25U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x25U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x26U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x26U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x26U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x26U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x26U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x26U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x26U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x26U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x26U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x26U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x26U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x26U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x27U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x27U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x27U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x27U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x27U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x27U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x27U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x27U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x27U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x27U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x27U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x27U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x28U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x28U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x28U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x28U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x28U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x28U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x28U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x28U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x28U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x28U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x28U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x28U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x29U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x29U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x29U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x29U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x29U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x29U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x29U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x29U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x29U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x29U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x29U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x29U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x2aU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x2aU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x2aU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x2aU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x2aU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x2aU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x2aU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x2aU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x2aU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x2aU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x2aU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x2aU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x2bU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x2bU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x2bU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x2bU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x2bU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x2bU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x2bU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x2bU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x2bU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x2bU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x2bU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x2bU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x2cU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x2cU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x2cU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x2cU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x2cU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x2cU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x2cU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x2cU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x2cU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x2cU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x2cU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x2cU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x2dU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x2dU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x2dU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x2dU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x2dU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x2dU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x2dU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x2dU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x2dU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x2dU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x2dU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x2dU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x2eU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x2eU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x2eU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x2eU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x2eU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x2eU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x2eU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x2eU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x2eU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x2eU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x2eU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x2eU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x2fU))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x2fU))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x2fU)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x2fU))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x2fU))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x2fU)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x2fU)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x2fU))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x2fU)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x2fU)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x2fU)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x2fU)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x30U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x30U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x30U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x30U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x30U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x30U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x30U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x30U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x30U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x30U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x30U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x30U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x31U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x31U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x31U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x31U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x31U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x31U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x31U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x31U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x31U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x31U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x31U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x31U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x32U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x32U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x32U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x32U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x32U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x32U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x32U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x32U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x32U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x32U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x32U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x32U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x33U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x33U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x33U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x33U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x33U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x33U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x33U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x33U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x33U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x33U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x33U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x33U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x34U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x34U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x34U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x34U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x34U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x34U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x34U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x34U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x34U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x34U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x34U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x34U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x35U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x35U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x35U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x35U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x35U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x35U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x35U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x35U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x35U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x35U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x35U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x35U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x36U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x36U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x36U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x36U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x36U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x36U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x36U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x36U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x36U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x36U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x36U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x36U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x37U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x37U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x37U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x37U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x37U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x37U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x37U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x37U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x37U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x37U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x37U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x37U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x38U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x38U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x38U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x38U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x38U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x38U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x38U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x38U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x38U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x38U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x38U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x38U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT____Vcellinp__second3__B 
        = (1U & (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                              [0xcU] >> 0x39U))) & 
                  ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0xdU] >> 0x39U))) & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                             [0xeU] 
                                                             >> 0x39U)))) 
                 | (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                 [0xcU] >> 0x39U))) 
                     & ((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                    [0xeU] >> 0x39U))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                   [0xdU] >> 0x39U)))) 
                    | ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0xcU] >> 0x39U)) & 
                       (((~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                     [0xdU] >> 0x39U))) 
                         & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                       [0xeU] >> 0x39U)))) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT____Vcellinp__second1__C 
        = (1U & (((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                           [0xcU] >> 0x39U)) & ((IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                         [0xdU] 
                                                         >> 0x39U)) 
                                                | (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                                           [0xeU] 
                                                           >> 0x39U)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__first1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__fifth1__B 
        = (1U & ((IData)((0x80U == (0x380U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                 | ((IData)((0x100U == (0x380U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                    | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                        >> 9U) & ((IData)((0U == (0x180U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__fifth1__C 
        = (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                   >> 9U) & (IData)((0U != (0x180U 
                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__fourth1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third1__A 
        = (1U & ((IData)((1U == (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                 | ((IData)((2U == (7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                    | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                        >> 2U) & ((IData)((0U == (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__C 
        = (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                   >> 2U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                              >> 1U) | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__second1__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT____Vcellinp__third2__C 
        = (1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                             [0x10U])) & (IData)((8U 
                                                  == 
                                                  (0x18U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                                [0x10U])) & (IData)(
                                                    (0x10U 
                                                     == 
                                                     (0x18U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                               [0x10U]) & ((IData)(
                                                   (0U 
                                                    == 
                                                    (0x18U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT____Vcellinp__third1__B 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes
                          [0x10U]) & (IData)((0U != 
                                              (0x18U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__second2__DOT____VdfgTmp_h99ddda1a__0)));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state 
        = vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state;
    vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast));
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 1U));
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 2U));
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rvalid = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid));
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 1U));
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 2U));
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 3U));
    }
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_plv 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h62a3f3e2__0) 
            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
            [0U]) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5186cca9__0) 
                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                      [1U]) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf267ec42__0) 
                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                [2U]) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h96638f1c__0) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                          [3U]) | (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hfb51a10d__0) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                    [4U]) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd58ede8d__0) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                       [5U]) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h2b19e343__0) 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                          [6U]) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h539e7d92__0) 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                             [7U]) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hff199897__0) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                [8U]) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h378861ec__0) 
                                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                   [9U]) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h15e6a569__0) 
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                      [0xaU]) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5858766b__0) 
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                         [0xbU]) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h06bbe845__0) 
                                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                            [0xcU]) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h8f1db6b3__0) 
                                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                               [0xdU]) 
                                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd0971463__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0xeU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0b0fe4f2__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0xfU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hccdf7195__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x10U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbd0f065e__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x11U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc3090180__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x12U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h36c04906__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x13U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf0e061cf__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x14U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h359bc6ff__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x15U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h7dab81d0__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x16U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf2fd37e5__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x17U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hac8c5e68__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x18U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0ad5efba__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x19U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5104755c__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x1aU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h88833137__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x1bU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc1d1fbe1__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x1cU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h45d8e626__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x1dU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h3650a655__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x1eU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf23f96fb__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                                                                [0x1fU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd4dce514__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5745455e__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [1U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbdd1d026__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [2U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hab249a0e__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [3U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc84582ac__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [4U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hfed227d4__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [5U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h67d35e3d__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [6U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb7e09912__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [7U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h86d39dfe__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [8U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h95c7788e__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [9U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd95fd5e1__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0xaU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h4c6ae110__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0xbU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hef158257__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0xcU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h4cdcd4da__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0xdU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h93015914__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0xeU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc639682a__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0xfU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h296a8112__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x10U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h6b725490__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x11U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb1c91862__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x12U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h6176777a__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x13U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_he00ae22e__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x14U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_had7a8ce2__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x15U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h78e8403c__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x16U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h2860504f__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x17U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb31e85cb__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x18U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb6aaf1ab__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x19U]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_he07c69ae__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x1aU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h25b6f977__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x1bU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd7903768__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x1cU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h03abad38__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x1dU]) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h37c24ad8__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x1eU]) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h6acbcf03__0) 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                                                                [0x1fU]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_mat 
        = (3U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h62a3f3e2__0) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba43b770__0)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5186cca9__0) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb80d124__0)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf267ec42__0) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h9490ea1a__0)) 
                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h96638f1c__0) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h94937df9__0)) 
                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hfb51a10d__0) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h947a1e47__0)) 
                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd58ede8d__0) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h94643b01__0)) 
                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h2b19e343__0) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba494c52__0)) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h539e7d92__0) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9417a89__0)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hff199897__0) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbbdbe25e__0)) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h378861ec__0) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba66cd3e__0)) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h15e6a569__0) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba5d3b8f__0)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5858766b__0) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba4e4b09__0)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h06bbe845__0) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9454a5b__0)) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h8f1db6b3__0) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba7195a8__0)) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd0971463__0) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb91ab95b__0)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0b0fe4f2__0) 
                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb91efad0__0)) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hccdf7195__0) 
                                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb961624__0)) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbd0f065e__0) 
                                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb92d4868__0)) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc3090180__0) 
                                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb932af8c__0)) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h36c04906__0) 
                                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9356f10__0)) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf0e061cf__0) 
                                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9327904__0)) 
                                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h359bc6ff__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb93ebbff__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h7dab81d0__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba7ea521__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf2fd37e5__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba7c2e1a__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hac8c5e68__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb9011c56__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0ad5efba__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb84ff26__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5104755c__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb885d01__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h88833137__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb94c437__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc1d1fbe1__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba112d30__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h45d8e626__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbb9e9c23__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h3650a655__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba6de170__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf23f96fb__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hba5930a4__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd4dce514__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5ab9ffe__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5745455e__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hff7f7566__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbdd1d026__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hea4a7560__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hab249a0e__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hea661353__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc84582ac__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hff4ab609__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hfed227d4__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hff55f4d7__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h67d35e3d__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf555b084__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb7e09912__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5190a97__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h86d39dfe__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf57bc034__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h95c7788e__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5a73968__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd95fd5e1__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heac67075__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h4c6ae110__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf58c7a13__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hef158257__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf56a8085__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h4cdcd4da__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5546a46__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h93015914__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5828441__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc639682a__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5bfe7da__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h296a8112__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heaf7da66__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h6b725490__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5469506__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb1c91862__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf572f26a__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h6176777a__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf52ed412__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_he00ae22e__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf519cfce__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_had7a8ce2__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5774e35__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h78e8403c__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5a7c8cf__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h2860504f__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf54157dc__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb31e85cb__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf58cfbf0__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb6aaf1ab__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heaece7ac__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_he07c69ae__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hea92336b__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h25b6f977__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heaf640dd__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd7903768__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5bda0be__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h03abad38__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hea99d98d__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h37c24ad8__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf5867dfe__0)) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h6acbcf03__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_heac677e6__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                 >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur));
    if (vlSelf->aresetn) {
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r 
                = (1U & ((IData)(vlSelf->btn_step) 
                         >> 1U));
        }
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r 
                = (1U & (IData)(vlSelf->btn_step));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset 
                    = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                             >> 2U));
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = 0U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                    } else {
                        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
                                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                             + (1U 
                                                & (~ (IData)(vlSelf->uart_tx)))));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
                                    = (1U & (~ (IData)(vlSelf->uart_tx)));
                                if ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) {
                                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 1U;
                                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 4U;
                                } else {
                                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 0U;
                                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                                }
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 1U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                                    ? 0xfU : 0xdU);
                        }
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                            != (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_8(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak));
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x7fU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak))));
                            }
                        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x3fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak))));
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x1fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak))));
                        }
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
                            = (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak) 
                                        >> 1U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak));
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = 0U;
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 1U;
                        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_8(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x7fU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                            }
                        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x3fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x1fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                        }
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
                            = (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out) 
                                        >> 1U));
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak 
                            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out;
                    }
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                            = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error)
                                    ? 0x1dU : 0xdU)
                                : ((0U == (4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)))
                                    ? 0xdU : ((4U == 
                                               (7U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)))
                                               ? 0x15U
                                               : 0x1dU)));
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
                                = ((IData)(vlSelf->uart_rx__en0)
                                    ? 6U : 4U);
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            if ((0U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor)))));
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 3U;
                            } else {
                                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 4U;
                            }
                        } else {
                            vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 2U;
                    } else {
                        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((1U & ((~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)))) 
                              & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                   == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))) 
                                 | (~ (IData)(vlSelf->uart_rx__en0)))))) {
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = 0U;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 5U;
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r = 1U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_d 
        = (1U & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h62a3f3e2__0) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e70be96__0)) 
                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5186cca9__0) 
                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h156e98d5__0)) 
                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf267ec42__0) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_he7296b1b__0)) 
                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h96638f1c__0) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_he716e790__0)) 
                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hfb51a10d__0) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf27a276b__0)) 
                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd58ede8d__0) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_he701b5d2__0)) 
                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h2b19e343__0) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e0c17ec__0)) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h539e7d92__0) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h09a3b5a9__0)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hff199897__0) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0cd1204a__0)) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h378861ec__0) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e1278bd__0)) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h15e6a569__0) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e8d5b06__0)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5858766b__0) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e2535ab__0)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h06bbe845__0) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h09bbf568__0)) 
                                                      | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h8f1db6b3__0) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e9cbf77__0)) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd0971463__0) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h090ac535__0)) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0b0fe4f2__0) 
                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0962ada4__0)) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hccdf7195__0) 
                                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h1536bcd5__0)) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbd0f065e__0) 
                                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h094fdaf6__0)) 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc3090180__0) 
                                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0946cd26__0)) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h36c04906__0) 
                                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h09fdcfa5__0)) 
                                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf0e061cf__0) 
                                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h091db594__0)) 
                                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h359bc6ff__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h094e783d__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h7dab81d0__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e236c59__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf2fd37e5__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e261e1c__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hac8c5e68__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0959f60d__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0ad5efba__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0ffcecda__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5104755c__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0f8b31db__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h88833137__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0fbb6636__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc1d1fbe1__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e59ed17__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h45d8e626__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h1527de98__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h3650a655__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0fcc6296__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hf23f96fb__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0e8a3bd5__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd4dce514__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h143feff9__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h5745455e__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h1ca26c04__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hbdd1d026__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0f56e045__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hab249a0e__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h017e8605__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc84582ac__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h1a0fd684__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hfed227d4__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h1c469023__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h67d35e3d__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h15e6816b__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb7e09912__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hcfd2d8b9__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h86d39dfe__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hcf7fd171__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h95c7788e__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h142c6940__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd95fd5e1__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0f63a98b__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h4c6ae110__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h1431e7b0__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hef158257__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hcf9c77e1__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h4cdcd4da__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h15c1096d__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h93015914__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hcf684561__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hc639682a__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h146e71af__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h296a8112__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0f280a04__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h6b725490__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hcfb023e9__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb1c91862__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hcf4fc5f9__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h6176777a__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hcfa793b4__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_he00ae22e__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hcff9a1df__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_had7a8ce2__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hcfd61a39__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h78e8403c__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h14479369__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h2860504f__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h15cc092b__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb31e85cb__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h142887e0__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hb6aaf1ab__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0f3898d1__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_he07c69ae__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h00f23aa0__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h25b6f977__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0f22683b__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_hd7903768__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h14491e7d__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h03abad38__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0f133571__0)) 
                                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h37c24ad8__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h143067f9__0)) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h6acbcf03__0) 
                                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0f44b004__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                 >> 4U));
    __Vtableidx6 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                                                << 7U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelf->aresetn)))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__uart0_int = Vsimu_top__ConstPool__TABLE_he9a8fcb9_0
        [__Vtableidx6];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__has_int 
        = ((0U != (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl 
                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat))) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
              >> 2U));
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg 
            = (0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc = 0x1bfffffcU;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffffdU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffffbU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffff7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffffefU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffffdfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffffbfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffff7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffeffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffdffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffbffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffff7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffefffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffdfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffbfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffff7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffeffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffdffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffbffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfff7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffefffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffdfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffbfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xff7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfeffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfdffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfbffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xf7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xefffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xdfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xbfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg 
                = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                    << 0x18U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                 >> 8U));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid) 
             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffffeU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                         >> 2U) == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                        [0U]) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                      & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr))))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffffdU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffffeU & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [1U]) << 1U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 1U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 1U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffffbU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffffcU & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [2U]) << 2U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 2U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 2U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffff7U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffff8U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [3U]) << 3U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 3U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 3U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffffefU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffff0U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [4U]) << 4U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 4U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 4U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffffdfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffffe0U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [5U]) << 5U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 5U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 5U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffffbfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffffc0U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [6U]) << 6U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 6U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 6U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffff7fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffff80U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [7U]) << 7U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 7U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 7U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffeffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffff00U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [8U]) << 8U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 8U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 8U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffdffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffe00U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [9U]) << 9U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 9U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 9U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffbffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffc00U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xaU]) << 0xaU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xaU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xaU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffff7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffff800U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xbU]) << 0xbU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xbU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xbU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffefffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffff000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xcU]) << 0xcU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xcU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xcU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffdfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffe000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xdU]) << 0xdU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xdU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xdU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffbfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffc000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xeU]) << 0xeU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xeU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xeU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffff7fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffff8000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xfU]) << 0xfU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xfU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xfU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffeffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffff0000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x10U]) << 0x10U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x10U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x10U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffdffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffe0000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x11U]) << 0x11U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x11U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x11U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffbffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffc0000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x12U]) << 0x12U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x12U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x12U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfff7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfff80000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x13U]) << 0x13U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x13U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x13U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffefffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfff00000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x14U]) << 0x14U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x14U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x14U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffdfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffe00000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x15U]) << 0x15U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x15U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x15U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffbfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffc00000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x16U]) << 0x16U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x16U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x16U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xff7fffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xff800000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x17U]) << 0x17U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x17U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x17U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfeffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xff000000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x18U]) << 0x18U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x18U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x18U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfdffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfe000000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x19U]) << 0x19U) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x19U) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x19U))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfbffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfc000000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1aU]) << 0x1aU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1aU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1aU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xf7ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xf8000000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1bU]) << 0x1bU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1bU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1bU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xefffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xf0000000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1cU]) << 0x1cU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1cU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1cU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xdfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xe0000000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1dU]) << 0x1dU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1dU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1dU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xbfffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xc0000000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1eU]) << 0x1eU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1eU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1eU))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0x7fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0x80000000U & (((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 2U) == 
                                        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1fU]) << 0x1fU) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1fU) 
                                            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1fU))));
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r;
    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin))) 
         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable = 0U;
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable = 1U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__src2_is_4 
        = ((0x13U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                      >> 0x1aU)) | (0x15U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                              >> 0x1aU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
        = (((QData)((IData)((0x3fU == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0x1aU)))) 
            << 0x3fU) | (((QData)((IData)((0x3eU == 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (0x3dU 
                                                         == 
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 0x1aU)))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (0x3cU 
                                                          == 
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                           >> 0x1aU)))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (0x3bU 
                                                             == 
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                              >> 0x1aU)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0x3aU 
                                                                == 
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                 >> 0x1aU)))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x39U 
                                                                   == 
                                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                    >> 0x1aU)))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (0x38U 
                                                                      == 
                                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                       >> 0x1aU)))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (0x37U 
                                                                         == 
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                          >> 0x1aU)))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (0x36U 
                                                                            == 
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                             >> 0x1aU)))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (0x35U 
                                                                               == 
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (0x34U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (0x32U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (0x31U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (0x2fU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (0x2eU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2dU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2cU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2bU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2aU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x29U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x27U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x26U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x25U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x24U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x22U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x21U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((0x1fU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1fU) 
                                                                                | (((0x1eU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1eU) 
                                                                                | (((0x1dU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1dU) 
                                                                                | (((0x1cU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1cU) 
                                                                                | (((0x1bU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1bU) 
                                                                                | (((0x1aU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU) 
                                                                                | (((0x19U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x19U) 
                                                                                | (((0x18U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x18U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x17U) 
                                                                                | (((0x16U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x16U) 
                                                                                | (((0x15U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x15U) 
                                                                                | (((0x14U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x14U) 
                                                                                | (((0x13U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x13U) 
                                                                                | (((0x12U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x12U) 
                                                                                | (((0x11U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x10U) 
                                                                                | (((0xfU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}
