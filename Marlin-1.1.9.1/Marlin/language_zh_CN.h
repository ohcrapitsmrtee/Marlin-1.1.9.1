/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Simplified Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ZH_CN_H
#define LANGUAGE_ZH_CN_H

#define CHARSIZE 3

#define WELCOME_MSG                         MACHINE_NAME _UxGT("宸插氨缁�.")  //" ready."
#define MSG_BACK                            _UxGT("杩斿洖")         // 鈥滲ack鈥�
#define MSG_SD_INSERTED                     _UxGT("瀛樺偍鍗″凡鎻掑叆")  //"Card inserted"
#define MSG_SD_REMOVED                      _UxGT("瀛樺偍鍗¤鎷斿嚭")  //"Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("鎸″潡")  //"Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("涓昏彍鍗�")  //"Main"
#define MSG_AUTOSTART                       _UxGT("鑷姩寮�濮�")  //"Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("鍏抽棴姝ヨ繘鐢垫満")  //"Disable steppers"
#define MSG_DEBUG_MENU                      _UxGT("璋冭瘯鑿滃崟")    // "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               _UxGT("杩涘害鏉℃祴璇�")  // "Progress Bar Test"
#define MSG_AUTO_HOME                       _UxGT("鍥炲師鐐�")  //"Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("鍥瀀鍘熶綅")  //"Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("鍥瀁鍘熶綅")  //"Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("鍥瀂鍘熶綅")  //"Home Z"
#define MSG_TMC_Z_CALIBRATION               _UxGT("鈯挎牎鍑哯")  //"Calibrate Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("骞冲彴璋冨钩XYZ褰掑師浣�")  //"Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("鍗曞嚮寮�濮嬬儹搴婅皟骞�")  //"Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("涓嬩釜鐑簥璋冨钩鐐�")  //"Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("瀹屾垚鐑簥璋冨钩")  //"Leveling Done!"
#define MSG_Z_FADE_HEIGHT                   _UxGT("娣″嚭楂樺害")     // "Fade Height"
#define MSG_SET_HOME_OFFSETS                _UxGT("璁剧疆鍘熺偣鍋忕Щ")  //"Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("鍋忕Щ宸插惎鐢�")  //"Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("璁剧疆鍘熺偣")  //"Set origin"
#define MSG_PREHEAT_1                       _UxGT("棰勭儹PLA")  //"Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")  //MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" 鍏ㄩ儴")  //MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" 鐑簥")  //MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" 璁剧疆")  //MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       _UxGT("棰勭儹ABS")  //"Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")  //MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" 鍏ㄩ儴")  //MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" 鐑簥")  //MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" 璁剧疆")  //MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        _UxGT("闄嶆俯")  //"Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("鐢垫簮鎵撳紑")  //"Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("鐢垫簮鍏抽棴")  //"Switch power off"
#define MSG_EXTRUDE                         _UxGT("鎸ゅ嚭")  //"Extrude"
#define MSG_RETRACT                         _UxGT("鍥炴娊")  //"Retract"
#define MSG_MOVE_AXIS                       _UxGT("绉诲姩杞�")  //"Move axis"
#define MSG_BED_LEVELING                    _UxGT("璋冨钩鐑簥")  //"Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("璋冨钩鐑簥")  //"Level bed"
#define MSG_LEVEL_CORNERS                   _UxGT("璋冨钩杈硅") // "Level corners"

#define MSG_NEXT_CORNER                     _UxGT("涓嬩釜杈硅") // "Next corner"
#define MSG_EDITING_STOPPED                 _UxGT("缃戞牸缂栬緫宸插仠姝�") // "Mesh Editing Stopped"

