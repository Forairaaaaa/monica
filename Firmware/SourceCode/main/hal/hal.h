/**
 * @file hal.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-05-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include "buzzer/hal_buzzer.hpp"
#include "disp/hal_disp.hpp"
#include "lvgl/hal_lvgl.hpp"
#include "power/hal_power.hpp"
#include "rtc/hal_rtc.hpp"
#include "tp/hal_tp.hpp"



class HAL {
    private:
        


    public:
        HAL() = default;
        ~HAL() = default;


        /* Display */
        LGFX_Monica disp;

        /* Touch pad */
        FT3168::TP_FT3168 tp;

        /* PMU AXP2101 */
        AXP2101::AXP2101 pmu;

        /* RTC PCF8563 */
        PCF8563::PCF8563 rtc;

        /* Buzzer */
        BUZZER::BUZZER buzz;

        /* Lvgl */
        LVGL::LVGL lvgl;


        /**
         * @brief Hal init 
         * 
         */
        void init();

        /**
         * @brief Update hal
         * 
         */
        void update();


};
