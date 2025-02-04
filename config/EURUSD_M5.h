/**
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_Momentum_Params_M5 : MomentumParams {
  Indi_Momentum_Params_M5() : MomentumParams(indi_momentum_defaults, PERIOD_M5) {
    applied_price = (ENUM_APPLIED_PRICE)1;
    period = 24;
    shift = 0;
  }
} indi_momentum_m5;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_Momentum_Params_M5 : StgParams {
  // Struct constructor.
  Stg_Momentum_Params_M5() : StgParams(stg_momentum_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = (float)0.0;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = (float)0;
    price_stop_method = 0;
    price_stop_level = (float)1;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_momentum_m5;