#define MSG_USER_MENU                       _UxGT("瀹氬埗鍛戒护") // "Custom Commands"
#define MSG_UBL_DOING_G29                   _UxGT("鎵цG29") // "Doing G29"
#define MSG_UBL_UNHOMED                     _UxGT("鍏堝洖XYZ鍘熺偣") // "Home XYZ first"
#define MSG_UBL_TOOLS                       _UxGT("UBL宸ュ叿") // "UBL Tools"
#define MSG_UBL_LEVEL_BED                   _UxGT("缁熶竴鐑簥璋冨钩(UBL)") // "Unified Bed Leveling"
#define MSG_UBL_MANUAL_MESH                 _UxGT("鎵嬪伐鍒涜缃戞牸") // "Manually Build Mesh"

#define MSG_UBL_BC_INSERT                   _UxGT("鏀剧疆鍨墖骞舵祴閲�") // "Place shim & measure"
#define MSG_UBL_BC_INSERT2                  _UxGT("娴嬮噺") // "Measure"
#define MSG_UBL_BC_REMOVE                   _UxGT("绉婚櫎骞舵祴閲忕儹搴�") // "Remove & measure bed"
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("绉诲姩鍒颁笅涓�涓�") // "Moving to next"
#define MSG_UBL_ACTIVATE_MESH               _UxGT("婵�娲籙BL") // "Activate UBL"
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("鍏抽棴UBL") // "Deactivate UBL"
#define MSG_UBL_SET_BED_TEMP                _UxGT("璁剧疆鐑簥娓╁害") // "Bed Temp"
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("鐑娓╁害") // "Hotend Temp"
#define MSG_UBL_MESH_EDIT                   _UxGT("缃戞牸缂栬緫") // "Mesh Edit"
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("缂栬緫瀹㈡埛缃戞牸") // "Edit Custom Mesh"
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("缁嗚皟缃戞牸") // "Fine Tuning Mesh"
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("瀹屾垚缂栬緫缃戞牸") // "Done Editing Mesh"
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("鍒涜瀹㈡埛缃戞牸") // "Build Custom Mesh"
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("鍒涜缃戞牸") // "Build Mesh"
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("鍒涜PLA缃戞牸") // "Build PLA Mesh"
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("鍒涜ABS缃戞牸") // "Build ABS Mesh"
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("鍒涜鍐风綉鏍�") // "Build Cold Mesh"
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("璋冩暣缃戞牸楂樺害") // "Adjust Mesh Height"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("楂樺害鍚堣") // "Height Amount"
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("鎵瑰噯缃戞牸") // "Validate Mesh"
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("鎵瑰噯PLA缃戞牸") // "Validate PLA Mesh"
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("鎵瑰噯ABS缃戞牸") // "Validate ABS Mesh"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("鎵瑰噯瀹㈡埛缃戞牸") // "Validate Custom Mesh"
#define MSG_UBL_CONTINUE_MESH               _UxGT("缁х画鐑簥缃戞牸") // "Continue Bed Mesh"
#define MSG_UBL_MESH_LEVELING               _UxGT("缃戞牸璋冨钩") // "Mesh Leveling"
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("涓夌偣璋冨钩") // "3-Point Leveling"
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("鏍煎瓙缃戞牸璋冨钩") // "Grid Mesh Leveling"
#define MSG_UBL_MESH_LEVEL                  _UxGT("璋冨钩缃戞牸") // "Level Mesh"
#define MSG_UBL_SIDE_POINTS                 _UxGT("杈圭偣") // "Side Points"
#define MSG_UBL_MAP_TYPE                    _UxGT("鍥剧被鍨�") // "Map Type"
#define MSG_UBL_OUTPUT_MAP                  _UxGT("杈撳嚭缃戞牸鍥�") // "Output Mesh Map"
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("杈撳嚭鍒颁富鏈�") // "Output for Host"
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("杈撳嚭鍒癈SV") // "Output for CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("杈撳嚭鍒板浠�") // "Off Printer Backup"
#define MSG_UBL_INFO_UBL                    _UxGT("杈撳嚭UBL淇℃伅") // "Output UBL Info"
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("缂栬緫缃戞牸") // "Edit Mesh"
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("濉厖鍚堣") // "Fill-in Amount"
#define MSG_UBL_MANUAL_FILLIN               _UxGT("鎵嬪伐濉厖") // "Manual Fill-in"
#define MSG_UBL_SMART_FILLIN                _UxGT("鑱槑濉厖") // "Smart Fill-in"
#define MSG_UBL_FILLIN_MESH                 _UxGT("濉厖缃戞牸") // "Fill-in Mesh"
#define MSG_UBL_INVALIDATE_ALL              _UxGT("浣滃簾鎵�鏈夌殑") // "Invalidate All"
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("浣滃簾鏈�杩戠殑") // "Invalidate Closest"
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("缁嗚皟鎵�鏈夌殑") // "Fine Tune All"
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("缁嗚皟鏈�杩戠殑") // "Fine Tune Closest"
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("缃戞牸瀛樺偍") // "Mesh Storage"
#define MSG_UBL_STORAGE_SLOT                _UxGT("瀛樺偍妲�") // "Memory Slot"
#define MSG_UBL_LOAD_MESH                   _UxGT("瑁呰浇鐑簥缃戞牸") // "Load Bed Mesh"
#define MSG_UBL_SAVE_MESH                   _UxGT("淇濆瓨鐑簥缃戞牸") // "Save Bed Mesh"
#define MSG_MESH_LOADED                     _UxGT("缃戞牸 %i 宸茶杞�") // "Mesh %i loaded"
#define MSG_MESH_SAVED                      _UxGT("缃戞牸 %i 宸蹭繚瀛�") // "Mesh %i saved"
#define MSG_NO_STORAGE                      _UxGT("娌℃湁瀛樺偍") // "No storage"
#define MSG_UBL_SAVE_ERROR                  _UxGT("閿欒: UBL淇濆瓨") // "Err: UBL Save"
#define MSG_UBL_RESTORE_ERROR               _UxGT("閿欒: UBL杩樺師") // "Err: UBL Restore"
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Z鍋忕Щ宸插仠姝�") // "Z-Offset Stopped"
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("涓�姝ユUBL") // "Step-By-Step UBL"

#define MSG_LED_CONTROL                     _UxGT("鐏鎺у埗") // "LED Control")
#define MSG_LEDS                            _UxGT("鐏�") // "Lights")
#define MSG_LED_PRESETS                     _UxGT("鐏缃�") // "Light Presets")
#define MSG_SET_LEDS_RED                    _UxGT("绾�") // "Red")
#define MSG_SET_LEDS_ORANGE                 _UxGT("姗�") // "Orange")
#define MSG_SET_LEDS_YELLOW                 _UxGT("榛�") // "Yellow")
#define MSG_SET_LEDS_GREEN                  _UxGT("缁�") // "Green")
#define MSG_SET_LEDS_BLUE                   _UxGT("钃�") // "Blue")
#define MSG_SET_LEDS_INDIGO                 _UxGT("闈�") // "Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("绱�") // "Violet")
#define MSG_SET_LEDS_WHITE                  _UxGT("鐧�") // "White")
#define MSG_SET_LEDS_DEFAULT                _UxGT("缂虹渷") // "Default")
#define MSG_CUSTOM_LEDS                     _UxGT("瀹氬埗鐏�") // "Custom Lights")
#define MSG_INTENSITY_R                     _UxGT("绾㈤ケ鍜屽害") // "Red Intensity")
#define MSG_INTENSITY_G                     _UxGT("缁块ケ鍜屽害") // "Green Intensity")
#define MSG_INTENSITY_B                     _UxGT("钃濋ケ鍜屽害") // "Blue Intensity")
#define MSG_INTENSITY_W                     _UxGT("鐧介ケ鍜屽害") // "White Intensity")
#define MSG_LED_BRIGHTNESS                  _UxGT("浜害") // "Brightness")
#define MSG_MOVING                          _UxGT("绉诲姩 ...") // "Moving...")
#define MSG_FREE_XY                         _UxGT("閲婃斁 XY") // "Free XY")

#define MSG_MOVE_X                          _UxGT("绉诲姩X")  //"Move X"
#define MSG_MOVE_Y                          _UxGT("绉诲姩Y")  //"Move Y"
#define MSG_MOVE_Z                          _UxGT("绉诲姩Z")  //"Move Z"
#define MSG_MOVE_E                          _UxGT("鎸ゅ嚭鏈�")  //"Extruder"
#define MSG_MOVE_01MM                       _UxGT("绉诲姩 0.1 mm")  //"Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("绉诲姩 1 mm")  //"Move 1mm"
#define MSG_MOVE_10MM                       _UxGT("绉诲姩 10 mm")  //"Move 10mm"
#define MSG_SPEED                           _UxGT("閫熺巼")  //"Speed"
#define MSG_BED_Z                           _UxGT("鐑簥Z")  //"Bed Z"
#define MSG_NOZZLE                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鍠峰槾")  //"Nozzle" 鍣村槾
#define MSG_BED                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鐑簥")  //"Bed"
#define MSG_FAN_SPEED                       _UxGT("椋庢墖閫熺巼")  //"Fan speed"
#define MSG_EXTRA_FAN_SPEED                 _UxGT("棰濆椋庢墖閫熺巼") // "Extra fan speed"
#define MSG_FLOW                            _UxGT("鎸ゅ嚭閫熺巼")  //"Flow"
#define MSG_CONTROL                         _UxGT("鎺у埗")  //"Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鏈�灏�") //" " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鏈�澶�")  //" " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 鍥犳暟")  //" " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        _UxGT("鑷姩鎺ф俯")  //"Autotemp"
#define MSG_ON                              _UxGT("寮� ")  //"On "
#define MSG_OFF                             _UxGT("鍏� ")  //"Off"
#define MSG_PID_P                           _UxGT("PID-P")  //"PID-P"
#define MSG_PID_I                           _UxGT("PID-I")  //"PID-I"
#define MSG_PID_D                           _UxGT("PID-D")  //"PID-D"
#define MSG_PID_C                           _UxGT("PID-C")  //"PID-C"
#define MSG_SELECT                          _UxGT("閫夋嫨")  //"Select"
#define MSG_ACC                             _UxGT("鍔犻�熷害")  //"Accel" acceleration
#define MSG_JERK                            _UxGT("鎶栧姩閫熺巼")  // "Jerk"
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("A杞存姈鍔ㄩ�熺巼")  //"Va-jerk"
  #define MSG_VB_JERK                       _UxGT("B杞存姈鍔ㄩ�熺巼")  //"Vb-jerk"
  #define MSG_VC_JERK                       _UxGT("C杞存姈鍔ㄩ�熺巼")  //"Vc-jerk"
#else
  #define MSG_VA_JERK                       _UxGT("X杞存姈鍔ㄩ�熺巼")  //"Vx-jerk"
  #define MSG_VB_JERK                       _UxGT("Y杞存姈鍔ㄩ�熺巼")  //"Vy-jerk"
  #define MSG_VC_JERK                       _UxGT("Z杞存姈鍔ㄩ�熺巼")  //"Vz-jerk"
#endif
#define MSG_VE_JERK                         _UxGT("鎸ゅ嚭鏈烘姈鍔ㄩ�熺巼")  //"Ve-jerk"
#define MSG_VELOCITY                        _UxGT("閫熷害")          // "Velocity"
#define MSG_VMAX                            _UxGT("鏈�澶ц繘鏂欓�熺巼")  //"Vmax " max_feedrate_mm_s
#define MSG_VMIN                            _UxGT("鏈�灏忚繘鏂欓�熺巼")  //"Vmin"  min_feedrate_mm_s
#define MSG_VTRAV_MIN                       _UxGT("鏈�灏忕Щ鍔ㄩ�熺巼")  //"VTrav min" min_travel_feedrate_mm_s, (target) speed of the move
#define MSG_ACCELERATION                    _UxGT("鍔犻�熷害")       // "Acceleration"
#define MSG_AMAX                            _UxGT("鏈�澶ф墦鍗板姞閫熷害")  //"Amax " max_acceleration_mm_per_s2, acceleration in units/s^2 for print moves
#define MSG_A_RETRACT                       _UxGT("鏀惰繘鍔犻�熷害")  //"A-retract" retract_acceleration, E acceleration in mm/s^2 for retracts
#define MSG_A_TRAVEL                        _UxGT("闈炴墦鍗扮Щ鍔ㄥ姞閫熷害")  //"A-travel" travel_acceleration, X, Y, Z acceleration in mm/s^2 for travel (non printing) moves
#define MSG_STEPS_PER_MM                    _UxGT("杞存鏁�/mm")  //"Steps/mm" axis_steps_per_mm, axis steps-per-unit G92
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("A杞存鏁�/mm")  //"Asteps/mm"
  #define MSG_BSTEPS                        _UxGT("B杞存鏁�/mm")  //"Bsteps/mm"
  #define MSG_CSTEPS                        _UxGT("C杞存鏁�/mm")  //"Csteps/mm"
#else
  #define MSG_ASTEPS                        _UxGT("X杞存鏁�/mm")  //"Xsteps/mm"
  #define MSG_BSTEPS                        _UxGT("Y杞存鏁�/mm")  //"Ysteps/mm"
  #define MSG_CSTEPS                        _UxGT("Z杞存鏁�/mm")  //"Zsteps/mm"
#endif
#define MSG_ESTEPS                          _UxGT("鎸ゅ嚭鏈烘鏁�/mm")  //"Esteps/mm"
#define MSG_E1STEPS                         _UxGT("鎸ゅ嚭鏈�1姝ユ暟/mm") //"E1steps/mm"
#define MSG_E2STEPS                         _UxGT("鎸ゅ嚭鏈�2姝ユ暟/mm") //"E2steps/mm"
#define MSG_E3STEPS                         _UxGT("鎸ゅ嚭鏈�3姝ユ暟/mm") //"E3steps/mm"
#define MSG_E4STEPS                         _UxGT("鎸ゅ嚭鏈�4姝ユ暟/mm") //"E4steps/mm"
#define MSG_E5STEPS                         _UxGT("鎸ゅ嚭鏈�5姝ユ暟/mm") //"E5steps/mm"
#define MSG_TEMPERATURE                     _UxGT("娓╁害")  //"Temperature"
#define MSG_MOTION                          _UxGT("杩愬姩")  //"Motion"
#define MSG_FILAMENT                        _UxGT("涓濇枡娴嬪")  //"Filament" lcd_control_volumetric_menu
#define MSG_VOLUMETRIC_ENABLED              _UxGT("娴嬪绉痬m鲁")  //"E in mm3" volumetric_enabled
#define MSG_FILAMENT_DIAM                   _UxGT("涓濇枡鐩村緞")  //"Fil. Dia."
#define MSG_FILAMENT_UNLOAD                 _UxGT("鍗歌浇 mm") // "Unload mm"
#define MSG_FILAMENT_LOAD                   _UxGT("瑁呰浇 mm")   // "Load mm"
#define MSG_ADVANCE_K                       _UxGT("Advance K") // "Advance K"
#define MSG_CONTRAST                        _UxGT("LCD瀵规瘮搴�")  //"LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("淇濆瓨璁剧疆")  //"Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("瑁呰浇璁剧疆")  //"Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("鎭㈠瀹夊叏鍊�")  //"Restore failsafe"
#define MSG_INIT_EEPROM                     _UxGT("鍒濆鍖栬缃�") // "Initialize EEPROM"
#define MSG_REFRESH                         _UxGT("鍒锋柊")  //"Refresh"
#define MSG_WATCH                           _UxGT("淇℃伅灞�")  //"Info screen"
#define MSG_PREPARE                         _UxGT("鍑嗗")  //"Prepare"
#define MSG_TUNE                            _UxGT("璋冩暣")  //"Tune"
#define MSG_PAUSE_PRINT                     _UxGT("鏆傚仠鎵撳嵃")  //"Pause print"
#define MSG_RESUME_PRINT                    _UxGT("鎭㈠鎵撳嵃")  //"Resume print"
#define MSG_STOP_PRINT                      _UxGT("鍋滄鎵撳嵃")  //"Stop print"
#define MSG_CARD_MENU                       _UxGT("浠庡瓨鍌ㄥ崱涓婃墦鍗�")  //"Print from SD"
#define MSG_NO_CARD                         _UxGT("鏃犲瓨鍌ㄥ崱")  //"No SD card"
#define MSG_DWELL                           _UxGT("浼戠湢涓� ...")  //"Sleep..."
#define MSG_USERWAIT                        _UxGT("鐐瑰嚮缁х画 ...")  //"Click to resume..."
#define MSG_PRINT_PAUSED                    _UxGT("鏆仠鎵撳嵃") // "Print paused"
#define MSG_PRINT_ABORTED                   _UxGT("宸插彇娑堟墦鍗�")  //"Print aborted"
#define MSG_NO_MOVE                         _UxGT("鏃犵Щ鍔�")  //"No move."
#define MSG_KILLED                          _UxGT("宸叉潃鎺�")  //"KILLED. "
#define MSG_STOPPED                         _UxGT("宸插仠姝�")  //"STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("鍥炴娊闀垮害mm")  //"Retract mm" retract_length, retract length (positive mm)
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("鎹㈡墜鍥炴娊闀垮害mm")  //"Swap Re.mm" swap_retract_length, swap retract length (positive mm), for extruder change
#define MSG_CONTROL_RETRACTF                _UxGT("鍥炴娊閫熺巼mm/s")  //"Retract  V" retract_feedrate_mm_s, feedrate for retracting (mm/s)
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")  //"Hop mm" retract_zlift, retract Z-lift
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("鍥炴娊鎭㈠闀垮害mm")  //"UnRet +mm" retract_recover_length, additional recover length (mm, added to retract length when recovering)
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("鎹㈡墜鍥炴娊鎭㈠闀垮害mm")  //"S UnRet+mm" swap_retract_recover_length, additional swap recover length (mm, added to retract length when recovering from extruder change)
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("鍥炴娊鎭㈠鍚庤繘鏂欓�熺巼mm/s")  //"UnRet  V" retract_recover_feedrate_mm_s, feedrate for recovering from retraction (mm/s)
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V") // "S UnRet V"
#define MSG_AUTORETRACT                     _UxGT("鑷姩鎶藉洖")  //"AutoRetr." autoretract_enabled,
#define MSG_FILAMENTCHANGE                  _UxGT("鏇存崲涓濇枡")  //"Change filament"
#define MSG_FILAMENTLOAD                    _UxGT("瑁呰浇涓濇枡") // "Load filament"
#define MSG_FILAMENTUNLOAD                  _UxGT("鍗歌浇涓濇枡") // "Unload filament"
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("鍗歌浇鍏ㄩ儴") // "Unload All"
#define MSG_INIT_SDCARD                     _UxGT("鍒濆鍖栧瓨鍌ㄥ崱")  //"Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("鏇存崲瀛樺偍鍗�")  //"Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("Z鎺㈤拡鍦ㄧ儹搴婁箣澶�")  //"Z probe out. bed" Z probe is not within the physical limits
#define MSG_SKEW_FACTOR                     _UxGT("鍋忔枩鍥犳暟") // "Skew Factor"
#define MSG_BLTOUCH                         _UxGT("BLTouch")     // "BLTouch"
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch 鑷") // "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   _UxGT("閲嶇疆BLTouch")  // "Reset BLTouch"
#define MSG_BLTOUCH_DEPLOY                  _UxGT("閮ㄧ讲BLTouch") // "Deploy BLTouch"
#define MSG_BLTOUCH_STOW                    _UxGT("瑁呰浇BLTouch")   // "Stow BLTouch"
#define MSG_HOME                            _UxGT("褰掍綅")  //"Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("鍏�")  //"first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z鍋忕Щ")  //"Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("寰噺璋冩暣X杞�")  //"Babystep X" lcd_babystep_x, Babystepping enables the user to control the axis in tiny amounts
#define MSG_BABYSTEP_Y                      _UxGT("寰噺璋冩暣Y杞�")  //"Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("寰噺璋冩暣Z杞�")  //"Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("鎸″潡缁堟")  //"Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("鍔犵儹澶辫触")  //"Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("閿欒锛歊EDUNDANT TEMP")  //"Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("娓╂帶澶辨帶")  //"THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("閿欒锛氭渶楂樻俯搴�")  //"Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("閿欒锛氭渶浣庢俯搴�")  //"Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("閿欒锛氭渶楂樼儹搴婃俯搴�")  //"Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("閿欒锛氭渶浣庣儹搴婃俯搴�")  //"Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("鎵撳嵃鍋滄満")  //"PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("璇烽噸缃�")  //"Please reset"
#define MSG_SHORT_DAY                       _UxGT("澶�")  //"d" // One character only
#define MSG_SHORT_HOUR                      _UxGT("鏃�")  //"h" // One character only
#define MSG_SHORT_MINUTE                    _UxGT("鍒�")  //"m" // One character only
#define MSG_HEATING                         _UxGT("鍔犵儹涓� ...")  //"Heating..."
#define MSG_BED_HEATING                     _UxGT("鍔犵儹鐑簥涓�...")  //"Bed Heating..."
#define MSG_DELTA_CALIBRATE                 _UxGT("鈯挎牎鍑�")  //"Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("鈯挎牎鍑哫")  //"Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("鈯挎牎鍑哬")  //"Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("鈯挎牎鍑哯")  //"Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("鈯挎牎鍑嗕腑蹇�")  //"Calibrate Center"
#define MSG_DELTA_SETTINGS                  _UxGT("鈯胯缃�") // "Delta Settings"
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("鈯胯嚜鍔ㄦ牎鍑�") // "Auto Calibration"
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("璁剧疆鈯块珮搴�") // "Set Delta Height"
#define MSG_DELTA_DIAG_ROD                  _UxGT("鈯挎枩鏌�") // "Diag Rod"
#define MSG_DELTA_HEIGHT                    _UxGT("鈯块珮搴�") // "Height"
#define MSG_DELTA_RADIUS                    _UxGT("鈯垮崐寰�") // "Radius"
#define MSG_INFO_MENU                       _UxGT("鍏充簬鎵撳嵃鏈�")  //"About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("鎵撳嵃鏈轰俊鎭�")  //"Printer Info"
#define MSG_3POINT_LEVELING                 _UxGT("涓夌偣璋冨钩") // "3-Point Leveling"
#define MSG_LINEAR_LEVELING                 _UxGT("绾挎�ц皟骞�") // "Linear Leveling"
#define MSG_BILINEAR_LEVELING               _UxGT("鍙岀嚎鎬ц皟骞�") // "Bilinear Leveling"
#define MSG_UBL_LEVELING                    _UxGT("缁熶竴鐑簥璋冨钩(UBL)") // "Unified Bed Leveling"
#define MSG_MESH_LEVELING                   _UxGT("缃戞牸璋冨钩") // "Mesh Leveling"
#define MSG_INFO_STATS_MENU                 _UxGT("鎵撳嵃鏈虹粺璁�")  //"Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("涓绘澘淇℃伅")  //"Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("娓╁害璁�")  //"Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("鎸ゅ嚭鏈�")  //"Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("娉㈢壒鐜�")  //"Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("鍗忚")  //"Protocol"
#define MSG_CASE_LIGHT                      _UxGT("澶栧３鐏�") // "Case light"
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("鐏寒搴�") // "Light BRIGHTNESS"

#if LCD_WIDTH > 19
#define MSG_INFO_PRINT_COUNT              _UxGT("鎵撳嵃璁℃暟")  //"Print Count"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("瀹屾垚浜�")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("鎬绘墦鍗版椂闂�")  //"Total print time"
#define MSG_INFO_PRINT_LONGEST            _UxGT("鏈�闀垮伐浣滄椂闂�")  //"Longest job time"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("鎬昏鎸ゅ嚭")  //"Extruded total"
#else
#define MSG_INFO_PRINT_COUNT              _UxGT("鎵撳嵃鏁�")  //"Prints"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("瀹屾垚")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("鎬诲叡")  //"Total"
#define MSG_INFO_PRINT_LONGEST            _UxGT("鏈�闀�")  //"Longest"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("宸叉尋鍑�")  //"Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("鏈�浣庢俯搴�")  //"Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("鏈�楂樻俯搴�")  //"Max Temp"
#define MSG_INFO_PSU                        _UxGT("鐢垫簮渚涘簲")  //"Power Supply"
#define MSG_DRIVE_STRENGTH                  _UxGT("椹卞姩鍔涘害") // "Drive Strength"
#define MSG_DAC_PERCENT                     _UxGT("椹卞姩 %") // "Driver %"
#define MSG_DAC_EEPROM_WRITE                _UxGT("淇濆瓨椹卞姩璁剧疆") // "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("鎵撳嵃宸叉殏鍋�") // "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("瑁呰浇涓濇枡") // "LOAD FILAMENT"
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("鍗歌浇涓濇枡") // "UNLOAD FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("鎭㈠閫夐」:") // "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("娓呴櫎鏇村") // "Purge more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("鎭㈠鎵撳嵃")  //"Resume print"
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  鍠峰槾: ") // "  Nozzle: "
#define MSG_ERR_HOMING_FAILED               _UxGT("褰掑師浣嶅け璐�") // "Homing failed"
#define MSG_ERR_PROBING_FAILED              _UxGT("鎺㈤拡鎺㈡祴澶辫触") // "Probing failed"
#define MSG_M600_TOO_COLD                   _UxGT("M600: 澶噳") // "M600: Too cold"

#if LCD_HEIGHT >= 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("绛夊緟寮�濮�")  //"Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("涓濇枡")  //"of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("鍙樻洿")  //"change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("绛夊緟")  //"Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("鍗镐笅涓濇枡")  //"filament unload"
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("鎻掑叆涓濇枡")  //"Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("骞舵寜閿�")  //"and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("鏉ョ户缁� ...")  //"to continue..."
#define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("鎸変笅鎸夐挳鏉�") // "Press button to"
#define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("鍔犵儹鍠峰槾.") // "heat nozzle."
#define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("鍔犵儹鍠峰槾") // "Heating nozzle"
#define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("璇风瓑寰� ...") // "Please wait..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("绛夊緟")  //"Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("杩涙枡")  //"filament load"
#define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("绛夊緟") // "Wait for"
#define MSG_FILAMENT_CHANGE_PURGE_2         _UxGT("涓濇枡娓呴櫎") // "filament purge"
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("绛夊緟鎵撳嵃")  //"Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("鎭㈠")  //"to resume"

#else // LCD_HEIGHT < 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("璇风瓑寰� ...")  //"Please wait..."
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("閫�鍑轰腑 ...")  //"Ejecting..."
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("鎻掑叆骞跺崟鍑�")  //"Insert and Click"
#define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("鍔犵儹涓� ...") // "Heating..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("瑁呰浇涓� ...")  //"Loading..."
#define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("娓呴櫎涓� ...") // "Purging..."
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("鎭㈠涓� ...")  //"Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_ZH_CN_H

